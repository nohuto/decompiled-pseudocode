/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C01470A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  int v4; // ebp
  DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx

  v4 = a4;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  if ( a3 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
    if ( v10 )
    {
      v12 = DxgkCddSetPointerShape(v10, a2, a3, a3->Width, a3->Height, v4);
      DXGADAPTER::ReleaseReference(v10);
      goto LABEL_8;
    }
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = a1->HighPart;
    *(_QWORD *)(v11 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v11);
  }
  v12 = -1073741811;
LABEL_8:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, (__int64)a3, 2129);
  return v12;
}
