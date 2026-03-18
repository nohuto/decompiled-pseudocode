/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1401ADC24
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 v3; // rbx
  unsigned __int64 *v6; // rax
  signed __int64 *v7; // r14
  struct _FSRTL_PER_FILE_CONTEXT **v9; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rsi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = 0LL;
  v6 = (unsigned __int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v7 = (signed __int64 *)v6;
  if ( !v6 )
    return 0LL;
  v9 = (struct _FSRTL_PER_FILE_CONTEXT **)(v6 + 1);
  if ( *v9 == (struct _FSRTL_PER_FILE_CONTEXT *)v9 )
    return 0LL;
  FsRtlAcquirePushLockExclusive(v6);
  v10 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v9; i != (struct _FSRTL_PER_FILE_CONTEXT *)v9; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_22;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v9; i != (struct _FSRTL_PER_FILE_CONTEXT *)v9; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_22:
        v10 = i;
        goto LABEL_25;
      }
    }
  }
  else if ( *v9 != (struct _FSRTL_PER_FILE_CONTEXT *)v9 )
  {
    v10 = *v9;
LABEL_25:
    if ( v10 )
    {
      Flink = v10->Links.Flink;
      Blink = v10->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v10->Links.Flink->Blink != v10
        || (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v10 )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  _m_prefetchw(v7);
  v12 = *v7;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v12 - 16;
  if ( (v12 & 2) != 0 || (v13 = *v7, v13 != _InterlockedCompareExchange64(v7, v3, v12)) )
    ExfReleasePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
