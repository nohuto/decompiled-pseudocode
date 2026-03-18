/*
 * XREFs of DxgkDdiGetDeviceLocation @ 0x1C015A7F0
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C002ED70 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C01581B4 (-DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z.c)
 */

char __fastcall DxgkDdiGetDeviceLocation(__int64 a1, unsigned __int16 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  ADAPTER_RENDER *v5; // rcx
  char result; // al
  _DXGKARG_GETDEVICELOCATION v9; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  v9.SegmentNumber = 0;
  *(_QWORD *)&v9.BusNumber = 0LL;
  v9.VirtualFunctionIndex = a2;
  ADAPTER_RENDER::DdiGetDeviceLocation(v5, &v9);
  *a3 = v9.SegmentNumber;
  *a4 = v9.BusNumber;
  result = v9.FunctionNumber;
  *a5 = v9.FunctionNumber;
  return result;
}
