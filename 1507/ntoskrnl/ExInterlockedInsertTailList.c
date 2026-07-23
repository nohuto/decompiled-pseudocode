/*
 * XREFs of ExInterlockedInsertTailList @ 0x140122800
 * Callers:
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x1401226E4 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401DCF50 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x140267F68 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1405C6818 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VerifierExInterlockedInsertTailList @ 0x140741B9C (VerifierExInterlockedInsertTailList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  unsigned int v4; // edi
  PLIST_ENTRY result; // rax
  _LIST_ENTRY *Flink; // rcx
  __int16 v9; // [rsp+30h] [rbp-8h]

  v4 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v9 & 0x200) != 0 )
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
  result = ListHead->Blink;
  Flink = ListHead->Flink;
  ListEntry->Flink = ListHead;
  ListEntry->Blink = result;
  if ( result->Flink != ListHead )
    __fastfail(3u);
  result->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v9 & 0x200) != 0 )
    _enable();
  if ( Flink == result )
    return 0LL;
  return result;
}
