/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14012F2BC
 * Callers:
 *     VerifierExInterlockedAddLargeInteger @ 0x140741B84 (VerifierExInterlockedAddLargeInteger.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  unsigned int v5; // edi
  LARGE_INTEGER result; // rax
  __int16 v7; // [rsp+30h] [rbp-8h]

  v5 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v7 & 0x200) != 0 )
      _enable();
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *Lock );
    _disable();
  }
  result = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v7 & 0x200) != 0 )
    _enable();
  return result;
}
