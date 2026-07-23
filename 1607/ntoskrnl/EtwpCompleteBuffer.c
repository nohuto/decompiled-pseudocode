/*
 * XREFs of EtwpCompleteBuffer @ 0x14052870C
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
