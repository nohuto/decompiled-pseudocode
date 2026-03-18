/*
 * XREFs of ?AdjustFullscreenGammaRampRGB256x3x16@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C011F8CC
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?ScaleAndOffset@@YAGGMM@Z @ 0x1C0128B38 (-ScaleAndOffset@@YAGGMM@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRampRGB256x3x16(
        ADAPTER_DISPLAY *this,
        struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a2,
        struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  unsigned int v4; // r11d
  USHORT *Green; // r10
  signed __int64 v7; // rbx
  float v8; // xmm2_4
  float v9; // xmm1_4
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  __int64 v14; // r9
  unsigned __int16 *v15; // r10
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  unsigned __int16 *v22; // r10
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // ax
  __int64 v25; // r10
  int v26; // r11d

  LOWORD(v4) = 0;
  Green = a3->Green;
  v7 = (char *)a2 - (char *)a3;
  LOWORD(a3) = 256;
  do
  {
    v8 = *((float *)a4 + 3);
    v9 = *(float *)a4;
    if ( a2 )
    {
      v10 = ScaleAndOffset(*(USHORT *)((char *)Green + v7 - 512), v9, v8);
      *(_WORD *)(v11 - 512) = v10;
      v13 = ScaleAndOffset(*(_WORD *)(v7 + v11), *(float *)(v12 + 4), *(float *)(v12 + 12));
      *v15 = v13;
      v16 = *(unsigned __int16 *)((char *)v15 + v7 + 512);
    }
    else
    {
      v17 = ScaleAndOffset((_WORD)a3 * v4, v9, v8);
      *(_WORD *)(v18 - 512) = v17;
      v21 = ScaleAndOffset(v20, *(float *)(v19 + 4), *(float *)(v19 + 16));
      *v22 = v21;
      v16 = v23;
    }
    v24 = ScaleAndOffset(v16, *(float *)(v14 + 8), *(float *)(v14 + 20));
    *(_WORD *)(v25 + 512) = v24;
    v4 = v26 + 1;
    Green = (USHORT *)(v25 + 2);
  }
  while ( v4 < (unsigned int)a3 );
}
