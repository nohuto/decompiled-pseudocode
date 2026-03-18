/*
 * XREFs of ?D2DMatrixDeterminant@@YAMPEBUD2DMatrix@@@Z @ 0x1800BED74
 * Callers:
 *     ?GetDeterminant3D@CBaseMatrix@@QEBAMXZ @ 0x18013A4F0 (-GetDeterminant3D@CBaseMatrix@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall D2DMatrixDeterminant(const struct D2DMatrix *a1)
{
  float v1; // xmm6_4
  float v2; // xmm7_4
  float v3; // xmm5_4
  float v4; // xmm9_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm8_4
  float v8; // xmm5_4

  v1 = (float)(*((float *)a1 + 10) * *((float *)a1 + 15)) - (float)(*((float *)a1 + 11) * *((float *)a1 + 14));
  v2 = (float)(*((float *)a1 + 9) * *((float *)a1 + 15)) - (float)(*((float *)a1 + 13) * *((float *)a1 + 11));
  v3 = *((float *)a1 + 8);
  v4 = (float)(*((float *)a1 + 9) * *((float *)a1 + 14)) - (float)(*((float *)a1 + 13) * *((float *)a1 + 10));
  v5 = (float)(v3 * *((float *)a1 + 15)) - (float)(*((float *)a1 + 12) * *((float *)a1 + 11));
  v6 = *((float *)a1 + 12);
  v7 = (float)(v3 * *((float *)a1 + 13)) - (float)(v6 * *((float *)a1 + 9));
  v8 = (float)(v3 * *((float *)a1 + 14)) - (float)(v6 * *((float *)a1 + 10));
  return (float)((float)((float)((float)((float)((float)(*((float *)a1 + 5) * v1) - (float)(*((float *)a1 + 6) * v2))
                                       + (float)(*((float *)a1 + 7) * v4))
                               * *(float *)a1)
                       - (float)((float)((float)((float)(*((float *)a1 + 4) * v1) - (float)(v5 * *((float *)a1 + 6)))
                                       + (float)(v8 * *((float *)a1 + 7)))
                               * *((float *)a1 + 1)))
               + (float)((float)((float)((float)(*((float *)a1 + 4) * v2) - (float)(v5 * *((float *)a1 + 5)))
                               + (float)(v7 * *((float *)a1 + 7)))
                       * *((float *)a1 + 2)))
       - (float)((float)((float)((float)(*((float *)a1 + 4) * v4) - (float)(v8 * *((float *)a1 + 5)))
                       + (float)(v7 * *((float *)a1 + 6)))
               * *((float *)a1 + 3));
}
