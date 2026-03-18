/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0089FE0 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008B040 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     DxgkGetPresentHistory @ 0x1C00956B0 (DxgkGetPresentHistory.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C009FAB4 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00B9A30 (DxgkGetDisplayModeList.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BB068 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C0910 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00C1110 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00C2190 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00C3050 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00C4E40 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00C5330 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetScanLine @ 0x1C00C8510 (DxgkGetScanLine.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00EA248 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C012BDB0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0130680 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0131630 (DxgkQueryClockCalibration.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01336B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0134490 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0136BA0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0142370 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C014E7D0 (DxgkSetStablePowerState.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C0153DF8 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        struct DXGADAPTER **a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rsi
  bool v18; // zf
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-18h] BYREF
  char v21; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v8 + 24) = 26068LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( v9 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(v9 + 104) )
    {
      v10 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v10 + 24) = v4;
      *(_QWORD *)(v10 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v10);
      return 3221225485LL;
    }
    if ( a4 )
    {
      if ( _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL) <= 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v12 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v12);
      }
      *a4 = a1;
    }
  }
  else if ( a4 )
  {
    return 3221225659LL;
  }
  if ( !a3 )
    return 0LL;
  if ( *((_QWORD *)a1 + 249) )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL) <= 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v13 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v13);
    }
    *a3 = a1;
    return 0LL;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Global = DXGGLOBAL::GetGlobal(v14);
  v17 = (struct DXGADAPTER *)*((_QWORD *)Global + 89);
  if ( v17 )
  {
    DXGADAPTER::AcquireReference(*((DXGADAPTER **)Global + 89));
    v18 = v21 == 0;
    *a3 = v17;
    if ( !v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v19 + 24) = a1;
  *(_QWORD *)(v19 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v19);
  if ( a4 && *a4 )
  {
    DXGADAPTER::ReleaseReference(*a4);
    *a4 = 0LL;
  }
  if ( v21 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return 3221225659LL;
}
