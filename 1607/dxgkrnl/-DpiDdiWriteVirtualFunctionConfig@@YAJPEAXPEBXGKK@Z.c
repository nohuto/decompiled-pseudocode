/*
 * XREFs of ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C002F170
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C015AAA4 (DxgkDdiWriteVirtualFunctionConfig.c)
 */

__int64 __fastcall DpiDdiWriteVirtualFunctionConfig(
        _QWORD *a1,
        const void *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  int v5; // ebp
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v5 = (int)a2;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v8 = DxgkDdiWriteVirtualFunctionConfig(*(_QWORD *)(v11 + 3688), v5, a3, a4, a5);
    v12 = v8;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return v8;
}
