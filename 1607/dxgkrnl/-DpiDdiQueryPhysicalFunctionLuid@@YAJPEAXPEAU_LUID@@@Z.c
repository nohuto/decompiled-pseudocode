/*
 * XREFs of ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C002EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C015A8E8 (DxgkDdiQueryPhysicalFunctionLuid.c)
 */

__int64 __fastcall DpiDdiQueryPhysicalFunctionLuid(_QWORD *a1, struct _LUID *a2)
{
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v5, a1);
  v3 = v7;
  if ( v7 >= 0 )
  {
    DxgkDdiQueryPhysicalFunctionLuid(*(_QWORD *)(v6 + 3688), a2);
    v3 = 0;
    v7 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v5);
  return v3;
}
