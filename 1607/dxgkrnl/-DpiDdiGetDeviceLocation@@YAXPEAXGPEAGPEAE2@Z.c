/*
 * XREFs of ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C002ED70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C015A7F0 (DxgkDdiGetDeviceLocation.c)
 */

void __fastcall DpiDdiGetDeviceLocation(
        _QWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  int v6; // ebx
  int v7; // edi
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]

  v6 = (int)a4;
  v7 = (int)a3;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1);
  if ( v10 >= 0 )
    DxgkDdiGetDeviceLocation(*(_QWORD *)(v9 + 3688), a2, v7, v6, (__int64)a5);
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
}
