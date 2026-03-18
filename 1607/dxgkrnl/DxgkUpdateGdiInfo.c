/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00C5BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000AA8C (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00B8DD0 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkQueryDmmInterface @ 0x1C00C5D40 (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C5DC0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00D9C74 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C018CF98 (-WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C01A4CC8 (DmmIsVidPnTargetConnectedToSource.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        struct _GDIINFO *a4,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int DmmInterface; // eax
  __int64 v16; // rcx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v17; // r15
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v31; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v32; // r8
  int PlateauIndexForScaleFactor; // eax
  int v34; // r10d
  _BYTE v35[4]; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v37[10]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v38[80]; // [rsp+60h] [rbp-21h] BYREF
  struct _DXGDMM_INTERFACE *v39; // [rsp+E0h] [rbp+5Fh] BYREF

  v5 = a2;
  v7 = a3;
  v35[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v35, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v19 + 24) = v11;
    WdLogEvent5_WdError(v19);
    goto LABEL_11;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, (struct DXGADAPTER *const)a1, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_14;
  LOBYTE(v39) = 0;
  IsEmergencyMonitorConnected((DXGADAPTER *)a1, v5, (unsigned __int8 *)&v39);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v38);
  v36 = 0;
  if ( (_BYTE)v39 )
    v36 = dword_1C0056E04;
  else
    ReadDpiFromRegistry((const struct _LUID *)(a1 + 268), v5, 1, &v36);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  v11 = v14;
  if ( v14 < 0 )
  {
LABEL_14:
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v20[3] = v11;
    v20[4] = PsGetCurrentProcess(v21);
    v22 = v20;
    v20[5] = a1;
LABEL_21:
    WdLogEvent5_WdError(v22);
    goto LABEL_10;
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_7;
  LOBYTE(v39) = 0;
  IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, (unsigned int)v5, (unsigned int)v7, &v39);
  v11 = IsVidPnTargetConnectedToSource;
  if ( IsVidPnTargetConnectedToSource < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v28[6] = v7;
LABEL_20:
    v28[5] = v5;
    v22 = v28;
    v28[4] = a1;
    v28[3] = v11;
    goto LABEL_21;
  }
  if ( (_BYTE)v39 )
  {
LABEL_7:
    v39 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v11 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v17 = a5;
      LODWORD(v11) = UpdateGdiInfoForVidPnSource(v39, a1, v5, v36, a4, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v38);
      if ( *(_DWORD *)&v17->Red[42] == 1234568 )
      {
        v30 = *(_DWORD *)&v17->Red[4];
        memset(v37, 0, 0x20uLL);
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v37);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*(unsigned int *)&v17->Red[6], (__int64)v37, v31);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v30, (__int64)v37, v32);
        LODWORD(v11) = WriteDpiToHKLMRegistry((const struct _LUID *)(a1 + 268), v5, PlateauIndexForScaleFactor - v34);
      }
      goto LABEL_10;
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    goto LABEL_20;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
  LODWORD(v11) = -1071774937;
  v29[3] = a1;
  v29[4] = v5;
  v29[5] = v7;
LABEL_10:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_11:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v35);
  return (unsigned int)v11;
}
