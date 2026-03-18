/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164464
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C0165400 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct _DPI_INFORMATION *v21[8]; // [rsp+30h] [rbp-58h] BYREF
  Win81 *v22; // [rsp+90h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, this, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  v13 = v9;
  if ( v9 >= 0 )
  {
    v22 = 0LL;
    v18 = DxgkQueryDmmInterface(this, v10, &v22, v12);
    v13 = v18;
    if ( v18 >= 0 )
    {
      LODWORD(v13) = Win81::UpdateGdiInfoForVidPnSource(v22, this, (void *const)(unsigned int)v5, a3, a4, a5, v21[0]);
      goto LABEL_7;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v17[3] = v13;
    v17[4] = this;
    v17[5] = v5;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = v13;
    CurrentProcess = PsGetCurrentProcess(v15);
    v14[5] = this;
    v17 = v14;
    v14[4] = CurrentProcess;
  }
  WdLogEvent5_WdError(v17);
LABEL_7:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  return (unsigned int)v13;
}
