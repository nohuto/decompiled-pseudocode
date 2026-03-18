/*
 * XREFs of DxgkDdiSetVirtualFunctionPowerState @ 0x1C015AA44
 * Callers:
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C002F0F0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C0159A90 (-DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@.c)
 */

__int64 __fastcall DxgkDdiSetVirtualFunctionPowerState(
        __int64 a1,
        unsigned __int16 a2,
        DEVICE_POWER_STATE a3,
        unsigned __int8 a4)
{
  ADAPTER_RENDER *v4; // rcx
  struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE v6; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(ADAPTER_RENDER **)(a1 + 2136);
  v6.VirtualFunctionIndex = a2;
  v6.PowerState = a3;
  *(_DWORD *)&v6.Wake = a4;
  return ADAPTER_RENDER::DdiSetVirtualFunctionPowerState(v4, &v6);
}
