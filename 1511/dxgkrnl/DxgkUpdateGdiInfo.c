/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00AD640
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007090 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000A8D4 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C005DAA8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?SourceConnectedToInternalMonitor@@YAEPEBU_DXGDMM_INTERFACE@@QEAXI@Z @ 0x1C00ABE0C (-SourceConnectedToInternalMonitor@@YAEPEBU_DXGDMM_INTERFACE@@QEAXI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00AD4E8 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00AD984 (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00ADA04 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C00CFFC8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165104 (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteSimulatedMonitorCache@@YAJPEAU_DPI_INFORMATION@@@Z @ 0x1C0165490 (-WriteSimulatedMonitorCache@@YAJPEAU_DPI_INFORMATION@@@Z.c)
 *     DmmIsVidPnTargetConnectedToSource @ 0x1C017B73C (DmmIsVidPnTargetConnectedToSource.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        unsigned int a2,
        unsigned int a3,
        struct _LUID a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  struct _LUID v12; // rax
  bool v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 CurrentProcess; // rax
  _QWORD *v18; // rcx
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int DmmInterface; // eax
  __int64 v27; // rcx
  int v28; // ebx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int128 v36; // xmm0
  unsigned int v37; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v38; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v39; // r8
  int PlateauIndexForScaleFactor; // eax
  int v41; // r10d
  unsigned __int8 v43; // [rsp+30h] [rbp-D0h] BYREF
  char v44; // [rsp+31h] [rbp-CFh] BYREF
  _BYTE v45[2]; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v46; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID v47; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v48; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v49; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v50; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v51[56]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v52[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v53[10]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+160h] [rbp+60h]
  int v55; // [rsp+168h] [rbp+68h]

  v6 = a2;
  v48 = a4;
  v44 = 0;
  v7 = a3;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v44, 0);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v43 = 0;
    IsEmergencyMonitorConnected((DXGADAPTER *)a1, v6, &v43);
    v12 = *(struct _LUID *)(a1 + 252);
    v46 = 0;
    v47 = v12;
    v13 = (int)ReadDpiFromRegistry(&v47, v6, v43 == 0, &v46) >= 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, (struct DXGADAPTER *const)a1, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51);
    v10 = v14;
    if ( v14 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v16[3] = v10;
      CurrentProcess = PsGetCurrentProcess();
      v16[5] = a1;
      v18 = v16;
      v16[4] = CurrentProcess;
LABEL_13:
      WdLogEvent5_WdError(v18);
      goto LABEL_24;
    }
    if ( (_DWORD)v7 != -1 )
    {
      v45[0] = 0;
      IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, (unsigned int)v6, (unsigned int)v7, v45);
      v10 = IsVidPnTargetConnectedToSource;
      if ( IsVidPnTargetConnectedToSource < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v24[6] = v7;
LABEL_12:
        v24[5] = v6;
        v18 = v24;
        v24[4] = a1;
        v24[3] = v10;
        goto LABEL_13;
      }
      if ( !v45[0] )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        LODWORD(v10) = -1071774937;
        v25[3] = a1;
        v25[4] = v6;
        v25[5] = v7;
LABEL_24:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
        goto LABEL_25;
      }
    }
    v47 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v10 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      if ( !v43
        && v13
        && SourceConnectedToInternalMonitor(*(const struct _DXGDMM_INTERFACE **)&v47, (DXGADAPTER *)a1, v6) )
      {
        v28 = 1;
      }
      else
      {
        v28 = 0;
        if ( v43 )
        {
          *(_DWORD *)&v49.Length = 11272362;
          v29 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          *(_DWORD *)&v50.Length = 1179664;
          v53[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          v30 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          v53[1] = v29;
          v31 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          v53[2] = v30;
          v32 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          v53[3] = v31;
          v33 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\ScaleFactors\\Cache";
          v53[4] = v32;
          v34 = *(_OWORD *)L"ol\\GraphicsDrivers\\ScaleFactors\\Cache";
          v53[5] = v33;
          v53[6] = v34;
          v53[7] = *(_OWORD *)L"icsDrivers\\ScaleFactors\\Cache";
          v35 = *(_QWORD *)L"Cache";
          v36 = *(_OWORD *)L"Factors\\Cache";
          v53[8] = *(_OWORD *)L"rs\\ScaleFactors\\Cache";
          v53[9] = v36;
          v54 = v35;
          v55 = *(_DWORD *)L"e";
          v49.Buffer = (wchar_t *)v53;
          LOWORD(v52[4]) = aDpivalue[8];
          v50.Buffer = (wchar_t *)v52;
          *(_OWORD *)v52 = *(_OWORD *)L"DpiValue";
          ReadRegistryDwordKeyValue(&v49, &v50, &v46);
        }
      }
      LODWORD(v10) = UpdateGdiInfoForVidPnSource(
                       *(const struct _DXGDMM_INTERFACE **)&v47,
                       a1,
                       v6,
                       v46,
                       *(struct _GDIINFO **)&v48,
                       a5);
      if ( v28 )
        WriteSimulatedMonitorCache(a5);
      if ( *((_DWORD *)a5 + 21) == 1234568 )
      {
        v37 = *((_DWORD *)a5 + 2);
        memset(v52, 0, sizeof(v52));
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v52);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v52, v38);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v37, (__int64)v52, v39);
        v48 = *(struct _LUID *)(a1 + 252);
        LODWORD(v10) = WriteDpiToHKLMRegistry(&v48, v6, PlateauIndexForScaleFactor - v41);
      }
      goto LABEL_24;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    goto LABEL_12;
  }
  v11 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v11 + 24) = v10;
  WdLogEvent5_WdError(v11);
LABEL_25:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
  return (unsigned int)v10;
}
