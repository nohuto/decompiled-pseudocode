/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x180086640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler(Handle, 0LL);
}
