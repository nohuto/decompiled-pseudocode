/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C006EB00 (NtGdiDdDDIEscape.c)
 * Callees:
 *     DxgkEngIsDwmProcess_0 @ 0x1C0001560 (DxgkEngIsDwmProcess_0.c)
 *     IsUserGetHipDeviceInfoSupported_0 @ 0x1C0001758 (IsUserGetHipDeviceInfoSupported_0.c)
 *     UserGetHipDeviceInfo_0 @ 0x1C0001760 (UserGetHipDeviceInfo_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0055628 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0057A30 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00BB1A4 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00BBFB0 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int HipDeviceInfoSupported_0; // ebx
  _DWORD *v6; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v8; // rax
  size_t v10; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int64 v16; // rcx
  int HipDeviceInfo_0; // eax
  UINT v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // ecx
  LARGE_INTEGER v27; // rbx
  int v28; // r8d
  bool v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  LARGE_INTEGER *v33; // rbx
  struct tagTHREADINFO *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r15
  int v37; // ecx
  LARGE_INTEGER v38; // rbx
  int v39; // r8d
  bool v40; // al
  __int64 v41; // rax
  size_t v42; // r8
  char *v43; // rcx

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
  Type = a1->Type;
  if ( Type > D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    v19 = (unsigned int)(Type - 1030);
    if ( !(_DWORD)v19 )
    {
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_16;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*v6 & 2) != 0 && (*v6 & 1) == 0 )
        {
          v41 = WdLogNewEntry5_WdError(v19, a2, a3, a4);
          *(_QWORD *)(v41 + 24) = a1->Type;
          WdLogEvent5_WdError(v41);
          goto LABEL_16;
        }
        gOutputDuplicationTestControl = *v6;
        goto LABEL_93;
      }
LABEL_35:
      HipDeviceInfoSupported_0 = -1073741790;
      goto LABEL_99;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v16 = (unsigned int)(v20 - 1);
      if ( !(_DWORD)v16 )
      {
        if ( a1->PrivateDriverDataSize != 76 )
          goto LABEL_16;
        if ( !qword_1C0104570 )
          goto LABEL_67;
        goto LABEL_36;
      }
      if ( (_DWORD)v16 != 1 )
        goto LABEL_41;
      if ( a1->PrivateDriverDataSize != 20 )
        goto LABEL_16;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v25 = PsGetCurrentThreadWin32Thread(v24);
      if ( v25 )
      {
        v27 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v25 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          v29 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
             && (qword_1C01020B0 & 0x200000010000000LL) != 0
             && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
          if ( v29 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v26) = byte_1C01020C8 - 1;
            Template_xqx(
              v26,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v28,
              v27.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v27.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v28,
            0,
            1000 * v27.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v25 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v23;
      gbValidateHandleForIL = 1;
      DrvAcquireChangeDisplaySettingLocks();
      if ( qword_1C0104578 )
        HipDeviceInfoSupported_0 = _guard_dispatch_icall_fptr();
      else
        HipDeviceInfoSupported_0 = -1073741637;
      DrvReleaseChangeDisplaySettingLocks();
    }
    else
    {
      if ( !(unsigned int)DxgkEngIsDwmProcess_0() )
      {
        HipDeviceInfoSupported_0 = -1073741790;
        goto LABEL_93;
      }
      v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32);
      if ( v33 )
        v33[1] = KeQueryPerformanceCounter(0LL);
      v34 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v36 = PsGetCurrentThreadWin32Thread(v35);
      if ( v36 )
      {
        v38 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v36 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          v40 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
             && (qword_1C01020B0 & 0x200000010000000LL) != 0
             && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
          if ( v40 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v37) = byte_1C01020C8 - 1;
            Template_xqx(
              v37,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v39,
              v38.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v38.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v39,
            0,
            1000 * v38.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v36 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v34;
      gbValidateHandleForIL = 1;
      xxxDisplayDiagBlackScreenDetected(4u);
      HipDeviceInfoSupported_0 = 0;
    }
    UserSessionSwitchLeaveCrit(v31, v30);
    goto LABEL_93;
  }
  if ( Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
      goto LABEL_35;
LABEL_36:
    HipDeviceInfo_0 = _guard_dispatch_icall_fptr();
    goto LABEL_33;
  }
  v13 = Type - 1024;
  if ( !v13 )
  {
    v18 = a1->PrivateDriverDataSize;
    if ( v18 < 4 || v18 != *v6 )
      goto LABEL_16;
    HipDeviceInfoSupported_0 = IsUserGetHipDeviceInfoSupported_0();
    if ( HipDeviceInfoSupported_0 < 0 )
      goto LABEL_93;
    HipDeviceInfo_0 = UserGetHipDeviceInfo_0();
    goto LABEL_33;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    QueryAllowAppLiteRotationModeChangeOverride();
    HipDeviceInfoSupported_0 = 0;
    goto LABEL_94;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a1->PrivateDriverDataSize != 104 )
    {
      HipDeviceInfoSupported_0 = -1073741811;
      goto LABEL_20;
    }
    HipDeviceInfo_0 = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v6, (struct _DPI_INFORMATION *const)(v6 + 2));
LABEL_33:
    HipDeviceInfoSupported_0 = HipDeviceInfo_0;
    goto LABEL_93;
  }
  v16 = (unsigned int)(v15 - 1);
  if ( !(_DWORD)v16 )
  {
LABEL_20:
    if ( a1->PrivateDriverDataSize < 8 )
      goto LABEL_16;
    if ( *v6 != 1 )
    {
      if ( *v6 == 2 && gbOSTestSigningEnabled )
      {
        gbBypassPresenterViewProcessCheck = v6[1];
        goto LABEL_93;
      }
      goto LABEL_42;
    }
    if ( qword_1C01043C0 )
    {
      v6[1] = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
      goto LABEL_93;
    }
LABEL_67:
    HipDeviceInfoSupported_0 = -1073741637;
    goto LABEL_93;
  }
  if ( (_DWORD)v16 != 1 )
  {
LABEL_41:
    v21 = WdLogNewEntry5_WdError(v16, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = a1->Type;
    WdLogEvent5_WdError(v21);
LABEL_42:
    HipDeviceInfoSupported_0 = -1073741811;
    goto LABEL_93;
  }
  if ( a1->PrivateDriverDataSize != 6 )
  {
LABEL_16:
    HipDeviceInfoSupported_0 = -1073741811;
    goto LABEL_99;
  }
  *(_WORD *)v6 = gdmLogPixels;
  *((_WORD *)v6 + 1) = *((_WORD *)gpsi + 3643);
  *((_WORD *)v6 + 2) = *(_WORD *)(gpDispInfo + 176);
LABEL_93:
  if ( HipDeviceInfoSupported_0 < 0 )
  {
LABEL_99:
    if ( v6 )
      Win32FreePool();
    return (unsigned int)HipDeviceInfoSupported_0;
  }
LABEL_94:
  if ( v6 )
  {
    v42 = a1->PrivateDriverDataSize;
    v43 = (char *)a1->pPrivateDriverData;
    if ( &v43[v42] > W32UserProbeAddress || &v43[v42] <= v43 )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v43, v6, v42);
    goto LABEL_99;
  }
  return (unsigned int)HipDeviceInfoSupported_0;
}
