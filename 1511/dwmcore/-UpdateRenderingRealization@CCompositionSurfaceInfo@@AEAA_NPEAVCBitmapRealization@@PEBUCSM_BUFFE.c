/*
 * XREFs of ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18002EB80
 * Callers:
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18000BC80 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18000BA24 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002D374 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18002EAA0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 */

char __fastcall CCompositionSurfaceInfo::UpdateRenderingRealization(
        CCompositionSurfaceInfo *this,
        struct CBitmapRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        HRGN a4,
        const struct ScrollOptimization *a5,
        bool a6)
{
  const struct ScrollOptimization *v6; // rdi
  char v7; // r12
  char v8; // r13
  const struct CSM_BUFFER_ATTRIBUTES *v9; // r15
  char v12; // bl
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128 v15; // xmm6
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  int v19; // eax
  __m128 v20; // xmm10
  int v21; // r15d
  int v22; // edi
  float v23; // xmm11_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  __int64 (__fastcall ***v26)(struct CBitmapRealization *, GUID *, void **); // rdx
  int v27; // r15d
  char v28; // si
  unsigned __int64 v29; // rbx
  __int16 v31; // [rsp+38h] [rbp-D0h]
  char v32; // [rsp+3Ah] [rbp-CEh]
  int v33; // [rsp+3Ch] [rbp-CCh]
  int v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+44h] [rbp-C4h]
  int v36; // [rsp+48h] [rbp-C0h]
  HRGN v37; // [rsp+80h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-80h] BYREF
  __int128 v39; // [rsp+98h] [rbp-70h] BYREF
  _DWORD Buf2[16]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD Buf1[16]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD *v42; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v43[18]; // [rsp+130h] [rbp+28h] BYREF

  v43[0] = 0;
  v6 = a5;
  v7 = 0;
  v8 = 0;
  v37 = a4;
  v9 = a3;
  v31 = 0;
  v32 = 0;
  v42 = v43;
  if ( a6 )
  {
    v7 = 1;
    v12 = 1;
    LOBYTE(v31) = 1;
    v8 = 1;
    if ( a2 && a3 )
    {
      (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 48LL))(
        a2,
        a3);
      v12 = 1;
    }
  }
  else
  {
    v34 = 0;
    v36 = 0;
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
    v33 = 0;
    v35 = 0;
    v13 = *((_QWORD *)this + 15);
    v38 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v39 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    Buf1[15] = 1065353216;
    Buf1[10] = 1065353216;
    Buf1[5] = 1065353216;
    Buf1[0] = 1065353216;
    Buf2[15] = 1065353216;
    Buf2[10] = 1065353216;
    Buf2[5] = 1065353216;
    Buf2[0] = 1065353216;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *, __int128 *))(*(_QWORD *)(v13 + 112) + 32LL))(v13 + 112, Buf1, &v38);
      v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 15) + 112LL) + 48LL))(*((_QWORD *)this + 15) + 112LL);
      v14 = *((_QWORD *)this + 15);
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 152));
      v35 = *(_DWORD *)(v14 + 148);
      LODWORD(v16) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
      LODWORD(v17) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
      v34 = *(_DWORD *)(v14 + 244);
    }
    else
    {
      v18 = 0.0;
      v17 = 0.0;
      v16 = 0.0;
      v15.m128_i32[0] = 0;
    }
    if ( a2 )
    {
      if ( v9 )
        (*(void (__fastcall **)(struct CBitmapRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 48LL))(
          a2,
          v9);
      (*(void (__fastcall **)(char *, _DWORD *, __int128 *))(*((_QWORD *)a2 + 14) + 32LL))((char *)a2 + 112, Buf2, &v39);
      v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 14) + 48LL))((char *)a2 + 112);
      v20 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 152));
      v21 = *((_DWORD *)a2 + 37);
      v22 = v19;
      v36 = *((_DWORD *)a2 + 61);
      LODWORD(v23) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
      LODWORD(v24) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      LODWORD(v25) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    }
    else
    {
      v25 = 0.0;
      v24 = 0.0;
      v23 = 0.0;
      v20.m128_i32[0] = 0;
      v22 = 0;
      v21 = 0;
    }
    if ( !operator!=((float *)&v38, (float *)&v39) && !memcmp_0(Buf1, Buf2, 0x40uLL) )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      LOBYTE(v31) = 1;
    }
    if ( v33 != v22
      || v35 != v21
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15.m128_f32[0] - v20.m128_f32[0])) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - v23)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v24)) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - v25)) & _xmm) > 0.0000011920929
      || v34 != v36 )
    {
      v8 = 1;
    }
    v6 = a5;
  }
  v26 = (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))*((_QWORD *)this + 15);
  if ( v26 != (__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **))a2 )
  {
    if ( v26 )
      CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(this, v26);
    *((_QWORD *)this + 15) = a2;
    v7 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    LOBYTE(v26) = CCompositionSurfaceInfo::DirtyRenderingRealization(this, v7, v37, (struct CRegion *)&v42);
    v32 = (char)v26;
  }
  else
  {
    LOBYTE(v26) = 0;
  }
  if ( v7 || v12 || v8 || (_BYTE)v26 || v6 && *(_DWORD *)v6 )
  {
    v27 = *((_DWORD *)this + 54);
    v28 = 1;
    HIBYTE(v31) = 1;
    if ( v27 <= 0 )
      goto LABEL_42;
    do
    {
      v29 = (unsigned __int64)&v42 & -(__int64)((_BYTE)v26 != 0);
      LOBYTE(a4) = v8;
      LOBYTE(a3) = v31;
      LOBYTE(v26) = v7;
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, void **), const struct CSM_BUFFER_ATTRIBUTES *, HRGN, unsigned __int64, const struct ScrollOptimization *))(**(_QWORD **)(*((_QWORD *)this + 24) + 8LL * (unsigned int)(v27 - 1)) + 8LL))(
        *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * (unsigned int)(v27 - 1)),
        v26,
        a3,
        a4,
        v29,
        a5);
      LOBYTE(v26) = v32;
      --v27;
    }
    while ( v27 > 0 );
  }
  v28 = HIBYTE(v31);
LABEL_42:
  if ( v43 != v42 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v42);
  return v28;
}
