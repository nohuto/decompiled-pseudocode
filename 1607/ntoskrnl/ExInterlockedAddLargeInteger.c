/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14022E790
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1400A7BD4 (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  bool v5; // cl
  LARGE_INTEGER result; // rax

  v5 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  result = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v5 )
    _enable();
  return result;
}
