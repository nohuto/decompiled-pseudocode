/*
 * XREFs of ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180011070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::Release(__int64 a1)
{
  return MobileCursor::Release((MobileCursor *)(a1 - 8));
}
