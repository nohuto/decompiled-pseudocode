/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMegaRectEntry@@$0A@@@QEAAJPEFBUMegaRectEntry@@I@Z @ 0x18009A224 (-AddMultipleAndSet@-$DynArray@UMegaRectEntry@@$0A@@@QEAAJPEFBUMegaRectEntry@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800AD74C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800C019C (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?HasValidLightCollection@CLightStack@@AEBA_NXZ @ 0x18012DF44 (-HasValidLightCollection@CLightStack@@AEBA_NXZ.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18012E0F8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x180135018 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  __int64 v5; // r13
  int v6; // edi
  _DWORD *v7; // rsi
  __int64 v8; // r11
  struct CHwLightCollectionBuffer *v11; // r12
  bool v12; // r15
  __int64 v13; // rax
  int v14; // edx
  __int64 (__fastcall *v15)(__int64, int); // rax
  int v16; // ecx
  CD2DContext *v17; // rax
  __int64 v18; // rcx
  CD2DContext *v19; // rsi
  int v20; // eax
  int v21; // edi
  __int64 v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v26; // edi
  CD2DContext *v27; // rax
  __int64 v28; // rcx
  CD2DContext *v29; // rsi
  int v30; // eax
  __int64 v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // edx
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  CMILRefCountBase *v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  int v42; // edi
  CD2DTarget *v43; // r15
  __int64 v44; // rcx
  __int64 j; // rdi
  CD2DTarget *v46; // r14
  CD2DTarget *v47; // r15
  __int64 v48; // rcx
  __int64 i; // rdi
  CD2DTarget *v50; // r14
  int v51; // eax
  int v52; // eax
  __m128 *v53; // rax
  CDrawListPrimitive *v54; // rcx
  D3DVALUE v55; // xmm1_4
  D3DVALUE v56; // xmm0_4
  D3DVALUE v57; // xmm2_4
  __int64 v58; // rax
  int v59; // eax
  float v60; // xmm1_4
  float v61; // xmm1_4
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  __int64 v63; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C8h] BYREF
  struct CHwLightCollectionBuffer *v65; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DCOLORVALUE v66; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DCOLORVALUE v67; // [rsp+58h] [rbp-A8h] BYREF
  CMILRefCountBase *v68[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+88h] [rbp-78h]
  __int128 v71; // [rsp+98h] [rbp-68h]
  __int128 v72; // [rsp+A8h] [rbp-58h]
  __int128 v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+C8h] [rbp-38h]
  char v75[132]; // [rsp+CCh] [rbp-34h] BYREF
  __int128 v76; // [rsp+150h] [rbp+50h] BYREF
  struct _D3DCOLORVALUE v77; // [rsp+160h] [rbp+60h] BYREF
  __m128 v78; // [rsp+170h] [rbp+70h]

  v5 = *(_QWORD *)(a2 + 456);
  v6 = a5;
  v7 = 0LL;
  v8 = a3;
  if ( *(_QWORD *)(a1 + 48) )
    v7 = (_DWORD *)(a1 + 48);
  v11 = 0LL;
  v12 = 0;
  v65 = 0LL;
  if ( a4 == 1.0 )
    v12 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 && v12 )
    v6 = 1;
  v13 = *(_QWORD *)(a1 + 168);
  if ( v13 )
  {
    *(struct _D3DCOLORVALUE *)&v77.r = *(struct _D3DCOLORVALUE *)(v13 + 168);
    v53 = (__m128 *)Premultiply(&v67, &v77);
    v54 = *(CDrawListPrimitive **)(a1 + 32);
    v78 = *v53;
    v55 = _mm_shuffle_ps(v78, v78, 85).m128_f32[0] * *(float *)(a1 + 180);
    v66.r = v78.m128_f32[0] * *(float *)(a1 + 176);
    v56 = _mm_shuffle_ps(v78, v78, 170).m128_f32[0] * *(float *)(a1 + 184);
    v57 = _mm_shuffle_ps(v78, v78, 255).m128_f32[0] * *(float *)(a1 + 188);
    v66.g = v55;
    v66.b = v56;
    v66.a = v57;
    CDrawListPrimitive::UpdatePremultipliedColor(v54, &v66);
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
    if ( !v6 )
    {
LABEL_10:
      v14 = 0;
      goto LABEL_11;
    }
    v26 = v6 - 1;
    if ( v26 )
    {
      v42 = v26 - 1;
      if ( v42 )
      {
        if ( v42 != 2 )
          goto LABEL_10;
        v14 = 22;
      }
      else
      {
        v14 = 21;
      }
    }
    else
    {
      v14 = 5;
    }
LABEL_11:
    *(_OWORD *)(a1 + 96) = *(_OWORD *)v8;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v8 + 48);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v8 + 64);
    *(float *)(a1 + 164) = a4;
    *(_DWORD *)(a1 + 40) = v14;
    v15 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 8LL);
    if ( v15 == CCommonRenderingEffect::OverwriteBlendMode )
    {
      v16 = v7[8];
      if ( v14 == 22 )
      {
        if ( v16 < 6 )
          v7[8] = v16 + 6;
      }
      else if ( v16 >= 6 )
      {
        v7[8] = v16 - 6;
      }
    }
    else
    {
      ((void (__fastcall *)(_DWORD *))v15)(v7);
    }
  }
  if ( (*(_BYTE *)(a1 + 20) & 0x10) != 0 )
  {
    v58 = *(_QWORD *)v7;
    v76 = *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    (*(void (__fastcall **)(_DWORD *, __int64, __int128 *))(v58 + 40))(v7, a2, &v76);
  }
  if ( (*(_BYTE *)(a1 + 20) & 4) != 0 )
    *(_BYTE *)(a2 + 6535) = 1;
  if ( *(_BYTE *)(a2 + 792) && *(_DWORD *)(a2 + 752) && CLightStack::HasValidLightCollection((CLightStack *)(a2 + 728)) )
  {
    v59 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
            (CLightStack *)(a2 + 728),
            (struct CDrawingContext *)a2,
            (const struct CMILMatrix *)(a2 + 6256),
            &v65);
    v21 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xB0u);
      return (unsigned int)v21;
    }
    v11 = v65;
  }
  if ( (*(_BYTE *)(a1 + 20) & 8) == 0 || !v12 )
  {
    v17 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
    v19 = v17;
    if ( *((_QWORD *)v17 + 45) )
      CD2DContext::FlushDrawList(v17);
    if ( !*((_BYTE *)v19 + 400) )
    {
      v47 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 5) + 384LL))(*((_QWORD *)v19 + 5));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v48, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v19 + 54); v47 = v50 )
      {
        v50 = *(CD2DTarget **)(*((_QWORD *)v19 + 24) + 8 * i);
        if ( v47 )
          *((_BYTE *)v47 + 48) = 0;
        CD2DTarget::ApplyState(v50, v19);
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)v19 + 400) = 1;
    }
    *((_BYTE *)v19 + 401) = 1;
    v20 = CD2DContext::EnsureHwCallbackRenderer(v19, v11);
    v21 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x35Eu);
      goto LABEL_105;
    }
    v22 = *((_QWORD *)v19 + 40);
    v64 = a1;
    v23 = *(_DWORD *)(v22 + 56);
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v21 = 0;
      if ( v24 <= *(_DWORD *)(v22 + 52) )
      {
        *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8LL * v23) = v64;
        *(_DWORD *)(v22 + 56) = v24;
LABEL_29:
        _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
        ++*(_DWORD *)(v64 + 16);
LABEL_30:
        if ( v21 >= 0 )
          return (unsigned int)v21;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x362u);
LABEL_105:
        if ( v21 >= 0 )
          return (unsigned int)v21;
        v62 = 185;
        goto LABEL_107;
      }
      v51 = DynArrayImpl<0>::AddMultipleAndSet(v22 + 32, 8LL, 1LL, &v64);
      v21 = v51;
      if ( v51 >= 0 )
        goto LABEL_29;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xC0u);
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x95u);
    goto LABEL_30;
  }
  v27 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
  v29 = v27;
  if ( *((_QWORD *)v27 + 45) )
    CD2DContext::FlushDrawList(v27);
  if ( !*((_BYTE *)v29 + 400) )
  {
    v43 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v28, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v29 + 5) + 384LL))(*((_QWORD *)v29 + 5));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v44, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v29 + 54); v43 = v46 )
    {
      v46 = *(CD2DTarget **)(*((_QWORD *)v29 + 24) + 8 * j);
      if ( v43 )
        *((_BYTE *)v43 + 48) = 0;
      CD2DTarget::ApplyState(v46, v29);
      j = (unsigned int)(j + 1);
    }
    *((_BYTE *)v29 + 400) = 1;
  }
  *((_BYTE *)v29 + 401) = 1;
  v30 = CD2DContext::EnsureHwCallbackRenderer(v29, v11);
  v21 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x341u);
LABEL_99:
    if ( v21 >= 0 )
      return (unsigned int)v21;
    v62 = 181;
LABEL_107:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v62);
    return (unsigned int)v21;
  }
  v31 = *((_QWORD *)v29 + 40);
  v63 = a1;
  v32 = *(_DWORD *)(v31 + 56);
  v33 = v32 + 1;
  if ( v32 + 1 < v32 )
  {
    v21 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_87;
  }
  v21 = 0;
  if ( v33 > *(_DWORD *)(v31 + 52) )
  {
    v52 = DynArrayImpl<0>::AddMultipleAndSet(v31 + 32, 8LL, 1LL, &v63);
    v21 = v52;
    if ( v52 >= 0 )
      goto LABEL_44;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xC0u);
LABEL_87:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x95u);
    goto LABEL_45;
  }
  *(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL * v32) = v63;
  *(_DWORD *)(v31 + 56) = v33;
LABEL_44:
  _InterlockedIncrement((volatile signed __int32 *)(v63 + 8));
  ++*(_DWORD *)(v63 + 16);
LABEL_45:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x80u);
    goto LABEL_96;
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1 + 96, 1)
    || (v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 100) - 0.0)) & _xmm), v34 >= 0.00012207031)
    || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 112) - 0.0)) & _xmm), v35 >= 0.00012207031) )
  {
    v60 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 96) - 0.0)) & _xmm);
    if ( v60 >= 0.00012207031 )
      goto LABEL_96;
    v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 116) - 0.0)) & _xmm);
    if ( v61 >= 0.00012207031 )
      goto LABEL_96;
  }
  v69 = 0LL;
  memset_0(v75, 0, 0x80uLL);
  v36 = *(_OWORD *)(a1 + 96);
  v37 = *(_OWORD *)(a1 + 112);
  v74 = *(_DWORD *)(a1 + 160);
  v38 = *(CMILRefCountBase **)(a1 + 32);
  v70 = v36;
  v68[0] = (CMILRefCountBase *)a1;
  v39 = *(_OWORD *)(a1 + 128);
  v68[1] = v38;
  v71 = v37;
  v40 = *(_OWORD *)(a1 + 144);
  v72 = v39;
  v73 = v40;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  (**(void (__fastcall ***)(CMILRefCountBase *))v68[1])(v68[1]);
  v41 = DynArray<MegaRectEntry,0>::AddMultipleAndSet(v31 + 160, v68);
  v21 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x134u);
    if ( v68[0] )
      CMILRefCountBase::Release(v68[0]);
    if ( v68[1] )
      (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v68[1] + 8LL))(v68[1]);
  }
  else
  {
    *(_OWORD *)v68 = 0LL;
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x84u);
LABEL_96:
    if ( v21 >= 0 )
      return (unsigned int)v21;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x345u);
    goto LABEL_99;
  }
  return (unsigned int)v21;
}
