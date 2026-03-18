/*
 * XREFs of ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C002F270
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C015A92C (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiQueryVirtualFunctionIndexByLuid(_QWORD *a1, struct _LUID a2, unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]
  struct _LUID v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v6, a1);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v4 = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD *)(v7 + 3688), &v9, a3);
    v8 = v4;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v6);
  return v4;
}
