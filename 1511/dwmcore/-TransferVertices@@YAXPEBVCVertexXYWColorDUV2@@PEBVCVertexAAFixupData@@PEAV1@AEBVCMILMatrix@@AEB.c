/*
 * XREFs of ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18007814C (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180014F80 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800155E4 (--$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ??$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800163C0 (--$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA?AVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV2@@Z @ 0x180019980 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA-AVCMILMatrix@@AEBUD2D_VECTOR_2F@.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180032FB0 (--$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x1800474D0 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ??$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC06C (--$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801190EC (--$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180119208 (--$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801192A0 (--$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801193B4 (--$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 */

void __fastcall TransferVertices(
        const struct CVertexXYWColorDUV2 *a1,
        const struct CVertexAAFixupData *a2,
        struct CVertexXYWColorDUV2 *a3,
        const struct CMILMatrix *a4,
        struct D2D_VECTOR_2F *a5,
        float a6,
        unsigned int a7)
{
  bool v8; // bl
  unsigned int v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  unsigned int v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  unsigned int v19[6]; // [rsp+28h] [rbp-81h] BYREF
  __int64 v20[3]; // [rsp+40h] [rbp-69h] BYREF
  float v21; // [rsp+58h] [rbp-51h]
  unsigned int v22; // [rsp+5Ch] [rbp-4Dh]
  _BYTE v23[64]; // [rsp+68h] [rbp-41h] BYREF

  v8 = ((unsigned __int8)a3 & 0xF) == 0;
  v20[0] = (__int64)a1;
  v21 = a6;
  v20[1] = (__int64)a2;
  v20[2] = (__int64)a3;
  v22 = a7;
  if ( (unsigned int)CBaseMatrix::Is2DAffineOrNaN(a4, (int)a2) )
  {
    v9 = *((_DWORD *)a4 + 13);
    v10 = 1.0 / a5->x;
    v11 = 1.0 / a5->y;
    *(float *)&v12 = v11 * *((float *)a4 + 5);
    v13 = v10 * *(float *)a4;
    v14 = v10 * *((float *)a4 + 1);
    v15 = v11 * *((float *)a4 + 4);
    v19[4] = *((_DWORD *)a4 + 12);
    v19[5] = v9;
    v19[3] = v12;
    *(float *)v19 = v13;
    *(float *)&v19[1] = v14;
    *(float *)&v19[2] = v15;
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - *(float *)&v12)) & _xmm);
    if ( v16 > 0.0000011920929
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - COERCE_FLOAT(LODWORD(v15) ^ _xmm))) & _xmm),
          v17 > 0.0000011920929)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v15 * v15) + (float)(v13 * v13)) - 1.0)) & _xmm),
          v18 >= 0.0000011920929) )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm) >= 0.0000011920929 )
      {
        if ( v8 )
          TransferVertices2D_Vector<1>(v20, v19);
        else
          TransferVertices2D_Basic<1>(v20, v19);
      }
      else if ( v8 )
      {
        TransferVertices2D_Vector<0>(v20, v19);
      }
      else
      {
        TransferVertices2D_Basic<0>(v20, v19);
      }
    }
    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v8 )
        TransferVertices2D_NoAAFixup_Vector<1>(v20, v19);
      else
        TransferVertices2D_NoAAFixup_Basic<1>(v20, v19);
    }
    else if ( v8 )
    {
      TransferVertices2D_NoAAFixup_Vector<0>(v20, v19);
    }
    else
    {
      TransferVertices2D_NoAAFixup_Basic<0>(v20, v19);
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)v23, (float *)a5, (__int64)a4);
    TransferVertices3D_Internal((const struct CCommonTransferParameters *)v20, (const struct CMILMatrix *)v23);
  }
}
