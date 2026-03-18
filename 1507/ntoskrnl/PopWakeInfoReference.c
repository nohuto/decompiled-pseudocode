/*
 * XREFs of PopWakeInfoReference @ 0x140131CFC
 * Callers:
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
