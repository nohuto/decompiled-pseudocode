/*
 * XREFs of ExInterlockedInsertHeadList @ 0x14012292C
 * Callers:
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401DCF50 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14073E9E0 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14073F15C (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14073F1E0 (ViSpecialAllocateCommonBuffer.c)
 *     VerifierExInterlockedInsertHeadList @ 0x140741B94 (VerifierExInterlockedInsertHeadList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  unsigned int v4; // edi
  PLIST_ENTRY result; // rax
  _LIST_ENTRY *Blink; // rcx
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
  result = ListHead->Flink;
  Blink = ListHead->Blink;
  ListEntry->Flink = ListHead->Flink;
  ListEntry->Blink = ListHead;
  if ( result->Blink != ListHead )
    __fastfail(3u);
  result->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v9 & 0x200) != 0 )
    _enable();
  if ( result == Blink )
    return 0LL;
  return result;
}
