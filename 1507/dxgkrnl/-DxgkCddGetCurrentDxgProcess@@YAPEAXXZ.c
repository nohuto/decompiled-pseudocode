/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C00B1870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DXGPROCESS *__fastcall DxgkCddGetCurrentDxgProcess(__int64 a1)
{
  return DXGPROCESS::GetCurrent(a1);
}
