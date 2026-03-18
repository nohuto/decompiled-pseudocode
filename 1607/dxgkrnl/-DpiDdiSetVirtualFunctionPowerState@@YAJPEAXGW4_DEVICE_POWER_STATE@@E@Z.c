/*
 * XREFs of ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C002F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C015AA44 (DxgkDdiSetVirtualFunctionPowerState.c)
 */

__int64 __fastcall DpiDdiSetVirtualFunctionPowerState(_QWORD *a1, unsigned __int16 a2, unsigned int a3, char a4)
{
  __int64 v7; // r9
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1);
  v8 = v12;
  if ( v12 >= 0 )
  {
    LOBYTE(v7) = a4;
    v8 = DxgkDdiSetVirtualFunctionPowerState(*(_QWORD *)(v11 + 3688), a2, a3, v7);
    v12 = v8;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return v8;
}
