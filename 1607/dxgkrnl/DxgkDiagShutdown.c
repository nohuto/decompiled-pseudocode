/*
 * XREFs of DxgkDiagShutdown @ 0x1C0023370
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkDiagShutdown()
{
  return WdDiagShutdown();
}
