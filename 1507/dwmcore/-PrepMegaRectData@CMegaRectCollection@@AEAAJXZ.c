/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180003680 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 *     ??$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000D954 (--$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA?AVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV2@@Z @ 0x18000F694 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA-AVCMILMatrix@@AEBUD2D_VECTOR_2F@.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001E670 (--$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x180022580 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z @ 0x18003DB90 (-TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005B138 (--$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801000A4 (--$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801001C0 (--$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180100258 (--$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18010036C (--$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ??$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180100408 (--$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // xmm0_8
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  CMegaRectCollection *v15; // rcx
  unsigned int v16; // xmm1_4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  LPVOID (__fastcall *v19)(WPF::ProcessHeapImpl *, SIZE_T); // r14
  char *v20; // rax
  _QWORD *v21; // rcx
  _DWORD *v22; // rax
  __int32 v23; // r9d
  __int32 v24; // r10d
  __int32 v25; // eax
  __int32 v26; // r11d
  _DWORD *v27; // rdx
  unsigned int v29[6]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30[4]; // [rsp+50h] [rbp-B8h] BYREF
  __m128 v31; // [rsp+70h] [rbp-98h] BYREF
  __m128 v32; // [rsp+80h] [rbp-88h]
  _BYTE v33[64]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v34[48]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v35[80]; // [rsp+108h] [rbp+0h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 6) )
    return 0LL;
  while ( 1 )
  {
    v30[3] = 0x43F800000LL;
    v3 = *(_QWORD *)this + 216LL * v2;
    v4 = *(_QWORD **)(v3 + 8);
    v5 = *(_QWORD *)v3;
    *(_QWORD *)(v3 + 80) = 0LL;
    v6 = *(_QWORD *)((char *)v4 + 84);
    v30[0] = v4[6];
    v30[1] = v4[7];
    v30[2] = (__int64)v34;
    v31.m128_u64[0] = v6;
    if ( (unsigned int)CBaseMatrix::Is2DAffineOrNaN((CBaseMatrix *)(v5 + 76)) )
    {
      v7 = *(_DWORD *)(v5 + 124);
      v29[5] = *(_DWORD *)(v5 + 128);
      *(float *)&v8 = (float)(1.0 / v31.m128_f32[1]) * *(float *)(v5 + 96);
      v9 = (float)(1.0 / v31.m128_f32[0]) * *(float *)(v5 + 76);
      v10 = (float)(1.0 / v31.m128_f32[0]) * *(float *)(v5 + 80);
      v11 = (float)(1.0 / v31.m128_f32[1]) * *(float *)(v5 + 92);
      v29[4] = v7;
      v29[3] = v8;
      *(float *)v29 = v9;
      *(float *)&v29[1] = v10;
      *(float *)&v29[2] = v11;
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - *(float *)&v8)) & _xmm);
      if ( v12 > 0.0000011920929
        || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - COERCE_FLOAT(LODWORD(v11) ^ _xmm))) & _xmm),
            v13 > 0.0000011920929)
        || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v11 * v11) + (float)(v9 * v9)) - 1.0)) & _xmm),
            v14 >= 0.0000011920929) )
      {
        if ( (float)0.0 >= 0.0000011920929 )
        {
          if ( (((unsigned __int8)v35 - 48) & 0xF) != 0 )
            TransferVertices2D_Basic<1>(v30, v29);
          else
            TransferVertices2D_Vector<1>(v30, v29);
        }
        else if ( (((unsigned __int8)v35 - 48) & 0xF) != 0 )
        {
          TransferVertices2D_Basic<0>(v30, v29);
        }
        else
        {
          TransferVertices2D_Vector<0>(v30, v29);
        }
      }
      else if ( (float)0.0 >= 0.0000011920929 )
      {
        if ( (((unsigned __int8)v35 - 48) & 0xF) != 0 )
          TransferVertices2D_NoAAFixup_Basic<1>(v30, v29);
        else
          TransferVertices2D_NoAAFixup_Vector<1>(v30, v29);
      }
      else if ( (((unsigned __int8)v35 - 48) & 0xF) != 0 )
      {
        TransferVertices2D_NoAAFixup_Basic<0>(v30, v29);
      }
      else
      {
        TransferVertices2D_NoAAFixup_Vector<0>(v30, v29);
      }
    }
    else
    {
      CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)v33, v31.m128_f32, v5 + 76);
      TransferVertices3D_Internal((const struct CCommonTransferParameters *)v30, (const struct CMILMatrix *)v33);
    }
    if ( !(unsigned __int8)CMegaRectCollection::TryWellOrderRectForFixedPoint(
                             v15,
                             (struct CVertexXYWColorDUV2 *)v34,
                             (struct CVertexXYWColorDUV2 *)(v3 + 88)) )
      goto LABEL_18;
    v16 = *(_DWORD *)(v3 + 92);
    v32.m128_i32[0] = *(_DWORD *)(v3 + 88);
    *(unsigned __int64 *)((char *)v32.m128_u64 + 4) = __PAIR64__(*(_DWORD *)(v3 + 184), v16);
    v32.m128_i32[3] = *(_DWORD *)(v3 + 188);
    v17 = _mm_mul_ps(_mm_add_ps(v32, g_halfFixedPointForRounding), (__m128)_xmm);
    v18 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v17);
    v31 = _mm_or_ps(_mm_andnot_ps(v18, (__m128)_mm_cvttps_epi32(v17)), _mm_and_ps(v18, DirectX::g_XMAbsMask));
    v19 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v20 = v19 == WPF::ProcessHeapImpl::Alloc
        ? (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x48uLL)
        : (char *)v19(WPF::g_pProcessHeap, 72LL);
    v21 = v20;
    if ( v20 )
    {
      v22 = v20 + 8;
      *v21 = v22;
      *v22 = 0;
    }
    else
    {
      v21 = 0LL;
    }
    *(_QWORD *)(v3 + 80) = v21;
    if ( !v21 )
      break;
    v23 = v31.m128_i32[0];
    v24 = v31.m128_i32[2];
    if ( v31.m128_i32[0] >= v31.m128_i32[2]
      || (v25 = v31.m128_i32[1], v26 = v31.m128_i32[3], v31.m128_i32[1] >= v31.m128_i32[3]) )
    {
      *(_DWORD *)*v21 = 0;
    }
    else
    {
      v27 = (_DWORD *)*v21;
      *v27 = 2;
      v27[1] = v23;
      v27[2] = v24;
      v27[3] = v25;
      v27[4] = 16;
      v27[7] = v23;
      v27[8] = v24;
      v27[5] = v26;
      v27[6] = 16;
    }
LABEL_18:
    if ( ++v2 >= *((_DWORD *)this + 6) )
      return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x115u);
  return 2147942414LL;
}
