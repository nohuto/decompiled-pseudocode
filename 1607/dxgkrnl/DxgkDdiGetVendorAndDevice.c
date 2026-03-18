/*
 * XREFs of DxgkDdiGetVendorAndDevice @ 0x1C015A89C
 * Callers:
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C002EE60 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 * Callees:
 *     ?DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C015873C (-DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetVendorAndDevice(__int64 a1, unsigned __int16 a2, USHORT *a3, USHORT *a4)
{
  ADAPTER_RENDER *v4; // rcx
  __int64 result; // rax
  _DXGKARG_GETVENDORANDDEVICE v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(_DWORD *)&v8.VendorId = 0;
  v8.VirtualFunctionIndex = a2;
  ADAPTER_RENDER::DdiGetVendorAndDevice(v4, &v8);
  *a3 = v8.VendorId;
  result = v8.DeviceId;
  *a4 = v8.DeviceId;
  return result;
}
