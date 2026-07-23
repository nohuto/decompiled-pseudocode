/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1401B9F28
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     FsRtlReleasePushLock @ 0x1401BA2C8 (FsRtlReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  _QWORD *v5; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rax
  signed __int64 v8; // rsi
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rcx

  if ( !PerFileContextPointer )
    return -1073741808;
  v5 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x63665346u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    v7 = PoolWithTag + 1;
    v7[1] = v7;
    *v7 = v7;
    v5[3] = 0LL;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, (signed __int64)v5, 0LL);
    if ( v8 )
    {
      ExFreePoolWithTag(v5, 0x63665346u);
      v5 = (_QWORD *)v8;
    }
  }
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)v5);
  v9 = (struct _LIST_ENTRY *)(v5 + 1);
  v10 = (struct _LIST_ENTRY *)v5[1];
  if ( v10->Blink != (struct _LIST_ENTRY *)(v5 + 1) )
    __fastfail(3u);
  Ptr->Links.Flink = v10;
  Ptr->Links.Blink = v9;
  v10->Blink = &Ptr->Links;
  v9->Flink = &Ptr->Links;
  FsRtlReleasePushLock((ULONG_PTR)v5);
  return 0;
}
