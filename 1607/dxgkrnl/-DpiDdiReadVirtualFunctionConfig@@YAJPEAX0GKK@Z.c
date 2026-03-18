/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C002EF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1C015A9A0 (DxgkDdiReadVirtualFunctionConfig.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfig(_QWORD *a1, void *a2, unsigned __int16 a3, int a4, unsigned int a5)
{
  int v5; // ebp
  unsigned int VirtualFunctionConfig; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v5 = (int)a2;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1);
  VirtualFunctionConfig = v12;
  if ( v12 >= 0 )
  {
    VirtualFunctionConfig = DxgkDdiReadVirtualFunctionConfig(*(_QWORD *)(v11 + 3688), v5, a3, a4, a5);
    v12 = VirtualFunctionConfig;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  return VirtualFunctionConfig;
}
