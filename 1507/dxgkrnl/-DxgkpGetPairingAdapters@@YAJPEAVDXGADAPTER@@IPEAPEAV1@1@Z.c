/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0
 * Callers:
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C008A580 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C008AF10 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C008B8C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkCreateDevice @ 0x1C008E3F0 (DxgkCreateDevice.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00A6E90 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00A7020 (DxgkGetDisplayModeList.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00AE490 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00AEA40 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00AF840 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00B0A80 (DxgkQueryModeListCacheLuid.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00B0B90 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkGetScanLine @ 0x1C00B2CE0 (DxgkGetScanLine.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00BBBF0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CEA48 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C00DAB14 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 *     DxgkSetModeFlags @ 0x1C00DE290 (DxgkSetModeFlags.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0125C10 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0129FF0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C012B090 (DxgkQueryClockCalibration.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C012E080 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C012F410 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01320D0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C013BF40 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C014A4E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct DXGADAPTER **a3,
        struct DXGADAPTER **a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rdi
  bool v21; // zf
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-18h] BYREF
  char v24; // [rsp+28h] [rbp-10h]

  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 25551LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v8 = *((_QWORD *)a1 + 247);
  if ( !v8 )
  {
    if ( a4 )
      return 3221225659LL;
LABEL_9:
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 248) )
    {
      if ( _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL) <= 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v13 + 24) = 1050LL;
        WdLogEvent5_WdAssertion(v13);
      }
      *a3 = a1;
      return 0LL;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v23);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    Global = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
    v20 = (struct DXGADAPTER *)*((_QWORD *)Global + 71);
    if ( v20 )
    {
      DXGADAPTER::AcquireReference(*((DXGADAPTER **)Global + 71));
      v21 = v24 == 0;
      *a3 = v20;
      if ( !v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      return 0LL;
    }
    v22 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v22 + 24) = a1;
    *(_QWORD *)(v22 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v22);
    if ( a4 && *a4 )
    {
      DXGADAPTER::ReleaseReference(*a4);
      *a4 = 0LL;
    }
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    return 3221225659LL;
  }
  if ( (unsigned int)v4 < *(_DWORD *)(v8 + 80) )
  {
    if ( a4 )
    {
      if ( _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL) <= 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v12 + 24) = 1050LL;
        WdLogEvent5_WdAssertion(v12);
      }
      *a4 = a1;
    }
    goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v11 + 24) = v4;
  *(_QWORD *)(v11 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
