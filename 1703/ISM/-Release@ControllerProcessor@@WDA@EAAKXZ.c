/*
 * XREFs of ?Release@ControllerProcessor@@WDA@EAAKXZ @ 0x180035C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 48));
}
