/*
 * XREFs of ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180014F80 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800155E4 (--$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ??$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800163C0 (--$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA?AVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV2@@Z @ 0x180019980 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA-AVCMILMatrix@@AEBUD2D_VECTOR_2F@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180032FB0 (--$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18007AA50 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800A98D0 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     ?LockBytes@CD3DBuffer@@QEAAJI@Z @ 0x1800A99F0 (-LockBytes@CD3DBuffer@@QEAAJI@Z.c)
 *     ??$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC06C (--$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800FA074 (-SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800FA0E4 (-SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1800FBC50 (-Unlock@CD3DBuffer@@QEAAXXZ.c)
 *     ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801190EC (--$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180119208 (--$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801192A0 (--$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801193B4 (--$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 */

__int64 __fastcall CHWCallbackRenderer::Render(CHWCallbackRenderer *this)
{
  CHWCallbackRenderer **v1; // rax
  CHWCallbackRenderer *v2; // r13
  CHWCallbackRenderer *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rax
  __int64 *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rsi
  unsigned int v18; // r12d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  struct CD3DDeviceLevel1 *v21; // rbx
  __int64 (__fastcall *v22)(CCommonRenderingEffect *__hidden, struct CD3DDeviceLevel1 *, const struct _LUID *, const struct DisplayId *, const enum StereoContext *); // rdi
  int v23; // eax
  int v24; // edi
  unsigned int v25; // eax
  __int64 v26; // r12
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rsi
  bool v30; // r8
  bool v31; // al
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(CCommonRenderingEffect *__hidden, struct CD3DDeviceLevel1 *, const struct _LUID *, const struct DisplayId *, const enum StereoContext *); // rdi
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // edx
  int v38; // eax
  int v39; // eax
  int v40; // r14d
  char v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  float v45; // xmm7_4
  __int64 v46; // xmm0_8
  bool v47; // al
  int v48; // esi
  double v49; // xmm0_8
  float v50; // xmm2_4
  double v51; // xmm0_8
  float v52; // xmm2_4
  double v53; // xmm0_8
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  unsigned int v57; // xmm0_4
  unsigned int v58; // xmm2_4
  float v59; // xmm5_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm1_4
  unsigned int v64; // r9d
  __int64 v65; // rdx
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  __int16 v68; // r11
  __m128i v69; // xmm1
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __m128i v72; // xmm2
  __int64 v73; // rax
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  __int16 v77; // ax
  __int64 v78; // rsi
  __int64 v79; // rsi
  unsigned int i; // ebx
  CD3DBuffer *v81; // rcx
  CD3DBuffer *v82; // rcx
  char *v83; // r12
  unsigned int v84; // r13d
  __int64 v85; // r14
  __int64 v86; // rdi
  __int64 v87; // rsi
  void (__fastcall ***v88)(_QWORD); // r15
  CMILRefCountBase *v89; // rbx
  volatile signed __int32 *v90; // rsi
  CMILRefCountBase *v91; // rbx
  __int64 (__fastcall *v92)(CMILRefCountBase *); // rdi
  __int64 v93; // r10
  unsigned int v94; // eax
  unsigned int v95; // edx
  CD3DBuffer *v97; // rcx
  unsigned int v98; // edx
  struct ID3D11DeviceContext *v99; // rbx
  CD3DBuffer *v100; // rcx
  unsigned int v101; // edx
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // ebx
  int v106; // eax
  int v107; // eax
  double v108; // xmm0_8
  double v109; // xmm0_8
  double v110; // xmm0_8
  double v111; // xmm0_8
  double v112; // xmm0_8
  double v113; // xmm0_8
  bool v114; // zf
  __int64 v115; // rcx
  bool v116; // [rsp+48h] [rbp-C0h]
  bool v117; // [rsp+48h] [rbp-C0h]
  unsigned int v118; // [rsp+4Ch] [rbp-BCh]
  bool v119; // [rsp+50h] [rbp-B8h]
  int v120; // [rsp+54h] [rbp-B4h]
  unsigned int v121; // [rsp+58h] [rbp-B0h]
  unsigned int v122; // [rsp+5Ch] [rbp-ACh]
  int v123; // [rsp+60h] [rbp-A8h]
  unsigned int v124; // [rsp+64h] [rbp-A4h]
  int v125; // [rsp+68h] [rbp-A0h]
  struct ID3D11DeviceContext *v126; // [rsp+70h] [rbp-98h]
  struct ID3D11DeviceContext *v127; // [rsp+70h] [rbp-98h]
  CHWCallbackRenderer *v128; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v129[6]; // [rsp+80h] [rbp-88h] BYREF
  int v130; // [rsp+98h] [rbp-70h] BYREF
  __int64 v131; // [rsp+A0h] [rbp-68h] BYREF
  int v132; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v133[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v134; // [rsp+C0h] [rbp-48h]
  float v135; // [rsp+C8h] [rbp-40h]
  int v136; // [rsp+CCh] [rbp-3Ch]
  CHWCallbackRenderer *v137; // [rsp+D0h] [rbp-38h]
  __int64 v138; // [rsp+D8h] [rbp-30h] BYREF
  __m128i Buf2; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v140; // [rsp+F0h] [rbp-18h]
  __int128 v141; // [rsp+100h] [rbp-8h]
  int v142; // [rsp+110h] [rbp+8h]
  _BYTE v143[64]; // [rsp+118h] [rbp+10h] BYREF

  v1 = (CHWCallbackRenderer **)*((_QWORD *)this + 4);
  v2 = this;
  v137 = this;
  v3 = *v1;
  v4 = *((_QWORD *)v2 + 3);
  v128 = v3;
  v124 = 0;
  v126 = *(struct ID3D11DeviceContext **)(v4 + 560);
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CHWCallbackRenderer *)((char *)v2 + 120));
    v118 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB2u);
      goto LABEL_66;
    }
  }
  v6 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), 0xC80u);
  v118 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
    goto LABEL_66;
  }
  v7 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 0xC8u);
  v118 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB6u);
    goto LABEL_66;
  }
  v8 = (_QWORD *)*((_QWORD *)v2 + 3);
  v9 = (__int64 *)v8[70];
  v10 = v8[203];
  v11 = v8[145];
  v12 = v8[202];
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v9 + 152))(v9, *(_QWORD *)(*((_QWORD *)v2 + 11) + 16LL), 57LL);
  v13 = *((_QWORD *)v2 + 10);
  v130 = 32;
  v132 = 0;
  v14 = *(_QWORD *)(v13 + 16);
  v15 = *v9;
  v138 = v14;
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *, int *, int *))(v15 + 144))(
    v9,
    0LL,
    1LL,
    &v138,
    &v130,
    &v132);
  (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 192))(v9, 4LL);
  (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 136))(v9, v11);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*v9 + 384))(
    v9,
    *((_QWORD *)v2 + 14),
    0LL,
    0LL,
    (__int64)v2 + 96,
    0,
    0);
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v9 + 56))(v9, 0LL, 1LL, (__int64)v2 + 112);
  (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 344))(v9, v12);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*v9 + 288))(v9, v10, 0LL);
  v16 = 0;
  v17 = *((_QWORD *)v2 + 3);
  v125 = 0;
  v121 = 0;
  v18 = *(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1;
  v122 = v18;
  v123 = *(_DWORD *)(*((_QWORD *)v2 + 10) + 40LL) >> 5;
  v19 = *(_OWORD *)((char *)v128 + 40);
  Buf2 = *(__m128i *)((char *)v128 + 24);
  v20 = *(_OWORD *)((char *)v128 + 56);
  v142 = *((_DWORD *)v128 + 18);
  v141 = v20;
  v140 = v19;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v17 + 560) + 280LL))(
    *(_QWORD *)(v17 + 560),
    *(_QWORD *)(v17 + 8LL * _mm_cvtsi128_si32(Buf2) + 1168),
    0LL,
    0xFFFFFFFFLL);
  v21 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v2 + 3);
  v22 = *(__int64 (__fastcall **)(CCommonRenderingEffect *__hidden, struct CD3DDeviceLevel1 *, const struct _LUID *, const struct DisplayId *, const enum StereoContext *))(*(__int64 *)((char *)Buf2.m128i_i64 + 4) + 24);
  if ( v22 == CCommonRenderingEffect::SetStateOnDevice )
    v23 = CCommonRenderingEffect::SetStateOnDevice(
            (CCommonRenderingEffect *)((char *)Buf2.m128i_i64 + 4),
            v21,
            (const struct _LUID *)v2 + 8,
            (CHWCallbackRenderer *)((char *)v2 + 72),
            (CHWCallbackRenderer *)((char *)v2 + 76));
  else
    v23 = v22(
            (CCommonRenderingEffect *)((char *)Buf2.m128i_i64 + 4),
            v21,
            (const struct _LUID *)v2 + 8,
            (CHWCallbackRenderer *)((char *)v2 + 72),
            (CHWCallbackRenderer *)((char *)v2 + 76));
  v120 = v23;
  v24 = v23;
  v118 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xD7u);
    memset_0(&Buf2, 0, 0x34uLL);
  }
  if ( *((_DWORD *)v2 + 14) )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * v25);
      v27 = *(_QWORD *)(v26 + 16);
      v28 = memcmp_0((const void *)(v26 + 24), &Buf2, 0x34uLL);
      v29 = *((_QWORD *)v2 + 10);
      v30 = v28 != 0;
      v119 = v28 != 0;
      v31 = *(_DWORD *)(v27 + 64) > (unsigned int)((*(_DWORD *)(v29 + 44) >> 5) - (*(_DWORD *)(v29 + 40) >> 5))
         || *(_DWORD *)(v27 + 80) > (unsigned int)((*(_DWORD *)(*((_QWORD *)v2 + 11) + 44LL) >> 1)
                                                 - (*(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1));
      v116 = v31;
      if ( v30 || v31 )
        break;
      v40 = v125;
LABEL_33:
      if ( v24 >= 0 )
      {
        v42 = *(_DWORD *)(v29 + 40) + 32 * *(_DWORD *)(v27 + 64);
        v134 = *(_QWORD *)(v29 + 32) + *(unsigned int *)(v29 + 40);
        v41 = v134;
        *(_DWORD *)(v29 + 40) = v42;
        v43 = *((_QWORD *)v2 + 11);
        v44 = *(_QWORD *)(v43 + 32) + *(unsigned int *)(v43 + 40);
        *(_DWORD *)(v43 + 40) += 2 * *(_DWORD *)(v27 + 80);
        v45 = *(float *)(v26 + 140);
        v46 = *(_QWORD *)(v27 + 84);
        v133[0] = *(_QWORD *)(v27 + 48);
        v133[1] = *(_QWORD *)(v27 + 56);
        v136 = *(_DWORD *)(v27 + 64);
        v135 = v45;
        v131 = v46;
        v47 = (v41 & 0xF) == 0;
        v48 = 0;
        v49 = *(float *)(v26 + 84);
        v117 = v47;
        v50 = COERCE_DOUBLE(*(_QWORD *)&v49 & _xmm);
        if ( v50 < 0.00012207031 )
          goto LABEL_35;
        if ( !_isnan(v49) )
          goto LABEL_129;
        v47 = v117;
LABEL_35:
        v51 = *(float *)(v26 + 100);
        v52 = COERCE_DOUBLE(*(_QWORD *)&v51 & _xmm);
        if ( v52 >= 0.00012207031 )
        {
          if ( _isnan(v51) )
          {
            v47 = v117;
            goto LABEL_36;
          }
          goto LABEL_129;
        }
LABEL_36:
        v53 = *(float *)(v26 + 132);
        v54 = COERCE_DOUBLE(*(_QWORD *)&v53 & _xmm);
        if ( v54 < 0.00012207031 )
        {
LABEL_37:
          v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v26 + 88)) & _xmm);
          v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v26 + 136)) & _xmm);
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v26 + 104)) & _xmm)
                                                                                        * 40960.0)
                                                                                + (float)(v55 * 40960.0))
                                                                        + v56)
                                                                - 1.0)) & _xmm) < 0.00012207031 )
            v48 = 1;
          goto LABEL_39;
        }
        if ( !_isnan(v53) )
        {
LABEL_129:
          v108 = *(float *)(v26 + 84);
          if ( (float)COERCE_DOUBLE(*(_QWORD *)&v108 & _xmm) >= 0.00012207031 && !_isnan(v108)
            || (v109 = *(float *)(v26 + 100), (float)COERCE_DOUBLE(*(_QWORD *)&v109 & _xmm) >= 0.00012207031)
            && !_isnan(v109)
            || (v110 = *(float *)(v26 + 108), (float)COERCE_DOUBLE(*(_QWORD *)&v110 & _xmm) >= 0.00012207031)
            && !_isnan(v110)
            || (v111 = *(float *)(v26 + 112), (float)COERCE_DOUBLE(*(_QWORD *)&v111 & _xmm) >= 0.00012207031)
            && !_isnan(v111)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v26 + 116) - 1.0)) & _xmm) >= 0.00012207031
            && !_isnan(*(float *)(v26 + 116))
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v26 + 116)) & _xmm) >= 0.00012207031
            || (v112 = *(float *)(v26 + 120), (float)COERCE_DOUBLE(*(_QWORD *)&v112 & _xmm) >= 0.00012207031)
            && !_isnan(v112) )
          {
            v47 = v117;
            goto LABEL_39;
          }
          v113 = *(float *)(v26 + 132);
          if ( (float)COERCE_DOUBLE(*(_QWORD *)&v113 & _xmm) >= 0.00012207031 )
          {
            v114 = _isnan(v113) == 0;
            v47 = v117;
            if ( !v114 )
              goto LABEL_37;
LABEL_39:
            if ( v48 )
            {
              v57 = *(_DWORD *)(v26 + 124);
              v129[5] = *(_DWORD *)(v26 + 128);
              *(float *)&v58 = (float)(1.0 / *((float *)&v131 + 1)) * *(float *)(v26 + 96);
              v59 = (float)(1.0 / *(float *)&v131) * *(float *)(v26 + 76);
              v60 = (float)(1.0 / *(float *)&v131) * *(float *)(v26 + 80);
              v61 = (float)(1.0 / *((float *)&v131 + 1)) * *(float *)(v26 + 92);
              v129[4] = v57;
              v129[3] = v58;
              *(float *)v129 = v59;
              *(float *)&v129[1] = v60;
              *(float *)&v129[2] = v61;
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v59 - *(float *)&v58)) & _xmm) > 0.0000011920929
                || (v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v60 - COERCE_FLOAT(LODWORD(v61) ^ _xmm))) & _xmm),
                    v62 > 0.0000011920929)
                || (v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v61 * v61) + (float)(v59 * v59))
                                                                    - 1.0)) & _xmm),
                    v63 >= 0.0000011920929) )
              {
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45 - 1.0)) & _xmm) < 0.0000011920929 )
                {
                  if ( v47 )
                    TransferVertices2D_Vector<0>(v133, v129);
                  else
                    TransferVertices2D_Basic<0>(v133, v129);
                }
                else if ( v47 )
                {
                  TransferVertices2D_Vector<1>(v133, v129);
                }
                else
                {
                  TransferVertices2D_Basic<1>(v133, v129);
                }
              }
              else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45 - 1.0)) & _xmm) >= 0.0000011920929 )
              {
                if ( v47 )
                  TransferVertices2D_NoAAFixup_Vector<1>(v133, v129);
                else
                  TransferVertices2D_NoAAFixup_Basic<1>(v133, v129);
              }
              else if ( v47 )
              {
                TransferVertices2D_NoAAFixup_Vector<0>(v133, v129);
              }
              else
              {
                TransferVertices2D_NoAAFixup_Basic<0>(v133, v129);
              }
            }
            else
            {
              CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)v143, (float *)&v131, v26 + 76);
              TransferVertices3D_Internal(
                (const struct CCommonTransferParameters *)v133,
                (const struct CMILMatrix *)v143);
            }
            v64 = *(_DWORD *)(v27 + 80);
            v65 = 0LL;
            v66 = *(_QWORD *)(v27 + 72);
            if ( v64 )
            {
              if ( v64 < 0x10 || (v67 = v64 - 1, v44 <= v66 + 2 * v67) && v44 + 2 * v67 >= v66 )
              {
                v68 = v123;
              }
              else
              {
                v68 = v123;
                v69 = _mm_cvtsi32_si128((__int16)v40);
                v70 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v69, v69), 0);
                v71 = _mm_cvtsi32_si128((__int16)v123);
                v72 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v71, v71), 0);
                do
                {
                  v73 = (unsigned int)(v65 + 8);
                  *(__m128i *)(v44 + 2 * v65) = _mm_add_epi16(
                                                  _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v66 + 2 * v65)), v72),
                                                  v70);
                  v65 = (unsigned int)(v65 + 16);
                  *(__m128i *)(v44 + 2 * v73) = _mm_add_epi16(
                                                  _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v66 + 2 * v73)), v72),
                                                  v70);
                }
                while ( (unsigned int)v65 < v64 - (v64 & 0xF) );
              }
              if ( (unsigned int)v65 < v64 )
              {
                v74 = v66 - v44;
                v75 = v44 + 2 * v65;
                v76 = v64 - (unsigned int)v65;
                do
                {
                  v77 = *(_WORD *)(v74 + v75);
                  v75 += 2LL;
                  *(_WORD *)(v75 - 2) = v40 + v68 + v77;
                  --v76;
                }
                while ( v76 );
              }
            }
            v24 = v120;
            v125 = *(_DWORD *)(v27 + 64) + v40;
            v121 += *(_DWORD *)(v27 + 80);
            goto LABEL_56;
          }
        }
        v47 = v117;
        goto LABEL_37;
      }
LABEL_56:
      --*(_DWORD *)(v26 + 144);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 16LL))(v26, 1LL);
      v25 = v124 + 1;
      v124 = v25;
      if ( v25 >= *((_DWORD *)v2 + 14) )
      {
        v16 = v121;
        v18 = v122;
        goto LABEL_60;
      }
    }
    if ( *(_DWORD *)(v29 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v29 + 24) + 560LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v29 + 24) + 560LL),
        *(_QWORD *)(v29 + 16),
        0LL);
      *(_QWORD *)(v29 + 32) = 0LL;
    }
    *(_BYTE *)(v29 + 56) = 0;
    v32 = *((_QWORD *)v2 + 11);
    if ( *(_DWORD *)(v32 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v32 + 24) + 560LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v32 + 24) + 560LL),
        *(_QWORD *)(v32 + 16),
        0LL);
      *(_QWORD *)(v32 + 32) = 0LL;
    }
    *(_BYTE *)(v32 + 56) = 0;
    if ( v121 )
      ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v126->lpVtbl->DrawIndexed)(
        v126,
        v121,
        v122,
        0LL);
    if ( v119 )
    {
      v33 = *((_QWORD *)v2 + 3);
      Buf2 = *(__m128i *)(v26 + 24);
      v140 = *(_OWORD *)(v26 + 40);
      v141 = *(_OWORD *)(v26 + 56);
      v142 = *(_DWORD *)(v26 + 72);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v33 + 560) + 280LL))(
        *(_QWORD *)(v33 + 560),
        *(_QWORD *)(v33 + 8LL * _mm_cvtsi128_si32(Buf2) + 1168),
        0LL,
        0xFFFFFFFFLL);
      v34 = *(__int64 (__fastcall **)(CCommonRenderingEffect *__hidden, struct CD3DDeviceLevel1 *, const struct _LUID *, const struct DisplayId *, const enum StereoContext *))(*(__int64 *)((char *)Buf2.m128i_i64 + 4) + 24);
      if ( v34 == CCommonRenderingEffect::SetStateOnDevice )
        v35 = CCommonRenderingEffect::SetStateOnDevice(
                (CCommonRenderingEffect *)((char *)Buf2.m128i_i64 + 4),
                *((struct CD3DDeviceLevel1 **)v2 + 3),
                (const struct _LUID *)v2 + 8,
                (CHWCallbackRenderer *)((char *)v2 + 72),
                (CHWCallbackRenderer *)((char *)v2 + 76));
      else
        v35 = v34(
                (CCommonRenderingEffect *)((char *)Buf2.m128i_i64 + 4),
                *((struct CD3DDeviceLevel1 **)v2 + 3),
                (const struct _LUID *)v2 + 8,
                (CHWCallbackRenderer *)((char *)v2 + 72),
                (CHWCallbackRenderer *)((char *)v2 + 76));
      v120 = v35;
      v24 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x121u);
        memset_0(&Buf2, 0, 0x34uLL);
        goto LABEL_26;
      }
    }
    else
    {
      v24 = v120;
    }
    if ( v116 )
    {
      v97 = (CD3DBuffer *)*((_QWORD *)v2 + 10);
      v98 = *(_DWORD *)(v27 + 64);
      if ( v98 > *((_DWORD *)v97 + 11) >> 5 )
      {
        v106 = CD3DBuffer::EnsureByteSpace(v97, 32 * v98, 0);
        v118 = v106;
        if ( v106 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0x135u);
          goto LABEL_66;
        }
        v99 = v126;
        CHWCallbackRenderer::SetVertexBuffer(v2, v126);
      }
      else
      {
        v99 = v126;
      }
      v100 = (CD3DBuffer *)*((_QWORD *)v2 + 11);
      v101 = *(_DWORD *)(v27 + 80);
      if ( v101 > *((_DWORD *)v100 + 11) >> 1 )
      {
        v107 = CD3DBuffer::EnsureByteSpace(v100, 2 * v101, 0);
        v118 = v107;
        if ( v107 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x13Du);
          goto LABEL_66;
        }
        CHWCallbackRenderer::SetIndexBuffer(v2, v99);
      }
      v102 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 2 * (*(_DWORD *)(*((_QWORD *)v2 + 11) + 44LL) >> 1));
      v118 = v102;
      if ( v102 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0x143u);
        goto LABEL_66;
      }
      v103 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), *(_DWORD *)(*((_QWORD *)v2 + 10) + 44LL) & 0xFFFFFFE0);
      v118 = v103;
      if ( v103 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x144u);
        goto LABEL_66;
      }
LABEL_32:
      v29 = *((_QWORD *)v2 + 10);
      v121 = 0;
      v40 = 0;
      v122 = *(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1;
      v125 = 0;
      v123 = *(_DWORD *)(v29 + 40) >> 5;
      goto LABEL_33;
    }
LABEL_26:
    v36 = *(_DWORD *)(v27 + 64);
    v37 = *(_DWORD *)(v27 + 80);
    if ( v36 < 0x64 )
      v36 = 100;
    if ( v37 < 0x64 )
      v37 = 100;
    v38 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 2 * v37);
    v118 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x14Bu);
      goto LABEL_66;
    }
    v39 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), 32 * v36);
    v118 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x14Cu);
      goto LABEL_66;
    }
    goto LABEL_32;
  }
LABEL_60:
  v78 = *((_QWORD *)v2 + 10);
  if ( *(_DWORD *)(v78 + 52) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v78 + 24) + 560LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v78 + 24) + 560LL),
      *(_QWORD *)(v78 + 16),
      0LL);
    *(_QWORD *)(v78 + 32) = 0LL;
  }
  *(_BYTE *)(v78 + 56) = 0;
  v79 = *((_QWORD *)v2 + 11);
  if ( *(_DWORD *)(v79 + 52) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v79 + 24) + 560LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v79 + 24) + 560LL),
      *(_QWORD *)(v79 + 16),
      0LL);
    *(_QWORD *)(v79 + 32) = 0LL;
  }
  *(_BYTE *)(v79 + 56) = 0;
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v126->lpVtbl->DrawIndexed)(
      v126,
      v16,
      v18,
      0LL);
LABEL_66:
  for ( i = v124; i < *((_DWORD *)v2 + 14); ++i )
  {
    v115 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * i);
    --*(_DWORD *)(v115 + 144);
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)v2 + 4) + 8LL * i));
  }
  v81 = (CD3DBuffer *)*((_QWORD *)v2 + 10);
  if ( *((_BYTE *)v81 + 56) )
    CD3DBuffer::Unlock(v81);
  v82 = (CD3DBuffer *)*((_QWORD *)v2 + 11);
  if ( *((_BYTE *)v82 + 56) )
    CD3DBuffer::Unlock(v82);
  v83 = (char *)v2 + 120;
  *((_DWORD *)v2 + 14) = 0;
  if ( *((_DWORD *)v2 + 36) )
  {
    v84 = 0;
    do
    {
      v85 = *(_QWORD *)v83;
      v86 = 216LL * v84;
      v87 = *(_QWORD *)(v86 + *(_QWORD *)v83);
      v88 = *(void (__fastcall ****)(_QWORD))(v86 + *(_QWORD *)v83 + 8);
      v89 = *(CMILRefCountBase **)(v87 + 16);
      if ( v89 )
      {
        v127 = *(struct ID3D11DeviceContext **)(*(_QWORD *)v89 + 8LL);
        if ( v127 == (struct ID3D11DeviceContext *)CMILRefCountBase::Release )
          CMILRefCountBase::Release(v89);
        else
          ((void (__fastcall *)(CMILRefCountBase *))v127)(v89);
      }
      *(_QWORD *)(v87 + 16) = v88;
      if ( v88 )
        (**v88)(v88);
      *(_OWORD *)(v87 + 76) = *(_OWORD *)(v86 + v85 + 16);
      *(_OWORD *)(v87 + 92) = *(_OWORD *)(v86 + v85 + 32);
      *(_OWORD *)(v87 + 108) = *(_OWORD *)(v86 + v85 + 48);
      *(_OWORD *)(v87 + 124) = *(_OWORD *)(v86 + v85 + 64);
      v90 = *(volatile signed __int32 **)(v86 + *(_QWORD *)v83);
      if ( v90 && _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v90 + 16LL))(v90, 1LL);
      v91 = *(CMILRefCountBase **)(v86 + *(_QWORD *)v83 + 8);
      if ( v91 )
      {
        v92 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v91 + 8LL);
        if ( v92 == CMILRefCountBase::Release )
          CMILRefCountBase::Release(v91);
        else
          v92(v91);
      }
      ++v84;
    }
    while ( v84 < *((_DWORD *)v83 + 6) );
    v2 = v137;
  }
  *((_DWORD *)v83 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v83, 216LL);
  v93 = *((_QWORD *)v2 + 3);
  v128 = v2;
  v94 = *(_DWORD *)(v93 + 328);
  v95 = v94 + 1;
  if ( v94 + 1 < v94 )
  {
    v105 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_159;
  }
  if ( v95 > *(_DWORD *)(v93 + 324) )
  {
    v104 = DynArrayImpl<0>::AddMultipleAndSet(v93 + 304, 8LL, 1LL, &v128);
    v105 = v104;
    if ( v104 >= 0 )
      goto LABEL_89;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v104, 0xC0u);
LABEL_159:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x85Eu);
    return v118;
  }
  *(_QWORD *)(*(_QWORD *)(v93 + 304) + 8LL * v94) = v128;
  *(_DWORD *)(v93 + 328) = v95;
LABEL_89:
  _InterlockedIncrement((volatile signed __int32 *)v128 + 4);
  return v118;
}
