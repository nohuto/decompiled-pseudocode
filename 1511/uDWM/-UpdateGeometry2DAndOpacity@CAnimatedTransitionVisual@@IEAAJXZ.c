/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D3AC (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18000C880 (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18000E394 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18000E5FC (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180018388 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180036340 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038EDC (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18003E990 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180050B14 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CVisual *v1; // rsi
  __int64 v3; // xmm0_8
  char v4; // bl
  __m128i v5; // xmm14
  char v6; // r13
  __m128i v7; // xmm15
  char v8; // di
  CBaseObject *v9; // r15
  struct CPopInstruction *v10; // r12
  signed int v11; // eax
  float v12; // xmm14_4
  struct tagRECT v13; // xmm0
  __m128i v14; // xmm10
  signed int v15; // eax
  float v16; // xmm10_4
  __m128i v17; // xmm11
  unsigned int v18; // eax
  float v19; // xmm10_4
  float v20; // xmm15_4
  float v21; // xmm11_4
  __m128i v22; // xmm1
  LONG top; // rbx^4
  __m128i v24; // xmm0
  signed int v25; // eax
  float v26; // xmm0_4
  __m128i v27; // xmm7
  float v28; // xmm0_4
  __m128i v29; // xmm9
  int v30; // eax
  float v31; // xmm1_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  float v34; // xmm13_4
  float v35; // xmm8_4
  float v36; // xmm12_4
  float v37; // xmm5_4
  float v38; // xmm9_4
  float v39; // xmm0_4
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  CResource *v52; // rcx
  int v53; // eax
  unsigned int v54; // ebx
  int v55; // eax
  int v56; // eax
  struct CResource *v57; // rcx
  int v58; // eax
  CBaseObject *v59; // rdi
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  float v65; // xmm0_4
  signed int v66; // eax
  __m128i v67; // xmm0
  int v68; // eax
  float v69; // xmm0_4
  char v70; // [rsp+48h] [rbp-C0h]
  struct tagRECT v71; // [rsp+58h] [rbp-B0h] BYREF
  struct CRenderDataInstruction *v72; // [rsp+68h] [rbp-A0h] BYREF
  struct CPopInstruction *v73; // [rsp+70h] [rbp-98h] BYREF
  float v74[2]; // [rsp+78h] [rbp-90h] BYREF
  struct CRenderDataInstruction *v75; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v76; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v77[2]; // [rsp+98h] [rbp-70h] BYREF
  float v78[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v79; // [rsp+A8h] [rbp-60h] BYREF
  int v80; // [rsp+ACh] [rbp-5Ch] BYREF
  double v81; // [rsp+B0h] [rbp-58h]
  double v82; // [rsp+B8h] [rbp-50h]
  double v83; // [rsp+C0h] [rbp-48h]
  double v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  double v86; // [rsp+D8h] [rbp-30h]
  int v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+E4h] [rbp-24h]
  float v89; // [rsp+E8h] [rbp-20h] BYREF
  float v90; // [rsp+ECh] [rbp-1Ch]
  int v91; // [rsp+F0h] [rbp-18h]
  int v92; // [rsp+F4h] [rbp-14h]
  float v93; // [rsp+F8h] [rbp-10h]
  float v94; // [rsp+FCh] [rbp-Ch]
  int v95; // [rsp+100h] [rbp-8h]
  int v96; // [rsp+104h] [rbp-4h]
  int v97; // [rsp+108h] [rbp+0h]
  int v98; // [rsp+10Ch] [rbp+4h]
  int v99; // [rsp+110h] [rbp+8h]
  int v100; // [rsp+114h] [rbp+Ch]
  float v101; // [rsp+118h] [rbp+10h]
  float v102; // [rsp+11Ch] [rbp+14h]
  int v103; // [rsp+120h] [rbp+18h]
  int v104; // [rsp+124h] [rbp+1Ch]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v3 = *(_QWORD *)((char *)this + 748);
  v4 = 0;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 210));
  v6 = 0;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 211));
  v8 = 0;
  v71.right = *((_DWORD *)this + 189);
  v9 = 0LL;
  v10 = 0LL;
  v11 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  LODWORD(v12) = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v11 < 0 )
    v11 = 0;
  v70 = 0;
  v75 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v71.left = v3;
  v13 = *(struct tagRECT *)((char *)this + 840);
  v14 = _mm_cvtsi32_si128(v11);
  v15 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
  LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
  if ( v15 < 0 )
    v15 = 0;
  v17 = _mm_cvtsi32_si128(v15);
  v18 = *((_DWORD *)this + 234);
  v19 = (float)(v16 * *((float *)this + 190)) + v12;
  *(float *)v17.m128i_i32 = _mm_cvtepi32_ps(v17).m128_f32[0] * *((float *)this + 191);
  v20 = _mm_cvtepi32_ps(v7).m128_f32[0];
  *(float *)v77 = v19;
  v21 = *(float *)v17.m128i_i32 + v20;
  v76 = v13;
  *(float *)&v77[1] = v21;
  if ( v18 || *((_DWORD *)this + 235) )
  {
    v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 235));
    top = v76.top;
    v24 = _mm_cvtsi32_si128(v18);
    v25 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
    LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( v25 < 0 )
      v25 = 0;
    v27 = _mm_cvtsi32_si128(v76.left);
    v28 = v26 / *((float *)this + 199);
    v29 = _mm_cvtsi32_si128(v25);
    v30 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
    LODWORD(v31) = _mm_cvtepi32_ps(v22).m128_u32[0];
    if ( v30 < 0 )
      v30 = 0;
    v32 = _mm_cvtepi32_ps(v29).m128_f32[0] / v28;
    v33 = _mm_cvtepi32_ps(v27).m128_f32[0];
    v34 = *(float *)&v71.left * v32;
    v35 = (float)v30 / (float)(v31 / *((float *)this + 200));
    v36 = *(float *)&v71.top * v35;
    v71.left = RoundToNearestInt((float)((float)(v33 - v19) / v32) + v19);
    v71.top = RoundToNearestInt((float)((float)((float)v76.top - v21) / v35) + v21);
    v71.right = RoundToNearestInt((float)((float)((float)v76.right - v19) / v32) + v19);
    v4 = 0;
    v71.bottom = RoundToNearestInt((float)((float)((float)v76.bottom - v21) / v35) + v21);
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v76 = v71;
    v8 = 0;
    v37 = (float)((float)((float)((float)((float)v71.left - v19) * v32) + v19) - v33) * *((float *)this + 187);
    v38 = (float)((float)((float)((float)((float)v71.top - v21) * v35) + v21) - (float)top) * *((float *)this + 188);
  }
  else
  {
    v36 = *(float *)&v71.top;
    v37 = 0.0;
    v34 = *(float *)&v71.left;
    v38 = 0.0;
  }
  v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v34 - 1.0)) & _xmm);
  v40 = (float)(*((_DWORD *)this + 210) + *((_DWORD *)this + 212)) * 0.5;
  v41 = (float)(*((_DWORD *)this + 211) + *((_DWORD *)this + 213)) * 0.5;
  if ( v39 >= 0.0000011920929
    || (v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v36 - 1.0)) & _xmm), v42 >= 0.0000011920929) )
  {
    *(_QWORD *)&v71.left = __PAIR64__(LODWORD(v36), LODWORD(v34));
    v6 = 1;
  }
  v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 193)) & _xmm);
  if ( v43 >= 0.0000011920929 )
  {
    v4 = 1;
    v66 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
    if ( v66 < 0 )
      v66 = 0;
    v67 = _mm_cvtsi32_si128(v66);
    v68 = *((_DWORD *)this + 213) - *((_DWORD *)this + 211);
    LODWORD(v69) = _mm_cvtepi32_ps(v67).m128_u32[0];
    if ( v68 < 0 )
      v68 = 0;
    v74[0] = (float)(v69 * *((float *)this + 196)) + v12;
    v74[1] = (float)((float)v68 * *((float *)this + 197)) + v20;
  }
  v44 = *((float *)this + 184);
  v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44) & _xmm);
  if ( v45 >= 0.0000011920929
    || (v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 185)) & _xmm), v46 >= 0.0000011920929)
    || (v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm), v47 >= 0.0000011920929)
    || (v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38) & _xmm), v48 >= 0.0000011920929) )
  {
    v65 = *((float *)this + 185) - v38;
    v8 = 1;
    v78[0] = v44 - v37;
    v78[1] = v65;
  }
  v49 = *((float *)this + 231);
  v103 = 0;
  v102 = 0.0;
  v101 = 0.0;
  v100 = 0;
  v98 = 0;
  v97 = 0;
  v96 = 0;
  v95 = 0;
  v93 = 0.0;
  v92 = 0;
  v91 = 0;
  v90 = 0.0;
  v104 = 1065353216;
  v99 = 1065353216;
  v94 = 1.0;
  v89 = 1.0;
  v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v49) & _xmm);
  if ( v50 >= 0.0000011920929 )
  {
    v84 = 0.0;
    v83 = 0.0;
    v82 = 0.0078125;
    v81 = 0.0;
    v80 = 0;
    v87 = 0;
    LODWORD(v86) = LODWORD(v40) ^ _xmm;
    HIDWORD(v86) = LODWORD(v41) ^ _xmm;
    v70 = 1;
    v88 = 1065353216;
    v85 = 1065353216LL;
    v79 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v79);
    D2DMatrixRotationZ((struct D2DMatrix *)&v79, *((float *)this + 231) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v79);
    v84 = 0.0;
    v83 = 0.0;
    v82 = 0.0078125;
    v81 = 0.0;
    v80 = 0;
    v87 = 0;
    v86 = COERCE_DOUBLE(__PAIR64__(LODWORD(v41), LODWORD(v40)));
    v88 = 1065353216;
    v85 = 1065353216LL;
    v79 = 1065353216;
    D2DMatrixMultiply((struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v79);
  }
  if ( !v6 && !v4 && !v8
    || (v4 ? (v51 = *((float *)this + 193)) : (v51 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v79,
           (const struct D2DVector2 *)((unsigned __int64)v77 & -(__int64)(v6 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v71 & -(__int64)(v6 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v74 & -(__int64)(v4 != 0)),
           v51,
           (const struct D2DVector2 *)((unsigned __int64)v78 & -(__int64)(v8 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v89, (const struct D2DMatrix *)&v79),
         !v4)
     && !v6
     && !v8) )
  {
    if ( !v70 )
      goto LABEL_33;
  }
  v79 = 250;
  memset_0(&v80, 0, 0x34uLL);
  v52 = (CResource *)*((_QWORD *)this + 39);
  v81 = v89;
  v82 = v90;
  v83 = v93;
  v84 = v94;
  *(double *)&v85 = v101;
  v86 = v102;
  v53 = CResource::Send(v52, &v79, 0x38u);
  v54 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x569u);
    return v54;
  }
  v55 = CPushTransformInstruction::Create(*((struct CResource **)this + 39), &v72);
  v54 = v55;
  if ( v55 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x56Bu);
    v9 = v72;
  }
  else
  {
    v9 = v72;
    v56 = CVisual::AddInstruction(v1, v72);
    v54 = v56;
    if ( v56 >= 0 )
    {
LABEL_33:
      v57 = (struct CResource *)*((_QWORD *)this + 73);
      if ( !v57 )
        v57 = (struct CResource *)*((_QWORD *)this + 71);
      v58 = CDrawTileImageInstruction::Create(
              v57,
              &v76,
              (const struct tagPOINT *)this + 116,
              *((float *)this + 182),
              &v75);
      v59 = v75;
      v54 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x576u);
      }
      else
      {
        v60 = CVisual::AddInstruction(v1, v75);
        v54 = v60;
        if ( v60 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x577u);
        }
        else
        {
          v61 = CAnimatedTransitionVisual::_AddOcclusionInstruction(this, &v76);
          v54 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x578u);
          }
          else if ( v9 )
          {
            v62 = CPopInstruction::Create(&v73);
            v54 = v62;
            if ( v62 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x57Cu);
              v10 = v73;
            }
            else
            {
              v10 = v73;
              v63 = CVisual::AddInstruction(v1, v73);
              v54 = v63;
              if ( v63 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x57Du);
            }
          }
        }
      }
      if ( v59 )
        CBaseObject::Release(v59);
      goto LABEL_44;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x56Cu);
  }
LABEL_44:
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v10 )
    CBaseObject::Release(v10);
  return v54;
}
