/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C014AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  DXGADAPTER *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx

  v3 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2128);
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v9 = v7;
  if ( v7 )
  {
    v13 = DxgkSetPointerPosition(v7, a2, v3);
    DXGADAPTER::ReleaseReference(v9);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = a1->HighPart;
    *(_QWORD *)(v10 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v10);
    v13 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2128);
  return v13;
}
