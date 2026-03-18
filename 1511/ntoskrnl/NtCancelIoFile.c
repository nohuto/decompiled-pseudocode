/*
 * XREFs of NtCancelIoFile @ 0x140490800
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400CC5B4 (IopCancelIrpsInFileObjectList.c)
 */

NTSTATUS __stdcall NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  _DWORD *v7; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // r15
  void **p_FirstArgument; // rdi
  void **i; // rbx
  char v13; // bl
  unsigned __int8 v14; // dl
  void **j; // rcx
  PVOID v16; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
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
      while ( 1 )
      {
        v13 = 0;
        v14 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = (void **)*p_FirstArgument; p_FirstArgument != j; j = (void **)*j )
        {
          if ( j[20] == Object )
          {
            v13 = 1;
            break;
          }
        }
        __writecr8(v14);
        if ( !v13 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
      }
    }
    v16 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v16);
    return 0;
  }
  return result;
}
