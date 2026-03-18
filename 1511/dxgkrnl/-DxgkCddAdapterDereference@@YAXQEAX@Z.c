/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX@Z @ 0x1C00C6C50
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
