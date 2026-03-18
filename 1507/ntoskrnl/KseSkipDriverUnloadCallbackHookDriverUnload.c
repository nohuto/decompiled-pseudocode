/*
 * XREFs of KseSkipDriverUnloadCallbackHookDriverUnload @ 0x14020D94C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KseSkipDriverUnloadCallbackHookDriverUnload(__int64 a1)
{
  return KsepSkipDriverUnloadEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
