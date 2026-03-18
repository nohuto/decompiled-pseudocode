/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C005D2A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B1F74 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     NtUserSetDisplayConfig @ 0x1C00BB200 (NtUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00C87A0 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00C93EC (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00C960C (DrvProcessSetDisplayConfigParameters.c)
 * Callees:
 *     bSetDevDragRect_0 @ 0x1C0001020 (bSetDevDragRect_0.c)
 *     SetPointer_0 @ 0x1C0001D00 (SetPointer_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0001DD8 (xxxUserResetDisplayDevice_0.c)
 *     FreeAllSpbs_0 @ 0x1C0001F30 (FreeAllSpbs_0.c)
 *     StopFade_0 @ 0x1C0001F38 (StopFade_0.c)
 *     xxxInternalInvalidate_0 @ 0x1C0001F40 (xxxInternalInvalidate_0.c)
 *     zzzUpdateCursorImage_0 @ 0x1C0001F48 (zzzUpdateCursorImage_0.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C005DAB4 (PowerDimUndimResend.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005FCEC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0064918 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1C0064AF0 (DrvQueryMDEVPowerState.c)
 *     SafeEnableMDEV @ 0x1C0088C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0088CA0 (SafeDisableMDEV.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00C7C1C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        int a7,
        __int64 a8,
        char a9,
        bool *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int v12; // esi
  unsigned int v13; // r14d
  int v14; // eax
  int v15; // ebx
  ULONG TimeIncrement; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r15
  PVOID CurrentProcess; // rax
  int v22; // r12d
  __int64 v23; // rbx
  int v24; // r14d
  struct tagMONITOR *CachedMonitor; // rax
  int v26; // ecx
  int v27; // r12d
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rsi
  int v31; // eax
  int v32; // ecx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int16 *v36; // rcx
  __int16 v37; // ax
  __int64 v38; // r15
  _DWORD *v39; // r14
  int TargetVirtualization; // eax
  __int64 v41; // r8
  int *v42; // rcx
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // [rsp+28h] [rbp-79h]
  int v47; // [rsp+50h] [rbp-51h]
  unsigned __int8 v48[8]; // [rsp+88h] [rbp-19h] BYREF
  int v49; // [rsp+90h] [rbp-11h] BYREF
  int v50; // [rsp+94h] [rbp-Dh]
  __int64 v51; // [rsp+98h] [rbp-9h]
  __int64 v52[7]; // [rsp+A0h] [rbp-1h] BYREF

  v12 = (unsigned int)a5;
  v13 = a1;
  v52[0] = 0LL;
  v49 = 0;
  v50 = (int)a5;
  v14 = (unsigned __int16)a5 & 0xC000;
  LOBYTE(a5) = 0;
  v48[0] = 0;
  v15 = a4;
  *(_DWORD *)&v48[4] = 0;
  if ( v14 == 49152 )
  {
    v34 = WdLogNewEntry5_WdError();
    LODWORD(v23) = -1073741581;
    *(_QWORD *)(v34 + 24) = -1073741581LL;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v23;
  }
  if ( (v12 & 0x4000) != 0 )
  {
    if ( a2 )
    {
      v35 = 0;
      if ( a1 )
      {
        v36 = (__int16 *)(a2 + 12);
        do
        {
          v37 = *v36;
          v36[1] = *v36;
          if ( v37 == -1 || (v12 & 0x10) != 0 )
            *v36 = v35;
          else
            *(_DWORD *)v36 |= 0xFFFFu;
          *((_DWORD *)v36 + 14) &= 0xDu;
          ++v35;
          v36 += 36;
        }
        while ( v35 < v13 );
      }
    }
    v12 = v12 & 0xFFFF3FFF | 0x8000;
  }
  v51 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v19 = a8;
  v20 = v51 * TimeIncrement;
  v51 = v20;
  if ( !a8 || (*(_DWORD *)(a8 + 32) & 8) != 0 )
    v19 = *((_QWORD *)gptiCurrent + 51);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v18);
  v22 = (int)a6;
  if ( CurrentProcess == gpepCSRSS || !a9 || ((unsigned __int8)a6 & 0x10) != 0 )
  {
    if ( !v19 )
      v19 = grpdeskRitInput;
LABEL_8:
    LODWORD(v23) = DrvSetDisplayConfigValidateParams(v13, a2, a3, v15, v12, (unsigned int)a6, a9);
    if ( (int)v23 < 0 )
    {
      v30 = a4;
      v32 = 1;
      goto LABEL_33;
    }
    if ( (v12 & 0x8000) == 0 )
    {
      if ( (v12 & 0x20) == 0 || !a2 )
      {
        LODWORD(v23) = 0;
        goto LABEL_12;
      }
      v38 = 0LL;
      if ( v13 )
      {
        v39 = (_DWORD *)(a2 + 8);
        while ( 1 )
        {
          TargetVirtualization = GetTargetVirtualization(
                                   *(struct _LUID *)(a2 + 72 * v38 + 20),
                                   v39[5],
                                   &v48[1],
                                   &v48[2],
                                   0LL,
                                   0LL);
          v23 = TargetVirtualization;
          if ( TargetVirtualization < 0 )
            break;
          if ( v48[1] && !v48[2] )
          {
            v41 = a1;
            v42 = (int *)(a2 + 40);
            v43 = -1;
            do
            {
              if ( *(v39 - 2) == *(v42 - 10) && *(v39 - 1) == *(v42 - 9) && *v39 == *(v42 - 8) )
              {
                if ( v43 == -1 )
                  v43 = *v42;
                else
                  *v42 = v43;
              }
              v42 += 18;
              --v41;
            }
            while ( v41 );
          }
          v38 = (unsigned int)(v38 + 1);
          v39 += 18;
          if ( (unsigned int)v38 >= a1 )
            goto LABEL_13;
        }
        v44 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v44 + 24) = v23;
        WdLogEvent5_WdError(v44);
LABEL_12:
        if ( (int)v23 >= 0 )
          goto LABEL_13;
        return (unsigned int)v23;
      }
    }
LABEL_13:
    v24 = v12 & 0x80;
    if ( (v12 & 0x80) == 0 )
      goto LABEL_19;
    if ( gbMDEVDisabled )
    {
      v32 = 27;
    }
    else
    {
      if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
      {
        CachedMonitor = CreateCachedMonitor();
        v26 = *(_DWORD *)&v48[4];
        if ( !CachedMonitor )
          v26 = 16;
        *(_DWORD *)&v48[4] = v26;
        SetPointer_0();
        FreeAllSpbs_0();
LABEL_19:
        if ( qword_1C011BD88 )
          StopFade_0();
        bSetDevDragRect_0();
        v27 = v22 | 0x40;
        if ( v19 )
          v28 = *(_QWORD *)(v19 + 40);
        else
          v28 = 0LL;
        v29 = a12;
        v46 = v12;
        v30 = a4;
        v31 = DrvSetDisplayConfig(
                a1,
                a2,
                a3,
                a4,
                v46,
                v27 | 0x100u,
                v28,
                a9,
                0LL,
                *(_QWORD *)(gpDispInfo + 8),
                (__int64)v52,
                (__int64)&v49,
                (__int64)&v48[4],
                (__int64)&a5,
                (__int64)v48,
                a12);
        LODWORD(v23) = v31;
        if ( !v24 )
          goto LABEL_31;
        if ( v31 >= 0 )
          goto LABEL_25;
        if ( v48[0] )
        {
          if ( v19 )
            v45 = *(_QWORD *)(v19 + 40);
          else
            v45 = 0LL;
          v31 = DrvSetDisplayConfig(
                  0,
                  0,
                  0,
                  0,
                  0x98Fu,
                  258,
                  v45,
                  0,
                  0LL,
                  *(_QWORD *)(gpDispInfo + 8),
                  (__int64)v52,
                  0LL,
                  0LL,
                  (__int64)&a5,
                  0LL,
                  v29);
        }
        if ( v31 >= 0 )
        {
LABEL_25:
          gppiFullscreen = 0LL;
          if ( !(_BYTE)a5 )
          {
            *(_QWORD *)(gpDispInfo + 8) = v52[0];
            PowerDimUndimResend();
            xxxResetDisplayDevice(v19, 0, ((unsigned __int8)v27 >> 4) & 1);
            goto LABEL_27;
          }
          if ( (v27 & 4) != 0 )
          {
LABEL_27:
            if ( v19 && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) == 0 )
              xxxInternalInvalidate_0();
            SetPointer_0();
            zzzUpdateCursorImage_0();
LABEL_31:
            v32 = *(_DWORD *)&v48[4];
LABEL_32:
            v20 = v51;
            v13 = a1;
LABEL_33:
            if ( a10 )
              *a10 = (unsigned int)(v32 - 27) <= 1;
            if ( a11 )
              *a11 = (_BYTE)a5;
            if ( (int)v23 >= 0 && v32 == 29 )
              LODWORD(v23) = -1073741266;
            LOBYTE(v47) = (_BYTE)a5;
            LogDiagSDC(v13, a2, a3, v30, v50, v23, v49, v32, v20, v47);
            return (unsigned int)v23;
          }
          if ( (unsigned int)SafeDisableMDEV(1LL) )
            SafeEnableMDEV(1LL);
        }
        xxxUserResetDisplayDevice_0();
        goto LABEL_27;
      }
      v32 = 28;
    }
    v30 = a4;
    LODWORD(v23) = -1073741823;
    goto LABEL_32;
  }
  if ( v19 || !grpdeskRitInput )
    goto LABEL_8;
  return 3221225506LL;
}
