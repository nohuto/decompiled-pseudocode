/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140074D00
 * Callers:
 *     WheapWorkQueueWorkerRoutine @ 0x140267FD0 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x1404A8814 (WmipEventNotification.c)
 *     VerifierExInterlockedRemoveHeadList @ 0x140741BB4 (VerifierExInterlockedRemoveHeadList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *Flink; // r14
  unsigned int v4; // ebp
  struct _LIST_ENTRY *v7; // rax
  __int16 v8; // [rsp+30h] [rbp-8h]

  Flink = 0LL;
  v4 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
      _enable();
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *Lock );
    _disable();
  }
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v7 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v7->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v7;
    v7->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v8 & 0x200) != 0 )
    _enable();
  return Flink;
}
