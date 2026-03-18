/*
 * XREFs of ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x1800AF71C
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 */

void __fastcall SplitVertex(
        const struct CVertexXYAAColorDUV2 *a1,
        const struct D2D_VECTOR_2F *a2,
        struct D2D_POINT_2F *a3,
        struct CVertexXYWColorDUV2 *a4,
        struct CVertexAAFixupData *a5)
{
  FLOAT x; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  FLOAT y; // xmm0_4
  struct CVertexAAFixupData *v11; // rcx
  float v12; // xmm2_4
  __int64 v13; // xmm1_8
  _DWORD v14[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+70h] [rbp-10h]
  struct D2D_POINT_2F v18; // [rsp+90h] [rbp+10h] BYREF

  x = a2->x;
  v8 = a2->x - 1.0;
  *a3 = *(struct D2D_POINT_2F *)a1;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 >= 0.0000011920929
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2->y - 1.0)) & _xmm), v12 >= 0.0000011920929) )
  {
    y = a2->y;
    v14[1] = 0;
    v14[2] = 0;
    v14[3] = 0;
    v14[4] = 0;
    v14[6] = 0;
    v14[7] = 0;
    v17 = 0;
    *(FLOAT *)&v14[5] = y;
    v15 = _xmm;
    *(FLOAT *)v14 = x;
    v16 = _xmm;
    Transform2DAndFillPosXYUV2(
      a1,
      (const struct CVertexXYAAColorDUV2 *)((char *)a1 + 32),
      (const struct CMILMatrix *)v14,
      a4,
      &v18);
    v11 = a5;
    *(struct D2D_POINT_2F *)a5 = v18;
  }
  else
  {
    *(_QWORD *)a4 = *(_QWORD *)a1;
    *((_QWORD *)a4 + 2) = *((_QWORD *)a1 + 2);
    *((_QWORD *)a4 + 3) = *((_QWORD *)a1 + 3);
    v13 = *((_QWORD *)a1 + 4);
    v11 = a5;
    *(_QWORD *)a5 = v13;
  }
  *((_DWORD *)a4 + 2) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a4 + 3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)v11 + 2) = *((_DWORD *)a1 + 10);
  *((_DWORD *)v11 + 3) = *((_DWORD *)a1 + 11);
  *((_QWORD *)v11 + 2) = *((_QWORD *)a1 + 6);
  *((_QWORD *)v11 + 3) = *((_QWORD *)a1 + 7);
}
