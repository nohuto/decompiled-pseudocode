/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00B3520 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00C8F80 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  int v9; // esi
  __int64 v10; // rcx
  LARGE_INTEGER *v11; // rbx
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // ecx
  LARGE_INTEGER v16; // rbx
  int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int16 v20; // bx
  const GUID *v21; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *Timeout; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v26[11]; // [rsp+74h] [rbp-94h] BYREF
  _DWORD v27[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28[8]; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+E8h] [rbp-20h] BYREF
  char *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  _DWORD *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  int *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  _DWORD *v36; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]
  _DWORD *v38; // [rsp+148h] [rbp+40h]
  __int64 v39; // [rsp+150h] [rbp+48h]
  _DWORD *v40; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h]
  _DWORD *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]
  _DWORD *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  __int64 v46; // [rsp+188h] [rbp+80h]
  _DWORD v47[2]; // [rsp+190h] [rbp+88h] BYREF
  _DWORD *v48; // [rsp+198h] [rbp+90h]
  __int64 v49; // [rsp+1A0h] [rbp+98h]
  _DWORD *v50; // [rsp+1A8h] [rbp+A0h]
  __int64 v51; // [rsp+1B0h] [rbp+A8h]
  __int64 v52; // [rsp+1B8h] [rbp+B0h]
  _DWORD v53[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v54; // [rsp+1C8h] [rbp+C0h]
  __int64 v55; // [rsp+1D0h] [rbp+C8h]
  int v56; // [rsp+218h] [rbp+110h] BYREF

  v56 = a1;
  memset(v28, 0, sizeof(v28));
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v28[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[4]) = v56;
  LODWORD(v28[3]) = 15;
  while ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v5 = PsGetCurrentThreadWin32Thread(v4);
    if ( v5 )
    {
      v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v6) = byte_1C0118B28 - 1;
        Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v7.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v8,
          0,
          1000 * v7.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
  }
  memset(v26, 0, sizeof(v26));
  LOWORD(v25) = gProtocolType;
  if ( !gProtocolType )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v25);
    v26[0] = 1;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v27[0] = 0;
    v27[1] = 26;
    v9 = DrvDxgkPollDisplayChildren(v27);
    v26[1] = v9;
    v11 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
    if ( v11 )
      v11[1] = KeQueryPerformanceCounter(0LL);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v14 = PsGetCurrentThreadWin32Thread(v13);
    if ( v14 )
    {
      v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v15) = byte_1C0118B28 - 1;
        Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v16.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v17,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( v9 >= 0 )
    {
      LODWORD(pData) = 128;
      LODWORD(Timeout) = 391;
      v26[2] = xxxUserSetDisplayConfig(
                 0,
                 0LL,
                 0,
                 0LL,
                 Timeout,
                 (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)pData,
                 0,
                 0LL,
                 0,
                 (bool *)&v24,
                 0LL,
                 (__int64)v28);
    }
  }
  v18 = *(_QWORD *)&v26[7];
  v19 = *(_QWORD *)&v26[9];
  if ( *(_QWORD *)&v26[9] )
    v20 = LOWORD(v26[5]) << 6;
  else
    v20 = 0;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    WORD1(v24) = 3;
    v30 = (char *)&v24 + 2;
    v32 = v26;
    v34 = &v25;
    v36 = &v26[3];
    v38 = &v26[1];
    v40 = &v26[2];
    v42 = &v26[4];
    v44 = v47;
    v47[0] = (unsigned __int16)v21;
    v48 = &v26[5];
    v50 = v53;
    v53[0] = v20;
    v54 = &v56;
    v31 = 2LL;
    v33 = 4LL;
    v35 = 2LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 2LL;
    v46 = v18;
    v47[1] = 0;
    v49 = 4LL;
    v51 = 2LL;
    v52 = v19;
    v53[1] = 0;
    v55 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0103A60, 0LL, v21, 0xFu, &v29);
    v19 = *(_QWORD *)&v26[9];
    v18 = *(_QWORD *)&v26[7];
  }
  if ( v18 )
  {
    Win32FreePool();
    v19 = *(_QWORD *)&v26[9];
  }
  if ( v19 )
    Win32FreePool();
}
