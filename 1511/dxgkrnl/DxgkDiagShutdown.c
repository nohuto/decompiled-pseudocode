/*
 * XREFs of DxgkDiagShutdown @ 0x1C001E260
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkDiagShutdown()
{
  return WdDiagShutdown();
}
