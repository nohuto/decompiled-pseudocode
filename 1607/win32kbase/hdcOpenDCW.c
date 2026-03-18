/*
 * XREFs of hdcOpenDCW @ 0x1C0020120
 * Callers:
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 * Callees:
 *     IsUMPD_ldevUnloadImageSupported_0 @ 0x1C0001240 (IsUMPD_ldevUnloadImageSupported_0.c)
 *     UMPD_ldevUnloadImageWrap_0 @ 0x1C0001248 (UMPD_ldevUnloadImageWrap_0.c)
 *     IsUMPD_ldevLoadDriverSupported_0 @ 0x1C00016F8 (IsUMPD_ldevLoadDriverSupported_0.c)
 *     UMPD_ldevLoadDriverWrap_0 @ 0x1C0001700 (UMPD_ldevLoadDriverWrap_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     DrvGetHDEV @ 0x1C0063040 (DrvGetHDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvDestroyMDEV @ 0x1C0069344 (DrvDestroyMDEV.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00B1640 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserGetCurrentDesktopId @ 0x1C00B170C (UserGetCurrentDesktopId.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
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
  __int64 v20; // rcx
  PRKSEMAPHORE v21; // rcx
  __int64 v22; // r15
  int v23; // ecx
  LARGE_INTEGER v24; // rbx
  int v25; // r8d
  bool v26; // al
  __int64 v27; // rax
  bool v28; // zf
  unsigned int v29; // r13d
  struct _LDEV *DriverWrap_0; // rbx
  __int64 v31; // rcx
  signed __int32 v32; // ett
  _QWORD *v33; // rcx
  struct _devicemodeW *v35; // [rsp+40h] [rbp-C8h]
  struct _devicemodeW *v36; // [rsp+40h] [rbp-C8h]
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+78h] [rbp-90h]
  struct _UNICODE_STRING v39; // [rsp+80h] [rbp-88h] BYREF
  void *v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v43[12]; // [rsp+A8h] [rbp-60h] BYREF

  MonitorDC = 0LL;
  v11 = (__int64)a7;
  v12 = a7 != 0LL;
  v38 = v12;
  if ( !SourceString || a7 )
  {
    v29 = a3;
    goto LABEL_59;
  }
  v13 = 0LL;
  HDEV = 0LL;
  RtlInitUnicodeString(&v39, SourceString);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v17 = 0LL;
  do
  {
    v18 = 0;
    v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v19 )
      v17 = *v19;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v20) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v17 == gptiRit )
        continue;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v17 != gptiRit )
    {
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v21, UserRequest, 0, 0, 0LL);
      v18 = 1;
    }
  }
  while ( v18 == 1 );
  v22 = PsGetCurrentThreadWin32Thread(v20);
  if ( v22 )
  {
    v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v26 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v26 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v23, (unsigned int)&AcquiredSharedUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v24.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v24.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v25,
        0,
        1000 * v24.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v39);
    goto LABEL_44;
  }
  if ( a2 )
  {
    v13 = DrvCreateMDEV(&v39, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, v35, 0LL);
    if ( !v13 && (unsigned int)UserGetCurrentDesktopId(&v40) )
      v13 = DrvCreateMDEV(&v39, a2, v40, 3u, 0LL, 0, 0, 0, v36, 0LL);
    if ( v13 )
      HDEV = *((_QWORD *)v13 + 4);
LABEL_44:
    v29 = a3;
  }
  else
  {
    v27 = DrvGetHDEV(&v39);
    HDEV = v27;
    v28 = a4 == 0;
    v29 = a3;
    if ( !v28 && !a3 )
      MonitorDC = (HDC)UserGetMonitorDC(v27);
  }
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC(HDEV, 0LL, 0LL)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v43, MonitorDC);
      if ( v43[0] )
      {
        v41 = *(_QWORD *)(v43[0] + 48LL);
        if ( v41 )
          PDEVOBJ::vUnreferencePdev(&v41, 0LL);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v43);
    }
    else if ( v13 )
    {
      DrvDestroyMDEV(v13);
    }
    else
    {
      v42 = HDEV;
      PDEVOBJ::vUnreferencePdev(&v42, 0LL);
    }
  }
  if ( v13 )
    Win32FreePool(v13);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit();
  v11 = (__int64)a7;
  v12 = v38;
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
        (PDEVOBJ *)&v37,
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
      v31 = v37;
      if ( v37 )
      {
        _m_prefetchw((const void *)(v37 + 56));
        do
          v32 = *(_DWORD *)(v31 + 56);
        while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 56), v32 | 0x80, v32) );
        MonitorDC = (HDC)GreCreateDisplayDC(v37, v29, 1LL);
        if ( MonitorDC && a8 )
        {
          v33 = a8;
          if ( (unsigned __int64)a8 >= W32UserProbeAddress )
            v33 = (_QWORD *)W32UserProbeAddress;
          *v33 = *v33;
          *a8 = *(_QWORD *)(v37 + 1824);
        }
        PDEVOBJ::vUnreferencePdev(&v37, 0LL);
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
