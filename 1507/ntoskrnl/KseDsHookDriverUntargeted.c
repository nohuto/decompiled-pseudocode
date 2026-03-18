/*
 * XREFs of KseDsHookDriverUntargeted @ 0x14020CA70
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x14020D1CC (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
