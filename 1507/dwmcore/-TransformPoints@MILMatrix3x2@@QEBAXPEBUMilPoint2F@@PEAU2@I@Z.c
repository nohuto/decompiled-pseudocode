/*
 * XREFs of ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18000CEA8
 * Callers:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000CD00 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::TransformPoints(MILMatrix3x2 *this, const struct MilPoint2F *a2, struct MilPoint2F *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  float v5; // xmm3_4
  float v6; // xmm2_4

  v3 = 4;
  v4 = a2 - a3;
  do
  {
    v5 = *(float *)((char *)a3 + v4);
    v6 = *(float *)((char *)a3 + v4 + 4);
    *(float *)a3 = (float)((float)(v6 * *((float *)this + 2)) + (float)(v5 * *(float *)this)) + *((float *)this + 4);
    *((float *)a3 + 1) = (float)((float)(v5 * *((float *)this + 1)) + (float)(v6 * *((float *)this + 3)))
                       + *((float *)this + 5);
    a3 = (struct MilPoint2F *)((char *)a3 + 8);
    --v3;
  }
  while ( v3 );
}
