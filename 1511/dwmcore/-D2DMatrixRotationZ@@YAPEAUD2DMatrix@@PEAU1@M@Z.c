/*
 * XREFs of ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800673C4
 * Callers:
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066D90 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384 (-DecomposeMatrix@-A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180157438 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800BC866 (cosf_0.c)
 *     sinf_0 @ 0x1800BC8F6 (sinf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationZ(struct D2DMatrix *a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  struct D2DMatrix *result; // rax

  v3 = sinf_0(a2);
  v4 = cosf_0(a2);
  *((float *)a1 + 1) = v3;
  *((_DWORD *)a1 + 4) = LODWORD(v3) ^ _xmm;
  *((_QWORD *)a1 + 5) = 1065353216LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  result = a1;
  *(float *)a1 = v4;
  *((float *)a1 + 5) = v4;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  return result;
}
