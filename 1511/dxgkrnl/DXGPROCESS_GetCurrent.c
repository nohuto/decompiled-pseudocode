/*
 * XREFs of DXGPROCESS_GetCurrent @ 0x1C0002420
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
