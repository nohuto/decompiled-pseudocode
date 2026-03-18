/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C0074780 (NtGdiDdDDIEscape.c)
 * Callees:
 *     DxgkEngIsDwmProcess_0 @ 0x1C00015D0 (DxgkEngIsDwmProcess_0.c)
 *     IsUserGetHipDeviceInfoSupported_0 @ 0x1C00017C8 (IsUserGetHipDeviceInfoSupported_0.c)
 *     UserGetHipDeviceInfo_0 @ 0x1C00017D0 (UserGetHipDeviceInfo_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0066E88 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00692C0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00C6E78 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00C7CC0 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int HipDeviceInfoSupported_0; // ebx
  _WORD *v6; // rdi
  size_t PrivateDriverDataSize; // rcx
  size_t v8; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  int CurrentDpiInfoFromHDC; // eax
  size_t v15; // r8
  char *v16; // rcx
  __int64 v18; // rax
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  UINT v24; // eax
  __int64 v25; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r15
  int v30; // ecx
  LARGE_INTEGER v31; // rbx
  int v32; // r8d
  bool v33; // al
  __int64 v34; // rcx
  LARGE_INTEGER *v35; // rbx
  struct tagTHREADINFO *v36; // r12
  __int64 v37; // rcx
  __int64 v38; // r15
  int v39; // ecx
  LARGE_INTEGER v40; // rbx
  int v41; // r8d
  bool v42; // al

  HipDeviceInfoSupported_0 = 0;
  v6 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v6 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
  if ( v6 )
  {
    v8 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v8] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v8] > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v6, pPrivateDriverData, v8);
LABEL_7:
    Type = a1->Type;
    if ( Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      if ( Type != D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
      {
        v19 = Type - 1024;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            QueryAllowAppLiteRotationModeChangeOverride();
            HipDeviceInfoSupported_0 = 0;
LABEL_16:
            if ( !v6 )
              return (unsigned int)HipDeviceInfoSupported_0;
            v15 = a1->PrivateDriverDataSize;
            v16 = (char *)a1->pPrivateDriverData;
            if ( (unsigned __int64)&v16[v15] > W32UserProbeAddress || &v16[v15] <= v16 )
              *(_BYTE *)W32UserProbeAddress = 0;
            memmove(v16, v6, v15);
LABEL_21:
            if ( v6 )
              Win32FreePool();
            return (unsigned int)HipDeviceInfoSupported_0;
          }
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = (unsigned int)(v21 - 1);
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                if ( a1->PrivateDriverDataSize == 6 )
                {
                  *v6 = gdmLogPixels;
                  v6[1] = *((_WORD *)gpsi + 4339);
                  v6[2] = *(_WORD *)(gpDispInfo + 176);
                  goto LABEL_15;
                }
                goto LABEL_34;
              }
              goto LABEL_56;
            }
          }
          else
          {
            if ( a1->PrivateDriverDataSize == 104 )
            {
              CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v6, (struct _DPI_INFORMATION *const)(v6 + 4));
              goto LABEL_14;
            }
            HipDeviceInfoSupported_0 = -1073741811;
          }
          if ( a1->PrivateDriverDataSize < 8 )
            goto LABEL_34;
          if ( *(_DWORD *)v6 == 1 )
          {
            if ( qword_1C011B708 )
            {
              *((_DWORD *)v6 + 1) = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
              goto LABEL_15;
            }
            goto LABEL_82;
          }
          if ( *(_DWORD *)v6 == 2 && gbOSTestSigningEnabled )
          {
            gbBypassPresenterViewProcessCheck = *((_DWORD *)v6 + 1);
            goto LABEL_15;
          }
LABEL_57:
          HipDeviceInfoSupported_0 = -1073741811;
          goto LABEL_15;
        }
        v24 = a1->PrivateDriverDataSize;
        if ( v24 < 4 || v24 != *(_DWORD *)v6 )
          goto LABEL_34;
        HipDeviceInfoSupported_0 = IsUserGetHipDeviceInfoSupported_0();
        if ( HipDeviceInfoSupported_0 >= 0 )
        {
          CurrentDpiInfoFromHDC = UserGetHipDeviceInfo_0();
          goto LABEL_14;
        }
        goto LABEL_15;
      }
      if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
        goto LABEL_13;
    }
    else
    {
      v11 = Type - 1030;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( a1->PrivateDriverDataSize == 76 )
            {
              if ( qword_1C011B8C0 )
              {
LABEL_13:
                CurrentDpiInfoFromHDC = _guard_dispatch_icall_fptr();
LABEL_14:
                HipDeviceInfoSupported_0 = CurrentDpiInfoFromHDC;
                goto LABEL_15;
              }
LABEL_82:
              HipDeviceInfoSupported_0 = -1073741637;
              goto LABEL_15;
            }
LABEL_34:
            HipDeviceInfoSupported_0 = -1073741811;
            goto LABEL_21;
          }
          v22 = (unsigned int)(v13 - 1);
          if ( (_DWORD)v22 )
          {
            if ( (_DWORD)v22 == 1 )
            {
              if ( a1->PrivateDriverDataSize == 40 )
                goto LABEL_13;
              goto LABEL_34;
            }
LABEL_56:
            v25 = WdLogNewEntry5_WdError(v22, a2, a3, a4);
            *(_QWORD *)(v25 + 24) = a1->Type;
            WdLogEvent5_WdError(v25);
            goto LABEL_57;
          }
          if ( a1->PrivateDriverDataSize != 20 )
            goto LABEL_34;
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v22);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v29 = PsGetCurrentThreadWin32Thread(v28);
          if ( v29 )
          {
            v31 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v29 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
            {
              v33 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                 && (qword_1C0118B10 & 0x200000010000000LL) != 0
                 && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
              if ( v33 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v30) = byte_1C0118B28 - 1;
                Template_xqx(
                  v30,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v32,
                  v31.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
            }
            if ( v31.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v32,
                0,
                1000 * v31.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v29 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v27;
          gbValidateHandleForIL = 1;
          DrvAcquireChangeDisplaySettingLocks();
          if ( qword_1C011B8C8 )
            HipDeviceInfoSupported_0 = _guard_dispatch_icall_fptr();
          else
            HipDeviceInfoSupported_0 = -1073741637;
          DrvReleaseChangeDisplaySettingLocks();
LABEL_81:
          UserSessionSwitchLeaveCrit();
          goto LABEL_15;
        }
        if ( (unsigned int)DxgkEngIsDwmProcess_0() )
        {
          v35 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v34);
          if ( v35 )
            v35[1] = KeQueryPerformanceCounter(0LL);
          v36 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v38 = PsGetCurrentThreadWin32Thread(v37);
          if ( v38 )
          {
            v40 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v38 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
            {
              v42 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                 && (qword_1C0118B10 & 0x200000010000000LL) != 0
                 && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
              if ( v42 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v39) = byte_1C0118B28 - 1;
                Template_xqx(
                  v39,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v41,
                  v40.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
            }
            if ( v40.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v41,
                0,
                1000 * v40.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v38 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v36;
          gbValidateHandleForIL = 1;
          xxxDisplayDiagBlackScreenDetected(4u);
          HipDeviceInfoSupported_0 = 0;
          goto LABEL_81;
        }
        HipDeviceInfoSupported_0 = -1073741790;
LABEL_15:
        if ( HipDeviceInfoSupported_0 < 0 )
          goto LABEL_21;
        goto LABEL_16;
      }
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_34;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*(_DWORD *)v6 & 3) == 2 )
        {
          v23 = WdLogNewEntry5_WdError(*(unsigned int *)v6, a2, a3, a4);
          *(_QWORD *)(v23 + 24) = a1->Type;
          WdLogEvent5_WdError(v23);
          goto LABEL_34;
        }
        gOutputDuplicationTestControl = *(_DWORD *)v6;
        goto LABEL_15;
      }
    }
    HipDeviceInfoSupported_0 = -1073741790;
    goto LABEL_21;
  }
  v18 = WdLogNewEntry5_WdLowResource();
  *(_QWORD *)(v18 + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource(v18);
  return 3221225495LL;
}
