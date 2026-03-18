/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0
 * Callers:
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1800075B0 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x1800073D8 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18001ED20 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800469D0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180046A20 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180087540 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180087914 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180087AD8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180119750 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 */

char __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(struct CBitmapRealization *, GUID *, void **),
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  bool v6; // r12
  char v7; // r13
  HRGN v8; // r14
  __int64 v12; // rdi
  int v13; // r14d
  BOOL (__fastcall *v14)(__int64, __int64, __int128 *); // r14
  __int64 v15; // rcx
  int v16; // edx
  __m128 v17; // xmm7
  float v18; // xmm10_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  void (__fastcall *v21)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *); // rdi
  BOOL (__fastcall *v22)(__int64, __int64, __int128 *); // r14
  __m128 v23; // xmm6
  int v24; // edi
  int v25; // r15d
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  char v29; // r15
  __int64 (__fastcall ***v30)(struct CBitmapRealization *, GUID *, void **); // rdx
  __int64 v31; // rdi
  void (__fastcall *v32)(CBitmapRealization *); // rdi
  bool v33; // dl
  struct ScrollOptimization *v34; // r8
  int v35; // ebx
  char v36; // r14
  void (__fastcall *v37)(CCompositionSurfaceBitmap *__hidden, bool, bool, bool, const struct CRegion *, const struct ScrollOptimization *); // r15
  __int64 (__fastcall *v39)(CBitmapRealization *, const struct CRegion *); // rdi
  char v40; // [rsp+38h] [rbp-D0h]
  bool v41; // [rsp+39h] [rbp-CFh]
  char v42; // [rsp+3Ah] [rbp-CEh]
  __int64 v43; // [rsp+3Ch] [rbp-CCh] BYREF
  struct ScrollOptimization *v44; // [rsp+48h] [rbp-C0h]
  int v45; // [rsp+50h] [rbp-B8h]
  int v46; // [rsp+54h] [rbp-B4h]
  __int64 v47; // [rsp+58h] [rbp-B0h]
  HRGN v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  __int64 v52; // [rsp+80h] [rbp-88h]
  __int128 v53; // [rsp+88h] [rbp-80h] BYREF
  __int128 v54; // [rsp+98h] [rbp-70h] BYREF
  _DWORD Buf2[16]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD Buf1[16]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD *v57; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v58[18]; // [rsp+130h] [rbp+28h] BYREF

  v6 = 0;
  v58[0] = 0;
  v7 = 0;
  v8 = a4;
  v44 = a5;
  v48 = a4;
  v57 = v58;
  v42 = 0;
  v40 = 0;
  v41 = 0;
  if ( a6 )
  {
    v6 = 1;
    v40 = 1;
    v29 = 1;
    v41 = 1;
  }
  else
  {
    v12 = *((_QWORD *)this + 16);
    v13 = 0;
    v45 = 0;
    v46 = 0;
    v43 = 0LL;
    Buf1[14] = 0;
    Buf1[13] = 0;
    Buf1[12] = 0;
    Buf1[11] = 0;
    Buf1[9] = 0;
    Buf1[8] = 0;
    Buf1[7] = 0;
    Buf1[6] = 0;
    Buf1[4] = 0;
    Buf1[3] = 0;
    Buf1[2] = 0;
    Buf1[1] = 0;
    Buf2[14] = 0;
    Buf2[13] = 0;
    Buf2[12] = 0;
    Buf2[11] = 0;
    Buf2[9] = 0;
    Buf2[8] = 0;
    Buf2[7] = 0;
    Buf2[6] = 0;
    Buf2[4] = 0;
    Buf2[3] = 0;
    Buf2[2] = 0;
    Buf2[1] = 0;
    v47 = 0LL;
    v53 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v54 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    Buf1[15] = 1065353216;
    Buf1[10] = 1065353216;
    Buf1[5] = 1065353216;
    Buf1[0] = 1065353216;
    Buf2[15] = 1065353216;
    Buf2[10] = 1065353216;
    Buf2[5] = 1065353216;
    Buf2[0] = 1065353216;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    if ( v12 )
    {
      v14 = *(BOOL (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)(v12 + 112) + 32LL);
      if ( v14 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform(v12 + 112, (__int64)Buf1, &v53);
      else
        v14(v12 + 112, (__int64)Buf1, &v53);
      v15 = *((_QWORD *)this + 16);
      v16 = 3;
      v13 = HIDWORD(v47);
      v17 = (__m128)_mm_loadu_si128((const __m128i *)(v15 + 152));
      if ( *(_DWORD *)(v15 + 128) )
        v16 = *(_DWORD *)(v15 + 128);
      v45 = *(_DWORD *)(v15 + 148);
      v46 = *(_DWORD *)(v15 + 244);
      LODWORD(v47) = v16;
      LODWORD(v18) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
      LODWORD(v20) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
    }
    else
    {
      v20 = *((float *)&v50 + 1);
      v19 = *(float *)&v50;
      v18 = *((float *)&v49 + 1);
      v17.m128_i32[0] = v49;
    }
    if ( a2 )
    {
      if ( a3 )
      {
        v21 = (void (__fastcall *)(CDxHandleBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*a2)[6];
        if ( v21 == CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes((CDxHandleBitmapRealization *)a2, a3);
        else
          v21((CDxHandleBitmapRealization *)a2, a3);
      }
      v22 = (BOOL (__fastcall *)(__int64, __int64, __int128 *))a2[14][4];
      if ( v22 == CDxHandleBitmapRealization::GetTransform )
        CDxHandleBitmapRealization::GetTransform((__int64)(a2 + 14), (__int64)Buf2, &v54);
      else
        v22((__int64)(a2 + 14), (__int64)Buf2, &v54);
      v23 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 19));
      v13 = 3;
      v24 = *((_DWORD *)a2 + 37);
      v25 = *((_DWORD *)a2 + 61);
      LODWORD(v26) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
      LODWORD(v27) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
      LODWORD(v28) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
      if ( *((_DWORD *)a2 + 32) )
        v13 = *((_DWORD *)a2 + 32);
    }
    else
    {
      v28 = *((float *)&v52 + 1);
      v27 = *(float *)&v52;
      v26 = *((float *)&v51 + 1);
      v23.m128_i32[0] = v51;
      v24 = HIDWORD(v43);
      v25 = v43;
    }
    if ( (unsigned __int8)operator!=(&v53) || memcmp_0(Buf1, Buf2, 0x40uLL) )
      v40 = 1;
    if ( (_DWORD)v47 == v13
      && v45 == v24
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17.m128_f32[0] - v23.m128_f32[0])) & _xmm) <= 0.0000011920929
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - v26)) & _xmm) <= 0.0000011920929
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v27)) & _xmm) <= 0.0000011920929
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v28)) & _xmm) <= 0.0000011920929
      && v46 == v25 )
    {
      v29 = 0;
    }
    else
    {
      v29 = 1;
      v41 = 1;
    }
    v8 = v48;
  }
  v30 = (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))*((_QWORD *)this + 16);
  if ( v30 != a2 )
  {
    if ( v30 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v30);
    *((_QWORD *)this + 16) = a2;
    v6 = 1;
  }
  v31 = *((_QWORD *)this + 16);
  if ( v31 )
  {
    v7 = 0;
    if ( v8 )
    {
      if ( v8 == (HRGN)1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)(v31 + 112) + 24LL))(
          v31 + 112,
          &v43,
          (char *)&v43 + 4);
        v51 = 0LL;
        v52 = v43;
        CRegion::SetRectangle((CRegion *)&v57, (const struct MilRectU *)&v51);
      }
      else
      {
        CRegion::SetHRGN((CRegion *)&v57, v8);
      }
      v7 = 1;
    }
    if ( v8 == (HRGN)1 || v6 && *((_DWORD *)this + 28) > 1u )
    {
      v32 = *(void (__fastcall **)(CBitmapRealization *))(**((_QWORD **)this + 16) + 72LL);
      if ( v32 == CBitmapRealization::MarkFullDirty )
        CBitmapRealization::MarkFullDirty(*((CBitmapRealization **)this + 16));
      else
        v32(*((CBitmapRealization **)this + 16));
    }
    else if ( v7 )
    {
      v39 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct CRegion *))(**((_QWORD **)this + 16) + 64LL);
      if ( v39 == CBitmapRealization::AddDirtyRegion )
        CBitmapRealization::AddDirtyRegion(*((CBitmapRealization **)this + 16), (const struct CRegion *)&v57);
      else
        v39(*((CBitmapRealization **)this + 16), (const struct CRegion *)&v57);
    }
  }
  v33 = v40;
  v34 = v44;
  if ( v6 || v40 || v29 || v7 || v44 && *(_DWORD *)v44 )
  {
    v35 = *((_DWORD *)this + 56);
    v36 = 1;
    v42 = 1;
    if ( v35 <= 0 )
      goto LABEL_47;
    do
    {
      v37 = ***(void (__fastcall ****)(CCompositionSurfaceBitmap *__hidden, bool, bool, bool, const struct CRegion *, const struct ScrollOptimization *))(*((_QWORD *)this + 25) + 8LL * (unsigned int)(v35 - 1));
      if ( v37 == CCompositionSurfaceBitmap::NotifyUpdate )
      {
        CCompositionSurfaceBitmap::NotifyUpdate(
          *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 25) + 8LL * (unsigned int)(v35 - 1)),
          v6,
          v33,
          v41,
          (const struct CRegion *)((unsigned __int64)&v57 & -(__int64)(v7 != 0)),
          v34);
      }
      else
      {
        LOBYTE(v30) = v6;
        LOBYTE(a4) = v41;
        LOBYTE(v34) = v40;
        v37(
          *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 25) + 8LL * (unsigned int)(v35 - 1)),
          (bool)v30,
          (bool)v34,
          (bool)a4,
          (const struct CRegion *)((unsigned __int64)&v57 & -(__int64)(v7 != 0)),
          v44);
      }
      v33 = v40;
      --v35;
      v34 = v44;
    }
    while ( v35 > 0 );
  }
  v36 = v42;
LABEL_47:
  if ( v58 != v57 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v57);
  return v36;
}
