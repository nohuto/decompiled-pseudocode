/*
 * XREFs of KyRetireDpcList @ 0x140166550
 * Callers:
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140166360LL);
}
