/*
 * XREFs of ?TransformIgnoreZW@CBaseMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180004150
 * Callers:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180003680 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseMatrix::TransformIgnoreZW(CBaseMatrix *this, const struct D2D_POINT_2F *a2, struct MilPoint4F *a3)
{
  float x; // xmm3_4
  float y; // xmm4_4
  float v5; // xmm0_4

  x = a2->x;
  y = a2->y;
  v5 = a2->x;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(a2->x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(v5 * *((float *)this + 1)))
                     + *((float *)this + 13);
  *((float *)a3 + 2) = (float)((float)(y * *((float *)this + 6)) + (float)(x * *((float *)this + 2)))
                     + *((float *)this + 14);
  *((float *)a3 + 3) = (float)((float)(y * *((float *)this + 7)) + (float)(x * *((float *)this + 3)))
                     + *((float *)this + 15);
}
