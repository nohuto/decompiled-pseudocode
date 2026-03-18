/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C0062960
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C005FDB4 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     DxgkIsVirtualModeDisabledForPath @ 0x1C0062720 (DxgkIsVirtualModeDisabledForPath.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00628F4 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006351C (-BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C009C2D8 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009FBA4 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00BBA84 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C0176984 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01823AC (MonitorDisableMonitorVirtualModeSuport.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  char v6; // r12
  int v7; // eax
  unsigned int v8; // r15d
  __int64 v9; // rbx
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
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  struct DXGGLOBAL *Global; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v54; // eax
  int v55; // r14d
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // r14d
  char v63; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v64[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v65; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v66[56]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v67[34]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  v6 = a1;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    *(_QWORD *)(v12 + 24) = 4541LL;
    WdLogEvent5_WdAssertion(v12);
    return -1073741811LL;
  }
  v7 = *a2;
  if ( *a2 == 3 )
  {
    if ( !(_BYTE)a1 )
    {
      v49 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v49 + 24) = 4556LL;
      WdLogEvent5_WdAssertion(v49);
    }
    memset(v67, 0, 264);
    v8 = 0;
    LODWORD(v9) = -1071774970;
    do
    {
      if ( v8 >= 0x10 )
        break;
      if ( v67[28] )
      {
        v50 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v50 + 24) = 4568LL;
        WdLogEvent5_WdAssertion(v50);
      }
      memset(v67, 0, 0x108uLL);
      LODWORD(v9) = DxgkIsVirtualModeDisabledForPath(
                      *(struct _LUID *)(a2 + 2),
                      a2[4],
                      (__int64)&v67[20] + 5,
                      (__int64)&v67[16]);
      if ( (int)v9 >= 0 )
      {
        v67[7] = *((_QWORD *)a2 + 1);
        HIDWORD(v67[8]) = a2[4];
        HIDWORD(v67[2]) = 65537;
        LODWORD(v67[8]) = v8;
        LODWORD(v67[31]) = -13434880;
        LODWORD(v67[6]) = 847872;
        LODWORD(v9) = BmlGetPathModalityForAdapter(v67, v67[7], 0LL, 1LL, 0);
        if ( (int)v9 >= 0 )
        {
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)&v67[9],
            (struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO *)(a2 + 8));
          *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 7);
        }
        BmlFreePathsModality((struct _D3DKMT_GETPATHSMODALITY *)v67);
        ++v8;
      }
    }
    while ( (_DWORD)v9 == -1071774970 );
    return (unsigned int)v9;
  }
  switch ( v7 )
  {
    case 2:
      if ( !(_BYTE)a1 )
      {
        v51 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v51 + 24) = 4615LL;
        WdLogEvent5_WdAssertion(v51);
      }
      TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
LABEL_19:
      LODWORD(v9) = TargetBaseType;
      return (unsigned int)v9;
    case 6:
      if ( !(_BYTE)a1 )
      {
        v48 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v48 + 24) = 4625LL;
        WdLogEvent5_WdAssertion(v48);
      }
      TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      goto LABEL_19;
    case -6:
      if ( (_BYTE)a1 )
      {
        v56 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v56 + 24) = 4804LL;
        WdLogEvent5_WdAssertion(v56);
      }
      v57 = (unsigned int)a2[5];
      if ( (unsigned int)(v57 - 1) > 3 )
      {
        LODWORD(v9) = -1073741811;
        v58 = WdLogNewEntry5_WdError(v57);
        *(_QWORD *)(v58 + 24) = a2[5];
        *(_QWORD *)(v58 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v58);
        return (unsigned int)v9;
      }
      v59 = v57 - 1;
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( !v60 )
        {
          v62 = 2;
          goto LABEL_76;
        }
        v61 = v60 - 1;
        if ( !v61 )
        {
          v62 = 3;
          goto LABEL_76;
        }
        if ( v61 == 1 )
        {
          v62 = 4;
LABEL_76:
          *((_DWORD *)DXGGLOBAL::GetGlobal() + 194) = v62;
LABEL_77:
          LODWORD(v9) = 0;
          return (unsigned int)v9;
        }
      }
      v62 = 1;
      goto LABEL_76;
    case -5:
      if ( !(_BYTE)a1 )
      {
        v52 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v52 + 24) = 4794LL;
        WdLogEvent5_WdAssertion(v52);
      }
      Global = DXGGLOBAL::GetGlobal();
      v54 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)Global + 194));
      v55 = 1;
      if ( (unsigned int)(v54 - 1) <= 3 )
        v55 = v54;
      a2[5] = v55;
      goto LABEL_77;
  }
  if ( (unsigned int)(v7 - 7) > 1 )
  {
    LODWORD(v9) = -1073741811;
    return (unsigned int)v9;
  }
  v14 = DXGGLOBAL::GetGlobal();
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(v14, *(struct _LUID *)(a2 + 2));
  if ( v19 )
  {
    v63 = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v63, 0);
    v9 = v20;
    if ( v20 >= 0 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v19, 0LL);
      v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
      DXGADAPTER::ReleaseReference(v19);
      if ( v26 >= 0 )
      {
        v32 = *((_QWORD *)v19 + 247);
        if ( v32 && *(_BYTE *)(v32 + 133) )
        {
          if ( *a2 == 7 )
          {
            if ( !v6 )
            {
              v33 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
              *(_QWORD *)(v33 + 24) = 4705LL;
              WdLogEvent5_WdAssertion(v33);
            }
            v34 = (unsigned int)a2[4];
            a2[5] = 0;
            LODWORD(v9) = MonitorIsMonitorVirtualModeDisabled(v19, v34, v64);
            if ( (int)v9 >= 0 )
            {
              LOBYTE(v4) = v64[0] != 0;
              a2[5] ^= (v4 ^ a2[5]) & 1;
            }
          }
          else
          {
            if ( v6 || *a2 != 8 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
              *(_QWORD *)(v36 + 24) = 4722LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(v19, (unsigned int)a2[4], &v65) < 0 )
              goto LABEL_52;
            v41 = v65;
            if ( v65 >= *(_DWORD *)(*((_QWORD *)v19 + 247) + 80LL) )
            {
              v42 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
              *(_QWORD *)(v42 + 24) = 4750LL;
              WdLogEvent5_WdAssertion(v42);
            }
            if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v19, v41, 1uLL, &v65) >= 0 && v65 != -1
              || (SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v19 + 247), v41)) != 0LL
              && *((_DWORD *)SessionViewOwner + 10) > 1u )
            {
              LODWORD(v9) = -1073741649;
              v46 = WdLogNewEntry5_WdWarning(v44, v43, v39, v45);
              *(_QWORD *)(v46 + 24) = (unsigned int)a2[4];
              *(_QWORD *)(v46 + 32) = -1073741649LL;
              WdLogEvent5_WdWarning(v46);
            }
            else
            {
LABEL_52:
              LOBYTE(v39) = a2[5] & 1;
              LODWORD(v9) = MonitorDisableMonitorVirtualModeSuport(v19, (unsigned int)a2[4], v39);
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
          LODWORD(v9) = -1073741637;
        }
      }
      else
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
        v31[3] = v19;
        v31[4] = (int)HIDWORD(*(_QWORD *)((char *)v19 + 252));
        v31[5] = *((unsigned int *)v19 + 63);
        WdLogEvent5_WdWarning(v31);
        LODWORD(v9) = -1073741811;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = v9;
      WdLogEvent5_WdWarning(v25);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v63);
    return (unsigned int)v9;
  }
  v13 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  *(_QWORD *)(v13 + 24) = a2[3];
  *(_QWORD *)(v13 + 32) = (unsigned int)a2[2];
  return -1073741811LL;
}
