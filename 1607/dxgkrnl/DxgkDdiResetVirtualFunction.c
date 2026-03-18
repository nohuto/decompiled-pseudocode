/*
 * XREFs of DxgkDdiResetVirtualFunction @ 0x1C015AA20
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C002F090 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     ?DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0159654 (-DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 */

__int64 __fastcall DxgkDdiResetVirtualFunction(__int64 a1, unsigned __int16 a2)
{
  ADAPTER_RENDER *v2; // rcx
  _DXGKARG_RESETVIRTUALFUNCTION v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(ADAPTER_RENDER **)(a1 + 2136);
  v4.VirtualFunctionIndex = a2;
  return ADAPTER_RENDER::DdiResetVirtualFunction(v2, &v4);
}
