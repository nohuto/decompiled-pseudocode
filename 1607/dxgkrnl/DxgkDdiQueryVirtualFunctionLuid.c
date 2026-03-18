/*
 * XREFs of DxgkDdiQueryVirtualFunctionLuid @ 0x1C015A974
 * Callers:
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C002F2D0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 * Callees:
 *     ?DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C015917C (-DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z.c)
 */

void __fastcall DxgkDdiQueryVirtualFunctionLuid(__int64 a1, ULONG a2, struct _LUID *a3)
{
  ADAPTER_RENDER *v3; // rcx
  _DXGKARG_QUERYVIRTUALFUNCTIONLUID v4; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v4.VirtualFunctionIndex + 1) = 0;
  v4.VirtualFunctionIndex = a2;
  v4.pLuid = a3;
  ADAPTER_RENDER::DdiQueryVirtualFunctionLuid(v3, &v4);
}
