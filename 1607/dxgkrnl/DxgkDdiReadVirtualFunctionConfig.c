/*
 * XREFs of DxgkDdiReadVirtualFunctionConfig @ 0x1C015A9A0
 * Callers:
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C002EF90 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 * Callees:
 *     ?DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C01592F4 (-DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall DxgkDdiReadVirtualFunctionConfig(__int64 a1, void *a2, unsigned __int16 a3, ULONG a4, ULONG a5)
{
  ADAPTER_RENDER *v5; // rcx
  struct _DXGKARG_READVIRTUALFUNCTIONCONFIG v7; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v7.Length + 1) = 0;
  v7.Data = a2;
  v7.VirtualFunctionIndex = a3;
  v7.Offset = a4;
  v7.Length = a5;
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfig(v5, &v7);
}
