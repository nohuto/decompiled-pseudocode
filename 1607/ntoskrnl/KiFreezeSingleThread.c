/*
 * XREFs of KiFreezeSingleThread @ 0x1400C8FEC
 * Callers:
 *     KeFreezeProcess @ 0x1400C8F3C (KeFreezeProcess.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeFreezeProcessNew @ 0x1401D2130 (KeFreezeProcessNew.c)
 * Callees:
 *     KiSuspendThread @ 0x1400C99D4 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  __int64 result; // rax

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe(a2 + 736);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xDu);
  result = KiSuspendThread(a2, a1);
  if ( !(_BYTE)result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
