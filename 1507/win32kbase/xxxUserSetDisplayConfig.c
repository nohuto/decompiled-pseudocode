/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C006DFB0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00BBE04 (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BC010 (DrvProcessSetDisplayConfigParameters.c)
 * Callees:
 *     bSetDevDragRect_0 @ 0x1C0001020 (bSetDevDragRect_0.c)
 *     SetPointer_0 @ 0x1C0002168 (SetPointer_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002218 (xxxUserResetDisplayDevice_0.c)
 *     FreeAllSpbs_0 @ 0x1C00023A8 (FreeAllSpbs_0.c)
 *     StopFade_0 @ 0x1C00023B0 (StopFade_0.c)
 *     xxxInternalInvalidate_0 @ 0x1C00023B8 (xxxInternalInvalidate_0.c)
 *     zzzUpdateCursorImage_0 @ 0x1C00023C0 (zzzUpdateCursorImage_0.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AB44 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1C001AE40 (DrvQueryMDEVPowerState.c)
 *     LogDiagSDC @ 0x1C001BD78 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     SafeEnableMDEV @ 0x1C0070960 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0070A00 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C0086040 (DrvSetDisplayConfigValidateParams.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        char a9,
        bool *a10)
{
  unsigned int v10; // edi
  __int64 v12; // rsi
  int v13; // ebx
  char *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  unsigned __int8 v23; // r14
  void *v24; // rdx
  unsigned int v25; // r13d
  signed int v26; // eax
  int v27; // edi
  unsigned int v28; // edi
  __int64 v30; // rax
  unsigned int v31; // edx
  char *v32; // rcx
  __int16 v33; // ax
  void *v34; // rdx
  const GUID *v35; // r9
  _WORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v38; // [rsp+88h] [rbp-78h]
  int v39[2]; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  int v41[2]; // [rsp+A0h] [rbp-60h]
  unsigned int v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+C0h] [rbp-40h]
  bool *v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]

  v10 = a5;
  v12 = a8;
  v46 = a10;
  v13 = a3;
  *(_QWORD *)v41 = a4;
  v38 = a3;
  *(_QWORD *)v39 = a2;
  v14 = a2;
  v44 = 0LL;
  LODWORD(v40) = 0;
  v45 = a5;
  v36[0] = 0;
  v37 = 0;
  if ( (a5 & 0xC000) == 0xC000 )
  {
    v30 = WdLogNewEntry5_WdError(49152LL, a2, a3, a4);
    v17 = -1073741581;
    *(_QWORD *)(v30 + 24) = -1073741581LL;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v17;
  }
  if ( (a5 & 0x4000) != 0 )
  {
    if ( a2 )
    {
      v31 = 0;
      if ( a1 )
      {
        v32 = v14 + 12;
        do
        {
          v33 = *(_WORD *)v32;
          *((_WORD *)v32 + 1) = *(_WORD *)v32;
          if ( v33 == -1 || (a5 & 0x10) != 0 )
            *(_WORD *)v32 = v31;
          else
            *(_DWORD *)v32 |= 0xFFFFu;
          *((_DWORD *)v32 + 14) &= 0xDu;
          ++v31;
          v32 += 72;
        }
        while ( v31 < a1 );
      }
    }
    v10 = a5 & 0xFFFF3FFF | 0x8000;
  }
  v43 = MEMORY[0xFFFFF78000000320];
  v43 *= KeQueryTimeIncrement();
  DisplayScenarioJournalBegin(v10, a6, (unsigned __int16)gProtocolType);
  if ( !a8 || (*(_DWORD *)(a8 + 32) & 8) != 0 )
    v12 = *((_QWORD *)gptiCurrent + 52);
  if ( ((PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS || (a6 & 0x10) != 0) && !v12 )
    v12 = grpdeskRitInput;
  v17 = DrvSetDisplayConfigValidateParams(a1, (_DWORD)v14, v13, v41[0], v10, a6, a9);
  if ( v17 >= 0 )
  {
    if ( (v10 & 0x80) != 0 )
    {
      if ( gbMDEVDisabled )
      {
        v28 = 27;
      }
      else
      {
        if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
        {
          CachedMonitor = CreateCachedMonitor(v19, v18, v20);
          v22 = v37;
          if ( !CachedMonitor )
            v22 = 16;
          v37 = v22;
          SetPointer_0();
          FreeAllSpbs_0();
          goto LABEL_15;
        }
        v28 = 28;
      }
      v25 = v38;
      v17 = -1073741823;
LABEL_64:
      v14 = *(char **)v39;
      goto LABEL_27;
    }
LABEL_15:
    if ( qword_1C0104198 )
      StopFade_0();
    bSetDevDragRect_0();
    v23 = a6 | 0x40;
    if ( v12 )
      v24 = *(void **)(v12 + 40);
    else
      v24 = 0LL;
    v25 = v38;
    v26 = DrvSetDisplayConfig(
            a1,
            *(__int64 *)v39,
            v38,
            *(struct DISPLAYCONFIG_MODE_INFO **)v41,
            v10,
            v23,
            v24,
            a9,
            0LL,
            *(struct _MDEV **)(gpDispInfo + 8),
            (struct _MDEV **)&v44,
            &v40,
            (unsigned int *)&v37,
            (char *)v36,
            (_BYTE *)v36 + 1);
    v17 = v26;
    if ( (v10 & 0x80) != 0 )
    {
      v14 = *(char **)v39;
      v27 = v26;
      DisplayScenarioJournalSetSDCPathsAndModes(72 * a1, a1, *(_QWORD *)v39, v25 << 6, v25, *(_QWORD *)v41);
      if ( v17 >= 0 )
        goto LABEL_21;
      if ( HIBYTE(v36[0]) )
      {
        if ( v12 )
          v34 = *(void **)(v12 + 40);
        else
          v34 = 0LL;
        v27 = DrvSetDisplayConfig(
                0,
                0LL,
                0,
                0LL,
                2447,
                2,
                v34,
                0,
                0LL,
                *(struct _MDEV **)(gpDispInfo + 8),
                (struct _MDEV **)&v44,
                0LL,
                0LL,
                (char *)v36,
                0LL);
      }
      if ( v27 >= 0 )
      {
LABEL_21:
        gppiFullscreen = 0LL;
        if ( !LOBYTE(v36[0]) )
        {
          *(_QWORD *)(gpDispInfo + 8) = v44;
          xxxResetDisplayDevice(v12, 0, (v23 >> 4) & 1, a7);
          goto LABEL_23;
        }
        if ( (a6 & 4) != 0 )
        {
LABEL_23:
          if ( v12 && (*(_DWORD *)(*(_QWORD *)(v12 + 8) + 260LL) & 1) == 0 )
            xxxInternalInvalidate_0();
          SetPointer_0();
          zzzUpdateCursorImage_0();
          v28 = v37;
          goto LABEL_27;
        }
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
      }
      xxxUserResetDisplayDevice_0();
      goto LABEL_23;
    }
    v28 = v37;
    goto LABEL_64;
  }
  v25 = v38;
  v28 = 1;
LABEL_27:
  if ( v46 )
    *v46 = v28 - 27 <= 1;
  if ( v17 >= 0 && v28 == 29 )
    v17 = -1073741266;
  LogDiagSDC(a1, v14, v25, *(const void **)v41, v45, v17, v40, v28, v43, v36[0]);
  DisplayScenarioJournalFinalize((unsigned int)v17, v28);
  if ( v17 < 0 && dword_1C00FE990 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x200000000000uLL) )
  {
    v51 = 0;
    v54 = 0;
    v47 = v17;
    v49 = &v47;
    v52 = &v42;
    v50 = 8;
    v42 = v28;
    v53 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EAD70, 0LL, v35, 4u, &pData);
  }
  return (unsigned int)v17;
}
