/*
 * XREFs of KyRetireDpcList @ 0x140165FE0
 * Callers:
 *     KiDispatchInterrupt @ 0x140165DB0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140058280 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140165DF0LL);
}
