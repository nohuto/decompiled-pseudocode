/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     DxgkCreateDevice @ 0x1C0079090 (DxgkCreateDevice.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0079F60 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C007C820 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     DxgkGetPresentHistory @ 0x1C00CA740 (DxgkGetPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CFBC8 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00D1310 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D149C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00D6CA4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00D81F0 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D88B0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00D8DF0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00DA130 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00DA500 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetDisplayModeList @ 0x1C00DC6F0 (DxgkGetDisplayModeList.c)
 *     DxgkGetScanLine @ 0x1C00DD610 (DxgkGetScanLine.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C014DA00 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C014EDE0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C014FAA0 (DxgkQueryClockCalibration.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01529E0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0153870 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0156010 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0163DD0 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C0174380 (DxgkSetStablePowerState.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  DXGADAPTER **v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  volatile signed __int64 *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 5572LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = *((_QWORD *)a1 + 266);
  if ( !v10 )
  {
    v11 = a5;
    if ( a5 )
      return 3221225659LL;
LABEL_7:
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 267) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      *a4 = -1LL;
      *a3 = a1;
      return 0LL;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v15 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 70);
    if ( v15 )
    {
      _InterlockedIncrement64(v15 + 3);
      v16 = v19 == 0;
      *a4 = -1LL;
      *a3 = (struct DXGADAPTER *)v15;
      if ( !v16 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      return 0LL;
    }
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v17);
    if ( v11 && *v11 )
    {
      DXGADAPTER::ReleaseReference(*v11);
      *v11 = 0LL;
    }
    if ( v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    return 3221225659LL;
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v10 + 80) )
  {
    v11 = a5;
    if ( a5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      *a6 = -1LL;
      *a5 = a1;
    }
    goto LABEL_7;
  }
  v14 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v14 + 24) = v6;
  *(_QWORD *)(v14 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v14);
  return 3221225485LL;
}
