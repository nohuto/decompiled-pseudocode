/*
 * XREFs of ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@PEAU2@@Z @ 0x1800FE494
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@@Z @ 0x1800B8560 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180030D64 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::TransformInput(
        CInteractionContextTransformHelper *this,
        const struct tagPOINTER_INFO *a2,
        struct tagPOINTER_INFO *a3)
{
  float *v3; // rcx
  int *v4; // r8
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm3_4

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a3 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a3 + 5) = *((_OWORD *)a2 + 5);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    v5 = (float)v4[11];
    v6 = (float)((float)(v5 * v3[21]) + (float)((float)v4[10] * v3[19])) + v3[23];
    v4[10] = (int)(float)((float)((float)(v5 * v3[20]) + (float)((float)v4[10] * v3[18])) + v3[22]);
    v4[11] = (int)v6;
    v7 = (float)v4[15];
    v8 = (float)v4[14];
    v9 = (float)((float)(v7 * v3[20]) + (float)(v8 * v3[18])) + v3[22];
    v10 = (float)((float)(v7 * v3[21]) + (float)(v8 * v3[19])) + v3[23];
    v4[14] = (int)v9;
    v4[15] = (int)v10;
  }
  return 0LL;
}
