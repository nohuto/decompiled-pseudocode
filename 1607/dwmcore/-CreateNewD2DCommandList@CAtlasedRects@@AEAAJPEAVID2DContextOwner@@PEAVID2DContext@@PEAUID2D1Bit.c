/*
 * XREFs of ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x18009BE18
 * Callers:
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C564 (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x18009C2DC (-GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18009C828 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009C8F0 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800B24C4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x1800B38CC (-Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRects::CreateNewD2DCommandList(
        CAtlasedRects *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct CAtlasedRectsCommandList **a5)
{
  char v6; // r15
  struct ID2D1PrivateCompositorBuffer *v7; // rsi
  struct ID2D1PrivateCompositorBuffer *v8; // rdi
  struct ID2DContext *v9; // r13
  CAtlasedRects *v10; // r14
  int MeshData; // eax
  int v12; // ebx
  __int64 v13; // r15
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  _DWORD *v17; // rbx
  const __m128i *v18; // r14
  __int64 v19; // rbx
  int *v20; // r13
  __int64 v21; // rdi
  __m128 v22; // xmm6
  int v23; // xmm7_4
  int *v24; // rax
  int v25; // ecx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // eax
  __int64 (__fastcall *v34)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, struct CD2DCommandList **); // rax
  int v35; // eax
  int v36; // eax
  struct IDeviceResourceNotify *v37; // rdx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // edx
  struct CAtlasedRectsCommandList *v41; // rax
  int v43; // eax
  const struct IDeviceResourceNotify *v44; // rdx
  struct CAtlasedRectsCommandList *v45; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1PrivateCompositorBuffer *v46; // [rsp+78h] [rbp-90h] BYREF
  struct CD2DCommandList *v47; // [rsp+80h] [rbp-88h] BYREF
  struct ID2D1PrivateCompositorBuffer *v48[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49[2]; // [rsp+98h] [rbp-70h] BYREF
  const __m128i *v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  struct ID2D1Bitmap *v52; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v54; // [rsp+D0h] [rbp-38h] BYREF
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  CAtlasedRects *v57; // [rsp+E8h] [rbp-20h]
  struct CAtlasedRectsCommandList **v58; // [rsp+F0h] [rbp-18h]
  __int128 v59; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v60; // [rsp+108h] [rbp+0h]
  _BYTE v61[24]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v62; // [rsp+128h] [rbp+20h] BYREF
  __int128 v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+148h] [rbp+40h]
  __int128 v65; // [rsp+158h] [rbp+50h]
  __int128 v66; // [rsp+168h] [rbp+60h]
  __m256i v67; // [rsp+178h] [rbp+70h]
  __int128 v68; // [rsp+198h] [rbp+90h]
  __int128 v69; // [rsp+1A8h] [rbp+A0h]
  int v70; // [rsp+1B8h] [rbp+B0h]

  v58 = a5;
  v52 = a3;
  v45 = 0LL;
  v47 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v48[0] = 0LL;
  v8 = 0LL;
  v46 = 0LL;
  v9 = a3;
  v51 = 0LL;
  v50 = 0LL;
  v10 = this;
  v49[0] = 0LL;
  LODWORD(v53) = 0;
  v57 = this;
  MeshData = CAtlasedRects::GetMeshData(this, (__int64)v49);
  v12 = MeshData;
  if ( MeshData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MeshData, 0x91u);
    goto LABEL_17;
  }
  v13 = (unsigned int)v53;
  v14 = CD2DSharedBuffer::CreateFromHeap(148 * (int)v53, &v46);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x97u);
    v8 = v46;
    v6 = 0;
    goto LABEL_17;
  }
  v15 = CD2DSharedBuffer::CreateFromHeap(0x90u, v48);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x9Du);
    v7 = v48[0];
    v8 = v46;
    goto LABEL_37;
  }
  v8 = v46;
  v16 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v46 + 24LL))(v46);
  v7 = v48[0];
  *(_QWORD *)&v53 = v16;
  v17 = (_DWORD *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v48[0] + 24LL))(v48[0]);
  memset_0(v17, 0, 0x90uLL);
  *v17 = 1;
  v17[3] = 0;
  *(_QWORD *)(v17 + 11) = 1LL;
  v17[13] = 0;
  v17[10] = 0;
  v17[5] = v13;
  v17[1] = 1;
  if ( (_DWORD)v13 )
  {
    v18 = v50;
    v19 = v51 - (_QWORD)v50;
    v20 = (int *)v49[0];
    v21 = v53;
    v48[0] = (struct ID2D1PrivateCompositorBuffer *)0x3F8000003F800000LL;
    LODWORD(v48[1]) = 1065353216;
    do
    {
      v22 = (__m128)_mm_loadu_si128(v18);
      v23 = *v20;
      v53 = *(__int128 *)((char *)v18 + v19);
      v54 = v22;
      memset_0(&v62, 0, 0x94uLL);
      LODWORD(v49[0]) = v22.m128_i32[0];
      HIDWORD(v49[0]) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
      LODWORD(v49[1]) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
      HIDWORD(v49[1]) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
      v63 = _xmm;
      v62 = *(_OWORD *)v49;
      *(_QWORD *)&v64 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      MILMatrix3x2::InferAffineMatrix(v61, &v54, &v53);
      v22.m128_f32[0] = 1.0
                      / (float)*(int *)((*(__int64 (__fastcall **)(struct ID2D1Bitmap *, __int64 *))(*(_QWORD *)a4 + 40LL))(
                                          a4,
                                          &v51)
                                      + 4);
      v24 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, const __m128i **))(*(_QWORD *)a4 + 40LL))(a4, &v50);
      *(unsigned __int64 *)((char *)v54.m128_u64 + 4) = 0LL;
      v25 = *v24;
      v55 = 0;
      v56 = 0;
      v54.m128_i32[3] = v22.m128_i32[0];
      v54.m128_f32[0] = 1.0 / (float)v25;
      MILMatrix3x2::SetProduct(
        (MILMatrix3x2 *)&v59,
        (const struct MILMatrix3x2 *)v61,
        (const struct MILMatrix3x2 *)&v54);
      v70 = -1;
      v67.m256i_i64[0] = v60;
      *(_OWORD *)&v67.m256i_u64[1] = _xmm;
      HIDWORD(v64) = 0;
      HIDWORD(v48[1]) = v23;
      v65 = *(_OWORD *)v48;
      v66 = v59;
      v26 = v63;
      *(_OWORD *)v21 = v62;
      v27 = v64;
      *(_OWORD *)(v21 + 16) = v26;
      v28 = v65;
      *(_OWORD *)(v21 + 32) = v27;
      v29 = v66;
      *(_OWORD *)(v21 + 48) = v28;
      *(_OWORD *)(v21 + 64) = v29;
      ++v18;
      ++v20;
      v30 = *(_OWORD *)&v67.m256i_u64[2];
      *(_OWORD *)(v21 + 80) = *(_OWORD *)v67.m256i_i8;
      v31 = v68;
      *(_OWORD *)(v21 + 96) = v30;
      v32 = v69;
      v33 = v70;
      *(_OWORD *)(v21 + 112) = v31;
      *(_OWORD *)(v21 + 128) = v32;
      *(_DWORD *)(v21 + 144) = v33;
      v21 += 148LL;
      --v13;
    }
    while ( v13 );
    v8 = v46;
    v10 = v57;
    v9 = v52;
  }
  v34 = *(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, struct CD2DCommandList **))(*(_QWORD *)v9 + 248LL);
  v52 = a4;
  v35 = v34(v9, v7, v8, &v52, 1LL, 0LL, 0LL, 0LL, 0LL, &v47);
  v12 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xF0u);
    goto LABEL_37;
  }
  v36 = CAtlasedRectsCommandList::Create(v47, a4, &v45);
  v12 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xF6u);
    goto LABEL_37;
  }
  if ( v10 )
    v37 = (CAtlasedRects *)((char *)v10 + 112);
  else
    v37 = 0LL;
  v38 = CD2DResource::AddResourceNotifier((struct CD2DCommandList *)((char *)v47 + 16), v37);
  v12 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xFBu);
LABEL_37:
    v6 = 0;
    goto LABEL_17;
  }
  v6 = 1;
  v39 = *((_DWORD *)v10 + 42);
  v40 = v39 + 1;
  if ( v39 + 1 < v39 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v12 = 0;
    if ( v40 <= *((_DWORD *)v10 + 41) )
    {
      *(_QWORD *)(*((_QWORD *)v10 + 18) + 8LL * v39) = v45;
      *((_DWORD *)v10 + 42) = v40;
      goto LABEL_16;
    }
    v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 144, 8u, 1, &v45);
    v12 = v43;
    if ( v43 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xC0u);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFEu);
    goto LABEL_17;
  }
LABEL_16:
  v41 = v45;
  v45 = 0LL;
  *v58 = v41;
LABEL_17:
  if ( v12 < 0 && v6 )
  {
    if ( v10 )
      v44 = (CAtlasedRects *)((char *)v10 + 112);
    else
      v44 = 0LL;
    CD2DResource::RemoveResourceNotifier((struct CD2DCommandList *)((char *)v47 + 16), v44);
  }
  if ( v47 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v45 )
    CMILCOMBase::InternalRelease(v45);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v12;
}
