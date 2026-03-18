/*
 * XREFs of ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180003680 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 *     ??$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000D954 (--$TransferVertices2D_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA?AVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV2@@Z @ 0x18000F694 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@SA-AVCMILMatrix@@AEBUD2D_VECTOR_2F@.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001E670 (--$TransferVertices2D_NoAAFixup_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?LockBytes@CD3DBuffer@@QEAAJI@Z @ 0x18005AFA0 (-LockBytes@CD3DBuffer@@QEAAJI@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005B138 (--$TransferVertices2D_NoAAFixup_Vector@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x180091FAC (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 *     ?SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800DD558 (-SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800DD5C8 (-SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1800DE8C0 (-Unlock@CD3DBuffer@@QEAAXXZ.c)
 *     ??$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801000A4 (--$TransferVertices2D_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801001C0 (--$TransferVertices2D_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180100258 (--$TransferVertices2D_NoAAFixup_Basic@$00@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_.c)
 *     ??$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18010036C (--$TransferVertices2D_NoAAFixup_Basic@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2.c)
 *     ??$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180100408 (--$TransferVertices2D_Vector@$0A@@@YAXPEBUCCommonTransferParameters@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::Render(CHWCallbackRenderer *this)
{
  CHWCallbackRenderer **v1; // rax
  CHWCallbackRenderer *v2; // r13
  unsigned int v3; // r14d
  CHWCallbackRenderer *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rax
  __int64 *v11; // r12
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rsi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  int v23; // edi
  __int64 v24; // r12
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // r14
  bool v28; // r8
  bool v29; // al
  __int64 v30; // rsi
  __int64 v31; // rsi
  int v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // edx
  int v35; // eax
  int v36; // eax
  char v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  bool v41; // r14
  __int64 v42; // rax
  float v43; // xmm8_4
  float v44; // xmm0_4
  double v45; // xmm0_8
  float v46; // xmm2_4
  double v47; // xmm0_8
  float v48; // xmm2_4
  double v49; // xmm0_8
  float v50; // xmm2_4
  double v51; // xmm0_8
  double v52; // xmm0_8
  double v53; // xmm0_8
  double v54; // xmm0_8
  double v55; // xmm0_8
  double v56; // xmm0_8
  float v57; // xmm0_4
  float v58; // xmm1_4
  BOOL v59; // eax
  CD3DBuffer *v60; // rcx
  unsigned int v61; // edx
  int v62; // eax
  struct ID3D11DeviceContext *v63; // rbx
  CD3DBuffer *v64; // rcx
  unsigned int v65; // edx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  unsigned int v69; // xmm0_4
  unsigned int v70; // xmm2_4
  float v71; // xmm5_4
  float v72; // xmm4_4
  float v73; // xmm3_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  unsigned int v76; // r9d
  __int64 v77; // rdx
  unsigned __int64 v78; // r8
  __int64 v79; // rax
  __int16 v80; // r11
  __int16 v81; // bx
  __m128i v82; // xmm1
  __m128i v83; // xmm1
  __m128i v84; // xmm2
  __m128i v85; // xmm2
  __int64 v86; // rax
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // rcx
  __int64 v89; // rdx
  __int16 v90; // ax
  __int64 v91; // r15
  __int64 v92; // r15
  __int64 v93; // rcx
  CD3DBuffer *v94; // rcx
  CD3DBuffer *v95; // rcx
  struct ID3D11DeviceContext *v96; // rcx
  unsigned int v97; // esi
  char *v98; // r13
  __int64 v99; // r15
  __int64 v100; // rdi
  __int64 v101; // r14
  void (__fastcall ***v102)(_QWORD); // r12
  __int64 v103; // rax
  volatile signed __int32 *v104; // r14
  __int64 v105; // rdi
  __int64 v106; // r10
  unsigned int v107; // eax
  unsigned int v108; // edx
  int v109; // ebx
  int v111; // eax
  bool v112; // [rsp+48h] [rbp-C0h]
  unsigned int v113; // [rsp+4Ch] [rbp-BCh]
  int v114; // [rsp+50h] [rbp-B8h]
  bool v115; // [rsp+58h] [rbp-B0h]
  int v116; // [rsp+5Ch] [rbp-ACh]
  unsigned int v117; // [rsp+60h] [rbp-A8h]
  int v118; // [rsp+64h] [rbp-A4h]
  unsigned int v119; // [rsp+68h] [rbp-A0h]
  int v120; // [rsp+70h] [rbp-98h]
  struct ID3D11DeviceContext *v121; // [rsp+78h] [rbp-90h]
  struct ID3D11DeviceContext *v122; // [rsp+78h] [rbp-90h]
  CHWCallbackRenderer *v123; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v124[6]; // [rsp+88h] [rbp-80h] BYREF
  int v125; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v126; // [rsp+A4h] [rbp-64h] BYREF
  int v127; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v128[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-48h]
  float v130; // [rsp+C8h] [rbp-40h]
  int v131; // [rsp+CCh] [rbp-3Ch]
  CHWCallbackRenderer *v132; // [rsp+D0h] [rbp-38h]
  __int64 v133; // [rsp+D8h] [rbp-30h] BYREF
  __m128i Buf2; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v135; // [rsp+F0h] [rbp-18h]
  __int128 v136; // [rsp+100h] [rbp-8h]
  int v137; // [rsp+110h] [rbp+8h]
  _BYTE v138[64]; // [rsp+118h] [rbp+10h] BYREF

  v1 = (CHWCallbackRenderer **)*((_QWORD *)this + 4);
  v2 = this;
  v3 = 0;
  v132 = this;
  v4 = *v1;
  v5 = *((_QWORD *)v2 + 3);
  v123 = v4;
  v113 = 0;
  v121 = *(struct ID3D11DeviceContext **)(v5 + 552);
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v6 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CHWCallbackRenderer *)((char *)v2 + 120));
    v114 = v6;
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB2u);
      goto LABEL_110;
    }
  }
  v8 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), 0xC80u);
  v114 = v8;
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
    goto LABEL_110;
  }
  v9 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 0xC8u);
  v114 = v9;
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB6u);
    goto LABEL_110;
  }
  v10 = (_QWORD *)*((_QWORD *)v2 + 3);
  v11 = (__int64 *)v10[69];
  v12 = v10[193];
  v13 = v10[149];
  v14 = v10[192];
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v11 + 152))(v11, *(_QWORD *)(*((_QWORD *)v2 + 11) + 16LL), 57LL);
  v15 = *((_QWORD *)v2 + 10);
  v127 = 32;
  v125 = 0;
  v16 = *(_QWORD *)(v15 + 16);
  v17 = *v11;
  v133 = v16;
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *, int *, int *))(v17 + 144))(
    v11,
    0LL,
    1LL,
    &v133,
    &v127,
    &v125);
  (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 192))(v11, 4LL);
  (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 136))(v11, v13);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*v11 + 384))(
    v11,
    *((_QWORD *)v2 + 14),
    0LL,
    0LL,
    (__int64)v2 + 96,
    0,
    0);
  (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v11 + 56))(v11, 0LL, 1LL, (__int64)v2 + 112);
  (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 344))(v11, v14);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*v11 + 288))(v11, v12, 0LL);
  v18 = 0;
  v19 = *((_QWORD *)v2 + 3);
  v117 = 0;
  v119 = *(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1;
  v116 = 0;
  v118 = *(_DWORD *)(*((_QWORD *)v2 + 10) + 40LL) >> 5;
  v20 = *(_OWORD *)((char *)v123 + 40);
  Buf2 = *(__m128i *)((char *)v123 + 24);
  v21 = *(_OWORD *)((char *)v123 + 56);
  v137 = *((_DWORD *)v123 + 18);
  v136 = v21;
  v135 = v20;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v19 + 552) + 280LL))(
    *(_QWORD *)(v19 + 552),
    *(_QWORD *)(v19 + 8LL * _mm_cvtsi128_si32(Buf2) + 1200),
    0LL,
    0xFFFFFFFFLL);
  v22 = (*(__int64 (__fastcall **)(__int8 *, _QWORD, __int64, __int64, __int64))(*(__int64 *)((char *)Buf2.m128i_i64 + 4)
                                                                               + 16))(
          &Buf2.m128i_i8[4],
          *((_QWORD *)v2 + 3),
          (__int64)v2 + 64,
          (__int64)v2 + 72,
          (__int64)v2 + 76);
  v120 = v22;
  v23 = v22;
  v114 = v22;
  v7 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xD7u);
    Buf2 = 0uLL;
    v135 = 0uLL;
    v136 = 0uLL;
    v137 = 0;
  }
  v3 = 0;
  if ( !*((_DWORD *)v2 + 14) )
  {
LABEL_104:
    v91 = *((_QWORD *)v2 + 10);
    if ( *(_DWORD *)(v91 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v91 + 24) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v91 + 24) + 552LL),
        *(_QWORD *)(v91 + 16),
        0LL);
      *(_QWORD *)(v91 + 32) = 0LL;
    }
    *(_BYTE *)(v91 + 56) = 0;
    v92 = *((_QWORD *)v2 + 11);
    if ( *(_DWORD *)(v92 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v92 + 24) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v92 + 24) + 552LL),
        *(_QWORD *)(v92 + 16),
        0LL);
      *(_QWORD *)(v92 + 32) = 0LL;
    }
    *(_BYTE *)(v92 + 56) = 0;
    if ( v18 )
      ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v121->lpVtbl->DrawIndexed)(
        v121,
        v18,
        v119,
        0LL);
    goto LABEL_110;
  }
  while ( 1 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * v3);
    v25 = *(_QWORD *)(v24 + 16);
    v26 = memcmp_0((const void *)(v24 + 24), &Buf2, 0x34uLL);
    v27 = *((_QWORD *)v2 + 10);
    v28 = v26 != 0;
    v115 = v26 != 0;
    v29 = *(_DWORD *)(v25 + 64) > (unsigned int)((*(_DWORD *)(v27 + 44) >> 5) - (*(_DWORD *)(v27 + 40) >> 5))
       || *(_DWORD *)(v25 + 80) > (unsigned int)((*(_DWORD *)(*((_QWORD *)v2 + 11) + 44LL) >> 1)
                                               - (*(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1));
    v112 = v29;
    if ( !v28 && !v29 )
      goto LABEL_33;
    if ( *(_DWORD *)(v27 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v27 + 24) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v27 + 24) + 552LL),
        *(_QWORD *)(v27 + 16),
        0LL);
      *(_QWORD *)(v27 + 32) = 0LL;
    }
    *(_BYTE *)(v27 + 56) = 0;
    v30 = *((_QWORD *)v2 + 11);
    if ( *(_DWORD *)(v30 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v30 + 24) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v30 + 24) + 552LL),
        *(_QWORD *)(v30 + 16),
        0LL);
      *(_QWORD *)(v30 + 32) = 0LL;
    }
    *(_BYTE *)(v30 + 56) = 0;
    if ( v117 )
      ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v121->lpVtbl->DrawIndexed)(
        v121,
        v117,
        v119,
        0LL);
    if ( v115 )
      break;
    v23 = v120;
LABEL_57:
    if ( !v112 )
      goto LABEL_26;
    v60 = (CD3DBuffer *)*((_QWORD *)v2 + 10);
    v61 = *(_DWORD *)(v25 + 64);
    if ( v61 <= *((_DWORD *)v60 + 11) >> 5 )
    {
      v63 = v121;
    }
    else
    {
      v62 = CD3DBuffer::EnsureByteSpace(v60, 32 * v61, 0);
      v114 = v62;
      v7 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x135u);
        goto LABEL_136;
      }
      v63 = v121;
      CHWCallbackRenderer::SetVertexBuffer(v2, v121);
    }
    v64 = (CD3DBuffer *)*((_QWORD *)v2 + 11);
    v65 = *(_DWORD *)(v25 + 80);
    if ( v65 > *((_DWORD *)v64 + 11) >> 1 )
    {
      v66 = CD3DBuffer::EnsureByteSpace(v64, 2 * v65, 0);
      v114 = v66;
      v7 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x13Du);
        goto LABEL_136;
      }
      CHWCallbackRenderer::SetIndexBuffer(v2, v63);
    }
    v67 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 2 * (*(_DWORD *)(*((_QWORD *)v2 + 11) + 44LL) >> 1));
    v114 = v67;
    v7 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x143u);
      goto LABEL_136;
    }
    v68 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), *(_DWORD *)(*((_QWORD *)v2 + 10) + 44LL) & 0xFFFFFFE0);
    v114 = v68;
    v7 = v68;
    if ( v68 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x144u);
      goto LABEL_136;
    }
LABEL_32:
    v27 = *((_QWORD *)v2 + 10);
    v117 = 0;
    v119 = *(_DWORD *)(*((_QWORD *)v2 + 11) + 40LL) >> 1;
    v116 = 0;
    v118 = *(_DWORD *)(v27 + 40) >> 5;
LABEL_33:
    if ( v23 >= 0 )
    {
      v38 = *(_DWORD *)(v27 + 40) + 32 * *(_DWORD *)(v25 + 64);
      v129 = *(_QWORD *)(v27 + 32) + *(unsigned int *)(v27 + 40);
      v37 = v129;
      *(_DWORD *)(v27 + 40) = v38;
      v39 = *((_QWORD *)v2 + 11);
      v40 = *(_QWORD *)(v39 + 32) + *(unsigned int *)(v39 + 40);
      *(_DWORD *)(v39 + 40) += 2 * *(_DWORD *)(v25 + 80);
      v41 = (v37 & 0xF) == 0;
      v42 = *(_QWORD *)(v25 + 48);
      v43 = *(float *)(v24 + 140);
      v126 = *(_QWORD *)(v25 + 84);
      v44 = *(float *)(v24 + 84);
      v128[0] = v42;
      v45 = v44;
      v128[1] = *(_QWORD *)(v25 + 56);
      v131 = *(_DWORD *)(v25 + 64);
      v130 = v43;
      v46 = COERCE_DOUBLE(*(_QWORD *)&v45 & _xmm);
      if ( v46 < 0.00012207031 || _isnan(v45) )
      {
        v47 = *(float *)(v24 + 100);
        v48 = COERCE_DOUBLE(*(_QWORD *)&v47 & _xmm);
        if ( v48 < 0.00012207031 || _isnan(v47) )
        {
          v49 = *(float *)(v24 + 132);
          v50 = COERCE_DOUBLE(*(_QWORD *)&v49 & _xmm);
          if ( v50 < 0.00012207031 || _isnan(v49) )
            goto LABEL_55;
        }
      }
      if ( ((v51 = *(float *)(v24 + 84), (float)COERCE_DOUBLE(*(_QWORD *)&v51 & _xmm) < 0.00012207031) || _isnan(v51))
        && ((v52 = *(float *)(v24 + 100), (float)COERCE_DOUBLE(*(_QWORD *)&v52 & _xmm) < 0.00012207031) || _isnan(v52))
        && ((v53 = *(float *)(v24 + 108), (float)COERCE_DOUBLE(*(_QWORD *)&v53 & _xmm) < 0.00012207031) || _isnan(v53))
        && ((v54 = *(float *)(v24 + 112), (float)COERCE_DOUBLE(*(_QWORD *)&v54 & _xmm) < 0.00012207031) || _isnan(v54))
        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v24 + 116) - 1.0)) & _xmm) < 0.00012207031
         || _isnan(*(float *)(v24 + 116))
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v24 + 116)) & _xmm) < 0.00012207031)
        && ((v55 = *(float *)(v24 + 120), (float)COERCE_DOUBLE(*(_QWORD *)&v55 & _xmm) < 0.00012207031) || _isnan(v55))
        && ((v56 = *(float *)(v24 + 132), (float)COERCE_DOUBLE(*(_QWORD *)&v56 & _xmm) < 0.00012207031) || _isnan(v56)) )
      {
LABEL_55:
        v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v24 + 88)) & _xmm);
        v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v24 + 136)) & _xmm);
        v59 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v24 + 104)) & _xmm)
                                                                                       * 40960.0)
                                                                               + (float)(v57 * 40960.0))
                                                                       + v58)
                                                               - 1.0)) & _xmm) < 0.00012207031;
      }
      else
      {
        v59 = 0;
      }
      if ( v59 )
      {
        v69 = *(_DWORD *)(v24 + 124);
        v124[5] = *(_DWORD *)(v24 + 128);
        *(float *)&v70 = (float)(1.0 / *((float *)&v126 + 1)) * *(float *)(v24 + 96);
        v71 = (float)(1.0 / *(float *)&v126) * *(float *)(v24 + 76);
        v72 = (float)(1.0 / *(float *)&v126) * *(float *)(v24 + 80);
        v73 = (float)(1.0 / *((float *)&v126 + 1)) * *(float *)(v24 + 92);
        v124[4] = v69;
        v124[3] = v70;
        *(float *)v124 = v71;
        *(float *)&v124[1] = v72;
        *(float *)&v124[2] = v73;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v71 - *(float *)&v70)) & _xmm) > 0.0000011920929
          || (v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v72 - COERCE_FLOAT(LODWORD(v73) ^ _xmm))) & _xmm),
              v74 > 0.0000011920929)
          || (v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v73 * v73) + (float)(v71 * v71)) - 1.0)) & _xmm),
              v75 >= 0.0000011920929) )
        {
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v43 - 1.0)) & _xmm) >= 0.0000011920929 )
          {
            if ( v41 )
              TransferVertices2D_Vector<1>(v128, v124);
            else
              TransferVertices2D_Basic<1>(v128, v124);
          }
          else if ( v41 )
          {
            TransferVertices2D_Vector<0>(v128, v124);
          }
          else
          {
            TransferVertices2D_Basic<0>(v128, v124);
          }
        }
        else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v43 - 1.0)) & _xmm) >= 0.0000011920929 )
        {
          if ( v41 )
            TransferVertices2D_NoAAFixup_Vector<1>(v128, v124);
          else
            TransferVertices2D_NoAAFixup_Basic<1>(v128, v124);
        }
        else if ( v41 )
        {
          TransferVertices2D_NoAAFixup_Vector<0>(v128, v124);
        }
        else
        {
          TransferVertices2D_NoAAFixup_Basic<0>(v128, v124);
        }
      }
      else
      {
        CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)v138, (float *)&v126, v24 + 76);
        TransferVertices3D_Internal((const struct CCommonTransferParameters *)v128, (const struct CMILMatrix *)v138);
      }
      v76 = *(_DWORD *)(v25 + 80);
      v77 = 0LL;
      v78 = *(_QWORD *)(v25 + 72);
      if ( v76 )
      {
        if ( v76 < 0x10 || (v79 = v76 - 1, v40 <= v78 + 2 * v79) && v40 + 2 * v79 >= v78 )
        {
          v81 = v118;
          v80 = v116;
        }
        else
        {
          v80 = v116;
          v81 = v118;
          v82 = _mm_cvtsi32_si128((__int16)v116);
          v83 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v82, v82), 0);
          v84 = _mm_cvtsi32_si128((__int16)v118);
          v85 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v84, v84), 0);
          do
          {
            v86 = (unsigned int)(v77 + 8);
            *(__m128i *)(v40 + 2 * v77) = _mm_add_epi16(
                                            _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v78 + 2 * v77)), v85),
                                            v83);
            v77 = (unsigned int)(v77 + 16);
            *(__m128i *)(v40 + 2 * v86) = _mm_add_epi16(
                                            _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v78 + 2 * v86)), v85),
                                            v83);
          }
          while ( (unsigned int)v77 < v76 - (v76 & 0xF) );
        }
        if ( (unsigned int)v77 < v76 )
        {
          v87 = v78 - v40;
          v88 = v40 + 2 * v77;
          v89 = v76 - (unsigned int)v77;
          do
          {
            v90 = *(_WORD *)(v87 + v88);
            v88 += 2LL;
            *(_WORD *)(v88 - 2) = v80 + v81 + v90;
            --v89;
          }
          while ( v89 );
        }
      }
      v23 = v120;
      v116 += *(_DWORD *)(v25 + 64);
      v117 += *(_DWORD *)(v25 + 80);
    }
    --*(_DWORD *)(v24 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL))(v24, 1LL);
    v3 = v113 + 1;
    v113 = v3;
    if ( v3 >= *((_DWORD *)v2 + 14) )
    {
      v18 = v117;
      goto LABEL_104;
    }
  }
  v31 = *((_QWORD *)v2 + 3);
  Buf2 = *(__m128i *)(v24 + 24);
  v135 = *(_OWORD *)(v24 + 40);
  v136 = *(_OWORD *)(v24 + 56);
  v137 = *(_DWORD *)(v24 + 72);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v31 + 552) + 280LL))(
    *(_QWORD *)(v31 + 552),
    *(_QWORD *)(v31 + 8LL * _mm_cvtsi128_si32(Buf2) + 1200),
    0LL,
    0xFFFFFFFFLL);
  v32 = (*(__int64 (__fastcall **)(__int8 *, _QWORD, __int64, __int64, __int64))(*(__int64 *)((char *)Buf2.m128i_i64 + 4)
                                                                               + 16))(
          &Buf2.m128i_i8[4],
          *((_QWORD *)v2 + 3),
          (__int64)v2 + 64,
          (__int64)v2 + 72,
          (__int64)v2 + 76);
  v120 = v32;
  v23 = v32;
  if ( v32 >= 0 )
    goto LABEL_57;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x121u);
  Buf2 = 0uLL;
  v135 = 0uLL;
  v136 = 0uLL;
  v137 = 0;
LABEL_26:
  v33 = *(_DWORD *)(v25 + 64);
  v34 = *(_DWORD *)(v25 + 80);
  if ( v33 < 0x64 )
    v33 = 100;
  if ( v34 < 0x64 )
    v34 = 100;
  v35 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 11), 2 * v34);
  v114 = v35;
  v7 = v35;
  if ( v35 >= 0 )
  {
    v36 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 10), 32 * v33);
    v114 = v36;
    v7 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x14Cu);
      goto LABEL_136;
    }
    goto LABEL_32;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x14Bu);
LABEL_136:
  v3 = v113;
LABEL_110:
  while ( v3 < *((_DWORD *)v2 + 14) )
  {
    v93 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * v3);
    --*(_DWORD *)(v93 + 144);
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)v2 + 4) + 8LL * v3++));
  }
  v94 = (CD3DBuffer *)*((_QWORD *)v2 + 10);
  if ( *((_BYTE *)v94 + 56) )
    CD3DBuffer::Unlock(v94);
  v95 = (CD3DBuffer *)*((_QWORD *)v2 + 11);
  if ( *((_BYTE *)v95 + 56) )
    CD3DBuffer::Unlock(v95);
  v96 = (struct ID3D11DeviceContext *)((char *)v2 + 120);
  *((_DWORD *)v2 + 14) = 0;
  v122 = (struct ID3D11DeviceContext *)((char *)v2 + 120);
  if ( *((_DWORD *)v2 + 36) )
  {
    v97 = 0;
    v98 = (char *)v2 + 120;
    do
    {
      v99 = *(_QWORD *)v98;
      v100 = 216LL * v97;
      v101 = *(_QWORD *)(v100 + *(_QWORD *)v98);
      v102 = *(void (__fastcall ****)(_QWORD))(v100 + *(_QWORD *)v98 + 8);
      v103 = *(_QWORD *)(v101 + 16);
      if ( v103 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 8LL))(v103);
      *(_QWORD *)(v101 + 16) = v102;
      if ( v102 )
        (**v102)(v102);
      *(_OWORD *)(v101 + 76) = *(_OWORD *)(v100 + v99 + 16);
      *(_OWORD *)(v101 + 92) = *(_OWORD *)(v100 + v99 + 32);
      *(_OWORD *)(v101 + 108) = *(_OWORD *)(v100 + v99 + 48);
      *(_OWORD *)(v101 + 124) = *(_OWORD *)(v100 + v99 + 64);
      v104 = *(volatile signed __int32 **)(v100 + *(_QWORD *)v98);
      if ( v104 && _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v104 + 16LL))(v104, 1LL);
      v105 = *(_QWORD *)(v100 + *(_QWORD *)v98 + 8);
      if ( v105 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8LL))(v105);
      ++v97;
    }
    while ( v97 < *((_DWORD *)v98 + 6) );
    v2 = v132;
    v7 = v114;
    v96 = v122;
  }
  LODWORD(v96[3].lpVtbl) = 0;
  DynArrayImpl<0>::ShrinkToSize(v96, 216LL);
  v106 = *((_QWORD *)v2 + 3);
  v123 = v2;
  v107 = *(_DWORD *)(v106 + 344);
  v108 = v107 + 1;
  if ( v107 + 1 < v107 )
  {
    v109 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_143;
  }
  if ( v108 <= *(_DWORD *)(v106 + 340) )
  {
    *(_QWORD *)(*(_QWORD *)(v106 + 320) + 8LL * *(unsigned int *)(v106 + 344)) = v123;
    *(_DWORD *)(v106 + 344) = v108;
    goto LABEL_139;
  }
  v111 = DynArrayImpl<0>::AddMultipleAndSet(v106 + 320, 8LL, 1LL, &v123);
  v109 = v111;
  if ( v111 >= 0 )
  {
LABEL_139:
    _InterlockedIncrement((volatile signed __int32 *)v123 + 4);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0xC0u);
LABEL_143:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v109, 0x854u);
  }
  return v7;
}
