/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x140402BCC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x140195CA8 (KiInitializeProcessorGroupSchedulingData.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x14020A2BC (KiAddProcessorToGroupSchedulingList.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
