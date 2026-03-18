/*
 * XREFs of ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180157438
 * Callers:
 *     ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384 (-DecomposeMatrix@-A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800673C4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1801575C4 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixTransformation2D(
        struct D2DMatrix *a1,
        const struct D2DVector2 *a2,
        float a3,
        const struct D2DVector2 *a4,
        const struct D2DVector2 *a5,
        float a6,
        const struct D2DVector2 *a7)
{
  int v8; // xmm1_4
  int v9; // xmm0_4
  struct D2DMatrix *v10; // rcx
  const struct D2DMatrix *v11; // rdx
  _DWORD v13[16]; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v14[64]; // [rsp+68h] [rbp-21h] BYREF

  if ( a4 )
  {
    if ( a3 != 0.0 )
    {
      v8 = *((_DWORD *)a4 + 1);
      v9 = *(_DWORD *)a4;
      v13[14] = 0;
      v13[13] = 0;
      v13[12] = 0;
      v13[11] = 0;
      v13[9] = 0;
      v13[8] = 0;
      v13[7] = 0;
      v13[6] = 0;
      v13[4] = 0;
      v13[3] = 0;
      v13[2] = 0;
      v13[1] = 0;
      v13[5] = v8;
      v13[0] = v9;
      v13[10] = 1065353216;
      v13[15] = 1065353216;
      D2DMatrixRotationZ((struct D2DMatrix *)v14, a3);
      D2DMatrixTranspose(a1, (const struct D2DMatrix *)v14);
      D2DMatrixMultiply(v10, a1, (const struct D2DMatrix *)v13);
      D2DMatrixMultiply(a1, v11, (const struct D2DMatrix *)v14);
      goto LABEL_7;
    }
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    *(_DWORD *)a1 = *(_DWORD *)a4;
    *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
  }
  else
  {
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
  }
  *((_DWORD *)a1 + 10) = 1065353216;
  *((_DWORD *)a1 + 15) = 1065353216;
LABEL_7:
  if ( a6 != 0.0 )
  {
    D2DMatrixRotationZ((struct D2DMatrix *)v14, a6);
    D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v14);
  }
  if ( a7 )
  {
    *((float *)a1 + 12) = *(float *)a7 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a7 + 1) + *((float *)a1 + 13);
  }
  return a1;
}
