/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x1400D79D8
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 *     IoGetFileObjectFilterContext @ 0x1400D7C40 (IoGetFileObjectFilterContext.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 v3; // rbx
  signed __int64 *v6; // rsi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v7; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  ULONG_PTR v13; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v15; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !FileObject )
    return 0LL;
  IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL);
  v6 = (signed __int64 *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    return 0LL;
  v7 = 0LL;
  FsRtlAcquirePushLockExclusive(BugCheckParameter2);
  if ( InstanceId )
  {
    for ( i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v6[1];
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 1);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_8:
        v7 = i;
        goto LABEL_9;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v6[1];
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 1);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_8;
    }
  }
  else
  {
    v15 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 1);
    if ( *v15 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v15 )
    {
      v7 = *v15;
LABEL_9:
      if ( v7 )
      {
        Flink = v7->Links.Flink;
        Blink = v7->Links.Blink;
        if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v7->Links.Flink->Blink != v7
          || (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v7 )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
    }
  }
  _m_prefetchw(v6);
  v11 = *v6;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v11 - 16;
  if ( (v11 & 2) != 0
    || (v12 = *v6, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v3, v11)) )
  {
    v13 = BugCheckParameter2;
    ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  else
  {
    v13 = BugCheckParameter2;
  }
  KeAbPostRelease(v13);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
