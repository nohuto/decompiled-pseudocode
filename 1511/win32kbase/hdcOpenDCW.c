/*
 * XREFs of hdcOpenDCW @ 0x1C0042710
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 * Callees:
 *     IsUMPD_ldevUnloadImageSupported_0 @ 0x1C0001240 (IsUMPD_ldevUnloadImageSupported_0.c)
 *     UMPD_ldevUnloadImageWrap_0 @ 0x1C0001248 (UMPD_ldevUnloadImageWrap_0.c)
 *     IsUMPD_ldevLoadDriverSupported_0 @ 0x1C0001688 (IsUMPD_ldevLoadDriverSupported_0.c)
 *     UMPD_ldevLoadDriverWrap_0 @ 0x1C0001690 (UMPD_ldevLoadDriverWrap_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DrvGetHDEV @ 0x1C0043760 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x1C0043940 (UserGetMonitorDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvDestroyMDEV @ 0x1C0057AB4 (DrvDestroyMDEV.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0088810 (--1DCOBJ@@QEAA@XZ.c)
 *     UserGetCurrentDesktopId @ 0x1C00A8F80 (UserGetCurrentDesktopId.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *a8,
        int a9)
{
  struct _devicemodeW *v10; // r15
  HDC MonitorDC; // rbx
  BOOL v13; // r14d
  struct _MDEV *v14; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *HDEV; // rsi
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // ecx
  int v21; // r8d
  LARGE_INTEGER v22; // r14
  bool v23; // al
  __int64 v24; // rax
  bool v25; // zf
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _LDEV *DriverWrap_0; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v30; // rcx
  signed __int32 v31; // ett
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v32; // rcx
  struct _devicemodeW *v34; // [rsp+40h] [rbp-A8h]
  struct _devicemodeW *v35; // [rsp+40h] [rbp-A8h]
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v36; // [rsp+70h] [rbp-78h] BYREF
  void *v37; // [rsp+78h] [rbp-70h] BYREF
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v38; // [rsp+80h] [rbp-68h] BYREF
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v39; // [rsp+88h] [rbp-60h] BYREF
  struct _UNICODE_STRING v40; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v41[9]; // [rsp+A0h] [rbp-48h] BYREF
  int v45; // [rsp+120h] [rbp+38h]

  v10 = a2;
  MonitorDC = 0LL;
  v13 = a7 != 0;
  v45 = v13;
  if ( !SourceString || v13 )
  {
    v26 = a3;
    goto LABEL_45;
  }
  v14 = 0LL;
  HDEV = 0LL;
  RtlInitUnicodeString(&v40, SourceString);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0LL, 1LL);
  v19 = PsGetCurrentThreadWin32Thread(v18);
  if ( v19 )
  {
    v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v23 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v23 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v20, (unsigned int)&AcquiredSharedUserCritEvent, v21, v22.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v22.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v21,
        0,
        1000 * v22.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)DrvGetHDEV(&v40);
    v10 = a2;
  }
  else
  {
    v10 = a2;
    if ( !a2 )
    {
      v24 = DrvGetHDEV(&v40);
      HDEV = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v24;
      v25 = a4 == 0;
      v26 = a3;
      if ( !v25 && !a3 )
        MonitorDC = (HDC)UserGetMonitorDC(v24);
      goto LABEL_31;
    }
    v14 = DrvCreateMDEV(&v40, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, v34, 0LL);
    if ( !v14 && (unsigned int)UserGetCurrentDesktopId(&v37) )
      v14 = DrvCreateMDEV(&v40, a2, v37, 3u, 0LL, 0, 0, 0, v35, 0LL);
    if ( v14 )
      HDEV = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)*((_QWORD *)v14 + 4);
  }
  v26 = a3;
LABEL_31:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = GreCreateDisplayDC((__int64)HDEV, 0, 0LL)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v41, MonitorDC);
      if ( v41[0] )
      {
        v38 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)(v41[0] + 48LL);
        if ( v38 )
          PDEVOBJ::vUnreferencePdev(&v38, 0);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v41);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v39 = HDEV;
      PDEVOBJ::vUnreferencePdev(&v39, 0);
    }
  }
  if ( v14 )
    Win32FreePool();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit(v28, v27);
  v13 = v45;
LABEL_45:
  if ( !MonitorDC && a5 && v13 && a7 )
  {
    if ( (int)IsUMPD_ldevLoadDriverSupported_0() < 0 )
      DriverWrap_0 = 0LL;
    else
      DriverWrap_0 = (struct _LDEV *)UMPD_ldevLoadDriverWrap_0();
    if ( DriverWrap_0 )
    {
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v36,
        DriverWrap_0,
        v10,
        SourceString,
        *(unsigned __int16 **)(a7 + 32),
        *(unsigned __int16 **)(a7 + 8),
        a5,
        a6,
        0LL,
        0LL,
        v13,
        0,
        0);
      v30 = v36;
      if ( v36 )
      {
        _m_prefetchw(&v36[7]);
        do
          v31 = (signed __int32)v30[7];
        while ( v31 != _InterlockedCompareExchange((volatile signed __int32 *)&v30[7], v31 | 0x80, v31) );
        MonitorDC = GreCreateDisplayDC((__int64)v36, v26, 1LL);
        if ( MonitorDC && a8 )
        {
          v32 = a8;
          if ( a8 >= W32UserProbeAddress )
            v32 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)W32UserProbeAddress;
          *v32 = *v32;
          *a8 = v36[228];
        }
        PDEVOBJ::vUnreferencePdev(&v36, 0);
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
