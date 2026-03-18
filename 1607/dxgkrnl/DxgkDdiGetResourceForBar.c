/*
 * XREFs of DxgkDdiGetResourceForBar @ 0x1C015A864
 * Callers:
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C002EDE0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x1C015858C (-DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetResourceForBar(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  ADAPTER_RENDER *v4; // rcx
  _DXGKARG_GETRESOURCEFORBAR v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(ADAPTER_RENDER **)(a1 + 2136);
  v6.VirtualFunctionIndex = a2;
  v6.BarIndex = a3;
  v6.pResource = a4;
  return ADAPTER_RENDER::DdiGetResourceForBar(v4, &v6);
}
