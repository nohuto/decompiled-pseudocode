/*
 * XREFs of NtCancelSynchronousIoFile @ 0x1405FA8B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopCancelSynchronousIrpsForThread @ 0x1405F72E4 (IopCancelSynchronousIrpsForThread.c)
 */

NTSTATUS __cdecl NtCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v6; // rdx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rsi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v11; // [rsp+68h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  result = ObReferenceObjectByHandle(ThreadHandle, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2E64u);
    v9 = Object;
    v11 = (unsigned int)IopCancelSynchronousIrpsForThread((__int64)Object, (__int64)IoRequestToCancel) == 0
        ? 0xC0000225
        : 0;
    IoStatusBlock->Status = v11;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v9);
    return v11;
  }
  return result;
}
