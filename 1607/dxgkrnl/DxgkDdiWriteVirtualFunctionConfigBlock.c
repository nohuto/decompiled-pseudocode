/*
 * XREFs of DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C015AAE4
 * Callers:
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C002F1F0 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C015A190 (-DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualFunctionConfigBlock(
        __int64 a1,
        unsigned __int16 a2,
        ULONG a3,
        void *a4,
        ULONG a5)
{
  ADAPTER_RENDER *v5; // rcx
  struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK v7; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v7.Length + 1) = 0;
  v7.Data = a4;
  v7.VirtualFunctionIndex = a2;
  v7.BlockId = a3;
  v7.Length = a5;
  return ADAPTER_RENDER::DdiWriteVirtualFunctionConfigBlock(v5, &v7);
}
