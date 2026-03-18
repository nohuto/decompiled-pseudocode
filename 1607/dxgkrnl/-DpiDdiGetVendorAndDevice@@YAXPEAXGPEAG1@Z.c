/*
 * XREFs of ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C002EE60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C015A89C (DxgkDdiGetVendorAndDevice.c)
 */

void __fastcall DpiDdiGetVendorAndDevice(_QWORD *a1, unsigned __int16 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1);
  if ( v9 >= 0 )
    DxgkDdiGetVendorAndDevice(*(_QWORD *)(v8 + 3688), a2, a3, a4);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
}
