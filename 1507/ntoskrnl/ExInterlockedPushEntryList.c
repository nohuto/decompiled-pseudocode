/*
 * XREFs of ExInterlockedPushEntryList @ 0x14015C920
 * Callers:
 *     VerifierExInterlockedPushEntryList @ 0x140741BAC (VerifierExInterlockedPushEntryList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  unsigned int v6; // edi
  PSINGLE_LIST_ENTRY result; // rax
  __int16 v8; // [rsp+30h] [rbp-8h]

  v6 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
      _enable();
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *Lock );
    _disable();
  }
  result = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v8 & 0x200) != 0 )
    _enable();
  return result;
}
