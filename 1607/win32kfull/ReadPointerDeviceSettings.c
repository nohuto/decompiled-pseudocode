/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C006A3E0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     InitializePointerPrediction @ 0x1C0134680 (InitializePointerPrediction.c)
 * Callees:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C0068400 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C006A7A8 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D278 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D3B8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D824 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0134424 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02254B0 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING *v11; // rsi
  __m128i v12; // xmm6
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct tagDEVICECONFIG_SETTING *v24; // rsi
  _BOOL8 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct tagDEVICECONFIG_SETTING *v39; // rsi
  int v40; // eax
  struct tagDEVICECONFIG_SETTING *v41; // rsi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  struct tagDEVICECONFIG_SETTING *v51; // rsi
  unsigned int v52; // edx
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // ecx
  int v56; // eax

  v4 = 0;
  v6 = (unsigned int)(a1 - 146);
  if ( !(_DWORD)v6 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    v24 = off_1C0320108;
    GetLocalMachineRegistryDWORDValues(v6, L"\\Software\\Microsoft\\Wisp\\Touch", off_1C0320108);
    v25 = (unsigned int)(*((_DWORD *)v24 + 3) - 1) > 0xFFFFFFFD;
    *(_DWORD *)a2 = v25;
    v26 = *((_DWORD *)v24 + 7);
    if ( v26 == -1 )
      v26 = *((_DWORD *)v24 + 6);
    *(_DWORD *)(a2 + 4) = v26;
    v27 = *((_DWORD *)v24 + 11);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v24 + 10);
    *(_DWORD *)(a2 + 8) = v27;
    v28 = *((_DWORD *)v24 + 15);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v24 + 14);
    *(_DWORD *)(a2 + 12) = v28;
    v29 = *((_DWORD *)v24 + 19);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v24 + 18);
    *(_DWORD *)(a2 + 20) = v29;
    v30 = *((_DWORD *)v24 + 23);
    if ( v30 == -1 )
      v30 = *((_DWORD *)v24 + 22);
    *(_DWORD *)(a2 + 24) = v30;
    GetLocalMachineRegistryDWORDValues(v25, L"\\Software\\Microsoft\\Wisp\\Touch", (char *)v24 + 96);
    v32 = *((_DWORD *)v24 + 27);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v24 + 26);
    *(_DWORD *)(a2 + 28) = v32;
    v33 = *((_DWORD *)v24 + 31);
    if ( v33 == -1 )
      v33 = *((_DWORD *)v24 + 30);
    *(_DWORD *)(a2 + 32) = v33;
    v34 = *((_DWORD *)v24 + 35);
    if ( v34 == -1 )
      v34 = *((_DWORD *)v24 + 34);
    *(_DWORD *)(a2 + 36) = v34;
    v35 = *((_DWORD *)v24 + 39);
    if ( v35 == -1 )
      v35 = *((_DWORD *)v24 + 38);
    *(_DWORD *)(a2 + 40) = v35;
    v36 = *((_DWORD *)v24 + 43);
    if ( v36 == -1 )
      v36 = *((_DWORD *)v24 + 42);
    *(_DWORD *)(a2 + 44) = v36;
    v37 = *((_DWORD *)v24 + 47);
    if ( v37 == -1 )
      v37 = *((_DWORD *)v24 + 46);
    *(_DWORD *)(a2 + 48) = v37;
    v38 = *((_DWORD *)v24 + 51);
    if ( v38 == -1 )
      v38 = *((_DWORD *)v24 + 50);
    v13 = gMultiTouchMonitor == 0;
    v39 = off_1C03200F8;
    *(_DWORD *)(a2 + 52) = v38;
    if ( v13 )
      GetDWORDSettingValuesEx(v39, 0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 1u, 0);
    GetLocalMachineRegistryDWORDValues(v31, L"\\Software\\Microsoft\\Wisp\\MultiTouch", v39);
    v40 = *((_DWORD *)v39 + 3);
    if ( v40 == -1 )
      v40 = *((_DWORD *)v39 + 2);
    *(_DWORD *)(a2 + 16) = v40;
    return 1;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v11 = off_1C03200E8;
    v12 = *((__m128i *)off_1C03200E8 + 6);
    v13 = (unsigned int)IsFlicksDisabledByGroupPolicy() == 0;
    v14 = *((_DWORD *)v11 + 3);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    if ( !v13 )
      v15 = 0;
    if ( v14 == -1 )
      v14 = *((_DWORD *)v11 + 2);
    *(_DWORD *)a2 = v14;
    v16 = *((_DWORD *)v11 + 7);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v11 + 6);
    *(_DWORD *)(a2 + 4) = v16;
    v17 = *((_DWORD *)v11 + 11);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v11 + 10);
    *(_DWORD *)(a2 + 8) = v17;
    v18 = *((_DWORD *)v11 + 15);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v11 + 14);
    *(_DWORD *)(a2 + 12) = v18;
    v19 = *((_DWORD *)v11 + 19);
    if ( v19 == -1 )
      v19 = *((_DWORD *)v11 + 18);
    *(_DWORD *)(a2 + 16) = v19;
    v20 = *((_DWORD *)v11 + 23);
    if ( v20 == -1 )
      v20 = *((_DWORD *)v11 + 22);
    *(_DWORD *)(a2 + 20) = v20;
    v21 = v12.m128i_i32[2];
    if ( v15 != -1 )
      v21 = v15;
    *(_DWORD *)(a2 + 24) = v21;
    v22 = *((_DWORD *)v11 + 31);
    if ( v22 == -1 )
      v22 = *((_DWORD *)v11 + 30);
    *(_DWORD *)(a2 + 28) = v22;
    return 1;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v41 = off_1C0320BE8;
    if ( !gModeMonitor )
      GetDWORDSettingValuesEx(off_1C0320BE8, 0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 7u, 0);
    v42 = *((_DWORD *)v41 + 3);
    if ( v42 == -1 )
      v42 = *((_DWORD *)v41 + 2);
    *(_DWORD *)a2 = v42;
    v43 = *((_DWORD *)v41 + 7);
    if ( v43 == -1 )
      v43 = *((_DWORD *)v41 + 6);
    *(_DWORD *)(a2 + 4) = v43;
    v44 = *((_DWORD *)v41 + 11);
    if ( v44 == -1 )
      v44 = *((_DWORD *)v41 + 10);
    *(_DWORD *)(a2 + 8) = v44;
    v45 = *((_DWORD *)v41 + 15);
    if ( v45 == -1 )
      v45 = *((_DWORD *)v41 + 14);
    *(_DWORD *)(a2 + 12) = v45;
    v46 = *((_DWORD *)v41 + 19);
    if ( v46 == -1 )
      v46 = *((_DWORD *)v41 + 18);
    *(_DWORD *)(a2 + 16) = v46;
    v47 = *((_DWORD *)v41 + 23);
    if ( v47 == -1 )
      v47 = *((_DWORD *)v41 + 22);
    *(_DWORD *)(a2 + 20) = v47;
    v48 = *((_DWORD *)v41 + 27);
    if ( v48 == -1 )
      v48 = *((_DWORD *)v41 + 26);
    *(_DWORD *)(a2 + 24) = v48;
    return 1;
  }
  v9 = v8 - 2;
  if ( !v9 )
    return (unsigned int)GetFlickMap((struct tagFLICK_MAP *)a2);
  v49 = v9 - 2;
  if ( !v49 )
    return (unsigned int)GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v49 == 2 )
  {
    v50 = gPredictionMonitor;
    if ( !gPredictionMonitor )
    {
      if ( (int)CreatePredictionSettings(off_1C03200C8, a2, a3, a4) < 0 )
      {
        v50 = gPredictionMonitor;
      }
      else
      {
        v50 = 1;
        gPredictionMonitor = 1;
      }
    }
    if ( v50 == 1 )
    {
      v51 = off_1C03200C8;
      GetPredictionSettings(off_1C03200C8, a2, a3, a4);
      v52 = *((_DWORD *)v51 + 3);
      v53 = 60;
      if ( v52 == -1 )
      {
        v54 = *((_DWORD *)v51 + 2);
      }
      else
      {
        v54 = 60;
        if ( v52 <= 0x3C )
          v54 = *((_DWORD *)v51 + 3);
      }
      *(_DWORD *)(a2 + 4) = v54;
      glTOUCH_DRIVER_HW_STACK_LATENCY = v54;
      v55 = *((_DWORD *)v51 + 7);
      if ( v55 == -1 )
      {
        v53 = *((_DWORD *)v51 + 6);
      }
      else if ( v55 <= 0x3C )
      {
        v53 = *((_DWORD *)v51 + 7);
      }
      *(_DWORD *)(a2 + 8) = v53;
      glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v53;
      v56 = *((_DWORD *)v51 + 11);
      if ( v56 == -1 )
        v56 = *((_DWORD *)v51 + 10);
      *(_DWORD *)(a2 + 12) = v56;
      gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v56;
      return 1;
    }
  }
  return v4;
}
