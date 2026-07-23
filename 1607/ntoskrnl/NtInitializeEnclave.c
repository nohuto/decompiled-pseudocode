/*
 * XREFs of NtInitializeEnclave @ 0x14065FDAC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x14065F64C (MiInitializeEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _OWORD *PoolWithTag; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rsi
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  _OWORD *v17; // [rsp+58h] [rbp-A0h]
  HANDLE v18; // [rsp+68h] [rbp-90h]
  PULONG v19; // [rsp+70h] [rbp-88h]
  _BYTE v20[48]; // [rsp+80h] [rbp-78h] BYREF

  v18 = ProcessHandle;
  v19 = EnclaveError;
  Object = 0LL;
  PoolWithTag = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
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
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v20);
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
    KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
