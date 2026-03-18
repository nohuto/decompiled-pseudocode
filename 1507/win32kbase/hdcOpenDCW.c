/*
 * XREFs of hdcOpenDCW @ 0x1C0053650
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 * Callees:
 *     IsUMPD_ldevUnloadImageSupported_0 @ 0x1C0001240 (IsUMPD_ldevUnloadImageSupported_0.c)
 *     UMPD_ldevUnloadImageWrap_0 @ 0x1C0001248 (UMPD_ldevUnloadImageWrap_0.c)
 *     IsUMPD_ldevLoadDriverSupported_0 @ 0x1C00016E8 (IsUMPD_ldevLoadDriverSupported_0.c)
 *     UMPD_ldevLoadDriverWrap_0 @ 0x1C00016F0 (UMPD_ldevLoadDriverWrap_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetHDEV @ 0x1C0053C00 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x1C0053DE0 (UserGetMonitorDC.c)
 *     bDeleteDCInternal @ 0x1C005C1D0 (bDeleteDCInternal.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvDestroyMDEV @ 0x1C0064C34 (DrvDestroyMDEV.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserGetCurrentDesktopId @ 0x1C00A4518 (UserGetCurrentDesktopId.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        HDC a7,
        _QWORD *a8,
        int a9)
{
  HDC MonitorDC; // rdi
  __int64 v11; // r15
  int v12; // r12d
  struct _MDEV *v13; // r14
  __int64 HDEV; // r12
  __int64 v15; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v17; // rbx
  int v18; // r15d
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID v22; // rcx
  __int64 v23; // r15
  int v24; // ecx
  LARGE_INTEGER v25; // rbx
  int v26; // r8d
  bool v27; // al
  __int64 v28; // r8
  __int64 v29; // rax
  bool v30; // zf
  unsigned int v31; // r13d
  struct _LDEV *DriverWrap_0; // rbx
  __int64 v33; // rcx
  signed __int32 v34; // ett
  _QWORD *v35; // rcx
  struct _devicemodeW *v37; // [rsp+40h] [rbp-C8h]
  struct _devicemodeW *v38; // [rsp+40h] [rbp-C8h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  int v40; // [rsp+78h] [rbp-90h]
  struct _UNICODE_STRING v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+90h] [rbp-78h] BYREF
  void *v43; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v45[12]; // [rsp+A8h] [rbp-60h] BYREF

  MonitorDC = 0LL;
  v11 = (__int64)a7;
  v12 = a7 != 0LL;
  v40 = v12;
  if ( !SourceString || a7 )
  {
    v31 = a3;
    goto LABEL_59;
  }
  v13 = 0LL;
  HDEV = 0LL;
  RtlInitUnicodeString(&v41, SourceString);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v17 = 0LL;
  do
  {
    v18 = 0;
    v19 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v19 )
      v17 = *v19;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v17 == gptiRit )
        continue;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v22 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v17 != gptiRit )
    {
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v22 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v22, UserRequest, 0, 0, 0LL);
      v18 = 1;
    }
  }
  while ( v18 == 1 );
  v23 = PsGetCurrentThreadWin32Thread(v21);
  if ( v23 )
  {
    v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v27 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v27 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v24, (unsigned int)&AcquiredSharedUserCritEvent, v26, v25.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v25.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v25.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v26,
        0,
        1000 * v25.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v41);
    goto LABEL_44;
  }
  if ( a2 )
  {
    v13 = DrvCreateMDEV(&v41, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, v37, 0LL);
    if ( !v13 && (unsigned int)UserGetCurrentDesktopId(&v43) )
      v13 = DrvCreateMDEV(&v41, a2, v43, 3u, 0LL, 0, 0, 0, v38, 0LL);
    if ( v13 )
      HDEV = *((_QWORD *)v13 + 4);
LABEL_44:
    v31 = a3;
  }
  else
  {
    v29 = DrvGetHDEV(&v41);
    HDEV = v29;
    v30 = a4 == 0;
    v31 = a3;
    if ( !v30 && !a3 )
      MonitorDC = (HDC)UserGetMonitorDC(v29);
  }
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = GreCreateDisplayDC(HDEV, 0, 0LL)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v45, MonitorDC);
      if ( v45[0] )
      {
        v42 = *(_QWORD *)(v45[0] + 48LL);
        if ( v42 )
          PDEVOBJ::vUnreferencePdev(&v42, 0);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v45);
    }
    else if ( v13 )
    {
      DrvDestroyMDEV(v13);
    }
    else
    {
      v44 = HDEV;
      PDEVOBJ::vUnreferencePdev(&v44, 0);
    }
  }
  if ( v13 )
    Win32FreePool();
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v28);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit();
  v11 = (__int64)a7;
  v12 = v40;
LABEL_59:
  if ( !MonitorDC && a5 && v12 && v11 )
  {
    if ( (int)IsUMPD_ldevLoadDriverSupported_0() < 0 )
      DriverWrap_0 = 0LL;
    else
      DriverWrap_0 = (struct _LDEV *)UMPD_ldevLoadDriverWrap_0();
    if ( DriverWrap_0 )
    {
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v39,
        DriverWrap_0,
        a2,
        SourceString,
        *(unsigned __int16 **)(v11 + 32),
        *(unsigned __int16 **)(v11 + 8),
        a5,
        a6,
        0LL,
        0LL,
        v12,
        0,
        0);
      v33 = v39;
      if ( v39 )
      {
        _m_prefetchw((const void *)(v39 + 56));
        do
          v34 = *(_DWORD *)(v33 + 56);
        while ( v34 != _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 56), v34 | 0x80, v34) );
        MonitorDC = GreCreateDisplayDC(v39, v31, 1LL);
        if ( MonitorDC && a8 )
        {
          v35 = a8;
          if ( a8 >= W32UserProbeAddress )
            v35 = W32UserProbeAddress;
          *v35 = *v35;
          *a8 = *(_QWORD *)(v39 + 1824);
        }
        PDEVOBJ::vUnreferencePdev(&v39, 0);
      }
      else if ( (int)IsUMPD_ldevUnloadImageSupported_0() >= 0 )
      {
        UMPD_ldevUnloadImageWrap_0();
      }
    }
    else
    {
      EngSetLastError(0x77u);
    }
  }
  return MonitorDC;
}
