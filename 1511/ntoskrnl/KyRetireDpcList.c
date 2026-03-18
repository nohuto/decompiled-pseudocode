/*
 * XREFs of KyRetireDpcList @ 0x14015ABB0
 * Callers:
 *     KiDispatchInterrupt @ 0x14015A980 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14015A9C0LL);
}
