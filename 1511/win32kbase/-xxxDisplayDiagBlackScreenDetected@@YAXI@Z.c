/*
 * XREFs of ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00AA368 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C00BD2B0 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  LARGE_INTEGER *v13; // rbx
  struct tagTHREADINFO *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // r8d
  __int64 v20; // r11
  __int64 v21; // r10
  unsigned __int16 v22; // bx
  const GUID *v23; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *Timeout; // [rsp+28h] [rbp-E0h]
  __int16 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+5Ah] [rbp-AEh] BYREF
  _DWORD v27[11]; // [rsp+64h] [rbp-A4h] BYREF
  _DWORD v28[2]; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int16 *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  _DWORD *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  _DWORD *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  _DWORD *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  _DWORD *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  _DWORD *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  _DWORD *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  __int64 v46; // [rsp+138h] [rbp+30h]
  _DWORD v47[2]; // [rsp+140h] [rbp+38h] BYREF
  _DWORD *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  _DWORD *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int64 v52; // [rsp+168h] [rbp+60h]
  _DWORD v53[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  int v56; // [rsp+1C8h] [rbp+C0h] BYREF

  v56 = a1;
  while ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    UserSessionSwitchLeaveCrit(a1, a2);
    KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v6 = PsGetCurrentThreadWin32Thread(v5);
    if ( v6 )
    {
      v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        LOBYTE(a1) = byte_1C01020C8 - 1;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(a1, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
        }
      }
      if ( v7.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
  }
  memset(v27, 0, sizeof(v27));
  HIWORD(v26) = gProtocolType;
  if ( !gProtocolType )
  {
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)((char *)&v26 + 6));
    v27[0] = 1;
    UserSessionSwitchLeaveCrit(v10, v9);
    v28[0] = 0;
    v28[1] = 26;
    v11 = DrvDxgkPollDisplayChildren(v28);
    v27[1] = v11;
    v13 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
      v13[1] = KeQueryPerformanceCounter(0LL);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v16 = PsGetCurrentThreadWin32Thread(v15);
    if ( v16 )
    {
      v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v17) = byte_1C01020C8 - 1;
        Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v19, v18.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v19,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    if ( v11 >= 0 )
    {
      LODWORD(Timeout) = 2447;
      v27[2] = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, Timeout, 0x82u, 1, 0LL, 0, (bool *)&v26);
    }
  }
  v20 = *(_QWORD *)&v27[7];
  v21 = *(_QWORD *)&v27[9];
  if ( *(_QWORD *)&v27[9] )
    v22 = LOWORD(v27[5]) << 6;
  else
    v22 = 0;
  if ( dword_1C0101D10 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0101D10, 0x400000000000uLL) )
  {
    v31 = 2LL;
    v25 = 3;
    v30 = &v25;
    v32 = v27;
    v34 = (char *)&v26 + 6;
    v36 = &v27[3];
    v38 = &v27[1];
    v40 = &v27[2];
    v42 = &v27[4];
    v44 = v47;
    v47[0] = (unsigned __int16)v23;
    v48 = &v27[5];
    v50 = v53;
    v53[0] = v22;
    v54 = &v56;
    v33 = 4LL;
    v35 = 2LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 2LL;
    v46 = v20;
    v47[1] = 0;
    v49 = 4LL;
    v51 = 2LL;
    v52 = v21;
    v53[1] = 0;
    v55 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0101D10, &unk_1C00ED831, 0LL, v23, 0xFu, &pData);
    v21 = *(_QWORD *)&v27[9];
    v20 = *(_QWORD *)&v27[7];
  }
  if ( v20 )
  {
    Win32FreePool();
    v21 = *(_QWORD *)&v27[9];
  }
  if ( v21 )
    Win32FreePool();
}
