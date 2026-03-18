/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x1400D7AD8
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     IoChangeFileObjectFilterContext @ 0x14007BE18 (IoChangeFileObjectFilterContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 *     IoGetFileObjectFilterContext @ 0x1400D7C40 (IoGetFileObjectFilterContext.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  signed __int64 v2; // rbx
  NTSTATUS result; // eax
  signed __int64 *v6; // rdi
  signed __int64 *PoolWithTag; // rax
  _QWORD *v8; // rax
  struct _LIST_ENTRY *v9; // rcx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ULONG_PTR v12; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    v6 = (signed __int64 *)BugCheckParameter2;
    if ( BugCheckParameter2 )
      goto LABEL_6;
    PoolWithTag = (signed __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x58434F46u);
    BugCheckParameter2 = (ULONG_PTR)PoolWithTag;
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    v8 = PoolWithTag + 1;
    v8[1] = v8;
    *v8 = v8;
    if ( (int)IoChangeFileObjectFilterContext((__int64)FileObject) >= 0
      || (ExFreePoolWithTag(v6, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          (v6 = (signed __int64 *)BugCheckParameter2) != 0LL) )
    {
LABEL_6:
      FsRtlAcquirePushLockExclusive(v6);
      v9 = (struct _LIST_ENTRY *)v6[1];
      Ptr->Links.Flink = v9;
      Ptr->Links.Blink = (struct _LIST_ENTRY *)(v6 + 1);
      if ( (signed __int64 *)v9->Blink != v6 + 1 )
        __fastfail(3u);
      v9->Blink = &Ptr->Links;
      v6[1] = (signed __int64)Ptr;
      _m_prefetchw(v6);
      v10 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v2 = v10 - 16;
      if ( (v10 & 2) != 0
        || (v11 = *v6, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v2, v10)) )
      {
        v12 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v12 = BugCheckParameter2;
      }
      KeAbPostRelease(v12);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
