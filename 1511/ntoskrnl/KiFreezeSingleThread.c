/*
 * XREFs of KiFreezeSingleThread @ 0x140096FC0
 * Callers:
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeFreezeProcess @ 0x140096ED4 (KeFreezeProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rsi
  __int64 v6; // r8
  char result; // al

  v3 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xDu);
  result = KiSuspendThread(a2, a1, v6);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return result;
}
