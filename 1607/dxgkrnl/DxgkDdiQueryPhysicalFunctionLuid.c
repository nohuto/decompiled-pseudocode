/*
 * XREFs of DxgkDdiQueryPhysicalFunctionLuid @ 0x1C015A8E8
 * Callers:
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C002EEC0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkDdiQueryPhysicalFunctionLuid(__int64 a1, struct _LUID *a2)
{
  RtlCopyLuid(a2, (PLUID)(a1 + 268));
}
