/*
 * XREFs of ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180093970 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800ACEA4 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     ?LockBytes@CD3DBuffer@@QEAAJI@Z @ 0x1800ACFB8 (-LockBytes@CD3DBuffer@@QEAAJI@Z.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x18010F00C (-SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x18010F074 (-SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z.c)
 *     ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1801107A4 (-Unlock@CD3DBuffer@@QEAAXXZ.c)
 *     ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@@Z @ 0x1801780D0 (-UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D.c)
 *     ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x18019542C (-HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ?HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180195484 (-HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 */

__int64 __fastcall CHWCallbackRenderer::Render(CHWCallbackRenderer *this)
{
  const struct CMILMatrix *v1; // rdx
  CHWCallbackRenderer *v2; // rdi
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbx
  __int128 v9; // xmm1
  unsigned __int64 v10; // xmm2_8
  __int128 v11; // xmm0
  __int64 v12; // rax
  CBrushRenderingEffect *v13; // rbx
  int v14; // esi
  CBrushRenderingEffect *v15; // rbx
  int v16; // r12d
  __int64 v17; // rbx
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  CHwLightCollectionBuffer *v28; // rcx
  __int64 v29; // rax
  const struct CLightsMask *v30; // rcx
  struct CD3DDeviceLevel1 *v31; // rdx
  const struct DisplayId *v32; // r9
  __int64 (__fastcall *v33)(CCommonRenderingEffect *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *, const enum StereoContext *, struct CVertexConstantBuffer *, const struct CLightsMask *); // rax
  struct _LUID *v34; // r8
  int v35; // eax
  int v36; // r12d
  __int64 *v37; // rcx
  __int64 *v38; // r12
  __int64 v39; // r14
  __int64 v40; // rsi
  char v41; // r13
  __int64 v42; // rbx
  unsigned int v43; // r9d
  bool v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rax
  CBrushRenderingEffect *v47; // rbx
  int v48; // r15d
  CBrushRenderingEffect *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  CHwLightCollectionBuffer *v53; // rcx
  const struct CLightsMask *v54; // rcx
  struct CD3DDeviceLevel1 *v55; // rdx
  const struct DisplayId *v56; // r9
  __int64 (__fastcall *v57)(CCommonRenderingEffect *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *, const enum StereoContext *, struct CVertexConstantBuffer *, const struct CLightsMask *); // rax
  struct _LUID *v58; // r8
  int v59; // eax
  int v60; // r15d
  __int64 *v61; // rcx
  unsigned int v62; // r15d
  unsigned int v63; // edx
  int v64; // eax
  __int64 v65; // rbx
  int v66; // r12d
  unsigned int v67; // ecx
  unsigned int v68; // r15d
  int v69; // eax
  unsigned int v70; // ecx
  int v71; // r12d
  unsigned int v72; // r13d
  __int64 v73; // rax
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned __int64 v80; // r8
  __int64 v81; // rdx
  unsigned int v82; // r10d
  unsigned __int64 v83; // r9
  __int64 v84; // rax
  __m128i v85; // xmm1
  __m128i v86; // xmm1
  __m128i v87; // xmm2
  __m128i v88; // xmm2
  __int64 v89; // rax
  unsigned __int64 v90; // r9
  unsigned __int64 v91; // rcx
  __int64 v92; // rdx
  __int16 v93; // ax
  int *v94; // rbx
  int v95; // r8d
  int v96; // edx
  unsigned int v97; // edx
  CCompositionSurfaceBitmap **v98; // r13
  _BYTE *v99; // r12
  signed __int64 v100; // rbx
  CCompositionSurfaceBitmap *v101; // rcx
  CCompositionSurfaceBitmap *v102; // r8
  __int64 v103; // rbx
  __int64 v104; // rbx
  unsigned int v105; // ecx
  unsigned int v106; // ecx
  CD3DBuffer *v107; // rcx
  CD3DBuffer *v108; // rcx
  __int64 v109; // rcx
  char *v110; // r12
  unsigned int v111; // r13d
  __int64 v112; // r14
  __int64 v113; // rbx
  __int64 v114; // rsi
  void (__fastcall ***v115)(_QWORD); // r15
  CMILRefCountBase *v116; // rcx
  void (*v117)(void); // rax
  volatile signed __int32 *v118; // rcx
  CMILRefCountBase *v119; // rcx
  void (*v120)(void); // rax
  __int64 v121; // r10
  unsigned int v122; // eax
  unsigned int v123; // edx
  __int64 (*v125)(void); // rax
  char IsWhitePixelInTopLeft; // al
  __int64 v127; // r9
  unsigned int v128; // r8d
  struct ID3D11DeviceContext *v129; // rbx
  CD3DBuffer *v130; // rcx
  unsigned int v131; // edx
  int v132; // eax
  int v133; // eax
  int v134; // ebx
  struct CD3DDeviceLevel1 *v135; // rdx
  int updated; // eax
  struct CD3DDeviceLevel1 *v137; // rdx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  struct CMILMatrix *v141; // rax
  int v142; // r9d
  __int64 v143; // rcx
  enum StereoContext *v144; // [rsp+28h] [rbp-E0h]
  unsigned int v145; // [rsp+28h] [rbp-E0h]
  unsigned int v146; // [rsp+48h] [rbp-C0h]
  unsigned int v147; // [rsp+4Ch] [rbp-BCh]
  int v148; // [rsp+50h] [rbp-B8h]
  __int64 *v149; // [rsp+58h] [rbp-B0h]
  int v150; // [rsp+60h] [rbp-A8h]
  unsigned int v151; // [rsp+64h] [rbp-A4h]
  int v152; // [rsp+68h] [rbp-A0h]
  unsigned int v153; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v154; // [rsp+70h] [rbp-98h]
  struct ID3D11DeviceContext *v155; // [rsp+78h] [rbp-90h]
  unsigned int v156; // [rsp+80h] [rbp-88h]
  __int16 v157; // [rsp+84h] [rbp-84h]
  __m128i Buf2; // [rsp+88h] [rbp-80h] BYREF
  __int128 v159; // [rsp+98h] [rbp-70h]
  __int128 v160; // [rsp+A8h] [rbp-60h]
  __int64 v161; // [rsp+B8h] [rbp-50h]
  int v162; // [rsp+C0h] [rbp-48h] BYREF
  int v163; // [rsp+C4h] [rbp-44h] BYREF
  int v164; // [rsp+C8h] [rbp-40h] BYREF
  int v165; // [rsp+CCh] [rbp-3Ch] BYREF
  int v166; // [rsp+D0h] [rbp-38h] BYREF
  int v167; // [rsp+D4h] [rbp-34h] BYREF
  CHWCallbackRenderer *v168; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v169; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v170; // [rsp+E8h] [rbp-20h] BYREF
  struct ID3D11Buffer *v171; // [rsp+F0h] [rbp-18h] BYREF
  struct ID3D11Buffer *v172; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v173; // [rsp+100h] [rbp-8h] BYREF
  __int64 v174[3]; // [rsp+110h] [rbp+8h] BYREF
  char v176; // [rsp+188h] [rbp+80h]
  unsigned int v177; // [rsp+190h] [rbp+88h]

  v1 = CCounterManager::s_pGlobalPerFrameCounterManager;
  v2 = this;
  v3 = 0;
  v4 = 0;
  v147 = 0;
  v5 = 0;
  v154 = 0;
  v146 = 0;
  v6 = **((_QWORD **)this + 4);
  v155 = *(struct ID3D11DeviceContext **)(*((_QWORD *)this + 3) + 576LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 3, 1u);
  if ( CCommonRegistryData::m_fEnableMegaRects )
  {
    v7 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CHWCallbackRenderer *)((char *)this + 160), v1);
    v177 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xEDu);
      goto LABEL_135;
    }
  }
  v8 = *(_QWORD *)(*((_QWORD *)v2 + 3) + 576LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 152LL))(
    v8,
    *(_QWORD *)(*((_QWORD *)v2 + 14) + 16LL),
    57LL);
  v169 = *((_QWORD *)v2 + 19);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, 0LL, 1LL, &v169);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 192LL))(v8, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 344LL))(v8, *(_QWORD *)(*((_QWORD *)v2 + 3) + 1888LL));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 288LL))(
    v8,
    *(_QWORD *)(*((_QWORD *)v2 + 3) + 1896LL),
    0LL);
  v9 = *(_OWORD *)(v6 + 56);
  v10 = _mm_srli_si128(*(__m128i *)(v6 + 40), 8).m128i_u64[0];
  Buf2 = *(__m128i *)(v6 + 40);
  v11 = *(_OWORD *)(v6 + 72);
  v12 = v10;
  v159 = v9;
  v161 = *(_QWORD *)(v6 + 88);
  v160 = v11;
  if ( v10 )
    v13 = (CBrushRenderingEffect *)&Buf2.m128i_u64[1];
  else
    v13 = 0LL;
  v14 = 0;
  v148 = 0;
  if ( *((_QWORD *)v2 + 8) )
  {
    v14 = 1;
    v148 = 1;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)v13 + 48LL))(v13) == 1
      && (CBrushRenderingEffect::HasImageLightingEffect(v13) || CBrushRenderingEffect::HasSceneLightingEffect(v13)) )
    {
      v14 = 1;
      v148 = 1;
    }
    v12 = Buf2.m128i_i64[1];
  }
  if ( v12 )
    v15 = (CBrushRenderingEffect *)&Buf2.m128i_u64[1];
  else
    v15 = 0LL;
  if ( (*(unsigned int (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)v15 + 48LL))(v15) != 1
    || (v176 = 1, !CBrushRenderingEffect::HasImageLightingEffect(v15)) )
  {
    v176 = 0;
  }
  v16 = 0;
  v177 = 0;
  *(_DWORD *)(*((_QWORD *)v2 + 13) + 64LL) = v14;
  v17 = *((_QWORD *)v2 + 13);
  if ( *(_DWORD *)(v17 + 52) != 2 )
    goto LABEL_18;
  v18 = 5;
  if ( *(_DWORD *)(v17 + 44) - *(_DWORD *)(v17 + 40) < (unsigned int)(100 * dword_1801C65A0[*(int *)(v17 + 64)]) )
    v18 = 4;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(v17 + 24) + 576LL)
                                                                                     + 112LL))(
          *(_QWORD *)(*(_QWORD *)(v17 + 24) + 576LL),
          *(_QWORD *)(v17 + 16),
          0LL,
          v18,
          0,
          &v173);
  v177 = v19;
  v16 = v19;
  if ( v19 >= 0 )
  {
    *(_QWORD *)(v17 + 32) = v173;
    if ( v18 == 4 )
      *(_DWORD *)(v17 + 40) = 0;
LABEL_18:
    *(_BYTE *)(v17 + 56) = 1;
    goto LABEL_19;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x2Fu);
LABEL_19:
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFEu);
    goto LABEL_135;
  }
  v20 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 14), 0xC8u);
  v177 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xFFu);
    goto LABEL_135;
  }
  v21 = *((_QWORD *)v2 + 13);
  v152 = 0;
  v151 = 0;
  v22 = *(_DWORD *)(*((_QWORD *)v2 + 14) + 40LL) >> 1;
  v153 = v22;
  v23 = dword_1801C65A0[*(int *)(v21 + 64)];
  v24 = (v23 + *(_DWORD *)(v21 + 40) - 1) / v23;
  v25 = *(int *)(v21 + 64);
  v162 = 0;
  v157 = v24;
  v163 = dword_1801C65A0[v25];
  v170 = *(_QWORD *)(v21 + 16);
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64, __int64 *, int *, int *))v155->lpVtbl->IASetVertexBuffers)(
    v155,
    0LL,
    1LL,
    &v170,
    &v163,
    &v162);
  v26 = *((_QWORD *)v2 + 3);
  v27 = *(_QWORD *)(v26 + 576);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v27 + 280LL))(
    v27,
    *(_QWORD *)(v26 + 8LL * Buf2.m128i_i32[0] + 1440),
    0LL,
    0xFFFFFFFFLL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 136LL))(
    v27,
    *(_QWORD *)(*((_QWORD *)v2 + 3) + 8LL * *(int *)(*((_QWORD *)v2 + 13) + 64LL) + 1424));
  v28 = (CHwLightCollectionBuffer *)*((_QWORD *)v2 + 8);
  if ( !v28 )
    goto LABEL_22;
  v135 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v2 + 3);
  v171 = *(struct ID3D11Buffer **)(*((_QWORD *)v2 + 9) + 128LL);
  updated = CHwLightCollectionBuffer::UpdateConstantBufferIfNeeded(v28, v135, (unsigned __int64 *)v2 + 10, v171);
  v177 = updated;
  v36 = updated;
  if ( updated >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v27 + 128LL))(
      v27,
      1LL,
      1LL,
      &v171);
LABEL_22:
    v29 = *((_QWORD *)v2 + 8);
    if ( v29 )
    {
      v30 = (const struct CLightsMask *)&v164;
      v164 = *(_DWORD *)(v29 + 16);
    }
    else
    {
      v165 = -1;
      v30 = (const struct CLightsMask *)&v165;
    }
    v31 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v2 + 3);
    v32 = (CHWCallbackRenderer *)((char *)v2 + 96);
    v33 = *(__int64 (__fastcall **)(CCommonRenderingEffect *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *, const enum StereoContext *, struct CVertexConstantBuffer *, const struct CLightsMask *))(Buf2.m128i_i64[1] + 16);
    v34 = (struct _LUID *)((char *)v2 + 88);
    v144 = (CHWCallbackRenderer *)((char *)v2 + 100);
    if ( v33 == CCommonRenderingEffect::SetStateOnDevice )
      v35 = CCommonRenderingEffect::SetStateOnDevice(
              (CCommonRenderingEffect *)&Buf2.m128i_u64[1],
              v31,
              v34,
              v32,
              v144,
              (CHWCallbackRenderer *)((char *)v2 + 120),
              v30);
    else
      v35 = ((__int64 (__fastcall *)(unsigned __int64 *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *))v33)(
              &Buf2.m128i_u64[1],
              v31,
              v34,
              v32);
    v177 = v35;
    v36 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x2ABu);
    goto LABEL_28;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x29Eu);
LABEL_28:
  v150 = v36;
  if ( !CCommonRegistryData::m_fEnableCommonSuperSets
    || (!Buf2.m128i_i64[1] ? (v37 = 0LL) : (v37 = &Buf2.m128i_i64[1]),
        v149 = v37,
        (*(unsigned int (__fastcall **)(__int64 *))(*v37 + 48))(v37)) )
  {
    v149 = 0LL;
  }
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x11Au);
    memset_0(&Buf2, 0, 0x38uLL);
    v38 = 0LL;
    v149 = 0LL;
  }
  else
  {
    v38 = v149;
  }
  if ( !*((_DWORD *)v2 + 14) )
  {
LABEL_125:
    v103 = *((_QWORD *)v2 + 13);
    if ( *(_DWORD *)(v103 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v103 + 24) + 576LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v103 + 24) + 576LL),
        *(_QWORD *)(v103 + 16),
        0LL);
      *(_QWORD *)(v103 + 32) = 0LL;
    }
    *(_BYTE *)(v103 + 56) = 0;
    v104 = *((_QWORD *)v2 + 14);
    if ( *(_DWORD *)(v104 + 52) == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v104 + 24) + 576LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v104 + 24) + 576LL),
        *(_QWORD *)(v104 + 16),
        0LL);
      *(_QWORD *)(v104 + 32) = 0LL;
    }
    *(_BYTE *)(v104 + 56) = 0;
    if ( v3 )
    {
      ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v155->lpVtbl->DrawIndexed)(
        v155,
        v3,
        v22,
        0LL);
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 4, 1u);
    }
    goto LABEL_131;
  }
  while ( 1 )
  {
    v39 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * v4);
    v40 = *(_QWORD *)(v39 + 32);
    if ( !memcmp_0((const void *)(v39 + 40), &Buf2, 0x38uLL) )
    {
      v41 = 0;
    }
    else
    {
      v41 = 1;
      if ( v38 && Buf2.m128i_i32[0] == *(_DWORD *)(v39 + 40) && CCommonRegistryData::m_fEnableCommonSuperSets )
      {
        v94 = 0LL;
        if ( *(_QWORD *)(v39 + 48) )
          v94 = (int *)(v39 + 48);
        if ( !(*(unsigned int (__fastcall **)(int *))(*(_QWORD *)v94 + 48LL))(v94) )
        {
          v95 = *((_DWORD *)&CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags + *((int *)v38 + 8));
          v96 = *((_DWORD *)&CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags + v94[8]);
          if ( (((unsigned __int8)v95 ^ *((_BYTE *)&CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags + 4 * v94[8])) & 0x10) == 0
            && (((unsigned __int8)v95 & (unsigned __int8)v96 & 2) == 0
             || (((unsigned __int8)v95 ^ (unsigned __int8)v96) & 8) == 0)
            && (v95 & v96) == v96 )
          {
            v97 = 0;
            v98 = (CCompositionSurfaceBitmap **)(v38 + 1);
            v99 = (char *)v38 + 25;
            v156 = 0;
            v100 = (char *)v94 - (char *)v149;
            while ( 1 )
            {
              v101 = *v98;
              if ( *v98 )
              {
                v102 = *(CCompositionSurfaceBitmap **)((char *)v98 + v100);
                if ( v102 )
                {
                  if ( *(v99 - 1) != v99[v100 - 1] || *v99 != v99[v100] || v101 != v102 || v99[1] != v99[v100 + 1] )
                    goto LABEL_171;
                }
                else
                {
                  v125 = *(__int64 (**)(void))(*(_QWORD *)v101 + 136LL);
                  if ( (char *)v125 == (char *)CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
                    IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v101);
                  else
                    IsWhitePixelInTopLeft = v125();
                  if ( !IsWhitePixelInTopLeft )
                  {
LABEL_171:
                    v41 = 1;
                    break;
                  }
                  v97 = v156;
                }
              }
              ++v97;
              v99 += 3;
              ++v98;
              v156 = v97;
              if ( v97 >= 2 )
              {
                v41 = 0;
                ++v154;
                break;
              }
            }
          }
        }
      }
    }
    v42 = *((_QWORD *)v2 + 13);
    v43 = dword_1801C65A0[*(int *)(v42 + 64)];
    v44 = *(_DWORD *)(v40 + 72) > *(_DWORD *)(v42 + 44) / v43 - (v43 + *(_DWORD *)(v42 + 40) - 1) / v43
       || *(_DWORD *)(v40 + 88) > (unsigned int)((*(_DWORD *)(*((_QWORD *)v2 + 14) + 44LL) >> 1)
                                               - (*(_DWORD *)(*((_QWORD *)v2 + 14) + 40LL) >> 1));
    if ( v41 || v44 )
      break;
    v71 = v152;
    v3 = v151;
    LOWORD(v72) = v157;
LABEL_86:
    if ( v150 >= 0 )
    {
      v73 = *(int *)(v42 + 64);
      if ( v148 )
      {
        *(_DWORD *)(v42 + 40) = dword_1801C65A0[v73]
                              * ((dword_1801C65A0[v73] + *(_DWORD *)(v42 + 40) - 1)
                               / (unsigned int)dword_1801C65A0[v73])
                              + *(_DWORD *)(v40 + 72) * dword_1801C65A0[v73];
        v140 = *((_QWORD *)v2 + 8);
        if ( !v140 || v176 )
          v141 = 0LL;
        else
          v141 = (struct CMILMatrix *)(v140 + 224);
        TransferVertices<CVertexXYWColorDUV2_XYZ_Tangent>((CDrawListPrimitive *)v40, *(_DWORD *)(v39 + 164), v141);
      }
      else
      {
        v74 = dword_1801C65A0[v73];
        v75 = v74 + *(_DWORD *)(v42 + 40) - 1;
        if ( v74 == 32 )
          v76 = v75 >> 5;
        else
          v76 = v75 / v74;
        v77 = v74 * v76;
        v78 = *(_QWORD *)(v42 + 32) + v77;
        *(_DWORD *)(v42 + 40) = v77 + *(_DWORD *)(v40 + 72) * v74;
        TransferVertices<CVertexXYWColorDUV2>(v40, v78, v39 + 96, v43, *(_DWORD *)(v39 + 164));
      }
      v79 = *((_QWORD *)v2 + 14);
      v80 = *(_QWORD *)(v79 + 32) + *(unsigned int *)(v79 + 40);
      *(_DWORD *)(v79 + 40) += 2 * *(_DWORD *)(v40 + 88);
      v81 = 0LL;
      v82 = *(_DWORD *)(v40 + 88);
      v83 = *(_QWORD *)(v40 + 80);
      if ( v82 )
      {
        if ( v82 >= 0x10 )
        {
          v84 = v82 - 1;
          if ( v80 > v83 + 2 * v84 || v80 + 2 * v84 < v83 )
          {
            v85 = _mm_cvtsi32_si128((__int16)v71);
            v86 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v85, v85), 0);
            v87 = _mm_cvtsi32_si128((__int16)v72);
            v88 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v87, v87), 0);
            do
            {
              v89 = (unsigned int)(v81 + 8);
              *(__m128i *)(v80 + 2 * v81) = _mm_add_epi16(
                                              _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v83 + 2 * v81)), v88),
                                              v86);
              v81 = (unsigned int)(v81 + 16);
              *(__m128i *)(v80 + 2 * v89) = _mm_add_epi16(
                                              _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v83 + 2 * v89)), v88),
                                              v86);
            }
            while ( (unsigned int)v81 < v82 - (v82 & 0xF) );
          }
        }
        if ( (unsigned int)v81 < v82 )
        {
          v90 = v83 - v80;
          v91 = v80 + 2 * v81;
          v92 = v82 - (unsigned int)v81;
          do
          {
            v93 = *(_WORD *)(v90 + v91);
            v91 += 2LL;
            *(_WORD *)(v91 - 2) = v71 + v72 + v93;
            --v92;
          }
          while ( v92 );
        }
      }
      v3 += *(_DWORD *)(v40 + 88);
      v152 = *(_DWORD *)(v40 + 72) + v71;
      v151 = v3;
    }
    --*(_DWORD *)(v39 + 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 8), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 16LL))(v39, 1LL);
    v4 = v147 + 1;
    v147 = v4;
    if ( v4 >= *((_DWORD *)v2 + 14) )
    {
      v22 = v153;
      v5 = v146;
      goto LABEL_125;
    }
    v38 = v149;
  }
  if ( *(_DWORD *)(v42 + 52) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v42 + 24) + 576LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v42 + 24) + 576LL),
      *(_QWORD *)(v42 + 16),
      0LL);
    *(_QWORD *)(v42 + 32) = 0LL;
  }
  *(_BYTE *)(v42 + 56) = 0;
  v45 = *((_QWORD *)v2 + 14);
  if ( *(_DWORD *)(v45 + 52) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v45 + 24) + 576LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v45 + 24) + 576LL),
      *(_QWORD *)(v45 + 16),
      0LL);
    *(_QWORD *)(v45 + 32) = 0LL;
  }
  *(_BYTE *)(v45 + 56) = 0;
  if ( v151 )
  {
    ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, _QWORD, _QWORD))v155->lpVtbl->DrawIndexed)(
      v155,
      v151,
      v153,
      0LL);
    ++v146;
  }
  if ( !v41 )
    goto LABEL_71;
  Buf2 = *(__m128i *)(v39 + 40);
  v159 = *(_OWORD *)(v39 + 56);
  v160 = *(_OWORD *)(v39 + 72);
  v46 = _mm_srli_si128(Buf2, 8).m128i_u64[0];
  v161 = *(_QWORD *)(v39 + 88);
  if ( v46 )
    v47 = (CBrushRenderingEffect *)&Buf2.m128i_u64[1];
  else
    v47 = 0LL;
  v48 = 0;
  v148 = 0;
  if ( *((_QWORD *)v2 + 8) )
  {
    v48 = 1;
    v148 = 1;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)v47 + 48LL))(v47) == 1
      && (CBrushRenderingEffect::HasImageLightingEffect(v47) || CBrushRenderingEffect::HasSceneLightingEffect(v47)) )
    {
      v48 = 1;
      v148 = 1;
    }
    v46 = Buf2.m128i_i64[1];
  }
  if ( v46 )
    v49 = (CBrushRenderingEffect *)&Buf2.m128i_u64[1];
  else
    v49 = 0LL;
  if ( (*(unsigned int (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)v49 + 48LL))(v49) != 1
    || (v176 = 1, !CBrushRenderingEffect::HasImageLightingEffect(v49)) )
  {
    v176 = 0;
  }
  v50 = *((_QWORD *)v2 + 13);
  if ( v48 != *(_DWORD *)(v50 + 64) )
  {
    *(_DWORD *)(v50 + 64) = v48;
    CHWCallbackRenderer::SetVertexBuffer(v2, v155);
  }
  v51 = *((_QWORD *)v2 + 3);
  v52 = *(_QWORD *)(v51 + 576);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v52 + 280LL))(
    v52,
    *(_QWORD *)(v51 + 8LL * Buf2.m128i_i32[0] + 1440),
    0LL,
    0xFFFFFFFFLL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v52 + 136LL))(
    v52,
    *(_QWORD *)(*((_QWORD *)v2 + 3) + 8LL * *(int *)(*((_QWORD *)v2 + 13) + 64LL) + 1424));
  v53 = (CHwLightCollectionBuffer *)*((_QWORD *)v2 + 8);
  if ( !v53 )
    goto LABEL_61;
  v137 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v2 + 3);
  v172 = *(struct ID3D11Buffer **)(*((_QWORD *)v2 + 9) + 128LL);
  v138 = CHwLightCollectionBuffer::UpdateConstantBufferIfNeeded(v53, v137, (unsigned __int64 *)v2 + 10, v172);
  v150 = v138;
  v60 = v138;
  if ( v138 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v138, 0x29Eu);
    goto LABEL_66;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v52 + 128LL))(
    v52,
    1LL,
    1LL,
    &v172);
  v139 = *((_QWORD *)v2 + 8);
  if ( v139 )
  {
    v54 = (const struct CLightsMask *)&v166;
    v166 = *(_DWORD *)(v139 + 16);
  }
  else
  {
LABEL_61:
    v167 = -1;
    v54 = (const struct CLightsMask *)&v167;
  }
  v55 = (struct CD3DDeviceLevel1 *)*((_QWORD *)v2 + 3);
  v56 = (CHWCallbackRenderer *)((char *)v2 + 96);
  v57 = *(__int64 (__fastcall **)(CCommonRenderingEffect *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *, const enum StereoContext *, struct CVertexConstantBuffer *, const struct CLightsMask *))(Buf2.m128i_i64[1] + 16);
  v144 = (CHWCallbackRenderer *)((char *)v2 + 100);
  v58 = (struct _LUID *)((char *)v2 + 88);
  if ( v57 == CCommonRenderingEffect::SetStateOnDevice )
    v59 = CCommonRenderingEffect::SetStateOnDevice(
            (CCommonRenderingEffect *)&Buf2.m128i_u64[1],
            v55,
            v58,
            v56,
            v144,
            (CHWCallbackRenderer *)((char *)v2 + 120),
            v54);
  else
    v59 = ((__int64 (__fastcall *)(unsigned __int64 *, struct CD3DDeviceLevel1 *, struct _LUID *, const struct DisplayId *))v57)(
            &Buf2.m128i_u64[1],
            v55,
            v58,
            v56);
  v150 = v59;
  v60 = v59;
  if ( v59 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x2ABu);
LABEL_66:
  if ( !CCommonRegistryData::m_fEnableCommonSuperSets
    || (!Buf2.m128i_i64[1] ? (v61 = 0LL) : (v61 = &Buf2.m128i_i64[1]),
        v149 = v61,
        (*(unsigned int (__fastcall **)(__int64 *))(*v61 + 48))(v61)) )
  {
    v149 = 0LL;
  }
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x17Eu);
    v149 = 0LL;
    memset_0(&Buf2, 0, 0x38uLL);
    goto LABEL_72;
  }
LABEL_71:
  if ( !v44 )
  {
LABEL_72:
    v62 = *(_DWORD *)(v40 + 72);
    v63 = *(_DWORD *)(v40 + 88);
    if ( v62 < 0x64 )
      v62 = 100;
    if ( v63 < 0x64 )
      v63 = 100;
    v64 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 14), 2 * v63);
    v177 = v64;
    if ( v64 >= 0 )
    {
      v65 = *((_QWORD *)v2 + 13);
      v66 = 0;
      v177 = 0;
      if ( *(_DWORD *)(v65 + 52) == 2 )
      {
        LODWORD(v144) = 0;
        v67 = v62 * dword_1801C65A0[*(int *)(v65 + 64)];
        v68 = 5;
        if ( *(_DWORD *)(v65 + 44) - *(_DWORD *)(v65 + 40) < v67 )
          v68 = 4;
        v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum StereoContext *, __int64 *))(**(_QWORD **)(*(_QWORD *)(v65 + 24) + 576LL) + 112LL))(
                *(_QWORD *)(*(_QWORD *)(v65 + 24) + 576LL),
                *(_QWORD *)(v65 + 16),
                0LL,
                v68,
                v144,
                v174);
        v177 = v69;
        v66 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x2Fu);
LABEL_84:
          if ( v66 < 0 )
          {
            v145 = 427;
            v142 = v66;
            goto LABEL_235;
          }
          goto LABEL_85;
        }
        *(_QWORD *)(v65 + 32) = v174[0];
        if ( v68 == 4 )
          *(_DWORD *)(v65 + 40) = 0;
      }
      *(_BYTE *)(v65 + 56) = 1;
      goto LABEL_84;
    }
    v145 = 426;
LABEL_232:
    v142 = v64;
    goto LABEL_235;
  }
  v127 = *((_QWORD *)v2 + 13);
  v128 = *(_DWORD *)(v40 + 72);
  if ( v128 > *(_DWORD *)(v127 + 44) / (unsigned int)dword_1801C65A0[*(int *)(v127 + 64)] )
  {
    v64 = CD3DBuffer::EnsureByteSpace(*((CD3DBuffer **)v2 + 13), v128 * dword_1801C65A0[*(int *)(v127 + 64)], 0);
    v177 = v64;
    if ( v64 < 0 )
    {
      v145 = 404;
      goto LABEL_232;
    }
    v129 = v155;
    CHWCallbackRenderer::SetVertexBuffer(v2, v155);
  }
  else
  {
    v129 = v155;
  }
  v130 = (CD3DBuffer *)*((_QWORD *)v2 + 14);
  v131 = *(_DWORD *)(v40 + 88);
  if ( v131 > *((_DWORD *)v130 + 11) >> 1 )
  {
    v64 = CD3DBuffer::EnsureByteSpace(v130, 2 * v131, 0);
    v177 = v64;
    if ( v64 < 0 )
    {
      v145 = 412;
      goto LABEL_232;
    }
    CHWCallbackRenderer::SetIndexBuffer(v2, v129);
  }
  v132 = CD3DBuffer::LockBytes(*((CD3DBuffer **)v2 + 14), 2 * (*(_DWORD *)(*((_QWORD *)v2 + 14) + 44LL) >> 1));
  v177 = v132;
  if ( v132 >= 0 )
  {
    v64 = CD3DBuffer::LockBytes(
            *((CD3DBuffer **)v2 + 13),
            *(_DWORD *)(*((_QWORD *)v2 + 13) + 44LL)
          / (unsigned int)dword_1801C65A0[*(int *)(*((_QWORD *)v2 + 13) + 64LL)]
          * dword_1801C65A0[*(int *)(*((_QWORD *)v2 + 13) + 64LL)]);
    v177 = v64;
    if ( v64 >= 0 )
    {
LABEL_85:
      v42 = *((_QWORD *)v2 + 13);
      v3 = 0;
      v151 = 0;
      v153 = *(_DWORD *)(*((_QWORD *)v2 + 14) + 40LL) >> 1;
      v70 = dword_1801C65A0[*(int *)(v42 + 64)];
      v71 = 0;
      v72 = (v70 + *(_DWORD *)(v42 + 40) - 1) / v70;
      v157 = v72;
      v152 = 0;
      goto LABEL_86;
    }
    v145 = 419;
    goto LABEL_232;
  }
  v145 = 418;
  v142 = v132;
LABEL_235:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v142, v145);
  v4 = v147;
  v5 = v146;
LABEL_131:
  if ( v154 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 20, v154);
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 4, v5);
LABEL_135:
  v105 = *((_DWORD *)v2 + 46);
  if ( v105 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 6, v105);
  v106 = *((_DWORD *)v2 + 14);
  if ( v106 )
    _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 5, v106);
  for ( ; v4 < *((_DWORD *)v2 + 14); ++v4 )
  {
    v143 = *(_QWORD *)(*((_QWORD *)v2 + 4) + 8LL * v4);
    --*(_DWORD *)(v143 + 16);
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)v2 + 4) + 8LL * v4));
  }
  v107 = (CD3DBuffer *)*((_QWORD *)v2 + 13);
  if ( *((_BYTE *)v107 + 56) )
    CD3DBuffer::Unlock(v107);
  v108 = (CD3DBuffer *)*((_QWORD *)v2 + 14);
  if ( *((_BYTE *)v108 + 56) )
    CD3DBuffer::Unlock(v108);
  *((_DWORD *)v2 + 14) = 0;
  v109 = *((_QWORD *)v2 + 8);
  if ( v109 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 8LL))(v109);
    *((_QWORD *)v2 + 8) = 0LL;
  }
  v110 = (char *)v2 + 160;
  v111 = 0;
  if ( *((_DWORD *)v2 + 46) )
  {
    do
    {
      v112 = *(_QWORD *)v110;
      v113 = 224LL * v111;
      v114 = *(_QWORD *)(*(_QWORD *)v110 + v113);
      v115 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)v110 + v113 + 8);
      v116 = *(CMILRefCountBase **)(v114 + 32);
      if ( v116 )
      {
        v117 = *(void (**)(void))(*(_QWORD *)v116 + 8LL);
        if ( (char *)v117 == (char *)CMILRefCountBase::Release )
          CMILRefCountBase::Release(v116);
        else
          v117();
      }
      *(_QWORD *)(v114 + 32) = v115;
      if ( v115 )
        (**v115)(v115);
      *(_OWORD *)(v114 + 96) = *(_OWORD *)(v112 + v113 + 24);
      *(_OWORD *)(v114 + 112) = *(_OWORD *)(v112 + v113 + 40);
      *(_OWORD *)(v114 + 128) = *(_OWORD *)(v112 + v113 + 56);
      *(_OWORD *)(v114 + 144) = *(_OWORD *)(v112 + v113 + 72);
      *(_DWORD *)(v114 + 160) = *(_DWORD *)(v112 + v113 + 88);
      v118 = *(volatile signed __int32 **)(v113 + *(_QWORD *)v110);
      if ( v118 && _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v118 + 16LL))(v118, 1LL);
      v119 = *(CMILRefCountBase **)(*(_QWORD *)v110 + v113 + 8);
      if ( v119 )
      {
        v120 = *(void (**)(void))(*(_QWORD *)v119 + 8LL);
        if ( (char *)v120 == (char *)CMILRefCountBase::Release )
          CMILRefCountBase::Release(v119);
        else
          v120();
      }
      ++v111;
    }
    while ( v111 < *((_DWORD *)v2 + 46) );
    v2 = this;
  }
  *((_DWORD *)v110 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v110, 224LL);
  v121 = *((_QWORD *)v2 + 3);
  v168 = v2;
  v122 = *(_DWORD *)(v121 + 352);
  v123 = v122 + 1;
  if ( v122 + 1 < v122 )
  {
    v134 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_241:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v134, 0x9D6u);
  }
  else
  {
    if ( v123 <= *(_DWORD *)(v121 + 348) )
    {
      *(_QWORD *)(*(_QWORD *)(v121 + 328) + 8LL * v122) = v168;
      *(_DWORD *)(v121 + 352) = v123;
      goto LABEL_163;
    }
    v133 = DynArrayImpl<0>::AddMultipleAndSet(v121 + 328, 8LL, 1LL, &v168);
    v134 = v133;
    if ( v133 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v133, 0xC0u);
      goto LABEL_241;
    }
LABEL_163:
    _InterlockedIncrement((volatile signed __int32 *)v168 + 4);
  }
  return v177;
}
