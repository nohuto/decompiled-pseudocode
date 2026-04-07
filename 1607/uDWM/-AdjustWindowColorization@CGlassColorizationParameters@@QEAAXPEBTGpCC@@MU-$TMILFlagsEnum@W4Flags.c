/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180027C90
 * Callers:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18001EF10 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180023840 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18006FFCC (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     GetStaticImmersiveColorPriv @ 0x180008898 (GetStaticImmersiveColorPriv.c)
 *     PacksRGBColor @ 0x180008A30 (PacksRGBColor.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180039420 (-IsPPIEdition@@YA_NXZ.c)
 *     floorf_0 @ 0x180050576 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180077650 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        int *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  DWORD v12; // ecx
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  int v15; // eax
  int Color; // ecx
  char v17; // di
  bool v18; // si
  unsigned int v19; // eax
  bool v20; // sf
  __int64 ColorFromPreference; // rax
  unsigned int v22; // ecx
  float v23; // xmm13_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  float v28; // xmm7_4
  __int64 result; // rax
  int v30; // ecx
  __int64 StaticImmersiveColorPriv; // rax
  const wchar_t *v32; // rdx
  __int64 v33; // rcx
  int v34; // [rsp+2Ch] [rbp-55h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-51h] BYREF
  _BYTE pvParam[12]; // [rsp+38h] [rbp-49h] BYREF
  float v37; // [rsp+44h] [rbp-3Dh]

  if ( (a4 & 0x30) != 0x30 )
  {
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
        v34 = 0;
        v17 = a4 & 1;
        v35 = 0;
        v18 = 0;
        v19 = 0;
        if ( (a4 & 0x60) == 0 )
        {
          v20 = (*(int (__fastcall **)(_QWORD, const wchar_t *, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 7)
                                                                               + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                  L"ColorPrevalence",
                  &v35) < 0;
          v19 = v35;
          if ( !v20 && v35 )
          {
            v32 = L"AccentColor";
            if ( !v17 )
              v32 = L"AccentColorInactive";
            v20 = (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 7)
                                                                        + 8LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                    v32,
                    &v34) < 0;
            v19 = v35;
            v18 = !v20;
          }
          Color = v34;
        }
        if ( (v17 || v18) && v19 )
        {
          if ( !Color )
          {
            if ( v19 <= 2 )
            {
              v33 = 4LL;
            }
            else
            {
              switch ( v19 )
              {
                case 3u:
                  v33 = 3LL;
                  break;
                case 4u:
                  v33 = 2LL;
                  break;
                case 5u:
                  v33 = 1LL;
                  break;
                default:
                  v33 = 337LL;
                  break;
              }
            }
            Color = CImmersiveColor::GetColor(v33);
          }
          v13 = _mm_cvtsi32_si128((unsigned __int8)Color);
          v14 = _mm_cvtsi32_si128(BYTE1(Color));
          v15 = BYTE2(Color);
          goto LABEL_17;
        }
        *(_QWORD *)pvParam = 0LL;
        GetUserColorPreference(pvParam, 0LL);
        ColorFromPreference = GetColorFromPreference(pvParam, 337LL, 0LL, 1LL);
        v13 = _mm_cvtsi32_si128((unsigned __int8)ColorFromPreference);
        v22 = BYTE1(ColorFromPreference);
        v15 = BYTE2(ColorFromPreference);
        v14 = _mm_cvtsi32_si128(v22);
LABEL_16:
        v6 = FLOAT_1_0;
LABEL_17:
        v10 = _mm_cvtepi32_ps(v13).m128_f32[0] / 255.0;
        v5 = (float)v15 / 255.0;
        v11 = _mm_cvtepi32_ps(v14).m128_f32[0] / 255.0;
        v9 = v5;
        v7 = v10;
        v8 = v11;
        goto LABEL_18;
      }
      if ( (a4 & 1) == 0 )
      {
        *(_DWORD *)pvParam = 16;
        *(_QWORD *)&pvParam[4] = 0LL;
        v37 = 0.0;
        if ( SystemParametersInfoA(0x42u, 0x10u, pvParam, 0) && (pvParam[4] & 1) != 0 )
          v12 = GetSysColor(15) | 0xFF000000;
        else
          v12 = -15263977;
        v13 = _mm_cvtsi32_si128((unsigned __int8)v12);
        v14 = _mm_cvtsi32_si128(BYTE1(v12));
        v15 = BYTE2(v12);
        goto LABEL_16;
      }
    }
LABEL_18:
    v23 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v6);
    v24 = (float)((float)a1[2] / 100.0) * a3;
    v25 = (float)((float)(1.0 - v24) * (float)(v7 * v6)) + (float)(v24 * v10);
    v26 = (float)((float)(1.0 - v24) * (float)(v8 * v6)) + (float)(v24 * v11);
    v27 = (float)((float)(1.0 - v24) * v6) + v24;
    v28 = (float)((float)(1.0 - v24) * (float)(v9 * v6)) + (float)(v24 * v5);
    if ( v27 > 0.0 )
    {
      v25 = v25 / v27;
      v26 = v26 / v27;
      v28 = v28 / v27;
    }
    *((_BYTE *)a1 + 2) = (int)fminf(floorf_0((float)(v25 * 255.0) + 0.5), 255.0);
    *((_BYTE *)a1 + 1) = (int)fminf(floorf_0((float)(v26 * 255.0) + 0.5), 255.0);
    *(_BYTE *)a1 = (int)fminf(floorf_0((float)(v28 * 255.0) + 0.5), 255.0);
    *((_BYTE *)a1 + 3) = (int)fminf(floorf_0((float)(v27 * 255.0) + 0.5), 255.0);
    a1[2] = (int)floorf_0((float)(v27 * 100.0) + 0.5);
    a1[3] = (int)floorf_0((float)(v23 * 100.0) + 0.5);
    result = (unsigned int)(int)floorf_0(0.5);
    a1[4] = result;
    return result;
  }
  if ( IsPPIEdition() )
    v30 = 1170;
  else
    v30 = 311;
  StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(v30);
  v37 = FLOAT_1_0;
  *(float *)pvParam = (float)(unsigned __int8)StaticImmersiveColorPriv / 255.0;
  *(float *)&pvParam[4] = (float)BYTE1(StaticImmersiveColorPriv) / 255.0;
  *(float *)&pvParam[8] = (float)BYTE2(StaticImmersiveColorPriv) / 255.0;
  return PacksRGBColor((float *)pvParam, a1);
}
