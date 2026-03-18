/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0052F30 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     bSetDevDragRect_0 @ 0x1C0001020 (bSetDevDragRect_0.c)
 *     IsbSetDevDragRectSupported_0 @ 0x1C0001028 (IsbSetDevDragRectSupported_0.c)
 *     IsRemoteConnection_0 @ 0x1C0001B40 (IsRemoteConnection_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D80 (PopAndFreeW32ThreadLock_0.c)
 *     SetPointer_0 @ 0x1C0002198 (SetPointer_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002278 (xxxUserResetDisplayDevice_0.c)
 *     FreeAllSpbs_0 @ 0x1C00023D8 (FreeAllSpbs_0.c)
 *     StopFade_0 @ 0x1C00023E0 (StopFade_0.c)
 *     xxxInternalInvalidate_0 @ 0x1C00023E8 (xxxInternalInvalidate_0.c)
 *     zzzUpdateCursorImage_0 @ 0x1C00023F0 (zzzUpdateCursorImage_0.c)
 *     IsFreeAllSpbsSupported_0 @ 0x1C00023F8 (IsFreeAllSpbsSupported_0.c)
 *     IsStopFadeSupported_0 @ 0x1C0002400 (IsStopFadeSupported_0.c)
 *     IszzzUpdateCursorImageSupported_0 @ 0x1C0002408 (IszzzUpdateCursorImageSupported_0.c)
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C0052ED0 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D6FC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C006DB34 (-TrackFullscreenMode@@YAXH@Z.c)
 *     SafeEnableMDEV @ 0x1C0087B60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0087C00 (SafeDisableMDEV.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     DrvSetPruneFlag @ 0x1C00BDD64 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00BDE90 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        unsigned int a7)
{
  int v7; // r13d
  UNICODE_STRING *v10; // r15
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rdx
  int v17; // eax
  void *v18; // rdx
  int v19; // eax
  __int64 v20; // [rsp+80h] [rbp-11h] BYREF
  __int64 v22; // [rsp+F8h] [rbp+67h] BYREF

  v7 = 0;
  v10 = (UNICODE_STRING *)a1;
  LOBYTE(v22) = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(a1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_9;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
  {
    if ( (a4 & 0x20) == 0
      || (v12 = DrvSetVideoParameters(
                  (_DWORD)v10,
                  *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL),
                  a6,
                  (_DWORD)a5,
                  1,
                  1),
          v12 < 0) )
    {
      v12 = -5;
    }
    goto LABEL_10;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v17 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 1, 1);
    goto LABEL_71;
  }
  LOBYTE(a1) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)a1 & ((a4 & 1) == 0)) != 0
    || (v11 = 1610612736LL, (a4 & 0x10000000) != 0) && (a4 & 0x60000000) != 0
    || (a1 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (a4 & 0x60000000) != 0
    || (a4 & 0x60000000) == 0x60000000
    || (a4 & 0x100) != 0 && a4 != 256
    || (a4 & 0x200) != 0 && a4 != 512 )
  {
LABEL_9:
    v12 = -4;
    goto LABEL_10;
  }
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(2147483652LL, 1610612736LL) != gpepCSRSS || !(unsigned int)IsRemoteConnection_0()) )
  {
    goto LABEL_64;
  }
  if ( !a3 || (*((_DWORD *)a3 + 8) & 8) != 0 )
    a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 51);
  if ( (PVOID)PsGetCurrentProcess(a1, v11) != gpepCSRSS )
  {
    if ( a3 == (struct tagDESKTOP *)grpdeskRitInput )
      goto LABEL_22;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v17 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 1, 0);
LABEL_71:
    v12 = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
    goto LABEL_64;
  }
  if ( !a3 )
    a3 = (struct tagDESKTOP *)grpdeskRitInput;
LABEL_22:
  if ( (a4 & 0x100) != 0 )
  {
    v14 = 0LL;
LABEL_75:
    v19 = DrvSetPruneFlag(v10, v14, (unsigned int)a6);
    goto LABEL_90;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v14) = 1;
    goto LABEL_75;
  }
  if ( (a4 & 0x10000002) != 0 )
    goto LABEL_28;
  v7 = 1;
  if ( !CreateCachedMonitor() )
  {
LABEL_64:
    v12 = -1;
    goto LABEL_10;
  }
  SetPointer_0();
  if ( (int)IsFreeAllSpbsSupported_0() >= 0 )
    FreeAllSpbs_0();
LABEL_28:
  if ( qword_1C0104A78 && (int)IsStopFadeSupported_0() >= 0 )
    StopFade_0();
  if ( (int)IsbSetDevDragRectSupported_0() >= 0 )
    bSetDevDragRect_0();
  if ( a3 )
    v15 = *((_QWORD *)a3 + 5);
  else
    v15 = 0LL;
  v12 = DrvChangeDisplaySettings(
          v10,
          *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL),
          a2,
          v15,
          a6,
          a4 & 1,
          v7,
          *(_QWORD *)(gpDispInfo + 8),
          &v20,
          -((a4 & 0x40) == 0),
          (unsigned __int8)a4 & 0x80,
          a4 & 0x20000000,
          a4 & 4,
          (__int64)&v22);
  PushW32ThreadLock_0();
  if ( a3 )
    ObfReferenceObject(a3);
  if ( v7 )
  {
    if ( v12 == 2 )
    {
      TrackFullscreenMode(a4 & 4);
      if ( (a4 & 0x40000000) != 0 )
      {
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        xxxUserResetDisplayDevice_0();
      }
      v12 = 0;
      goto LABEL_39;
    }
    if ( v12 )
    {
      if ( v12 >= 0 )
        goto LABEL_39;
      xxxUserResetDisplayDevice_0();
      if ( !(_BYTE)v22 )
        goto LABEL_39;
      v18 = a3 ? (void *)*((_QWORD *)a3 + 5) : 0LL;
      if ( (int)DrvSetDisplayConfig(
                  0LL,
                  0LL,
                  0,
                  0LL,
                  2447,
                  2u,
                  v18,
                  0,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 8),
                  (struct _MDEV **)&v20,
                  0LL,
                  0LL,
                  (char *)&v22,
                  0LL) < 0 )
        goto LABEL_39;
      gppiFullscreen = 0LL;
      if ( (_BYTE)v22 )
        goto LABEL_39;
      v16 = 0LL;
      *(_QWORD *)(gpDispInfo + 8) = v20;
    }
    else
    {
      TrackFullscreenMode(a4 & 4);
      *(_QWORD *)(gpDispInfo + 8) = v20;
      v16 = a4 & 4;
    }
    xxxResetDisplayDevice(a3, v16, 0LL, a7);
LABEL_39:
    if ( a3 && (*(_DWORD *)(*((_QWORD *)a3 + 1) + 244LL) & 1) == 0 )
      xxxInternalInvalidate_0();
    SetPointer_0();
    if ( (int)IszzzUpdateCursorImageSupported_0() >= 0 )
      zzzUpdateCursorImage_0();
  }
  PopAndFreeW32ThreadLock_0();
  if ( v12 >= 0 && (a4 & 0x20) != 0 )
  {
    v19 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 0, 0);
LABEL_90:
    v12 = v19;
  }
LABEL_10:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(a1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v12;
}
