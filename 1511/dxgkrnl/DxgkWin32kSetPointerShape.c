/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C014AE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2129);
  if ( a3 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
    if ( v10 )
    {
      v12 = DxgkSetPointerShape(v10, a2, a3, a3->Width, a3->Height, a4);
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
