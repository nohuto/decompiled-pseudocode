/*
 * XREFs of ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001D1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScaleTransform3D::GetRealization(
        CScaleTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v3; // xmm4_8
  double v4; // xmm5_8
  float v5; // xmm6_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  double v8; // xmm2_8
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4

  v3 = *((double *)this + 15);
  v4 = *((double *)this + 16);
  v5 = *((double *)this + 17);
  *((_DWORD *)a3 + 11) = 0;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v6 = v3;
  *((_DWORD *)a3 + 15) = 1065353216;
  v7 = v4;
  *((float *)a3 + 10) = v5;
  *(float *)a3 = v6;
  *((float *)a3 + 5) = v7;
  v8 = *((double *)this + 18);
  if ( v8 == 0.0 && *((double *)this + 19) == 0.0 && *((double *)this + 20) == 0.0 )
  {
    *((_QWORD *)a3 + 6) = 0LL;
    *((_DWORD *)a3 + 14) = 0;
  }
  else
  {
    v9 = v8;
    v10 = *((double *)this + 19);
    v11 = *((double *)this + 20);
    *((float *)a3 + 12) = v9 - (float)(v9 * v6);
    *((float *)a3 + 13) = v10 - (float)(v10 * v7);
    *((float *)a3 + 14) = v11 - (float)(v11 * v5);
  }
}
