/*
 * XREFs of WritePointerDeviceSettings @ 0x1C022504C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0224B34 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C0224C9C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224E4C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224F94 (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, const unsigned __int16 *a3)
{
  int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v4 = (int)a3;
  v5 = 0;
  v6 = a1 - 147;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          v10 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v9 - 2);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 != 2 )
              return v5;
            v11 = *(_DWORD *)(a2 + 4);
            if ( v11 <= 0x3C )
            {
              dword_1C031F044[0] = *(_DWORD *)(a2 + 4);
              glTOUCH_DRIVER_HW_STACK_LATENCY = v11;
            }
            v12 = *(_DWORD *)(a2 + 8);
            if ( v12 <= 0x3C )
            {
              dword_1C031F054 = *(_DWORD *)(a2 + 8);
              glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v12;
            }
            v5 = 1;
            dword_1C031F064 = *(_DWORD *)(a2 + 12);
            gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C031F064;
            if ( !(_DWORD)a3 )
              goto LABEL_34;
            v13 = WritePredictionSettings(v10, 1LL, a3);
          }
          else
          {
            v13 = SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
          }
        }
        else
        {
          v13 = SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
        }
        v5 = v13;
      }
      else
      {
        v5 = 1;
        dword_1C031F13C = *(_DWORD *)a2;
        dword_1C031F14C = *(_DWORD *)(a2 + 4);
        dword_1C031F15C = *(_DWORD *)(a2 + 8);
        dword_1C031F16C = *(_DWORD *)(a2 + 12);
        dword_1C031F17C = *(_DWORD *)(a2 + 16);
        dword_1C031F18C = *(_DWORD *)(a2 + 20);
        dword_1C031F19C = *(_DWORD *)(a2 + 24);
        if ( (_DWORD)a3 )
        {
          v5 = WriteSettingValues(
                 (const unsigned __int16 **)&gaModeSettings,
                 0x60u,
                 L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters",
                 7u);
          if ( !v5 )
            return v5;
        }
        if ( !gModeMonitor )
          gModeMonitor = 1;
      }
    }
    else
    {
      v5 = 1;
      dword_1C031F1AC = *(_DWORD *)a2;
      dword_1C031F1BC = *(_DWORD *)(a2 + 4);
      dword_1C031F1CC = *(_DWORD *)(a2 + 8);
      dword_1C031F1DC = *(_DWORD *)(a2 + 12);
      dword_1C031F1EC = *(_DWORD *)(a2 + 16);
      dword_1C031F1FC = *(_DWORD *)(a2 + 20);
      dword_1C031F20C = *(_DWORD *)(a2 + 24);
      dword_1C031F21C = *(_DWORD *)(a2 + 28);
      if ( (_DWORD)a3 )
      {
        v5 = WriteSettingValues(
               (const unsigned __int16 **)&gaPenParameters,
               0x60u,
               L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters",
               8u);
        if ( !v5 )
          return v5;
      }
      if ( !gPenMonitor )
        gPenMonitor = 1;
    }
  }
  else
  {
    v5 = 1;
    dword_1C031F23C = *(_DWORD *)a2 == 0;
    dword_1C031F24C = *(_DWORD *)(a2 + 4);
    dword_1C031F25C = *(_DWORD *)(a2 + 8);
    dword_1C031F26C = *(_DWORD *)(a2 + 12);
    dword_1C031F27C = *(_DWORD *)(a2 + 20);
    dword_1C031F28C = *(_DWORD *)(a2 + 24);
    dword_1C031F29C = *(_DWORD *)(a2 + 28);
    dword_1C031F2AC = *(_DWORD *)(a2 + 32);
    dword_1C031F2BC = *(_DWORD *)(a2 + 36);
    dword_1C031F2CC = *(_DWORD *)(a2 + 40);
    dword_1C031F2DC = *(_DWORD *)(a2 + 44);
    dword_1C031F2EC = *(_DWORD *)(a2 + 48);
    dword_1C031F2FC = *(_DWORD *)(a2 + 52);
    gbTouchInputAllowed = *(_DWORD *)(a2 + 28);
    RawInputManagerObject::bTouchInputAllowed = gbTouchInputAllowed;
    if ( (_DWORD)a3 )
    {
      v5 = WriteSettingValues(
             (const unsigned __int16 **)&gaTouchGestureSettings,
             0x3Eu,
             L"\\Software\\Microsoft\\Wisp\\Touch",
             0xDu);
      if ( !v5 )
        return v5;
    }
    if ( !gTouchMonitor )
      gTouchMonitor = 1;
    dword_1C031F22C = *(_DWORD *)(a2 + 16);
    if ( v4 )
      v5 = WriteSettingValues(
             (const unsigned __int16 **)&gMultiTouchGetSettings,
             0x48u,
             L"\\Software\\Microsoft\\Wisp\\MultiTouch",
             1u);
    if ( !v5 )
      return v5;
    if ( !gMultiTouchMonitor )
      gMultiTouchMonitor = 1;
  }
  if ( v5 )
  {
LABEL_34:
    qword_1C032F150 = 0LL;
    qword_1C032F158 = 0LL;
  }
  return v5;
}
