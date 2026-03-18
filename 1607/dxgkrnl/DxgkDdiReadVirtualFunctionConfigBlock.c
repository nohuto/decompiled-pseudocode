/*
 * XREFs of DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C015A9E0
 * Callers:
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C002F010 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C01594A4 (-DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBL.c)
 */

__int64 __fastcall DxgkDdiReadVirtualFunctionConfigBlock(__int64 a1, unsigned __int16 a2, ULONG a3, void *a4, ULONG a5)
{
  ADAPTER_RENDER *v5; // rcx
  struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK v7; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v7.Length + 1) = 0;
  v7.Data = a4;
  v7.VirtualFunctionIndex = a2;
  v7.BlockId = a3;
  v7.Length = a5;
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfigBlock(v5, &v7);
}
