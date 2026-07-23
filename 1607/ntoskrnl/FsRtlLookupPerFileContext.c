/*
 * XREFs of FsRtlLookupPerFileContext @ 0x1401BA0D8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     FsRtlAcquirePushLockShared @ 0x1401B9EC8 (FsRtlAcquirePushLockShared.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 *v3; // rsi
  signed __int64 v4; // rbx
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *v8; // rbp
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v3 = (signed __int64 *)*PerFileContextPointer;
  v4 = 0LL;
  if ( !*PerFileContextPointer )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 1);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  FsRtlAcquirePushLockShared((volatile signed __int64 *)*PerFileContextPointer);
  v8 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_16;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_16:
        v8 = i;
        break;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v8 = *v7;
  }
  _m_prefetchw(v3);
  v10 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v10 - 16;
  if ( (v10 & 2) != 0 || (v11 = *v3, v11 != _InterlockedCompareExchange64(v3, v4, v10)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v8;
}
