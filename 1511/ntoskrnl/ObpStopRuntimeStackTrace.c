/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x14063076C
 * Callers:
 *     ObSetRefTraceInformation @ 0x14062F5B8 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpDestroyStackAndObjectTables @ 0x14062F7DC (ObpDestroyStackAndObjectTables.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rdi
  int v5; // edi
  unsigned int v6; // edi
  _QWORD **v7; // rbp
  _WORD *v8; // rdi
  PSLIST_ENTRY v9; // rax
  _QWORD *p_Next; // r14

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v2, (ULONG_PTR)&ObpStackTraceLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
      v5 = ObpTraceFlags;
    }
    ObpRuntimeTraceFlags = 0;
    v6 = ObpRegTraceFlags | v5 & 0xFFFFFF8C;
    ObpTraceFlags = v6;
    if ( (v6 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v6 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v6 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v7 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v6 & 0xFFFFFF8C;
      v8 = ObpStackTable;
      v9 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v9->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ObpDestroyStackAndObjectTables(v8, v7, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
