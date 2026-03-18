/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00AAEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0009CFC (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0009D1C (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AC434 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00AC588 (DxgkQueryDmmInterface.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160D2C (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C01771A4 (DmmIsVidPnTargetConnectedToSource.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  int DmmInterface; // eax
  __int64 v17; // rcx
  struct _DPI_INFORMATION *v18; // r15
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v24; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // ebx
  struct tagSIZE v33; // rdx
  unsigned int v34; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v35; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v36; // r8
  int PlateauIndexForScaleFactor; // eax
  int v38; // r10d
  _BYTE v39[4]; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-2Dh] BYREF
  unsigned int v41[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v42[56]; // [rsp+60h] [rbp-9h] BYREF
  struct _LUID v43; // [rsp+C8h] [rbp+5Fh] BYREF

  v5 = a2;
  v7 = a3;
  v39[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v39, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v20 + 24) = v11;
    WdLogEvent5_WdError(v20);
    goto LABEL_10;
  }
  v43 = *(struct _LUID *)(a1 + 252);
  v12 = ReadDpiFromRegistry(&v43, v5, 1, &v40);
  v13 = v40;
  if ( v12 < 0 )
    v13 = 0;
  v40 = v13;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, (struct DXGADAPTER *const)a1, 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42);
  v11 = v14;
  if ( v14 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v21[3] = v11;
    CurrentProcess = PsGetCurrentProcess(v22);
    v21[5] = a1;
    v24 = v21;
    v21[4] = CurrentProcess;
LABEL_19:
    WdLogEvent5_WdError(v24);
    goto LABEL_9;
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_6;
  LOBYTE(v43.LowPart) = 0;
  IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, (unsigned int)v5, (unsigned int)v7, &v43);
  v11 = IsVidPnTargetConnectedToSource;
  if ( IsVidPnTargetConnectedToSource < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v30[6] = v7;
LABEL_18:
    v30[5] = v5;
    v24 = v30;
    v30[4] = a1;
    v30[3] = v11;
    goto LABEL_19;
  }
  if ( LOBYTE(v43.LowPart) )
  {
LABEL_6:
    v43 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v11 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v18 = a5;
      LODWORD(v11) = UpdateGdiInfoForVidPnSource(*(const struct _DXGDMM_INTERFACE **)&v43, a1, v5, v13, a4, a5);
      if ( *((_DWORD *)v18 + 21) == 1234568 )
      {
        v32 = *((_DWORD *)v18 + 2);
        memset(v41, 0, sizeof(v41));
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v41);
        v34 = DpiInternal::AvgXY(*((DpiInternal **)v18 + 7), v33);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v34, (__int64)v41, v35);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v32, (__int64)v41, v36);
        v43 = *(struct _LUID *)(a1 + 252);
        LODWORD(v11) = WriteDpiToHKLMRegistry(&v43, v5, PlateauIndexForScaleFactor - v38);
      }
      goto LABEL_9;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    goto LABEL_18;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
  LODWORD(v11) = -1071774937;
  v31[3] = a1;
  v31[4] = v5;
  v31[5] = v7;
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
LABEL_10:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v39);
  return (unsigned int)v11;
}
