/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0
 * Callers:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18001C6B4 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180020F10 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x180067A38 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ?FloatColorChannelToByte@@YAEM@Z @ 0x180041230 (-FloatColorChannelToByte@@YAEM@Z.c)
 *     floorf_0 @ 0x180049896 (floorf_0.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18006D6D4 (-IsPPIEdition@@YA_NXZ.c)
 *     GetStaticImmersiveColorPriv @ 0x18009EBCC (GetStaticImmersiveColorPriv.c)
 */

char __fastcall CGlassColorizationParameters::AdjustWindowColorization(int *a1, unsigned __int8 *a2, float a3, char a4)
{
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm8_4
  float v9; // xmm10_4
  float v10; // xmm12_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  DWORD v13; // ecx
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  int v26; // eax
  bool v27; // al
  __int64 v28; // rcx
  __int64 StaticImmersiveColorPriv; // rax
  float v30; // xmm7_4
  float v31; // xmm6_4
  int pvParam; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+2Ch] [rbp-9Ch]
  int v35; // [rsp+34h] [rbp-94h]

  if ( (a4 & 0x30) == 0x30 )
  {
    v27 = IsPPIEdition();
    v28 = 310LL;
    if ( v27 )
      v28 = 1169LL;
    StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(v28);
    v30 = (float)BYTE1(StaticImmersiveColorPriv) / 255.0;
    v31 = (float)BYTE2(StaticImmersiveColorPriv) / 255.0;
    *((_BYTE *)a1 + 2) = FloatColorChannelToByte((float)(unsigned __int8)StaticImmersiveColorPriv / 255.0);
    *((_BYTE *)a1 + 1) = FloatColorChannelToByte(v30);
    *(_BYTE *)a1 = FloatColorChannelToByte(v31);
    LOBYTE(v26) = FloatColorChannelToByte(1.0);
    *((_BYTE *)a1 + 3) = v26;
  }
  else
  {
    v6 = (float)*(unsigned __int8 *)a1 / 255.0;
    v7 = (float)a2[3] / 255.0;
    v8 = (float)a2[2] / 255.0;
    v9 = (float)a2[1] / 255.0;
    v10 = (float)*a2 / 255.0;
    v11 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
    v12 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
    if ( (a4 & 4) != 0 && ((a4 & 8) != 0 || (a4 & 1) == 0) )
    {
      pvParam = 16;
      if ( (a4 & 8) != 0 )
      {
        v34 = 0LL;
        v35 = 0;
        if ( SystemParametersInfoA(0x42u, 0x10u, &pvParam, 0) && (v34 & 1) != 0 )
          v13 = GetSysColor(5) | 0xFF000000;
        else
          v13 = -1;
      }
      else
      {
        v34 = 0LL;
        v35 = 0;
        if ( SystemParametersInfoA(0x42u, 0x10u, &pvParam, 0) && (v34 & 1) != 0 )
          v13 = GetSysColor(15) | 0xFF000000;
        else
          v13 = -15263977;
      }
      v7 = FLOAT_1_0;
      v11 = (float)(unsigned __int8)v13 / 255.0;
      v6 = (float)BYTE2(v13) / 255.0;
      v12 = (float)BYTE1(v13) / 255.0;
      v10 = v6;
      v8 = v11;
      v9 = v12;
    }
    v14 = v9 * v7;
    v15 = (float)((float)a1[2] / 100.0) * a3;
    v16 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v7);
    v17 = (float)((float)(1.0 - v15) * v7) + v15;
    v18 = (float)(1.0 - v15) * (float)(v10 * v7);
    v19 = (float)((float)(1.0 - v15) * (float)(v8 * v7)) + (float)(v15 * v11);
    v20 = (float)((float)(1.0 - v15) * v14) + (float)(v15 * v12);
    v21 = v18 + (float)(v15 * v6);
    if ( v17 > 0.0 )
    {
      v19 = v19 / v17;
      v20 = v20 / v17;
      v21 = v21 / v17;
    }
    v22 = floorf_0((float)(v19 * 255.0) + 0.5);
    if ( v22 >= 255.0 )
      v22 = FLOAT_255_0;
    *((_BYTE *)a1 + 2) = (int)v22;
    v23 = floorf_0((float)(v20 * 255.0) + 0.5);
    if ( v23 >= 255.0 )
      v23 = FLOAT_255_0;
    *((_BYTE *)a1 + 1) = (int)v23;
    v24 = floorf_0((float)(v21 * 255.0) + 0.5);
    if ( v24 >= 255.0 )
      v24 = FLOAT_255_0;
    *(_BYTE *)a1 = (int)v24;
    v25 = floorf_0((float)(v17 * 255.0) + 0.5);
    if ( v25 >= 255.0 )
      v25 = FLOAT_255_0;
    *((_BYTE *)a1 + 3) = (int)v25;
    a1[2] = (int)floorf_0((float)(v17 * 100.0) + 0.5);
    a1[3] = (int)floorf_0((float)(v16 * 100.0) + 0.5);
    v26 = (int)floorf_0(0.5);
    a1[4] = v26;
  }
  return v26;
}
