/*
 * XREFs of ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x180163F78
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 * Callees:
 *     <none>
 */

char __fastcall Matrix3x3::TryInvert(const struct Matrix3x3 *a1, struct Matrix3x3 *a2)
{
  float v2; // xmm3_4
  float v3; // xmm6_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm9_4
  float v22; // xmm10_4

  v2 = *((float *)a1 + 6) * *((float *)a1 + 4);
  v3 = *(float *)a1 * *((float *)a1 + 4);
  v4 = *((float *)a1 + 3) * *((float *)a1 + 7);
  v5 = *((float *)a1 + 2);
  v6 = *((float *)a1 + 8);
  v7 = *((float *)a1 + 5);
  v8 = *((float *)a1 + 1);
  v9 = v8 * *((float *)a1 + 6);
  v10 = (float)((float)((float)((float)((float)(v6 * v3) + (float)(v5 * v4)) + (float)(v7 * v9))
                      - (float)((float)(*((float *)a1 + 6) * *(float *)a1) * v7))
              - (float)(v2 * v5))
      - (float)((float)(v8 * *((float *)a1 + 3)) * v6);
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  if ( v11 < 0.0000011920929 )
    return 0;
  v13 = 1.0 / v10;
  if ( a2 )
  {
    v14 = v3 - (float)(v8 * *((float *)a1 + 3));
    v15 = v4 - v2;
    v16 = (float)(v5 * *((float *)a1 + 3)) - (float)(v7 * *(float *)a1);
    v17 = (float)(v9 - (float)(*(float *)a1 * *((float *)a1 + 7))) * v13;
    v18 = *((float *)a1 + 4) * v5;
    v19 = (float)((float)(v6 * *(float *)a1) - (float)(*((float *)a1 + 6) * v5)) * v13;
    v20 = (float)((float)(v7 * *((float *)a1 + 6)) - (float)(v6 * *((float *)a1 + 3))) * v13;
    v21 = (float)((float)(v5 * *((float *)a1 + 7)) - (float)(v8 * v6)) * v13;
    v22 = (float)((float)(v6 * *((float *)a1 + 4)) - (float)(v7 * *((float *)a1 + 7))) * v13;
    *((float *)a2 + 1) = v21;
    *((float *)a2 + 2) = (float)((float)(v7 * v8) - v18) * v13;
    *(float *)a2 = v22;
    *((float *)a2 + 3) = v20;
    *((float *)a2 + 4) = v19;
    *((float *)a2 + 5) = v16 * v13;
    *((float *)a2 + 6) = v15 * v13;
    *((float *)a2 + 7) = v17;
    *((float *)a2 + 8) = v14 * v13;
  }
  return 1;
}
