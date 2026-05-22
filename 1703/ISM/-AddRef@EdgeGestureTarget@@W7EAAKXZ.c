/*
 * XREFs of ?AddRef@EdgeGestureTarget@@W7EAAKXZ @ 0x180007390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::AddRef(__int64 a1)
{
  return MagnifierTarget::AddRef((MagnifierTarget *)(a1 - 8));
}
