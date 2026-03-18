/*
 * XREFs of ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180047170
 * Callers:
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180132080 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseMatrix::Transform(CBaseMatrix *this, const struct MilPoint4F *a2, struct MilPoint4F *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm0_4

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = *((float *)a2 + 1);
  v7 = *(float *)a2;
  *(float *)a3 = (float)((float)((float)(v6 * *((float *)this + 4)) + (float)(*(float *)a2 * *(float *)this))
                       + (float)(v4 * *((float *)this + 8)))
               + (float)(v5 * *((float *)this + 12));
  *((float *)a3 + 1) = (float)((float)((float)(v6 * *((float *)this + 5)) + (float)(v7 * *((float *)this + 1)))
                             + (float)(v4 * *((float *)this + 9)))
                     + (float)(v5 * *((float *)this + 13));
  *((float *)a3 + 2) = (float)((float)((float)(v6 * *((float *)this + 6)) + (float)(v3 * *((float *)this + 2)))
                             + (float)(v4 * *((float *)this + 10)))
                     + (float)(v5 * *((float *)this + 14));
  *((float *)a3 + 3) = (float)((float)((float)(v6 * *((float *)this + 7)) + (float)(v3 * *((float *)this + 3)))
                             + (float)(v4 * *((float *)this + 11)))
                     + (float)(v5 * *((float *)this + 15));
}
