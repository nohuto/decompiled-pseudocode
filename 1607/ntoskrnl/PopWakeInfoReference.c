/*
 * XREFs of PopWakeInfoReference @ 0x1400B3DF8
 * Callers:
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
