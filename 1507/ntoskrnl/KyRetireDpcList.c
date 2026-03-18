/*
 * XREFs of KyRetireDpcList @ 0x14018A620
 * Callers:
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14018A430LL);
}
