/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0168994
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C0169930 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00AD984 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0169024 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct _DPI_INFORMATION *v20[8]; // [rsp+30h] [rbp-58h] BYREF
  Win81 *v21; // [rsp+90h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, this, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v12 = v9;
  if ( v9 >= 0 )
  {
    v21 = 0LL;
    v17 = DxgkQueryDmmInterface(this, v10, &v21);
    v12 = v17;
    if ( v17 >= 0 )
    {
      LODWORD(v12) = Win81::UpdateGdiInfoForVidPnSource(v21, this, (void *const)(unsigned int)v5, a3, a4, a5, v20[0]);
      goto LABEL_7;
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v16[3] = v12;
    v16[4] = this;
    v16[5] = v5;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    CurrentProcess = PsGetCurrentProcess(v14);
    v13[5] = this;
    v16 = v13;
    v13[4] = CurrentProcess;
  }
  WdLogEvent5_WdError(v16);
LABEL_7:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  return (unsigned int)v12;
}
