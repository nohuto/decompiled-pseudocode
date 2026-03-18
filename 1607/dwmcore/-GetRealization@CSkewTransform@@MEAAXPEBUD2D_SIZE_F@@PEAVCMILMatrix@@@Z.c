/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180001610
 * Callers:
 *     <none>
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     fmod_0 @ 0x1800BF61A (fmod_0.c)
 *     tan_0 @ 0x1800BF6C2 (tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  float v6; // xmm8_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm7_8
  double v10; // xmm6_8
  float v11; // xmm1_4
  CMILMatrix *v12; // rcx

  v5 = fmod_0(*((double *)this + 27), 360.0);
  v6 = tan_0(v5 * 0.01745329238474369);
  v7 = fmod_0(*((double *)this + 28), 360.0);
  v8 = tan_0(v7 * 0.01745329238474369);
  v9 = *((double *)this + 29);
  v10 = *((double *)this + 30);
  *(_DWORD *)a3 = 1065353216;
  v11 = v8;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((float *)a3 + 4) = v6;
  *((float *)a3 + 1) = v11;
  *(float *)&v9 = v9;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *(float *)&v10 = v10;
  CMILMatrix::PrependTranslate(a3, COERCE_FLOAT(LODWORD(v9) ^ _xmm), COERCE_FLOAT(LODWORD(v10) ^ _xmm), 0.0);
  CMILMatrix::Translate(v12, *(float *)&v9, *(float *)&v10, 0.0);
}
