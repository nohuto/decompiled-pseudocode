/*
 * XREFs of ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180135710
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetD2D1Matrix4x4@CBaseMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x180099EF8 (-GetD2D1Matrix4x4@CBaseMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800DD9DC (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_xn @ 0x180106B1C (Template_xn.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180112180 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_4X4_F@@@Z @ 0x180134E84 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_4X4_F@@@Z.c)
 */

__int64 __fastcall CD2DContext::DrawBitmapWithCompositeMode(
        ID2D1Effect **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        FLOAT a6,
        enum D2D1_COMPOSITE_MODE a7,
        enum D2D1_BORDER_MODE a8,
        enum D2D1_INTERPOLATION_MODE a9)
{
  __int64 v11; // rax
  struct ID2D1Effect *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  struct ID2D1Effect *v15; // r12
  ID2D1Effect *v16; // r15
  ID2D1Effect *v17; // r14
  ID2D1Effect *v18; // rdi
  __int64 (__fastcall *v19)(struct ID2D1Effect *, _QWORD, _QWORD, CD2DContext **, int); // rbx
  int v20; // eax
  unsigned int v21; // esi
  int v22; // eax
  struct ID2D1Bitmap1 *v23; // rdi
  FLOAT v24; // xmm7_4
  char v25; // di
  __int64 (__fastcall *v26)(ID2D1Effect *, __int64, _QWORD, CD2DContext **, int); // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  CD2DContext *v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  const struct D2D_POINT_2F *v43; // [rsp+50h] [rbp-B8h]
  ID2D1Effect **v44; // [rsp+58h] [rbp-B0h]
  CD2DContext *v45[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_MATRIX_4X4_F v46; // [rsp+74h] [rbp-94h] BYREF
  float v47; // [rsp+B4h] [rbp-54h]
  int v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+BCh] [rbp-4Ch]
  int v50; // [rsp+C0h] [rbp-48h]
  float v51; // [rsp+C4h] [rbp-44h]
  __int128 v52; // [rsp+C8h] [rbp-40h] BYREF
  int v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+DCh] [rbp-2Ch]
  struct D2D_MATRIX_4X4_F v55; // [rsp+E8h] [rbp-20h] BYREF
  struct D2D_MATRIX_4X4_F v56; // [rsp+128h] [rbp+20h] BYREF

  v43 = a5;
  v45[0] = (CD2DContext *)a4;
  v44 = this;
  CD2DContext::FlushDrawList((CD2DContext *)this);
  v11 = *(_QWORD *)a2;
  v12 = 0LL;
  v42 = 0LL;
  (*(void (__fastcall **)(const struct ID2DContextOwner *, struct D2D_MATRIX_4X4_F *))(v11 + 16))(a2, &v55);
  CMILMatrix::CMILMatrix((CMILMatrix *)&v56, &v55);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v14, &EVTDESC_ETWGUID_DRAWEVENT_Start, 15, v13);
  }
  v15 = this[9];
  v16 = this[8];
  v17 = this[7];
  v18 = this[5];
  v53 = 0;
  v54 = 0;
  v52 = _xmm;
  (*(void (__fastcall **)(ID2D1Effect *, __int128 *))(*(_QWORD *)v18 + 240LL))(v18, &v52);
  if ( v45[0] )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v15 + 112LL))(
      v15,
      0LL,
      a3,
      1LL);
    v19 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CD2DContext **, int))(*(_QWORD *)v15 + 72LL);
    *(_OWORD *)v45 = *(_OWORD *)v45[0];
    v20 = v19(v15, 0LL, 0LL, v45, 16);
    v21 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x4ACu);
      goto LABEL_47;
    }
    v22 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CD2DContext **, int))(*(_QWORD *)v15 + 72LL))(
            v15,
            1LL,
            0LL,
            v45,
            16);
    v21 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x4B4u);
      goto LABEL_47;
    }
    v12 = v15;
  }
  v23 = a3;
  v24 = FLOAT_1_0;
  if ( HIDWORD(*(_QWORD *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, CD2DContext **))(*(_QWORD *)a3 + 48LL))(
                            a3,
                            v45)) == 3 )
  {
    v25 = 1;
    v24 = a6;
  }
  else
  {
    if ( a6 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm) < 0.0000011920929 )
      goto LABEL_31;
    v25 = 0;
  }
  if ( v12 )
    ID2D1Effect::SetInputEffect(v16, 0, v12);
  else
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v16 + 112LL))(
      v16,
      0LL,
      a3,
      1LL);
  v46._12 = v24;
  v46._23 = v24;
  v46._34 = v24;
  *(_OWORD *)&v46.m[0][2] = 0uLL;
  *(_OWORD *)&v46.m[1][3] = 0uLL;
  *(_OWORD *)&v46.m[3][0] = 0uLL;
  if ( v25 )
    v47 = 0.0;
  else
    v47 = a6;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( v25 )
    v51 = a6;
  else
    v51 = 0.0;
  v26 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, CD2DContext **, int))(*(_QWORD *)v16 + 72LL);
  if ( v25 )
  {
    LODWORD(v45[0]) = 2;
    v27 = v26(v16, 1LL, 0LL, v45, 4);
    v21 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x4DFu);
      goto LABEL_47;
    }
  }
  else
  {
    LODWORD(v45[0]) = 1;
    v28 = v26(v16, 1LL, 0LL, v45, 4);
    v21 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x4E4u);
      goto LABEL_47;
    }
  }
  v29 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, FLOAT *, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          0LL,
          0LL,
          &v46._12,
          80);
  v21 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x4E8u);
    goto LABEL_47;
  }
  v23 = a3;
  v12 = v16;
LABEL_31:
  if ( v12 )
    ID2D1Effect::SetInputEffect(v17, 0, v12);
  else
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v17 + 112LL))(
      v17,
      0LL,
      v23,
      1LL);
  if ( v43 )
  {
    x = v43->x;
    y = v43->y;
    *(_OWORD *)&v46.m[1][3] = 0uLL;
    *(_OWORD *)&v46.m[0][2] = 0uLL;
    v46._42 = x;
    *(_QWORD *)&v46.m[3][2] = LODWORD(y);
    v47 = 1.0;
    *(_QWORD *)&v46.m[2][3] = 1065353216LL;
    v46._23 = 1.0;
    v46._12 = 1.0;
    D2DMatrixMultiply((struct D2DMatrix *)&v56, (const struct D2DMatrix *)&v46.m[0][1], (const struct D2DMatrix *)&v56);
  }
  v55 = *CBaseMatrix::GetD2D1Matrix4x4(&v56, (struct D2D_MATRIX_4X4_F *)&v46.m[0][1]);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v32 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_xn(v33, &EVTDESC_VISUAL_TRANSFORM3D_MATRIX, v32, 16, (__int64)&v56);
  }
  v34 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct D2D_MATRIX_4X4_F *, int))(*(_QWORD *)v17 + 72LL))(
          v17,
          2LL,
          0LL,
          &v55,
          64);
  v21 = v34;
  if ( v34 >= 0 )
  {
    v35 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, enum D2D1_BORDER_MODE *, int))(*(_QWORD *)v17 + 72LL))(
            v17,
            1LL,
            0LL,
            &a8,
            4);
    v21 = v35;
    if ( v35 >= 0 )
    {
      v36 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, enum D2D1_INTERPOLATION_MODE *, int))(*(_QWORD *)v17 + 72LL))(
              v17,
              0LL,
              0LL,
              &a9,
              4);
      v21 = v36;
      if ( v36 >= 0 )
      {
        (*(void (__fastcall **)(ID2D1Effect *, __int64 *))(*(_QWORD *)v17 + 144LL))(v17, &v42);
        v37 = (CD2DContext *)v44;
        CD2DContext::SetAntiAliasMode((CD2DContext *)v44, 1u);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, enum D2D1_COMPOSITE_MODE))(**((_QWORD **)v37 + 5)
                                                                                                  + 664LL))(
          *((_QWORD *)v37 + 5),
          v42,
          0LL,
          0LL,
          0,
          a7);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v38 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
          Template_qq(v39, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 15, v38);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x51Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x518u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x512u);
  }
LABEL_47:
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v17 )
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 112LL))(v17, 0LL, 0LL, 1LL);
  if ( v16 )
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 112LL))(v16, 0LL, 0LL, 1LL);
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v15 + 112LL))(v15, 0LL, 0LL, 1LL);
  return v21;
}
