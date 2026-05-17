/*
 * XREFs of RtlQueryDepthSList @ 0x180065090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Alignment;
}
