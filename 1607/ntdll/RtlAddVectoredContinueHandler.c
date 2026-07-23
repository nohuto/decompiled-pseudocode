/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x180090C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return RtlpAddVectoredHandler(First, Handler, 1u);
}
