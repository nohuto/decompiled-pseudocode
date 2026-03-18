/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX_K@Z @ 0x1C00DBBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DxgkCddAdapterDereference(DXGADAPTER *this)
{
  DXGADAPTER::ReleaseReference(this);
}
