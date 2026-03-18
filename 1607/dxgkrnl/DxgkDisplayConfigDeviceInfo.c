/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0082B20 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00BC468 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00C2AB4 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C35F8 (-BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00C3694 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00C49F8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C01A45A4 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01B017C (MonitorDisableMonitorVirtualModeSuport.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  char v9; // al
  struct _LUID v10; // rdx
  int TargetBaseType; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGGLOBAL *v16; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v17; // eax
  int v18; // r14d
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  DXGGLOBAL *v24; // rax
  struct DXGADAPTER *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGADAPTER *v30; // r14
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  _QWORD *v41; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v43; // r15
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // edx
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rax
  int **SessionViewOwner; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  char v74; // [rsp+38h] [rbp-D0h] BYREF
  char v75; // [rsp+39h] [rbp-CFh] BYREF
  bool v76; // [rsp+3Ah] [rbp-CEh] BYREF
  bool v77; // [rsp+3Bh] [rbp-CDh] BYREF
  unsigned int v78; // [rsp+3Ch] [rbp-CCh] BYREF
  int v79; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v80; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v81; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v82[80]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v83[80]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v84[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v85[34]; // [rsp+138h] [rbp+30h] BYREF

  memset(v84, 0, sizeof(v84));
  EtwActivityIdControl(3u, (LPGUID)&v84[1]);
  v84[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v84[3]) = 39;
  if ( a2 )
  {
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( !a1 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v73 + 24) = 5026LL;
        WdLogEvent5_WdAssertion(v73);
      }
      TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
      goto LABEL_21;
    }
    if ( v5 == 3 )
    {
      if ( !a1 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v71 + 24) = 4962LL;
        WdLogEvent5_WdAssertion(v71);
      }
      memset(v85, 0, 0x108uLL);
      v7 = 0;
      LODWORD(v8) = -1071774970;
      do
      {
        if ( v7 >= 0x10 )
          break;
        if ( v85[28] )
        {
          v72 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v72 + 24) = 4974LL;
          WdLogEvent5_WdAssertion(v72);
        }
        memset(v85, 0, 0x108uLL);
        LODWORD(v8) = DxgkIsVirtualizationDisabledForTarget(
                        *(_QWORD *)(a2 + 8),
                        *(_DWORD *)(a2 + 16),
                        &v76,
                        &v77,
                        (__int64)&v85[16],
                        (__int64)&v85[16] + 4);
        if ( (int)v8 >= 0 )
        {
          v85[7] = *(_QWORD *)(a2 + 8);
          HIDWORD(v85[8]) = *(_DWORD *)(a2 + 16);
          HIDWORD(v85[2]) = 65537;
          LODWORD(v85[8]) = v7;
          if ( !v76 || (v9 = 0, !v77) )
            v9 = 1;
          v10 = *(struct _LUID *)(a2 + 8);
          BYTE1(v85[21]) = v9;
          LODWORD(v85[31]) = -13434880;
          LODWORD(v85[6]) = 847872;
          LODWORD(v8) = BmlGetPathModalityForAdapter((__int64)v85, v10, 0, 1u, 0);
          if ( (int)v8 >= 0 )
          {
            DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
              (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)&v85[9],
              (struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO *)(a2 + 32));
            *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
          }
          BmlFreePathsModality((struct _D3DKMT_GETPATHSMODALITY *)v85);
          ++v7;
        }
      }
      while ( (_DWORD)v8 == -1071774970 );
      return (unsigned int)v8;
    }
    if ( v5 == 6 )
    {
      if ( !a1 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v70 + 24) = 5036LL;
        WdLogEvent5_WdAssertion(v70);
      }
      TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
LABEL_21:
      LODWORD(v8) = TargetBaseType;
      return (unsigned int)v8;
    }
    if ( v5 <= 6 )
      goto LABEL_90;
    if ( v5 <= 8 )
    {
      Global = DXGGLOBAL::GetGlobal(v4);
      v43 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a2 + 8), &v81);
      if ( v43 )
      {
        v74 = 0;
        v44 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v74, 0);
        v8 = v44;
        if ( v44 >= 0 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, v43, 0LL);
          v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82);
          DXGADAPTER::ReleaseReference(v43);
          if ( v50 >= 0 )
          {
            v56 = *((_QWORD *)v43 + 266);
            if ( v56 && *(_BYTE *)(v56 + 134) )
            {
              if ( *(_DWORD *)a2 == 7 )
              {
                if ( !a1 )
                {
                  v57 = WdLogNewEntry5_WdAssertion(v52);
                  *(_QWORD *)(v57 + 24) = 5117LL;
                  WdLogEvent5_WdAssertion(v57);
                }
                v58 = *(_DWORD *)(a2 + 16);
                *(_DWORD *)(a2 + 20) = 0;
                LODWORD(v8) = MonitorIsMonitorVirtualModeDisabled((__int64)v43, v58, &v75);
                if ( (int)v8 >= 0 )
                  *(_DWORD *)(a2 + 20) ^= ((v75 != 0) ^ (unsigned __int8)*(_DWORD *)(a2 + 20)) & 1;
              }
              else
              {
                if ( a1 || *(_DWORD *)a2 != 8 )
                {
                  v60 = WdLogNewEntry5_WdAssertion(v52);
                  *(_QWORD *)(v60 + 24) = 5134LL;
                  WdLogEvent5_WdAssertion(v60);
                }
                if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(v43, *(unsigned int *)(a2 + 16), &v78) < 0 )
                  goto LABEL_84;
                v63 = v78;
                if ( v78 >= *(_DWORD *)(*((_QWORD *)v43 + 266) + 80LL) )
                {
                  v64 = WdLogNewEntry5_WdAssertion(v61);
                  *(_QWORD *)(v64 + 24) = 5162LL;
                  WdLogEvent5_WdAssertion(v64);
                }
                if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v43, v63, 1LL, &v79) >= 0 && v79 != -1
                  || (SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v43 + 266), v63)) != 0LL
                  && *((_DWORD *)SessionViewOwner + 10) > 1u )
                {
                  LODWORD(v8) = -1073741649;
                  v68 = WdLogNewEntry5_WdWarning(v66, v65, v62, v67);
                  *(_QWORD *)(v68 + 24) = *(unsigned int *)(a2 + 16);
                  *(_QWORD *)(v68 + 32) = -1073741649LL;
                  WdLogEvent5_WdWarning(v68);
                }
                else
                {
LABEL_84:
                  LOBYTE(v62) = *(_BYTE *)(a2 + 20) & 1;
                  LODWORD(v8) = MonitorDisableMonitorVirtualModeSuport(v43, *(unsigned int *)(a2 + 16), v62, v84);
                }
              }
            }
            else
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
              v59[3] = v43;
              v59[4] = *((int *)v43 + 68);
              v59[5] = *((unsigned int *)v43 + 67);
              WdLogEvent5_WdWarning(v59);
              LODWORD(v8) = -1073741637;
            }
          }
          else
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
            v55[3] = v43;
            v55[4] = *((int *)v43 + 68);
            v55[5] = *((unsigned int *)v43 + 67);
            WdLogEvent5_WdWarning(v55);
            LODWORD(v8) = -1073741811;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
        }
        else
        {
          v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
          *(_QWORD *)(v49 + 24) = v8;
          WdLogEvent5_WdWarning(v49);
        }
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v74);
        return (unsigned int)v8;
      }
    }
    else
    {
      if ( v5 != -10 )
      {
        if ( v5 != -6 )
        {
          if ( v5 == -5 )
          {
            if ( !a1 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v4);
              *(_QWORD *)(v15 + 24) = 5207LL;
              WdLogEvent5_WdAssertion(v15);
            }
            v16 = DXGGLOBAL::GetGlobal(v4);
            v17 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v16 + 190));
            v18 = 1;
            if ( (unsigned int)(v17 - 1) <= 3 )
              v18 = v17;
            *(_DWORD *)(a2 + 20) = v18;
            goto LABEL_41;
          }
LABEL_90:
          LODWORD(v8) = -1073741811;
          return (unsigned int)v8;
        }
        if ( a1 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v4);
          *(_QWORD *)(v20 + 24) = 5217LL;
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = *(unsigned int *)(a2 + 20);
        if ( (unsigned int)(v21 - 1) > 3 )
        {
          LODWORD(v8) = -1073741811;
          v22 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v22 + 24) = *(int *)(a2 + 20);
          *(_QWORD *)(v22 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v22);
          return (unsigned int)v8;
        }
        v23 = (unsigned int)(v21 - 1);
        if ( !(_DWORD)v23 )
          goto LABEL_39;
        v23 = (unsigned int)(v23 - 1);
        if ( !(_DWORD)v23 )
        {
          v19 = 2;
          goto LABEL_40;
        }
        v23 = (unsigned int)(v23 - 1);
        if ( !(_DWORD)v23 )
        {
          v19 = 3;
          goto LABEL_40;
        }
        if ( (_DWORD)v23 == 1 )
          v19 = 4;
        else
LABEL_39:
          v19 = 1;
LABEL_40:
        *((_DWORD *)DXGGLOBAL::GetGlobal(v23) + 190) = v19;
LABEL_41:
        LODWORD(v8) = 0;
        return (unsigned int)v8;
      }
      v24 = DXGGLOBAL::GetGlobal(v4);
      v25 = DXGGLOBAL::ReferenceAdapterByLuid(v24, *(struct _LUID *)(a2 + 8), &v80);
      v30 = v25;
      if ( v25 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v25, 0LL);
        v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83);
        DXGADAPTER::ReleaseReference(v30);
        if ( v31 >= 0 )
        {
          if ( (*((_DWORD *)v30 + 75) & 0x100) == 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
            v36[3] = v30;
            v36[4] = *((int *)v30 + 68);
            v36[5] = *((unsigned int *)v30 + 67);
            WdLogEvent5_WdWarning(v36);
            LODWORD(v8) = -1073741637;
LABEL_61:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83);
            return (unsigned int)v8;
          }
          v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v30 + 266) + 16LL) + 1448LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 266) + 16LL) + 1368LL),
                  *(unsigned int *)(a2 + 16),
                  a2 + 20);
          v39 = v37;
          if ( v37 >= 0 )
          {
            LODWORD(v8) = 0;
            goto LABEL_61;
          }
          v40 = WdLogNewEntry5_WdError(v38);
          *(_QWORD *)(v40 + 24) = v39;
          WdLogEvent5_WdError(v40);
        }
        v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
        v41[3] = v30;
        v41[4] = *((int *)v30 + 68);
        v41[5] = *((unsigned int *)v30 + 67);
        WdLogEvent5_WdWarning(v41);
        LODWORD(v8) = -1073741811;
        goto LABEL_61;
      }
    }
    v14 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
    *(_QWORD *)(v14 + 24) = *(int *)(a2 + 12);
    *(_QWORD *)(v14 + 32) = *(unsigned int *)(a2 + 8);
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 4947LL;
    WdLogEvent5_WdAssertion(v13);
  }
  return -1073741811LL;
}
