/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x14007B0F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     IoChangeFileObjectFilterContext @ 0x14007B53C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x14007B5DC (IoGetFileObjectFilterContext.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  signed __int64 v2; // rbx
  NTSTATUS result; // eax
  signed __int64 *v6; // rdi
  signed __int64 *PoolWithTag; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  ULONG_PTR v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
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
    LOBYTE(v8) = 1;
    v9 = PoolWithTag + 1;
    v9[1] = v9;
    *v9 = v9;
    if ( (int)IoChangeFileObjectFilterContext(FileObject, v6, v8) >= 0
      || (ExFreePoolWithTag(v6, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          (v6 = (signed __int64 *)BugCheckParameter2) != 0LL) )
    {
LABEL_6:
      FsRtlAcquirePushLockExclusive(v6);
      v10 = (struct _LIST_ENTRY *)(v6 + 1);
      v11 = (struct _LIST_ENTRY *)v6[1];
      if ( (signed __int64 *)v11->Blink != v6 + 1 )
        __fastfail(3u);
      Ptr->Links.Flink = v11;
      Ptr->Links.Blink = v10;
      v11->Blink = &Ptr->Links;
      v10->Flink = &Ptr->Links;
      _m_prefetchw(v6);
      v12 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v2 = v12 - 16;
      if ( (v12 & 2) != 0
        || (v13 = *v6, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v2, v12)) )
      {
        v14 = BugCheckParameter2;
        ExfReleasePushLock(BugCheckParameter2);
      }
      else
      {
        v14 = BugCheckParameter2;
      }
      KeAbPostRelease(v14);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
