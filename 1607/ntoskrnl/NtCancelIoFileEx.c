/*
 * XREFs of NtCancelIoFileEx @ 0x1404B2164
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400A0620 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404F68BC (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

NTSTATUS __cdecl NtCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int v10; // eax
  int v11; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2E64u);
    v9 = Object;
    v10 = IopCancelIrpsInFileObjectList(
            (__int64)Object,
            (int)KeGetCurrentThread()->ApcState.Process,
            (int)IoRequestToCancel,
            0,
            0,
            0);
    v11 = v10;
    if ( !IoRequestToCancel || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess(v9, IoRequestToCancel) | v10;
    IoStatusBlock->Status = v11 == 0 ? 0xC0000225 : 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v9);
    return v11 == 0 ? 0xC0000225 : 0;
  }
  return result;
}
