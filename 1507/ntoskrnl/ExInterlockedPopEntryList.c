/*
 * XREFs of ExInterlockedPopEntryList @ 0x14015C8B4
 * Callers:
 *     VerifierExInterlockedPopEntryList @ 0x140741BA4 (VerifierExInterlockedPopEntryList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  unsigned int v4; // esi
  PSINGLE_LIST_ENTRY result; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v4 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v6 & 0x200) != 0 )
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
  result = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = result->Next;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v6 & 0x200) != 0 )
    _enable();
  return result;
}
