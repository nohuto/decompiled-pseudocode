/*
 * XREFs of WritePointerDeviceSettings @ 0x1C0225C04
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02256F4 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C022585C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225A0C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225B4C (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
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
              dword_1C0320BFC[0] = *(_DWORD *)(a2 + 4);
              glTOUCH_DRIVER_HW_STACK_LATENCY = v11;
            }
            v12 = *(_DWORD *)(a2 + 8);
            if ( v12 <= 0x3C )
            {
              dword_1C0320C0C = *(_DWORD *)(a2 + 8);
              glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v12;
            }
            v5 = 1;
            dword_1C0320C1C = *(_DWORD *)(a2 + 12);
            gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C0320C1C;
            if ( !(_DWORD)a3 )
              goto LABEL_34;
            v13 = WritePredictionSettings(v10, (const unsigned __int16 *)1, a3);
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
        dword_1C0320CEC = *(_DWORD *)a2;
        dword_1C0320CFC = *(_DWORD *)(a2 + 4);
        dword_1C0320D0C = *(_DWORD *)(a2 + 8);
        dword_1C0320D1C = *(_DWORD *)(a2 + 12);
        dword_1C0320D2C = *(_DWORD *)(a2 + 16);
        dword_1C0320D3C = *(_DWORD *)(a2 + 20);
        dword_1C0320D4C = *(_DWORD *)(a2 + 24);
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
      dword_1C0320D5C = *(_DWORD *)a2;
      dword_1C0320D6C = *(_DWORD *)(a2 + 4);
      dword_1C0320D7C = *(_DWORD *)(a2 + 8);
      dword_1C0320D8C = *(_DWORD *)(a2 + 12);
      dword_1C0320D9C = *(_DWORD *)(a2 + 16);
      dword_1C0320DAC = *(_DWORD *)(a2 + 20);
      dword_1C0320DBC = *(_DWORD *)(a2 + 24);
      dword_1C0320DCC = *(_DWORD *)(a2 + 28);
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
    dword_1C0320DEC = *(_DWORD *)a2 == 0;
    dword_1C0320DFC = *(_DWORD *)(a2 + 4);
    dword_1C0320E0C = *(_DWORD *)(a2 + 8);
    dword_1C0320E1C = *(_DWORD *)(a2 + 12);
    dword_1C0320E2C = *(_DWORD *)(a2 + 20);
    dword_1C0320E3C = *(_DWORD *)(a2 + 24);
    dword_1C0320E4C = *(_DWORD *)(a2 + 28);
    dword_1C0320E5C = *(_DWORD *)(a2 + 32);
    dword_1C0320E6C = *(_DWORD *)(a2 + 36);
    dword_1C0320E7C = *(_DWORD *)(a2 + 40);
    dword_1C0320E8C = *(_DWORD *)(a2 + 44);
    dword_1C0320E9C = *(_DWORD *)(a2 + 48);
    dword_1C0320EAC = *(_DWORD *)(a2 + 52);
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
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
    dword_1C0320DDC = *(_DWORD *)(a2 + 16);
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
    qword_1C03345E8 = 0LL;
    qword_1C03345F0 = 0LL;
  }
  return v5;
}
