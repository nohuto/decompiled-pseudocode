/*
 * XREFs of ExInterlockedInsertTailList @ 0x14008C0E0
 * Callers:
 *     CcCanIWrite @ 0x1400209F0 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14012F930 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401B1A08 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1402312A0 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x14057F6F0 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  PLIST_ENTRY result; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int16 v8; // [rsp+30h] [rbp-8h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v9);
    while ( *Lock );
    _disable();
  }
  result = ListHead->Blink;
  Flink = ListHead->Flink;
  if ( result->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = result;
  result->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v8 & 0x200) != 0 )
    _enable();
  if ( Flink == result )
    return 0LL;
  return result;
}
