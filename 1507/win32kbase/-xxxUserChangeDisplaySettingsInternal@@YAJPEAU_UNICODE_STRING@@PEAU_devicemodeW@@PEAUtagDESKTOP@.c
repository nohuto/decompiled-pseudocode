/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     bSetDevDragRect_0 @ 0x1C0001020 (bSetDevDragRect_0.c)
 *     IsbSetDevDragRectSupported_0 @ 0x1C0001028 (IsbSetDevDragRectSupported_0.c)
 *     IsRemoteConnection_0 @ 0x1C0001B20 (IsRemoteConnection_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D60 (PopAndFreeW32ThreadLock_0.c)
 *     SetPointer_0 @ 0x1C0002168 (SetPointer_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002218 (xxxUserResetDisplayDevice_0.c)
 *     FreeAllSpbs_0 @ 0x1C00023A8 (FreeAllSpbs_0.c)
 *     StopFade_0 @ 0x1C00023B0 (StopFade_0.c)
 *     xxxInternalInvalidate_0 @ 0x1C00023B8 (xxxInternalInvalidate_0.c)
 *     zzzUpdateCursorImage_0 @ 0x1C00023C0 (zzzUpdateCursorImage_0.c)
 *     IsFreeAllSpbsSupported_0 @ 0x1C00023C8 (IsFreeAllSpbsSupported_0.c)
 *     IsStopFadeSupported_0 @ 0x1C00023D0 (IsStopFadeSupported_0.c)
 *     IszzzUpdateCursorImageSupported_0 @ 0x1C00023D8 (IszzzUpdateCursorImageSupported_0.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AB44 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C001AB68 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvQueryMDEVPowerState @ 0x1C001AE40 (DrvQueryMDEVPowerState.c)
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     SafeEnableMDEV @ 0x1C0070960 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0070A00 (SafeDisableMDEV.c)
 *     _xxxUserChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT @ 0x1C00A3F5C (_xxxUserChangeDisplaySettingsInternal_--_2_--ETW_PROFILE_EVENT--_ETW_PROFILE_EVENT.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     DrvSetPruneFlag @ 0x1C00BC528 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00BC654 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        int a7)
{
  int v7; // r13d
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r11
  int v20; // edx
  __int64 v21; // rdx
  __int64 v23; // [rsp+80h] [rbp-11h] BYREF
  __int64 v25; // [rsp+F8h] [rbp+67h] BYREF

  v7 = 0;
  LOBYTE(v25) = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    TemplateEventDescriptor(a1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_22;
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
  {
    if ( gbMDEVDisabled )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_44;
      v12 = DrvSetVideoParameters((_DWORD)a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 1, 1);
LABEL_38:
      v11 = v12;
      if ( v12 >= 0 )
        goto LABEL_84;
LABEL_44:
      v11 = -1;
      goto LABEL_84;
    }
    if ( (a4 & 0x10000008) != 0 && (a4 & 1) == 0
      || (v13 = 1610612736LL, (a4 & 0x10000000) != 0) && (a4 & 0x60000000) != 0
      || (v14 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (a4 & 0x60000000) != 0
      || (a4 & 0x60000000) == 0x60000000
      || (a4 & 0x100) != 0 && a4 != 256
      || (a4 & 0x200) != 0 && a4 != 512 )
    {
LABEL_22:
      v11 = -4;
      goto LABEL_84;
    }
    if ( (gdwPUDFlags & 0x20000000) != 0
      && ((PVOID)PsGetCurrentProcess(2147483652LL, 1610612736LL) != gpepCSRSS || !(unsigned int)IsRemoteConnection_0()) )
    {
      goto LABEL_44;
    }
    if ( !a3 || (*((_DWORD *)a3 + 8) & 8) != 0 )
      a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 52);
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS )
    {
      if ( !a3 )
        a3 = (struct tagDESKTOP *)grpdeskRitInput;
    }
    else if ( a3 != (struct tagDESKTOP *)grpdeskRitInput )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_44;
      v12 = DrvSetVideoParameters((_DWORD)a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 1, 0);
      goto LABEL_38;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v15 = 0LL;
LABEL_34:
      v18 = DrvSetPruneFlag(a1, v15, (unsigned int)a6);
      goto LABEL_83;
    }
    if ( (a4 & 0x200) != 0 )
    {
      LOBYTE(v15) = 1;
      goto LABEL_34;
    }
    if ( (a4 & 0x10000002) == 0 )
    {
      v7 = 1;
      if ( !CreateCachedMonitor(v16, v15, v17) )
        goto LABEL_44;
      SetPointer_0();
      if ( (int)IsFreeAllSpbsSupported_0() >= 0 )
        FreeAllSpbs_0();
    }
    if ( qword_1C0104198 && (int)IsStopFadeSupported_0() >= 0 )
      StopFade_0();
    if ( (int)IsbSetDevDragRectSupported_0() >= 0 )
      bSetDevDragRect_0();
    if ( a3 )
      v19 = *((_QWORD *)a3 + 5);
    else
      v19 = 0LL;
    v11 = DrvChangeDisplaySettings(
            a1,
            *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL),
            a2,
            v19,
            a6,
            a4 & 1,
            v7,
            *(_QWORD *)(gpDispInfo + 8),
            &v23,
            -((a4 & 0x40) == 0),
            (unsigned __int8)a4 & 0x80,
            a4 & 0x20000000,
            a4 & 4,
            &v25);
    PushW32ThreadLock_0();
    if ( a3 )
      ObfReferenceObject(a3);
    if ( !v7 )
    {
LABEL_80:
      PopAndFreeW32ThreadLock_0();
      if ( v11 < 0 || (a4 & 0x20) == 0 )
        goto LABEL_84;
      v18 = DrvSetVideoParameters((_DWORD)a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 0, 0);
LABEL_83:
      v11 = v18;
      goto LABEL_84;
    }
    if ( v11 == 2 )
    {
      TrackFullscreenMode(a4 & 4);
      if ( (a4 & 0x40000000) != 0 )
      {
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        xxxUserResetDisplayDevice_0();
      }
      v11 = 0;
      goto LABEL_75;
    }
    if ( v11 )
    {
      if ( v11 >= 0 )
        goto LABEL_75;
      xxxUserResetDisplayDevice_0();
      if ( !(_BYTE)v25 )
        goto LABEL_75;
      v21 = a3 ? *((_QWORD *)a3 + 5) : 0LL;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0,
                  0,
                  0,
                  0x98Fu,
                  2,
                  v21,
                  0,
                  0LL,
                  *(_QWORD *)(gpDispInfo + 8),
                  (__int64)&v23,
                  0LL,
                  0LL,
                  (__int64)&v25,
                  0LL) < 0 )
        goto LABEL_75;
      gppiFullscreen = 0LL;
      if ( (_BYTE)v25 )
        goto LABEL_75;
      v20 = 0;
      *(_QWORD *)(gpDispInfo + 8) = v23;
    }
    else
    {
      TrackFullscreenMode(a4 & 4);
      *(_QWORD *)(gpDispInfo + 8) = v23;
      v20 = a4 & 4;
    }
    xxxResetDisplayDevice((__int64)a3, v20, 0, a7);
LABEL_75:
    if ( a3 && (*(_DWORD *)(*((_QWORD *)a3 + 1) + 260LL) & 1) == 0 )
      xxxInternalInvalidate_0();
    SetPointer_0();
    if ( (int)IszzzUpdateCursorImageSupported_0() >= 0 )
      zzzUpdateCursorImage_0();
    goto LABEL_80;
  }
  if ( (a4 & 0x20) == 0
    || (v11 = DrvSetVideoParameters((_DWORD)a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a6, (_DWORD)a5, 1, 1),
        v11 < 0) )
  {
    v11 = -5;
  }
LABEL_84:
  xxxUserChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT();
  return (unsigned int)v11;
}
