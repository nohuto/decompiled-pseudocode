/*
 * XREFs of KseSkipDriverUnloadHookDriverUntargeted @ 0x1401CE60C
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1401CE708 (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverUntargeted(__int64 a1)
{
  KsepSkipDriverUnloadEventDriverUnload(0LL, a1);
  return 0LL;
}
