/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C006D7B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A9454 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00BD71C (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BD928 (DrvProcessSetDisplayConfigParameters.c)
 * Callees:
 *     bSetDevDragRect_0 @ 0x1C0001020 (bSetDevDragRect_0.c)
 *     SetPointer_0 @ 0x1C0002198 (SetPointer_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002278 (xxxUserResetDisplayDevice_0.c)
 *     FreeAllSpbs_0 @ 0x1C00023D8 (FreeAllSpbs_0.c)
 *     StopFade_0 @ 0x1C00023E0 (StopFade_0.c)
 *     xxxInternalInvalidate_0 @ 0x1C00023E8 (xxxInternalInvalidate_0.c)
 *     zzzUpdateCursorImage_0 @ 0x1C00023F0 (zzzUpdateCursorImage_0.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C00527C0 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1C0052ED0 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D6FC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     SafeEnableMDEV @ 0x1C0087B60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0087C00 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00BBF18 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        char a9,
        bool *a10)
{
  unsigned int v10; // r15d
  unsigned int v11; // edi
  int v12; // ebx
  __int64 v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // r12
  ULONG TimeIncrement; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  void *v23; // r8
  int v24; // eax
  int v25; // edi
  unsigned int v26; // edi
  __int64 v28; // rax
  unsigned int v29; // edx
  char *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // r15
  _DWORD *v33; // r14
  int TargetVirtualization; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // edx
  int *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  void *v43; // rdx
  const GUID *v44; // r9
  unsigned __int8 v45[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v46; // [rsp+88h] [rbp-78h]
  int v47[2]; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v49; // [rsp+9Ch] [rbp-64h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  unsigned int v51; // [rsp+A8h] [rbp-58h] BYREF
  int v52[2]; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  bool *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v57; // [rsp+F0h] [rbp-10h]
  int v58; // [rsp+F8h] [rbp-8h]
  int v59; // [rsp+FCh] [rbp-4h]
  unsigned int *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]

  v10 = a3;
  v11 = (unsigned int)a5;
  v12 = a4;
  v13 = a8;
  v14 = a2;
  v54 = a10;
  v15 = a1;
  v46 = a3;
  *(_QWORD *)v52 = a4;
  *(_QWORD *)v47 = a2;
  v53 = 0LL;
  v48 = 0;
  v49 = (unsigned int)a5;
  v45[0] = 0;
  v45[1] = 0;
  *(_DWORD *)&v45[4] = 0;
  if ( ((unsigned __int16)a5 & 0xC000) == 0xC000 )
  {
    v28 = WdLogNewEntry5_WdError(49152LL, a2, 0LL, a4);
    LODWORD(v20) = -1073741581;
    *(_QWORD *)(v28 + 24) = -1073741581LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v20;
  }
  if ( ((unsigned __int16)a5 & 0x4000) != 0 )
  {
    if ( a2 )
    {
      v29 = 0;
      if ( a1 )
      {
        v30 = (char *)(v14 + 3);
        do
        {
          v31 = *(_WORD *)v30;
          *((_WORD *)v30 + 1) = *(_WORD *)v30;
          if ( v31 == -1 || ((unsigned __int8)a5 & 0x10) != 0 )
            *(_WORD *)v30 = v29;
          else
            *(_DWORD *)v30 |= 0xFFFFu;
          *((_DWORD *)v30 + 14) &= 0xDu;
          ++v29;
          v30 += 72;
        }
        while ( v29 < (unsigned int)v15 );
      }
    }
    v11 = (unsigned int)a5 & 0xFFFF3FFF | 0x8000;
  }
  v50 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v17 = a6;
  LODWORD(v17) = a6 | 0x100;
  v50 *= TimeIncrement;
  DisplayScenarioJournalBegin(v11, v17, (unsigned __int16)gProtocolType);
  if ( !a8 || (*(_DWORD *)(a8 + 32) & 8) != 0 )
    v13 = *((_QWORD *)gptiCurrent + 51);
  if ( (PVOID)PsGetCurrentProcess(v19, v18) == gpepCSRSS || !a9 || (a6 & 0x10) != 0 )
  {
    if ( !v13 )
      v13 = grpdeskRitInput;
LABEL_8:
    LODWORD(v20) = DrvSetDisplayConfigValidateParams(v15, (_DWORD)v14, v10, v12, v11, a6, a9);
    if ( (int)v20 < 0 )
    {
      v26 = 1;
LABEL_31:
      if ( v54 )
        *v54 = v26 - 27 <= 1;
      if ( (int)v20 >= 0 && v26 == 29 )
        LODWORD(v20) = -1073741266;
      LogDiagSDC(v15, v14, v10, *(const void **)v52, v49, v20, v48, v26, v50, v45[0]);
      DisplayScenarioJournalFinalize((unsigned int)v20, v26);
      if ( (int)v20 < 0 && dword_1C0101D10 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0101D10, 0x200000000000uLL) )
        {
          v59 = 0;
          v62 = 0;
          v55 = (int)v20;
          v57 = &v55;
          v60 = &v51;
          v58 = 8;
          v51 = v26;
          v61 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C0101D10, &unk_1C00EDA2F, 0LL, v44, 4u, &pData);
        }
      }
      return (unsigned int)v20;
    }
    if ( (v11 & 0x8000) == 0 )
    {
      if ( (v11 & 0x20) == 0 || !v14 )
      {
        LODWORD(v20) = 0;
        goto LABEL_12;
      }
      v32 = 0LL;
      if ( (_DWORD)v15 )
      {
        v33 = v14 + 2;
        while ( 1 )
        {
          TargetVirtualization = GetTargetVirtualization(
                                   *(struct _LUID *)(*(_QWORD *)v47 + 72 * v32 + 20),
                                   v33[5],
                                   &v45[3],
                                   &v45[2],
                                   0LL);
          v20 = TargetVirtualization;
          if ( TargetVirtualization < 0 )
            break;
          if ( v45[3] && !v45[2] )
          {
            v39 = -1;
            v40 = (int *)(*(_QWORD *)v47 + 40LL);
            v41 = v15;
            do
            {
              if ( *(v33 - 2) == *(v40 - 10) && *(v33 - 1) == *(v40 - 9) && *v33 == *(v40 - 8) )
              {
                if ( v39 == -1 )
                  v39 = *v40;
                else
                  *v40 = v39;
              }
              v40 += 18;
              --v41;
            }
            while ( v41 );
          }
          v32 = (unsigned int)(v32 + 1);
          v33 += 18;
          if ( (unsigned int)v32 >= (unsigned int)v15 )
            goto LABEL_13;
        }
        v42 = WdLogNewEntry5_WdError(v36, v35, v37, v38);
        *(_QWORD *)(v42 + 24) = v20;
        WdLogEvent5_WdError(v42);
LABEL_12:
        if ( (int)v20 >= 0 )
          goto LABEL_13;
        return (unsigned int)v20;
      }
    }
LABEL_13:
    if ( (v11 & 0x80) != 0 )
    {
      if ( gbMDEVDisabled )
      {
        v26 = 27;
      }
      else
      {
        if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
        {
          CachedMonitor = CreateCachedMonitor();
          v22 = *(_DWORD *)&v45[4];
          if ( !CachedMonitor )
            v22 = 16;
          *(_DWORD *)&v45[4] = v22;
          SetPointer_0();
          FreeAllSpbs_0();
          goto LABEL_19;
        }
        v26 = 28;
      }
      v10 = v46;
      LODWORD(v20) = -1073741823;
LABEL_88:
      v14 = *(_DWORD **)v47;
      goto LABEL_31;
    }
LABEL_19:
    if ( qword_1C0104A78 )
      StopFade_0();
    bSetDevDragRect_0();
    if ( v13 )
      v23 = *(void **)(v13 + 40);
    else
      v23 = 0LL;
    v10 = v46;
    v24 = DrvSetDisplayConfig(
            (unsigned int)v15,
            *(__int64 *)v47,
            v46,
            *(struct DISPLAYCONFIG_MODE_INFO **)v52,
            v11,
            a6 | 0x140,
            v23,
            a9,
            0LL,
            *(struct _MDEV **)(gpDispInfo + 8),
            (struct _MDEV **)&v53,
            &v48,
            (unsigned int *)&v45[4],
            (char *)v45,
            (struct _DISPLAYCONFIG_CDS_REQUEST *)&v45[1]);
    LODWORD(v20) = v24;
    if ( (v11 & 0x80) != 0 )
    {
      v14 = *(_DWORD **)v47;
      v25 = v24;
      DisplayScenarioJournalSetSDCPathsAndModes(
        (unsigned int)(72 * v15),
        (unsigned int)v15,
        *(_QWORD *)v47,
        v10 << 6,
        v10,
        *(_QWORD *)v52);
      if ( (int)v20 >= 0 )
        goto LABEL_25;
      if ( v45[1] )
      {
        if ( v13 )
          v43 = *(void **)(v13 + 40);
        else
          v43 = 0LL;
        v25 = DrvSetDisplayConfig(
                0LL,
                0LL,
                0,
                0LL,
                2447,
                0x102u,
                v43,
                0,
                0LL,
                *(struct _MDEV **)(gpDispInfo + 8),
                (struct _MDEV **)&v53,
                0LL,
                0LL,
                (char *)v45,
                0LL);
      }
      if ( v25 >= 0 )
      {
LABEL_25:
        gppiFullscreen = 0LL;
        if ( !v45[0] )
        {
          *(_QWORD *)(gpDispInfo + 8) = v53;
          xxxResetDisplayDevice(v13, 0, ((unsigned __int8)(a6 | 0x40) >> 4) & 1, a7);
          goto LABEL_27;
        }
        if ( (a6 & 4) != 0 )
        {
LABEL_27:
          if ( v13 && (*(_DWORD *)(*(_QWORD *)(v13 + 8) + 244LL) & 1) == 0 )
            xxxInternalInvalidate_0();
          SetPointer_0();
          zzzUpdateCursorImage_0();
          v26 = *(_DWORD *)&v45[4];
          goto LABEL_31;
        }
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
      }
      xxxUserResetDisplayDevice_0();
      goto LABEL_27;
    }
    v26 = *(_DWORD *)&v45[4];
    goto LABEL_88;
  }
  if ( v13 || !grpdeskRitInput )
    goto LABEL_8;
  return 3221225506LL;
}
