/*
 * XREFs of NtLoadEnclaveData @ 0x14062A804
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v14; // rcx
  _QWORD *v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v20[0] = 0LL;
  LODWORD(v18) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = EnclaveError;
    if ( EnclaveError )
    {
      if ( (unsigned __int64)EnclaveError >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *v14;
    }
    v15 = NumberOfBytesWritten;
    if ( NumberOfBytesWritten )
    {
      if ( (unsigned __int64)NumberOfBytesWritten >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
  }
  if ( !BufferSize )
    goto LABEL_11;
  if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
  {
    v16 = -1073741584;
    goto LABEL_22;
  }
  if ( (BufferSize & 0xFFF) != 0 )
  {
LABEL_11:
    v16 = -1073741582;
    goto LABEL_22;
  }
  if ( PageInformationLength )
  {
    v16 = -1073741820;
    goto LABEL_22;
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    v16 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL);
    if ( v16 < 0 )
      goto LABEL_22;
  }
  v16 = MiCopyPagesIntoEnclave(
          (_KPROCESS *)Object,
          PreviousMode,
          (__int64)BaseAddress,
          Buffer,
          BufferSize,
          Protect,
          v20,
          (__int64)&v18);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
LABEL_22:
  if ( NumberOfBytesWritten )
    *NumberOfBytesWritten = v20[0];
  if ( EnclaveError )
    *EnclaveError = v18;
  return v16;
}
