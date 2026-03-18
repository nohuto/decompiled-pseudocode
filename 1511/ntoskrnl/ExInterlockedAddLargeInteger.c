/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x1400E2338
 * Callers:
 *     VerifierExInterlockedAddLargeInteger @ 0x1406C0390 (VerifierExInterlockedAddLargeInteger.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400E2444 (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  char v5; // cl
  LARGE_INTEGER result; // rax

  v5 = ExpAcquireSpinLockDisabled(Lock);
  result = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v5 )
    _enable();
  return result;
}
