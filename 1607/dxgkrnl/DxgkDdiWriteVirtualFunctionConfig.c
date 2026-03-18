/*
 * XREFs of DxgkDdiWriteVirtualFunctionConfig @ 0x1C015AAA4
 * Callers:
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C002F170 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 * Callees:
 *     ?DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0159FE0 (-DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualFunctionConfig(__int64 a1, void *a2, unsigned __int16 a3, ULONG a4, ULONG a5)
{
  ADAPTER_RENDER *v5; // rcx
  struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG v7; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v7.Length + 1) = 0;
  v7.Data = a2;
  v7.VirtualFunctionIndex = a3;
  v7.Offset = a4;
  v7.Length = a5;
  return ADAPTER_RENDER::DdiWriteVirtualFunctionConfig(v5, &v7);
}
