/*
 * XREFs of ExQueryDepthSList @ 0x1400D2790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall ExQueryDepthSList(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
