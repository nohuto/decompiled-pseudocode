/*
 * XREFs of NtLoadEnclaveData @ 0x140660068
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
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
  __int64 v14; // rcx
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v20[0] = 0LL;
  LODWORD(v18) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = (__int64)EnclaveError;
    if ( EnclaveError )
    {
      if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    v15 = (__int64)NumberOfBytesWritten;
    if ( NumberOfBytesWritten )
    {
      if ( (unsigned __int64)NumberOfBytesWritten >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
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
