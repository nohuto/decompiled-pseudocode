/*
 * XREFs of ExInterlockedAddUlong @ 0x1400E220C
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  ULONG v7; // ecx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  v7 = *Addend;
  *Addend += Increment;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
    _enable();
  return v7;
}
