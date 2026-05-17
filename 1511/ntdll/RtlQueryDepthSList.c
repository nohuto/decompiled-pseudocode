/*
 * XREFs of RtlQueryDepthSList @ 0x18004EB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Alignment;
}
