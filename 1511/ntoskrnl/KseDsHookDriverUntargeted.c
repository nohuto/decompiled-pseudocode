/*
 * XREFs of KseDsHookDriverUntargeted @ 0x1401CD70C
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1401CDE68 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
