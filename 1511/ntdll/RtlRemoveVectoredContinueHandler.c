/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800CDE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredContinueHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((_RTL_SRWLOCK *)Handle, 1u);
}
