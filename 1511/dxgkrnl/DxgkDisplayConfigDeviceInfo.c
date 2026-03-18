/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00AA880
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00A1780 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00A5854 (-BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00A93F4 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00AAA34 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00AB7BC (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C4A78 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C017AF1C (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01869FC (MonitorDisableMonitorVirtualModeSuport.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(__int64 a1, int *a2)
{
  int v2; // edi
  char v4; // r12
  int v5; // eax
  unsigned int v6; // r15d
  __int64 v7; // rbx
  char v8; // al
  struct _LUID v9; // rdx
  int TargetBaseType; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  DXGGLOBAL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGADAPTER *v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rax
  int **SessionViewOwner; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  struct DXGGLOBAL *Global; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v52; // eax
  int v53; // r14d
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // r14d
  bool v59; // [rsp+30h] [rbp-D0h] BYREF
  bool v60[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v61; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v62[56]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v63[34]; // [rsp+70h] [rbp-90h] BYREF

  v2 = 0;
  v4 = a1;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 4865LL;
    WdLogEvent5_WdAssertion(v12);
    return -1073741811LL;
  }
  v5 = *a2;
  if ( *a2 == 3 )
  {
    if ( !(_BYTE)a1 )
    {
      v47 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v47 + 24) = 4880LL;
      WdLogEvent5_WdAssertion(v47);
    }
    memset(v63, 0, 264);
    v6 = 0;
    LODWORD(v7) = -1071774970;
    do
    {
      if ( v6 >= 0x10 )
        break;
      if ( v63[28] )
      {
        v48 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v48 + 24) = 4892LL;
        WdLogEvent5_WdAssertion(v48);
      }
      memset(v63, 0, 0x108uLL);
      LODWORD(v7) = DxgkIsVirtualizationDisabledForTarget(*((_QWORD *)a2 + 1), a2[4], v60, &v59, (__int64)&v63[16]);
      if ( (int)v7 >= 0 )
      {
        v63[7] = *((_QWORD *)a2 + 1);
        HIDWORD(v63[8]) = a2[4];
        HIDWORD(v63[2]) = 65537;
        LODWORD(v63[8]) = v6;
        if ( !v60[0] || (v8 = 0, !v59) )
          v8 = 1;
        v9 = (struct _LUID)*((_QWORD *)a2 + 1);
        BYTE5(v63[20]) = v8;
        LODWORD(v63[31]) = -13434880;
        LODWORD(v63[6]) = 847872;
        LODWORD(v7) = BmlGetPathModalityForAdapter((__int64)v63, v9, 0, 1, 0);
        if ( (int)v7 >= 0 )
        {
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)&v63[9],
            (struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO *)(a2 + 8));
          *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 7);
        }
        BmlFreePathsModality((struct _D3DKMT_GETPATHSMODALITY *)v63);
        ++v6;
      }
    }
    while ( (_DWORD)v7 == -1071774970 );
    return (unsigned int)v7;
  }
  switch ( v5 )
  {
    case 2:
      if ( !(_BYTE)a1 )
      {
        v49 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v49 + 24) = 4943LL;
        WdLogEvent5_WdAssertion(v49);
      }
      TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
LABEL_21:
      LODWORD(v7) = TargetBaseType;
      return (unsigned int)v7;
    case 6:
      if ( !(_BYTE)a1 )
      {
        v46 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v46 + 24) = 4953LL;
        WdLogEvent5_WdAssertion(v46);
      }
      TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      goto LABEL_21;
    case -6:
      if ( (_BYTE)a1 )
      {
        v54 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v54 + 24) = 5132LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v55 = (unsigned int)a2[5];
      if ( (unsigned int)(v55 - 1) > 3 )
      {
        LODWORD(v7) = -1073741811;
        v56 = WdLogNewEntry5_WdError(v55);
        *(_QWORD *)(v56 + 24) = a2[5];
        *(_QWORD *)(v56 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v56);
        return (unsigned int)v7;
      }
      v57 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v57 )
      {
        v57 = (unsigned int)(v57 - 1);
        if ( !(_DWORD)v57 )
        {
          v58 = 2;
          goto LABEL_80;
        }
        v57 = (unsigned int)(v57 - 1);
        if ( !(_DWORD)v57 )
        {
          v58 = 3;
          goto LABEL_80;
        }
        if ( (_DWORD)v57 == 1 )
        {
          v58 = 4;
LABEL_80:
          *((_DWORD *)DXGGLOBAL::GetGlobal(v57) + 230) = v58;
LABEL_81:
          LODWORD(v7) = 0;
          return (unsigned int)v7;
        }
      }
      v58 = 1;
      goto LABEL_80;
    case -5:
      if ( !(_BYTE)a1 )
      {
        v50 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v50 + 24) = 5122LL;
        WdLogEvent5_WdAssertion(v50);
      }
      Global = DXGGLOBAL::GetGlobal(a1);
      v52 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Global + 230));
      v53 = 1;
      if ( (unsigned int)(v52 - 1) <= 3 )
        v53 = v52;
      a2[5] = v53;
      goto LABEL_81;
  }
  if ( (unsigned int)(v5 - 7) > 1 )
  {
    LODWORD(v7) = -1073741811;
    return (unsigned int)v7;
  }
  v14 = DXGGLOBAL::GetGlobal(a1);
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(v14, *(struct _LUID *)(a2 + 2));
  if ( v19 )
  {
    v59 = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v59, 0);
    v7 = v20;
    if ( v20 >= 0 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v19, 0LL);
      v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62);
      DXGADAPTER::ReleaseReference(v19);
      if ( v26 >= 0 )
      {
        v32 = *((_QWORD *)v19 + 248);
        if ( v32 && *(_BYTE *)(v32 + 158) )
        {
          if ( *a2 == 7 )
          {
            if ( !v4 )
            {
              v33 = WdLogNewEntry5_WdAssertion(v28);
              *(_QWORD *)(v33 + 24) = 5033LL;
              WdLogEvent5_WdAssertion(v33);
            }
            v34 = a2[4];
            a2[5] = 0;
            LODWORD(v7) = MonitorIsMonitorVirtualModeDisabled(v19, v34, v60);
            if ( (int)v7 >= 0 )
            {
              LOBYTE(v2) = v60[0];
              a2[5] ^= (v2 ^ a2[5]) & 1;
            }
          }
          else
          {
            if ( v4 || *a2 != 8 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v28);
              *(_QWORD *)(v36 + 24) = 5050LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(v19, (unsigned int)a2[4], &v61) < 0 )
              goto LABEL_54;
            v39 = v61;
            if ( v61 >= *(_DWORD *)(*((_QWORD *)v19 + 248) + 104LL) )
            {
              v40 = WdLogNewEntry5_WdAssertion(v37);
              *(_QWORD *)(v40 + 24) = 5078LL;
              WdLogEvent5_WdAssertion(v40);
            }
            if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v19, v39, 1uLL, &v61) >= 0 && v61 != -1
              || (SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v19 + 248), v39)) != 0LL
              && *((_DWORD *)SessionViewOwner + 10) > 1u )
            {
              LODWORD(v7) = -1073741649;
              v44 = WdLogNewEntry5_WdWarning(v42, v41, v38, v43);
              *(_QWORD *)(v44 + 24) = (unsigned int)a2[4];
              *(_QWORD *)(v44 + 32) = -1073741649LL;
              WdLogEvent5_WdWarning(v44);
            }
            else
            {
LABEL_54:
              LOBYTE(v38) = a2[5] & 1;
              LODWORD(v7) = MonitorDisableMonitorVirtualModeSuport(v19, (unsigned int)a2[4], v38);
            }
          }
        }
        else
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          v35[3] = v19;
          v35[4] = (int)HIDWORD(*(_QWORD *)((char *)v19 + 252));
          v35[5] = *((unsigned int *)v19 + 63);
          WdLogEvent5_WdWarning(v35);
          LODWORD(v7) = -1073741637;
        }
      }
      else
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
        v31[3] = v19;
        v31[4] = (int)HIDWORD(*(_QWORD *)((char *)v19 + 252));
        v31[5] = *((unsigned int *)v19 + 63);
        WdLogEvent5_WdWarning(v31);
        LODWORD(v7) = -1073741811;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = v7;
      WdLogEvent5_WdWarning(v25);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v59);
    return (unsigned int)v7;
  }
  v13 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  *(_QWORD *)(v13 + 24) = a2[3];
  *(_QWORD *)(v13 + 32) = (unsigned int)a2[2];
  return -1073741811LL;
}
