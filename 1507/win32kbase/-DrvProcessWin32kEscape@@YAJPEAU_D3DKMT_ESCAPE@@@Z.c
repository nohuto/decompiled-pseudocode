/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B92E0
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C000D1C0 (NtGdiDdDDIEscape.c)
 * Callees:
 *     DxgkEngIsDwmProcess_0 @ 0x1C00015C0 (DxgkEngIsDwmProcess_0.c)
 *     IsUserGetHipDeviceInfoSupported_0 @ 0x1C00017B8 (IsUserGetHipDeviceInfoSupported_0.c)
 *     UserGetHipDeviceInfo_0 @ 0x1C00017C0 (UserGetHipDeviceInfo_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00B9298 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00BA778 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int HipDeviceInfoSupported_0; // ebx
  _DWORD *v6; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v8; // rax
  size_t v10; // r8
  char *pPrivateDriverData; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  int v17; // r14d
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID v23; // rcx
  __int64 v24; // r15
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER v26; // r8
  LARGE_INTEGER v27; // r14
  bool v28; // al
  __int64 v29; // rax
  int HipDeviceInfo_0; // eax
  UINT v31; // eax
  size_t v32; // r8
  char *v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-28h]

  HipDeviceInfoSupported_0 = 0;
  v6 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v6 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
    if ( !v6 )
    {
      v8 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v8 + 24) = a1->PrivateDriverDataSize;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
    v10 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v10] < pPrivateDriverData || &pPrivateDriverData[v10] > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v6, pPrivateDriverData, v10);
  }
  switch ( a1->Type )
  {
    case D3DKMT_ESCAPE_WIN32K_START:
      v31 = a1->PrivateDriverDataSize;
      if ( v31 < 4 || v31 != *v6 )
        goto LABEL_52;
      HipDeviceInfoSupported_0 = IsUserGetHipDeviceInfoSupported_0();
      if ( HipDeviceInfoSupported_0 < 0 )
        goto LABEL_80;
      HipDeviceInfo_0 = UserGetHipDeviceInfo_0();
      goto LABEL_79;
    case D3DKMT_ESCAPE_WIN32K_QUERY_CD_ROTATION_BLOCK:
      QueryAllowAppLiteRotationModeChangeOverride();
      HipDeviceInfoSupported_0 = 0;
      goto LABEL_81;
    case D3DKMT_ESCAPE_WIN32K_DPI_INFO:
      if ( a1->PrivateDriverDataSize == 104 )
      {
        HipDeviceInfo_0 = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v6, (struct _DPI_INFORMATION *const)(v6 + 2));
        goto LABEL_79;
      }
      HipDeviceInfoSupported_0 = -1073741811;
LABEL_65:
      if ( a1->PrivateDriverDataSize >= 8 )
      {
        if ( *v6 == 1 )
        {
          if ( qword_1C01015A8 )
            v6[1] = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
          else
            HipDeviceInfoSupported_0 = -1073741637;
          goto LABEL_80;
        }
        if ( *v6 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = v6[1];
          goto LABEL_80;
        }
LABEL_17:
        HipDeviceInfoSupported_0 = -1073741811;
        goto LABEL_80;
      }
LABEL_52:
      HipDeviceInfoSupported_0 = -1073741811;
      goto LABEL_86;
    case D3DKMT_ESCAPE_WIN32K_PRESENTER_VIEW_INFO:
      goto LABEL_65;
    case D3DKMT_ESCAPE_WIN32K_SYSTEM_DPI:
      if ( a1->PrivateDriverDataSize == 6 )
      {
        *(_WORD *)v6 = gdmLogPixels;
        *((_WORD *)v6 + 1) = *((_WORD *)gpsi + 3643);
        *((_WORD *)v6 + 2) = *(_WORD *)(gpDispInfo + 176);
        goto LABEL_80;
      }
      goto LABEL_52;
    case D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK:
      if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
        goto LABEL_54;
      HipDeviceInfo_0 = _guard_dispatch_icall_fptr();
LABEL_79:
      HipDeviceInfoSupported_0 = HipDeviceInfo_0;
      goto LABEL_80;
  }
  v12 = (unsigned int)(a1->Type - 1030);
  if ( a1->Type == D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
  {
    if ( a1->PrivateDriverDataSize != 4 )
      goto LABEL_52;
    if ( gbOSTestSigningEnabled )
    {
      if ( (*v6 & 2) == 0 || (*v6 & 1) != 0 )
      {
        gOutputDuplicationTestControl = *v6;
        goto LABEL_80;
      }
      v29 = WdLogNewEntry5_WdError(v12, a2, a3, a4);
      *(_QWORD *)(v29 + 24) = a1->Type;
      WdLogEvent5_WdError(v29);
      goto LABEL_52;
    }
LABEL_54:
    HipDeviceInfoSupported_0 = -1073741790;
    goto LABEL_86;
  }
  if ( a1->Type != D3DKMT_ESCAPE_WIN32K_USER_DETECTED_BLACK_SCREEN )
  {
    v13 = WdLogNewEntry5_WdError(v12, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = a1->Type;
    WdLogEvent5_WdError(v13);
    goto LABEL_17;
  }
  if ( !(unsigned int)DxgkEngIsDwmProcess_0() )
  {
    HipDeviceInfoSupported_0 = -1073741790;
    goto LABEL_80;
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v16 = 0LL;
  do
  {
    v17 = 0;
    v18 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v18 )
      v16 = *v18;
    if ( IsCurrentProcessDwm(v20, v19)
      || (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v16 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v23 = gpsemDITHitTestWaiters;
      goto LABEL_33;
    }
    if ( v16 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v23 = gpsemRITBlockedOnDITWaiters;
LABEL_33:
      KeWaitForSingleObject(v23, UserRequest, 0, 0, 0LL);
      v17 = 1;
    }
  }
  while ( v17 == 1 );
  v24 = PsGetCurrentThreadWin32Thread(v22);
  if ( v24 )
  {
    v27 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v24 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v28 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v28 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(v34) = 0;
        Template_xqx(
          v25.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v26.QuadPart,
          v27.QuadPart,
          v34,
          gullUserCritAcquireToken);
      }
    }
    if ( v27.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v34) = 1000 * v27.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v27.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v26.QuadPart,
        0LL,
        v34,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v24 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v16;
  gbValidateHandleForIL = 1;
  xxxDisplayDiagBlackScreenDetected();
  HipDeviceInfoSupported_0 = 0;
  UserSessionSwitchLeaveCrit();
LABEL_80:
  if ( HipDeviceInfoSupported_0 < 0 )
  {
LABEL_86:
    if ( v6 )
      Win32FreePool();
  }
  else
  {
LABEL_81:
    if ( v6 )
    {
      v32 = a1->PrivateDriverDataSize;
      v33 = (char *)a1->pPrivateDriverData;
      if ( &v33[v32] > W32UserProbeAddress || &v33[v32] <= v33 )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v33, v6, v32);
      goto LABEL_86;
    }
  }
  return (unsigned int)HipDeviceInfoSupported_0;
}
