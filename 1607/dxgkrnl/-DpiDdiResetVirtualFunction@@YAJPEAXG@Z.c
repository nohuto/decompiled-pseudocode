/*
 * XREFs of ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C002F090
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C015AA20 (DxgkDdiResetVirtualFunction.c)
 */

__int64 __fastcall DpiDdiResetVirtualFunction(_QWORD *a1, unsigned __int16 a2)
{
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, a1);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v3 = DxgkDdiResetVirtualFunction(*(_QWORD *)(v6 + 3688), a2);
    v7 = v3;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return v3;
}
