/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800263EC (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026560 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029970 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18007007C (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     GetStaticImmersiveColorPriv @ 0x180012A8C (GetStaticImmersiveColorPriv.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003C128 (-IsPPIEdition@@YA_NXZ.c)
 *     ?FloatColorChannelToByte@@YAEM@Z @ 0x18003EDF0 (-FloatColorChannelToByte@@YAEM@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floorf_0 @ 0x18004FF36 (floorf_0.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180075784 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

char __fastcall CGlassColorizationParameters::AdjustWindowColorization(int *a1, unsigned __int8 *a2, float a3, char a4)
{
  float v5; // xmm5_4
  float v6; // xmm8_4
  float v7; // xmm10_4
  float v8; // xmm12_4
  float v9; // xmm13_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  int Color; // ecx
  char v13; // bp
  bool v14; // si
  unsigned int v15; // eax
  bool v16; // sf
  __int64 ColorFromPreference; // rax
  __m128i v18; // xmm3
  unsigned int v19; // ecx
  int v20; // eax
  __m128i v21; // xmm4
  float v22; // xmm13_4
  float v23; // xmm1_4
  float v24; // xmm11_4
  float v25; // xmm9_4
  float v26; // xmm2_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // eax
  DWORD v34; // ecx
  int v35; // ecx
  __int64 StaticImmersiveColorPriv; // rax
  float v37; // xmm7_4
  float v38; // xmm6_4
  const wchar_t *v39; // rsi
  __int64 v40; // rcx
  int v42; // [rsp+24h] [rbp-B4h] BYREF
  unsigned int v43; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE pvParam[12]; // [rsp+30h] [rbp-A8h] BYREF
  int v45; // [rsp+3Ch] [rbp-9Ch]

  if ( (a4 & 0x30) == 0x30 )
  {
    if ( IsPPIEdition() )
      v35 = 1169;
    else
      v35 = 310;
    StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(v35);
    v37 = (float)BYTE1(StaticImmersiveColorPriv) / 255.0;
    v38 = (float)BYTE2(StaticImmersiveColorPriv) / 255.0;
    *((_BYTE *)a1 + 2) = FloatColorChannelToByte((float)(unsigned __int8)StaticImmersiveColorPriv / 255.0);
    *((_BYTE *)a1 + 1) = FloatColorChannelToByte(v37);
    *(_BYTE *)a1 = FloatColorChannelToByte(v38);
    LOBYTE(v33) = FloatColorChannelToByte(1.0);
    *((_BYTE *)a1 + 3) = v33;
    return v33;
  }
  v5 = (float)*(unsigned __int8 *)a1 / 255.0;
  v6 = (float)a2[3] / 255.0;
  v7 = (float)a2[2] / 255.0;
  v8 = (float)a2[1] / 255.0;
  v9 = (float)*a2 / 255.0;
  v10 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
  v11 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
  if ( (a4 & 4) != 0 )
  {
    if ( (a4 & 8) != 0 )
    {
      Color = 0;
      v42 = 0;
      v13 = a4 & 1;
      v43 = 0;
      v14 = 0;
      v15 = 0;
      if ( (a4 & 0x60) == 0 )
      {
        v16 = (*(int (__fastcall **)(_QWORD, const wchar_t *, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 7)
                                                                             + 8LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                L"ColorPrevalence",
                &v43) < 0;
        v15 = v43;
        if ( !v16 && v43 )
        {
          v39 = L"AccentColor";
          if ( !v13 )
            v39 = L"AccentColorInactive";
          v16 = (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 7)
                                                                      + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                  v39,
                  &v42) < 0;
          v15 = v43;
          v14 = !v16;
        }
        Color = v42;
      }
      if ( (v13 || v14) && v15 )
      {
        if ( !Color )
        {
          if ( v15 <= 2 )
          {
            v40 = 4LL;
          }
          else
          {
            switch ( v15 )
            {
              case 3u:
                v40 = 3LL;
                break;
              case 4u:
                v40 = 2LL;
                break;
              case 5u:
                v40 = 1LL;
                break;
              default:
                v40 = 336LL;
                break;
            }
          }
          Color = CImmersiveColor::GetColor(v40);
        }
        v18 = _mm_cvtsi32_si128((unsigned __int8)Color);
        v21 = _mm_cvtsi32_si128(BYTE1(Color));
        v20 = BYTE2(Color);
        goto LABEL_12;
      }
      *(_QWORD *)pvParam = 0LL;
      GetUserColorPreference(pvParam, 0LL);
      ColorFromPreference = GetColorFromPreference(pvParam, 336LL, 0LL, 1LL);
      v18 = _mm_cvtsi32_si128((unsigned __int8)ColorFromPreference);
      v19 = BYTE1(ColorFromPreference);
      v20 = BYTE2(ColorFromPreference);
      v21 = _mm_cvtsi32_si128(v19);
    }
    else
    {
      if ( (a4 & 1) != 0 )
        goto LABEL_13;
      *(_DWORD *)pvParam = 16;
      *(_QWORD *)&pvParam[4] = 0LL;
      v45 = 0;
      if ( SystemParametersInfoA(0x42u, 0x10u, pvParam, 0) && (pvParam[4] & 1) != 0 )
        v34 = GetSysColor(15) | 0xFF000000;
      else
        v34 = -15263977;
      v18 = _mm_cvtsi32_si128((unsigned __int8)v34);
      v21 = _mm_cvtsi32_si128(BYTE1(v34));
      v20 = BYTE2(v34);
    }
    v6 = FLOAT_1_0;
LABEL_12:
    v10 = _mm_cvtepi32_ps(v18).m128_f32[0] / 255.0;
    v5 = (float)v20 / 255.0;
    v11 = _mm_cvtepi32_ps(v21).m128_f32[0] / 255.0;
    v9 = v5;
    v7 = v10;
    v8 = v11;
  }
LABEL_13:
  v22 = v9 * v6;
  v23 = (float)((float)a1[2] / 100.0) * a3;
  v24 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v6);
  v25 = (float)((float)(1.0 - v23) * v6) + v23;
  v26 = (float)((float)(1.0 - v23) * (float)(v7 * v6)) + (float)(v23 * v10);
  v27 = (float)((float)(1.0 - v23) * (float)(v8 * v6)) + (float)(v23 * v11);
  v28 = (float)((float)(1.0 - v23) * v22) + (float)(v23 * v5);
  if ( v25 > 0.0 )
  {
    v26 = v26 / v25;
    v27 = v27 / v25;
    v28 = v28 / v25;
  }
  v29 = floorf_0((float)(v26 * 255.0) + 0.5);
  if ( v29 >= 255.0 )
    v29 = FLOAT_255_0;
  *((_BYTE *)a1 + 2) = (int)v29;
  v30 = floorf_0((float)(v27 * 255.0) + 0.5);
  if ( v30 >= 255.0 )
    v30 = FLOAT_255_0;
  *((_BYTE *)a1 + 1) = (int)v30;
  v31 = floorf_0((float)(v28 * 255.0) + 0.5);
  if ( v31 >= 255.0 )
    v31 = FLOAT_255_0;
  *(_BYTE *)a1 = (int)v31;
  v32 = floorf_0((float)(v25 * 255.0) + 0.5);
  if ( v32 >= 255.0 )
    v32 = FLOAT_255_0;
  *((_BYTE *)a1 + 3) = (int)v32;
  a1[2] = (int)floorf_0((float)(v25 * 100.0) + 0.5);
  a1[3] = (int)floorf_0((float)(v24 * 100.0) + 0.5);
  v33 = (int)floorf_0(0.5);
  a1[4] = v33;
  return v33;
}
