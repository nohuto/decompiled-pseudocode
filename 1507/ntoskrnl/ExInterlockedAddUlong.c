/*
 * XREFs of ExInterlockedAddUlong @ 0x14012F200
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  unsigned int v6; // edi
  ULONG result; // eax
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
  result = *Addend;
  *Addend += Increment;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v8 & 0x200) != 0 )
    _enable();
  return result;
}
