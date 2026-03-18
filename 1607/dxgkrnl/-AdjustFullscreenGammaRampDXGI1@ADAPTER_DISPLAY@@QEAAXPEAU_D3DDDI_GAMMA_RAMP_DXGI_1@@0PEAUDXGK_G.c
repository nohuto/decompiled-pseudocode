/*
 * XREFs of ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0146EC8
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?ScaleAndOffset@@YAMMMMMM@Z @ 0x1C01486E4 (-ScaleAndOffset@@YAMMMMMM@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRampDXGI1(
        ADAPTER_DISPLAY *this,
        struct _D3DDDI_GAMMA_RAMP_DXGI_1 *a2,
        struct _D3DDDI_GAMMA_RAMP_DXGI_1 *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  float v4; // xmm4_4
  D3DDDI_DXGI_RGB *GammaCurve; // rax
  signed __int64 v6; // rdx
  float v7; // xmm0_4
  float *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  float v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  float v16; // xmm4_4
  float v17; // xmm0_4
  D3DDDI_DXGI_RGB *v18; // rax
  __int64 v19; // rcx

  v4 = FLOAT_1_0;
  GammaCurve = a3->GammaCurve;
  v6 = (char *)a2 - (char *)a3;
  do
  {
    v7 = ScaleAndOffset(*(float *)((char *)&GammaCurve->Red + v6), *(float *)a4, *((float *)a4 + 3), 0.0, v4);
    *v8 = v7;
    v12 = ScaleAndOffset(*(float *)((char *)v8 + v10 + 4), *(float *)(v9 + 4), *(float *)(v9 + 16), 0.0, v11);
    *(float *)(v13 + 4) = v12;
    v17 = ScaleAndOffset(*(float *)(v15 + v13 + 8), *(float *)(v14 + 8), *(float *)(v14 + 20), 0.0, v16);
    v18->Blue = v17;
    GammaCurve = v18 + 1;
  }
  while ( v19 != 1 );
}
