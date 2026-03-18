/*
 * XREFs of ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C002F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C015AAE4 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 */

__int64 __fastcall DpiDdiWriteVirtualFunctionConfigBlock(
        _QWORD *a1,
        unsigned __int16 a2,
        int a3,
        void *a4,
        unsigned int a5)
{
  int v6; // edi
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v6 = (int)a4;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v8 = DxgkDdiWriteVirtualFunctionConfigBlock(*(_QWORD *)(v11 + 3688), a2, a3, v6, a5);
    v12 = v8;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return v8;
}
