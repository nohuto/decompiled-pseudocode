/*
 * XREFs of RtlPopFrame @ 0x180071180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPopFrame(PTEB_ACTIVE_FRAME Frame)
{
  NtCurrentTeb()->ActiveFrame = Frame->Previous;
}
