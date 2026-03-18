/*
 * XREFs of DxgkDiagShutdown @ 0x1C001E1A0
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkDiagShutdown()
{
  return WdDiagShutdown();
}
