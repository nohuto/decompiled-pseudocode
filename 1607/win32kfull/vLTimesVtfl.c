/*
 * XREFs of vLTimesVtfl @ 0x1C0245660
 * Callers:
 *     vFillGLYPHDATA @ 0x1C00C29A4 (vFillGLYPHDATA.c)
 *     vFill_GlyphData @ 0x1C014D8C8 (vFill_GlyphData.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0243960 (vFillGLYPHDATA_ErrRecover.c)
 *     vFillSingularGLYPHDATA @ 0x1C0243B48 (vFillSingularGLYPHDATA.c)
 * Callees:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C024563C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall vLTimesVtfl(int a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  float v5; // [rsp+38h] [rbp+10h] BYREF
  float v6; // [rsp+3Ch] [rbp+14h]

  v3 = (float)a1 * *a2;
  v6 = a2[1] * (float)a1;
  v5 = v3;
  return EPOINTQF::operator=(a3, (__int64)&v5);
}
