/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x1C00026D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DXGPROCESS *DXGPROCESS_GetCurrent()
{
  return DXGPROCESS::GetCurrent();
}
