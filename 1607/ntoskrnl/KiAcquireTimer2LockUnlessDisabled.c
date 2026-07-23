/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1400EA6D4
 * Callers:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe(a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(unsigned __int8 *)(a1 + 1) >> 5) & 1;
}
