/*
 * XREFs of ExInterlockedInsertTailList @ 0x14008B840
 * Callers:
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14012FEA0 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401B18EC (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1402310CC (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x14057FB9C (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  PLIST_ENTRY result; // rax
  _LIST_ENTRY *Flink; // rcx
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
