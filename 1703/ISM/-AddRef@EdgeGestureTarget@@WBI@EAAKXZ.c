/*
 * XREFs of ?AddRef@EdgeGestureTarget@@WBI@EAAKXZ @ 0x180007330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::AddRef(__int64 a1)
{
  return MagnifierTarget::AddRef((MagnifierTarget *)(a1 - 24));
}
