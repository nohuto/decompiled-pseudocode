/*
 * XREFs of ?DxgkCddGetCurrentDxgProcess@@YAPEAXXZ @ 0x1C00C6C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DXGPROCESS *DxgkCddGetCurrentDxgProcess(void)
{
  return DXGPROCESS::GetCurrent();
}
