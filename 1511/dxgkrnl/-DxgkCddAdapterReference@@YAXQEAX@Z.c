/*
 * XREFs of ?DxgkCddAdapterReference@@YAXQEAX@Z @ 0x1C00C6C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DxgkCddAdapterReference(DXGADAPTER *a1)
{
  DXGADAPTER::AcquireReference(a1);
}
