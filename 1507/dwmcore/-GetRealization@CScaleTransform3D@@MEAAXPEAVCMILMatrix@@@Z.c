/*
 * XREFs of ?GetRealization@CScaleTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011E8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScaleTransform3D::GetRealization(CScaleTransform3D *this, struct CMILMatrix *a2)
{
  double v2; // xmm4_8
  double v3; // xmm5_8
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  double v7; // xmm2_8
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4

  v2 = *((double *)this + 13);
  v3 = *((double *)this + 14);
  v4 = *((double *)this + 15);
  *((_DWORD *)a2 + 11) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  v5 = v2;
  *((_DWORD *)a2 + 15) = 1065353216;
  v6 = v3;
  *((float *)a2 + 10) = v4;
  *(float *)a2 = v5;
  *((float *)a2 + 5) = v6;
  v7 = *((double *)this + 16);
  if ( v7 == 0.0 && *((double *)this + 17) == 0.0 && *((double *)this + 18) == 0.0 )
  {
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
  }
  else
  {
    v8 = v7;
    v9 = *((double *)this + 17);
    v10 = *((double *)this + 18);
    *((float *)a2 + 12) = v8 - (float)(v8 * v5);
    *((float *)a2 + 13) = v9 - (float)(v9 * v6);
    *((float *)a2 + 14) = v10 - (float)(v10 * v4);
  }
}
