/*
 * XREFs of SharedFree @ 0x1C00A4930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(void *a1)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, a1);
}
