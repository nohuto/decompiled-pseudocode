/*
 * XREFs of DwmpCalculateColorizationColor @ 0x1800457FC
 * Callers:
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180044644 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 * Callees:
 *     ?FloatColorChannelToByte@@YAEM@Z @ 0x18003EDF0 (-FloatColorChannelToByte@@YAEM@Z.c)
 */

__int64 __fastcall DwmpCalculateColorizationColor(int *a1, int *a2)
{
  float v3; // xmm8_4
  float v4; // xmm7_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx

  v3 = (float)a1[3] / 100.0;
  v4 = (float)a1[2] / 100.0;
  v5 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
  v6 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
  v7 = (float)*(unsigned __int8 *)a1 / 255.0;
  v8 = v7 * v4;
  v9 = (float)((float)((float)((float)(v5 * 0.71520001) + (float)(v6 * 0.21259999)) + (float)(v7 * 0.0722)) * v3) * v4;
  v10 = (float)(1.0 - v3) - (float)((float)a1[4] / 100.0);
  v11 = (float)((float)((float)*((unsigned __int8 *)a1 + 6) / 255.0) * v9) + (float)(v6 * v4);
  v12 = (float)((float)((float)*((unsigned __int8 *)a1 + 5) / 255.0) * v9) + (float)(v5 * v4);
  v13 = (float)((float)((float)*((unsigned __int8 *)a1 + 4) / 255.0) * v9) + v8;
  if ( v10 <= 0.0 )
    v10 = 0.0;
  v14 = (unsigned __int8)FloatColorChannelToByte(v10) << 8;
  v15 = ((unsigned __int8)FloatColorChannelToByte(v11) | v14) << 8;
  v16 = ((unsigned __int8)FloatColorChannelToByte(v12) | v15) << 8;
  *a2 = (unsigned __int8)FloatColorChannelToByte(v13) | v16;
  return 0LL;
}
