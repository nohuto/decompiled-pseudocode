/*
 * XREFs of NtCancelIoFile @ 0x1404CC5BC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B630 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400A1CF8 (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x1400A2054 (IoCancelIrp.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 */

NTSTATUS __stdcall NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v7; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // r15
  void **p_FirstArgument; // rdi
  void **i; // rbx
  PVOID v13; // rbx
  char v14; // bl
  unsigned __int8 v15; // dl
  void **j; // rcx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++v9->OtherOperationCount;
    __incgsdword(0x2E64u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    p_FirstArgument = &CurrentThread[1].FirstArgument;
    for ( i = (void **)*p_FirstArgument; p_FirstArgument != i; i = (void **)*i )
    {
      if ( i[20] == Object )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(i - 4));
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v14 = 0;
        v15 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = (void **)*p_FirstArgument; p_FirstArgument != j; j = (void **)*j )
        {
          if ( j[20] == Object )
          {
            v14 = 1;
            break;
          }
        }
        __writecr8(v15);
        if ( v14 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    v13 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v13);
    return 0;
  }
  return result;
}
