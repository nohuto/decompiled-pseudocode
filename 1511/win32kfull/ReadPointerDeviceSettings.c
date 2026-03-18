/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C0125F9C
 * Callers:
 *     InitializePointerPrediction @ 0x1C01130B0 (InitializePointerPrediction.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0110824 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0111430 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0113358 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01240E0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C012570C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0125938 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0125BB4 (GetLocalMachineRegistryDWORDValues.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02248F0 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  struct tagDEVICECONFIG_SETTING *v10; // rsi
  __m128i v11; // xmm6
  bool v12; // zf
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct tagDEVICECONFIG_SETTING *v23; // rsi
  _BOOL8 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct tagDEVICECONFIG_SETTING *v38; // rsi
  int v39; // eax
  struct tagDEVICECONFIG_SETTING *v40; // rsi
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  struct tagDEVICECONFIG_SETTING *v50; // rsi
  unsigned int v51; // edx
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // ecx
  int v55; // eax

  v3 = 0;
  v5 = (unsigned int)(a1 - 146);
  if ( !(_DWORD)v5 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    v23 = off_1C031B1C8;
    GetLocalMachineRegistryDWORDValues(v5, L"\\Software\\Microsoft\\Wisp\\Touch", (__int128 *)off_1C031B1C8);
    v24 = (unsigned int)(*((_DWORD *)v23 + 3) - 1) > 0xFFFFFFFD;
    *(_DWORD *)a2 = v24;
    v25 = *((_DWORD *)v23 + 7);
    if ( v25 == -1 )
      v25 = *((_DWORD *)v23 + 6);
    *(_DWORD *)(a2 + 4) = v25;
    v26 = *((_DWORD *)v23 + 11);
    if ( v26 == -1 )
      v26 = *((_DWORD *)v23 + 10);
    *(_DWORD *)(a2 + 8) = v26;
    v27 = *((_DWORD *)v23 + 15);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v23 + 14);
    *(_DWORD *)(a2 + 12) = v27;
    v28 = *((_DWORD *)v23 + 19);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v23 + 18);
    *(_DWORD *)(a2 + 20) = v28;
    v29 = *((_DWORD *)v23 + 23);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v23 + 22);
    *(_DWORD *)(a2 + 24) = v29;
    GetLocalMachineRegistryDWORDValues(v24, L"\\Software\\Microsoft\\Wisp\\Touch", (__int128 *)v23 + 6);
    v31 = *((_DWORD *)v23 + 27);
    if ( v31 == -1 )
      v31 = *((_DWORD *)v23 + 26);
    *(_DWORD *)(a2 + 28) = v31;
    v32 = *((_DWORD *)v23 + 31);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v23 + 30);
    *(_DWORD *)(a2 + 32) = v32;
    v33 = *((_DWORD *)v23 + 35);
    if ( v33 == -1 )
      v33 = *((_DWORD *)v23 + 34);
    *(_DWORD *)(a2 + 36) = v33;
    v34 = *((_DWORD *)v23 + 39);
    if ( v34 == -1 )
      v34 = *((_DWORD *)v23 + 38);
    *(_DWORD *)(a2 + 40) = v34;
    v35 = *((_DWORD *)v23 + 43);
    if ( v35 == -1 )
      v35 = *((_DWORD *)v23 + 42);
    *(_DWORD *)(a2 + 44) = v35;
    v36 = *((_DWORD *)v23 + 47);
    if ( v36 == -1 )
      v36 = *((_DWORD *)v23 + 46);
    *(_DWORD *)(a2 + 48) = v36;
    v37 = *((_DWORD *)v23 + 51);
    if ( v37 == -1 )
      v37 = *((_DWORD *)v23 + 50);
    v12 = gMultiTouchMonitor == 0;
    v38 = off_1C031B1B8;
    *(_DWORD *)(a2 + 52) = v37;
    if ( v12 )
      GetDWORDSettingValues(v38, 0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 1u);
    GetLocalMachineRegistryDWORDValues(v30, L"\\Software\\Microsoft\\Wisp\\MultiTouch", (__int128 *)v38);
    v39 = *((_DWORD *)v38 + 3);
    if ( v39 == -1 )
      v39 = *((_DWORD *)v38 + 2);
    *(_DWORD *)(a2 + 16) = v39;
    return 1;
  }
  v6 = (unsigned int)(v5 - 2);
  if ( !(_DWORD)v6 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v10 = off_1C031B1A8;
    v11 = *((__m128i *)off_1C031B1A8 + 6);
    v12 = (unsigned int)IsFlicksDisabledByGroupPolicy(v6) == 0;
    v13 = *((_DWORD *)v10 + 3);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
    if ( !v12 )
      v14 = 0;
    if ( v13 == -1 )
      v13 = *((_DWORD *)v10 + 2);
    *(_DWORD *)a2 = v13;
    v15 = *((_DWORD *)v10 + 7);
    if ( v15 == -1 )
      v15 = *((_DWORD *)v10 + 6);
    *(_DWORD *)(a2 + 4) = v15;
    v16 = *((_DWORD *)v10 + 11);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v10 + 10);
    *(_DWORD *)(a2 + 8) = v16;
    v17 = *((_DWORD *)v10 + 15);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v10 + 14);
    *(_DWORD *)(a2 + 12) = v17;
    v18 = *((_DWORD *)v10 + 19);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v10 + 18);
    *(_DWORD *)(a2 + 16) = v18;
    v19 = *((_DWORD *)v10 + 23);
    if ( v19 == -1 )
      v19 = *((_DWORD *)v10 + 22);
    *(_DWORD *)(a2 + 20) = v19;
    v20 = v11.m128i_i32[2];
    if ( v14 != -1 )
      v20 = v14;
    *(_DWORD *)(a2 + 24) = v20;
    v21 = *((_DWORD *)v10 + 31);
    if ( v21 == -1 )
      v21 = *((_DWORD *)v10 + 30);
    *(_DWORD *)(a2 + 28) = v21;
    return 1;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v40 = off_1C031F030;
    if ( !gModeMonitor )
      GetDWORDSettingValues(off_1C031F030, 0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 7u);
    v41 = *((_DWORD *)v40 + 3);
    if ( v41 == -1 )
      v41 = *((_DWORD *)v40 + 2);
    *(_DWORD *)a2 = v41;
    v42 = *((_DWORD *)v40 + 7);
    if ( v42 == -1 )
      v42 = *((_DWORD *)v40 + 6);
    *(_DWORD *)(a2 + 4) = v42;
    v43 = *((_DWORD *)v40 + 11);
    if ( v43 == -1 )
      v43 = *((_DWORD *)v40 + 10);
    *(_DWORD *)(a2 + 8) = v43;
    v44 = *((_DWORD *)v40 + 15);
    if ( v44 == -1 )
      v44 = *((_DWORD *)v40 + 14);
    *(_DWORD *)(a2 + 12) = v44;
    v45 = *((_DWORD *)v40 + 19);
    if ( v45 == -1 )
      v45 = *((_DWORD *)v40 + 18);
    *(_DWORD *)(a2 + 16) = v45;
    v46 = *((_DWORD *)v40 + 23);
    if ( v46 == -1 )
      v46 = *((_DWORD *)v40 + 22);
    *(_DWORD *)(a2 + 20) = v46;
    v47 = *((_DWORD *)v40 + 27);
    if ( v47 == -1 )
      v47 = *((_DWORD *)v40 + 26);
    *(_DWORD *)(a2 + 24) = v47;
    return 1;
  }
  v8 = v7 - 2;
  if ( !v8 )
    return (unsigned int)GetFlickMap((struct tagFLICK_MAP *)a2);
  v48 = v8 - 2;
  if ( !v48 )
    return (unsigned int)GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v48 == 2 )
  {
    v49 = gPredictionMonitor;
    if ( !gPredictionMonitor )
    {
      if ( (int)CreatePredictionSettings(off_1C031B188, a2, a3) < 0 )
      {
        v49 = gPredictionMonitor;
      }
      else
      {
        v49 = 1;
        gPredictionMonitor = 1;
      }
    }
    if ( v49 == 1 )
    {
      v50 = off_1C031B188;
      GetPredictionSettings(off_1C031B188, a2, a3);
      v51 = *((_DWORD *)v50 + 3);
      v52 = 60;
      if ( v51 == -1 )
      {
        v53 = *((_DWORD *)v50 + 2);
      }
      else
      {
        v53 = 60;
        if ( v51 <= 0x3C )
          v53 = *((_DWORD *)v50 + 3);
      }
      *(_DWORD *)(a2 + 4) = v53;
      glTOUCH_DRIVER_HW_STACK_LATENCY = v53;
      v54 = *((_DWORD *)v50 + 7);
      if ( v54 == -1 )
      {
        v52 = *((_DWORD *)v50 + 6);
      }
      else if ( v54 <= 0x3C )
      {
        v52 = *((_DWORD *)v50 + 7);
      }
      *(_DWORD *)(a2 + 8) = v52;
      glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v52;
      v55 = *((_DWORD *)v50 + 11);
      if ( v55 == -1 )
        v55 = *((_DWORD *)v50 + 10);
      *(_DWORD *)(a2 + 12) = v55;
      gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v55;
      return 1;
    }
  }
  return v3;
}
