/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x1400D6BB0
 * Callers:
 *     WheapWorkQueueWorkerRoutine @ 0x1402178C4 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x14049CDF8 (WmipEventNotification.c)
 *     VerifierExInterlockedRemoveHeadList @ 0x1406C03C0 (VerifierExInterlockedRemoveHeadList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int64 v2; // r8
  _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v7; // rax
  __int16 v8; // [rsp+30h] [rbp-8h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  Flink = 0LL;
  v9 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v9, (__int64)Lock, v2);
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
