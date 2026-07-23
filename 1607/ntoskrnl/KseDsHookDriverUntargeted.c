/*
 * XREFs of KseDsHookDriverUntargeted @ 0x1401DD15C
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1401DD8B8 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
