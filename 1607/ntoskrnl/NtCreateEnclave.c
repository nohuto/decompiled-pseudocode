/*
 * XREFs of NtCreateEnclave @ 0x14065F9DC
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
 *     MiValidateZeroBits @ 0x140658EB0 (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _OWORD *v11; // rdi
  _OWORD *PoolWithTag; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v14; // rcx
  NTSTATUS Enclave; // ebx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *Process; // rdi
  PVOID v21; // [rsp+50h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-B8h]
  ULONGLONG v24; // [rsp+68h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-A8h]
  PULONG v26; // [rsp+78h] [rbp-A0h]
  _OWORD *v27; // [rsp+88h] [rbp-90h]
  PVOID *v28; // [rsp+90h] [rbp-88h]
  _BYTE v29[48]; // [rsp+A8h] [rbp-70h] BYREF

  v23 = Size;
  Handle = ProcessHandle;
  v28 = BaseAddress;
  v24 = ZeroBits;
  v11 = EnclaveInformation;
  v26 = EnclaveError;
  v21 = 0LL;
  PoolWithTag = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v14 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( EnclaveType == 1 && qword_140326AD8 )
  {
    if ( (int)MiValidateZeroBits(&v24) < 0 )
    {
      Enclave = -1073741583;
      goto LABEL_32;
    }
    if ( !Size )
    {
      Enclave = -1073741582;
      goto LABEL_32;
    }
    if ( InitialCommitment > v23 )
    {
      Enclave = -1073741581;
      goto LABEL_32;
    }
    if ( EnclaveInformationLength != 4096 )
    {
      Enclave = -1073741820;
      goto LABEL_32;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Enclave = -1073741670;
      goto LABEL_32;
    }
    if ( PreviousMode == 1 )
    {
      v16 = (__int64)BaseAddress;
      if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v21 = *BaseAddress;
    v17 = PoolWithTag;
    v18 = 32LL;
    do
    {
      *v17 = *v11;
      v17[1] = v11[1];
      v17[2] = v11[2];
      v17[3] = v11[3];
      v17[4] = v11[4];
      v17[5] = v11[5];
      v17[6] = v11[6];
      v17 += 8;
      *(v17 - 1) = v11[7];
      v11 += 8;
      --v18;
    }
    while ( v18 );
    if ( Handle == (HANDLE)-1LL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      Object = Process;
    }
    else
    {
      Enclave = ObReferenceObjectByHandleWithTag(
                  Handle,
                  8u,
                  (POBJECT_TYPE)PsProcessType,
                  PreviousMode,
                  0x6D566D4Du,
                  &Object,
                  0LL);
      if ( Enclave < 0 )
        goto LABEL_32;
      Process = Object;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v29);
    }
    Enclave = MiCreateEnclave(
                (char)Process,
                (unsigned __int64 *)&v21,
                v24,
                v23,
                InitialCommitment,
                (__int64)PoolWithTag);
    if ( Handle != (HANDLE)-1LL )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
  }
  else
  {
    Enclave = -1073741637;
  }
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( Enclave >= 0 )
    *BaseAddress = v21;
  if ( EnclaveError )
    *EnclaveError = 0;
  return Enclave;
}
