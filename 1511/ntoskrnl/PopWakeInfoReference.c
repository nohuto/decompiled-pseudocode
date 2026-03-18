/*
 * XREFs of PopWakeInfoReference @ 0x1400F4714
 * Callers:
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
