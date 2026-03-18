/*
 * XREFs of ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180070418
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x180013A4C (-Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180016000 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18005C220 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C2E8 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18005E638 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x180070920 (-GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CAtlasedRects::CreateNewD2DCommandList(
        CAtlasedRects *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct CAtlasedRectsCommandList **a5)
{
  CAtlasedRects *v6; // r15
  char v7; // bl
  struct ID2D1PrivateCompositorBuffer *v8; // r14
  struct ID2D1PrivateCompositorBuffer *v9; // rsi
  int MeshData; // eax
  int v11; // edi
  __int64 v12; // r12
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  _DWORD *v16; // rbx
  const __m128i *v17; // r15
  __int64 v18; // rdi
  int *v19; // rsi
  __int64 v20; // r14
  __m128 v21; // xmm6
  int v22; // xmm7_4
  int *v23; // rax
  int v24; // ecx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct IDeviceResourceNotify *v36; // rdx
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edx
  struct CAtlasedRectsCommandList *v40; // rax
  int v42; // ebx
  int v43; // eax
  const struct IDeviceResourceNotify *v44; // rdx
  struct CAtlasedRectsCommandList *v45; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1PrivateCompositorBuffer *v46; // [rsp+68h] [rbp-A0h] BYREF
  struct CD2DCommandList *v47; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1PrivateCompositorBuffer *v48; // [rsp+78h] [rbp-90h] BYREF
  struct ID2D1PrivateCompositorBuffer *v49[2]; // [rsp+80h] [rbp-88h] BYREF
  int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  CAtlasedRects *v53; // [rsp+A0h] [rbp-68h] BYREF
  const __m128i *v54; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v57; // [rsp+D0h] [rbp-38h]
  __int128 v58; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v59; // [rsp+F0h] [rbp-18h]
  unsigned int v60; // [rsp+F4h] [rbp-14h]
  struct CAtlasedRectsCommandList **v61; // [rsp+F8h] [rbp-10h]
  struct ID2DContext *v62; // [rsp+100h] [rbp-8h]
  _BYTE v63[32]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v64; // [rsp+128h] [rbp+20h] BYREF
  __int128 v65; // [rsp+138h] [rbp+30h]
  __int128 v66; // [rsp+148h] [rbp+40h]
  __int128 v67; // [rsp+158h] [rbp+50h]
  __int128 v68; // [rsp+168h] [rbp+60h]
  __m256i v69; // [rsp+178h] [rbp+70h]
  __int128 v70; // [rsp+198h] [rbp+90h]
  __int128 v71; // [rsp+1A8h] [rbp+A0h]
  int v72; // [rsp+1B8h] [rbp+B0h]

  v61 = a5;
  v62 = a3;
  v53 = this;
  v45 = 0LL;
  v6 = this;
  v47 = 0LL;
  v7 = 0;
  v48 = 0LL;
  v8 = 0LL;
  v46 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v55[0] = 0LL;
  LODWORD(v56) = 0;
  MeshData = CAtlasedRects::GetMeshData(this, (__int64)v55);
  v11 = MeshData;
  if ( MeshData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MeshData, 0x91u);
    goto LABEL_17;
  }
  v12 = (unsigned int)v56;
  v13 = CD2DSharedBuffer::CreateFromHeap(148 * (int)v56, &v46);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x97u);
LABEL_30:
    v9 = v46;
    goto LABEL_17;
  }
  v14 = CD2DSharedBuffer::CreateFromHeap(0x90u, &v48);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x9Du);
    v8 = v48;
    goto LABEL_30;
  }
  v9 = v46;
  v15 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v46 + 24LL))(v46);
  v8 = v48;
  *(_QWORD *)&v56 = v15;
  v16 = (_DWORD *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v48 + 24LL))(v48);
  memset_0(v16, 0, 0x90uLL);
  *v16 = 1;
  v16[3] = 0;
  *(_QWORD *)(v16 + 11) = 1LL;
  v16[13] = 0;
  v16[10] = 0;
  v16[5] = v12;
  v16[1] = 1;
  if ( (_DWORD)v12 )
  {
    v17 = v54;
    v18 = v52 - (_QWORD)v54;
    v19 = (int *)v55[0];
    v20 = v56;
    *(_QWORD *)&v57 = 0x3F8000003F800000LL;
    DWORD2(v57) = 1065353216;
    do
    {
      v21 = (__m128)_mm_loadu_si128(v17);
      v22 = *v19;
      v56 = *(__int128 *)((char *)v17 + v18);
      *(__m128 *)v49 = v21;
      memset_0(&v64, 0, 0x94uLL);
      LODWORD(v55[0]) = v21.m128_i32[0];
      HIDWORD(v55[0]) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
      v55[1] = __PAIR64__(v17->m128i_i32[3], _mm_shuffle_ps(v21, v21, 170).m128_u32[0]);
      v65 = _xmm;
      v64 = *(_OWORD *)v55;
      *(_QWORD *)&v66 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      MILMatrix3x2::InferAffineMatrix((__int64)v63, (float *)v49, (float *)&v56);
      v21.m128_f32[0] = 1.0
                      / (float)*(int *)((*(__int64 (__fastcall **)(struct ID2D1Bitmap *, __int64 *))(*(_QWORD *)a4 + 40LL))(
                                          a4,
                                          &v52)
                                      + 4);
      v23 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, const __m128i **))(*(_QWORD *)a4 + 40LL))(a4, &v54);
      *(struct ID2D1PrivateCompositorBuffer **)((char *)v49 + 4) = 0LL;
      v24 = *v23;
      v50 = 0;
      v51 = 0;
      HIDWORD(v49[1]) = v21.m128_i32[0];
      *(float *)v49 = 1.0 / (float)v24;
      MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v58, (const struct MILMatrix3x2 *)v63, (const struct MILMatrix3x2 *)v49);
      v72 = -1;
      HIDWORD(v66) = 0;
      v68 = v58;
      *(_OWORD *)v49 = v58;
      *(_OWORD *)&v69.m256i_u64[1] = _xmm;
      HIDWORD(v57) = v22;
      v67 = v57;
      v69.m256i_i64[0] = _mm_unpacklo_ps((__m128)v59, (__m128)v60).m128_u64[0];
      v25 = v65;
      *(_OWORD *)v20 = v64;
      ++v17;
      ++v19;
      v26 = v66;
      *(_OWORD *)(v20 + 16) = v25;
      v27 = v67;
      *(_OWORD *)(v20 + 32) = v26;
      v28 = v68;
      *(_OWORD *)(v20 + 48) = v27;
      v29 = *(_OWORD *)v69.m256i_i8;
      *(_OWORD *)(v20 + 64) = v28;
      v30 = *(_OWORD *)&v69.m256i_u64[2];
      *(_OWORD *)(v20 + 80) = v29;
      v31 = v70;
      *(_OWORD *)(v20 + 96) = v30;
      v32 = v71;
      v33 = v72;
      *(_OWORD *)(v20 + 112) = v31;
      *(_OWORD *)(v20 + 128) = v32;
      *(_DWORD *)(v20 + 144) = v33;
      v20 += 148LL;
      --v12;
    }
    while ( v12 );
    v9 = v46;
    v8 = v48;
    v6 = v53;
  }
  v53 = a4;
  v34 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, CAtlasedRects **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, struct CD2DCommandList **))(*(_QWORD *)v62 + 240LL))(
          v62,
          v8,
          v9,
          &v53,
          1LL,
          0LL,
          0LL,
          0LL,
          0LL,
          &v47);
  v11 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xF0u);
LABEL_34:
    v7 = 0;
    goto LABEL_17;
  }
  v35 = CAtlasedRectsCommandList::Create(v47, a4, &v45);
  v11 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xF6u);
    goto LABEL_34;
  }
  v36 = (CAtlasedRects *)((char *)v6 + 40);
  if ( !v6 )
    v36 = 0LL;
  v37 = CD2DResource::AddResourceNotifier((struct CD2DCommandList *)((char *)v47 + 16), v36);
  v11 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xFBu);
    goto LABEL_34;
  }
  v38 = *((_DWORD *)v6 + 24);
  v7 = 1;
  v39 = v38 + 1;
  if ( v38 + 1 < v38 )
  {
    v42 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v11 = -2147024362;
    goto LABEL_36;
  }
  v11 = 0;
  if ( v39 > *((_DWORD *)v6 + 23) )
  {
    v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6 + 72, 8u, 1, &v45);
    v42 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xC0u);
    v11 = v42;
    if ( v42 >= 0 )
    {
      v7 = 1;
      goto LABEL_16;
    }
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xFEu);
    v7 = 1;
    goto LABEL_17;
  }
  *(_QWORD *)(*((_QWORD *)v6 + 9) + 8LL * v38) = v45;
  *((_DWORD *)v6 + 24) = v39;
LABEL_16:
  v40 = v45;
  v45 = 0LL;
  *v61 = v40;
LABEL_17:
  if ( v11 < 0 && v7 )
  {
    v44 = (CAtlasedRects *)((char *)v6 + 40);
    if ( !v6 )
      v44 = 0LL;
    CD2DResource::RemoveResourceNotifier((struct CD2DCommandList *)((char *)v47 + 16), v44);
  }
  if ( v47 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v45 )
    CMILCOMBase::InternalRelease(v45);
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v11;
}
