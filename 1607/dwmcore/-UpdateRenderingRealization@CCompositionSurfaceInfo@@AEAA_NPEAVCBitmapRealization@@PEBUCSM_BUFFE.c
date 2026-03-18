/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x180005D50 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054B70 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180055080 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800902C0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180093850 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800989C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009BBA8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(CBitmapRealization *__hidden this, const struct _GUID *, void **),
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  const struct ScrollOptimization *v6; // r13
  char v7; // r12
  char v8; // r14
  char v9; // r15
  int v13; // r13d
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  bool (__fastcall *v17)(__int64, __int64, __int128 *); // rax
  CBitmapRealization *v18; // rcx
  __int64 (*v19)(void); // rax
  int AlphaMode; // eax
  __int64 v21; // rax
  __m128 v22; // xmm7
  float v23; // xmm10_4
  float v24; // xmm9_4
  float v25; // xmm8_4
  void (__fastcall *v26)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *); // r8
  bool (__fastcall *v27)(__int64, __int64, __int128 *); // rax
  char *v28; // rcx
  __int64 (__fastcall *v29)(CBitmapRealization *); // rax
  CBitmapRealization *v30; // rcx
  int v31; // eax
  __m128 v32; // xmm6
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm13_4
  int v36; // r8d
  __int64 (__fastcall ***v37)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdx
  __int64 v38; // rax
  char v39; // dl
  int v40; // edi
  CCompositionSurfaceBitmap *v41; // rcx
  unsigned __int64 v42; // rdx
  void (__fastcall *v43)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // rax
  void (__fastcall *v44)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *); // r8
  __int64 (__fastcall **v46)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  void (__fastcall *v49)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *); // r8
  struct CRegion *v50; // [rsp+28h] [rbp-E0h]
  __int16 v51; // [rsp+48h] [rbp-C0h]
  int v52; // [rsp+4Ch] [rbp-BCh]
  int v53; // [rsp+50h] [rbp-B8h]
  int v54; // [rsp+54h] [rbp-B4h]
  HRGN v55; // [rsp+88h] [rbp-80h]
  _OWORD v56[4]; // [rsp+98h] [rbp-70h] BYREF
  int v57; // [rsp+D8h] [rbp-30h]
  _OWORD v58[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v59; // [rsp+128h] [rbp+20h]
  __int128 v60; // [rsp+138h] [rbp+30h] BYREF
  __int128 v61; // [rsp+148h] [rbp+40h] BYREF
  _DWORD *v62; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v63[18]; // [rsp+160h] [rbp+58h] BYREF

  v63[0] = 0;
  v6 = a5;
  v7 = 0;
  v8 = 0;
  v55 = a4;
  v9 = 0;
  v51 = 0;
  v62 = v63;
  if ( a6 || *((_BYTE *)this + 352) )
  {
    v8 = 1;
    v7 = 1;
    v9 = 1;
    if ( a2 && a3 )
    {
      v46 = *a2;
      v49 = (void (__fastcall *)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))v46[6];
      if ( v49 == CDxHandleBitmapRealization::UpdateAttributes )
        CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
      else
        v49((CDxHandleBitmapRealization *)a2, a3);
    }
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
    v52 = 0;
    v53 = 0;
    v15 = *((_QWORD *)this + 15);
    v59 = dword_1801EAD50;
    v57 = dword_1801EAD50;
    v54 = 0;
    v61 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v60 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v58[0] = CMILMatrix::Identity;
    v58[1] = xmmword_1801EAD20;
    v58[2] = xmmword_1801EAD30;
    v58[3] = xmmword_1801EAD40;
    v56[0] = CMILMatrix::Identity;
    v56[1] = xmmword_1801EAD20;
    v56[2] = xmmword_1801EAD30;
    v56[3] = xmmword_1801EAD40;
    if ( v15 )
    {
      v16 = v15 + 112;
      v17 = *(bool (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 32LL);
      if ( v17 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v16, (__int64)v58, &v61);
      else
        ((void (__fastcall *)(__int64, _OWORD *, __int128 *, _QWORD))v17)(v16, v58, &v61, 0LL);
      v18 = (CBitmapRealization *)(*((_QWORD *)this + 15) + 112LL);
      v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 48LL);
      if ( (char *)v19 == (char *)CBitmapRealization::GetAlphaMode )
        AlphaMode = CBitmapRealization::GetAlphaMode(v18);
      else
        AlphaMode = v19();
      v52 = AlphaMode;
      v21 = *((_QWORD *)this + 15);
      v14 = 0LL;
      v22 = (__m128)_mm_loadu_si128((const __m128i *)(v21 + 148));
      v53 = *(_DWORD *)(v21 + 144);
      LODWORD(v23) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
      LODWORD(v24) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
      LODWORD(v25) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
      v54 = *(_DWORD *)(v21 + 172);
    }
    else
    {
      v25 = 0.0;
      v24 = 0.0;
      v23 = 0.0;
      v22.m128_i32[0] = 0;
    }
    if ( a2 )
    {
      if ( a3 )
      {
        v26 = (void (__fastcall *)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*a2)[6];
        if ( v26 == CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **), const struct CSM_BUFFER_ATTRIBUTES *, void (__fastcall *)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *), _QWORD))(*a2)[6])(
            a2,
            a3,
            v26,
            0LL);
      }
      v27 = (bool (__fastcall *)(__int64, __int64, __int128 *))a2[14][4];
      v28 = (char *)(a2 + 14);
      if ( v27 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform((__int64)v28, (__int64)v56, &v60);
      else
        ((void (__fastcall *)(char *, _OWORD *, __int128 *, __int64))v27)(v28, v56, &v60, v14);
      v29 = (__int64 (__fastcall *)(CBitmapRealization *))a2[14][6];
      v30 = (CBitmapRealization *)(a2 + 14);
      if ( v29 == CBitmapRealization::GetAlphaMode )
        v31 = CBitmapRealization::GetAlphaMode(v30);
      else
        v31 = v29(v30);
      v32 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 148));
      v13 = v31;
      LODWORD(v33) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
      LODWORD(v34) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
      LODWORD(v35) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
    }
    else
    {
      v35 = 0.0;
      v34 = 0.0;
      v33 = 0.0;
      v32.m128_i32[0] = 0;
    }
    if ( (unsigned __int8)operator!=(&v61, &v60) || !CMILMatrix::IsEqualTo<0>((float *)v58, (float *)v56) )
      v7 = 1;
    if ( v52 != v13
      || v53 != v36
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22.m128_f32[0] - v32.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - v33)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - v34)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - v35)) & _xmm) > 0.0000011920929
      || v54 != (_DWORD)a4 )
    {
      v9 = 1;
    }
    v6 = a5;
  }
  v37 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))*((_QWORD *)this + 15);
  if ( v37 != a2 )
  {
    if ( v37 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v37);
    v38 = *((_QWORD *)this + 25);
    if ( v38 )
      *(_BYTE *)(v38 + 237) = 0;
    *((_QWORD *)this + 15) = a2;
    v8 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v39 = CCompositionSurfaceInfo::DirtyRenderingRealization(this, v8, v55, (struct CRegion *)&v62);
    LOBYTE(v51) = v39;
  }
  else
  {
    v39 = 0;
  }
  if ( !*((_BYTE *)this + 352) )
  {
    *((_BYTE *)this + 352) = 1;
    if ( v8 || v7 || v9 || v39 || v6 && *(_DWORD *)v6 )
    {
      v40 = *((_DWORD *)this + 84);
      HIBYTE(v51) = 1;
      while ( v40 > 0 )
      {
        v44 = CCompositionSurfaceBitmap::NotifyUpdate;
        LOBYTE(a4) = v9;
        v41 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 39) + 8LL * (unsigned int)(v40 - 1));
        v42 = (unsigned __int64)&v62 & -(__int64)(v39 != 0);
        v50 = (struct CRegion *)v42;
        LOBYTE(v42) = v8;
        v43 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, char, char, char, const struct CRegion *, const struct ScrollOptimization *))(*(_QWORD *)v41 + 8LL);
        LOBYTE(v44) = v7;
        if ( v43 == CCompositionSurfaceBitmap::NotifyUpdate )
          CCompositionSurfaceBitmap::NotifyUpdate(v41, v8, v7, v9, v50, v6);
        else
          v43(v41, v42, (char)v44, (char)a4, v50, v6);
        v39 = v51;
        --v40;
      }
    }
    *((_BYTE *)this + 352) = 0;
  }
  if ( v63 != v62 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return HIBYTE(v51);
}
