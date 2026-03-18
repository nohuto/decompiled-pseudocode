/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x140031978
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe(a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(unsigned __int8 *)(a1 + 1) >> 5) & 1;
}
