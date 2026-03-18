/*
 * XREFs of KseSkipDriverUnloadHookDriverUntargeted @ 0x14020D970
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14020DA6C (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverUntargeted(__int64 a1)
{
  KsepSkipDriverUnloadEventDriverUnload(0LL, a1);
  return 0LL;
}
