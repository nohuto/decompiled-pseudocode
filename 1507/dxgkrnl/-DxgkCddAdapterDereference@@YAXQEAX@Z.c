/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX@Z @ 0x1C00B1890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DxgkCddAdapterDereference(DXGADAPTER *a1)
{
  DXGADAPTER::ReleaseReference(a1);
}
