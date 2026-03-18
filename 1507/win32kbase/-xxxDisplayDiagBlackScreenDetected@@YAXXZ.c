/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B92E0 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00A5A84 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00BBA80 (DrvDxgkPollDisplayChildren.c)
 */

void xxxDisplayDiagBlackScreenDetected(void)
{
  __int64 v0; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rcx
  __int64 v9; // rsi
  int v10; // ecx
  LARGE_INTEGER v11; // rdi
  int v12; // r8d
  int v13; // r14d
  __int64 v14; // rcx
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID v22; // rcx
  __int64 v23; // rsi
  int v24; // ecx
  LARGE_INTEGER v25; // rdi
  int v26; // r8d
  __int64 v27; // r11
  __int64 v28; // r10
  unsigned __int16 v29; // bx
  const GUID *v30; // r9
  __int16 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+52h] [rbp-AEh] BYREF
  _DWORD v33[11]; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD v34[2]; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int16 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  _DWORD *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  _DWORD *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  _DWORD *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  _DWORD *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  _DWORD *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  _DWORD *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int64 v52; // [rsp+130h] [rbp+30h]
  _DWORD v53[2]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  _DWORD *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+160h] [rbp+60h]
  _DWORD v59[2]; // [rsp+168h] [rbp+68h] BYREF

  while ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v2 = 0LL;
    while ( 1 )
    {
      v3 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v3 )
        v2 = *v3;
      if ( IsCurrentProcessDwm(v5, v4)
        || (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v2 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v2 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
    }
    v9 = PsGetCurrentThreadWin32Thread(v7);
    if ( v9 )
    {
      v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10) = byte_1C00FEA58 - 1;
        Template_xqx(v10, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v11.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
  }
  memset(v33, 0, sizeof(v33));
  HIWORD(v32) = gProtocolType;
  if ( !gProtocolType )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)((char *)&v32 + 6));
    v33[0] = 1;
    UserSessionSwitchLeaveCrit();
    v34[0] = 0;
    v34[1] = 26;
    v13 = DrvDxgkPollDisplayChildren(v34);
    v33[1] = v13;
    v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
    if ( v15 )
      v15[1] = KeQueryPerformanceCounter(0LL);
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v17 )
        v16 = *v17;
      if ( IsCurrentProcessDwm(v19, v18)
        || (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v16 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v22 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v16 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v22 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v22, UserRequest, 0, 0, 0LL);
    }
    v23 = PsGetCurrentThreadWin32Thread(v21);
    if ( v23 )
    {
      v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v24) = byte_1C00FEA58 - 1;
        Template_xqx(v24, (unsigned int)&AcquiredExclusiveUserCritEvent, v26, v25.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v25.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v26,
          0,
          1000 * v25.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v16;
    gbValidateHandleForIL = 1;
    if ( v13 >= 0 )
      v33[2] = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x98Fu, 0x82u, 1, 0LL, 0, (bool *)&v32);
  }
  v27 = *(_QWORD *)&v33[7];
  v28 = *(_QWORD *)&v33[9];
  if ( *(_QWORD *)&v33[9] )
    v29 = LOWORD(v33[5]) << 6;
  else
    v29 = 0;
  if ( dword_1C00FE990 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x400000000000uLL) )
  {
    v31 = 2;
    v36 = &v31;
    v38 = v33;
    v40 = (char *)&v32 + 6;
    v42 = &v33[3];
    v44 = &v33[1];
    v46 = &v33[2];
    v48 = &v33[4];
    v50 = v53;
    v53[0] = (unsigned __int16)v30;
    v54 = &v33[5];
    v56 = v59;
    v59[0] = v29;
    v37 = 2LL;
    v39 = 4LL;
    v41 = 2LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 2LL;
    v52 = v27;
    v53[1] = 0;
    v55 = 4LL;
    v57 = 2LL;
    v58 = v28;
    v59[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EAB79, 0LL, v30, 0xEu, &pData);
    v28 = *(_QWORD *)&v33[9];
    v27 = *(_QWORD *)&v33[7];
  }
  if ( v27 )
  {
    Win32FreePool();
    v28 = *(_QWORD *)&v33[9];
  }
  if ( v28 )
    Win32FreePool();
}
