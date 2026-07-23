/*
 * XREFs of NtInitializeEnclave @ 0x14062A548
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x140629DFC (MiInitializeEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _OWORD *PoolWithTag; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v10; // rcx
  NTSTATUS v11; // ebx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rsi
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  _OWORD *v17; // [rsp+58h] [rbp-90h]
  PULONG v18; // [rsp+60h] [rbp-88h]
  HANDLE v19; // [rsp+78h] [rbp-70h]
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+80h] [rbp-68h] BYREF

  v19 = ProcessHandle;
  v18 = EnclaveError;
  Object = 0LL;
  PoolWithTag = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = EnclaveError;
    if ( (unsigned __int64)EnclaveError >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  if ( EnclaveInformationLength == 4096 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( PreviousMode == 1 && ((unsigned __int8)EnclaveInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = PoolWithTag;
      v13 = 32LL;
      do
      {
        *v12 = *(_OWORD *)EnclaveInformation;
        v12[1] = *((_OWORD *)EnclaveInformation + 1);
        v12[2] = *((_OWORD *)EnclaveInformation + 2);
        v12[3] = *((_OWORD *)EnclaveInformation + 3);
        v12[4] = *((_OWORD *)EnclaveInformation + 4);
        v12[5] = *((_OWORD *)EnclaveInformation + 5);
        v12[6] = *((_OWORD *)EnclaveInformation + 6);
        v12 += 8;
        *(v12 - 1) = *((_OWORD *)EnclaveInformation + 7);
        EnclaveInformation = (char *)EnclaveInformation + 128;
        --v13;
      }
      while ( v13 );
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        v11 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                8u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x6D566D4Du,
                &Object,
                0LL);
        if ( v11 < 0 )
          goto LABEL_20;
        KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v20);
      }
      v11 = MiInitializeEnclave((__int64)BaseAddress, (int)PoolWithTag);
      goto LABEL_20;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741820;
  }
LABEL_20:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess(&v20, 0LL);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
