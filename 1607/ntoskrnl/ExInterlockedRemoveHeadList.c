/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140088980
 * Callers:
 *     WheapWorkQueueWorkerRoutine @ 0x140231134 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x1405372F8 (WmipEventNotification.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // rax
  __int16 v7; // [rsp+30h] [rbp-8h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  Flink = 0LL;
  v8 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v7 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v8);
    while ( *Lock );
    _disable();
  }
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v6 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v6->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v6;
    v6->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v7 & 0x200) != 0 )
    _enable();
  return Flink;
}
