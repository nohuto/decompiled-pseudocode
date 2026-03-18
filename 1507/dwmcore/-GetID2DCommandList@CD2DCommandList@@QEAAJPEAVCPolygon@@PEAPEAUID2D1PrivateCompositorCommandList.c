/*
 * XREFs of ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180015758
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180011858 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800158CC (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x1800E0B40 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 */

__int64 __fastcall CD2DCommandList::GetID2DCommandList(
        CD2DCommandList *this,
        struct CPolygon *a2,
        struct ID2D1PrivateCompositorCommandList **a3,
        __int64 a4)
{
  CD2DCommandList *v5; // r8
  struct CPolygon *v6; // r13
  unsigned int v7; // esi
  __int64 v8; // r15
  struct CPolygon ***v9; // r12
  __int64 v10; // r14
  int v11; // eax
  struct CPolygon **v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __m128 v24; // xmm1
  int Key; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-38h]
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CPolygon *v30; // [rsp+A8h] [rbp+50h] BYREF
  struct ID2D1PrivateCompositorCommandList **v31; // [rsp+B0h] [rbp+58h]
  __int64 v32; // [rsp+B8h] [rbp+60h] BYREF

  v31 = a3;
  v30 = a2;
  v5 = this;
  v6 = a2;
  v7 = 0;
  v28[0] = 0LL;
  *a3 = 0LL;
  v8 = 0LL;
  v9 = (struct CPolygon ***)((char *)this + 104);
  v10 = 0LL;
  v11 = 0;
  if ( *((int *)this + 30) <= 0 )
  {
LABEL_12:
    v11 = -1;
  }
  else
  {
    a4 = *((int *)this + 30);
    a2 = 0LL;
    v12 = *v9;
    while ( *v12 != v6 )
    {
      ++v11;
      a2 = (struct CPolygon *)((char *)a2 + 1);
      ++v12;
      if ( (__int64)a2 >= a4 )
        goto LABEL_12;
    }
  }
  if ( v11 == -1 )
  {
    LODWORD(v32) = *((_DWORD *)v6 + 10);
    v15 = (unsigned int)v32;
    v16 = 8LL * (unsigned int)v32;
    if ( !is_mul_ok((unsigned int)v32, 8uLL) )
      v16 = -1LL;
    v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, _QWORD, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
           WPF::g_pProcessHeap,
           v16,
           *(_QWORD *)WPF::g_pProcessHeap,
           a4);
    if ( !v8 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x40u);
      return v7;
    }
    v17 = 4 * v15;
    if ( !is_mul_ok(v15, 4uLL) )
      v17 = -1LL;
    v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v17);
    v10 = v18;
    if ( v18 )
    {
      v21 = v32;
      if ( (_DWORD)v32 )
      {
        v22 = 0LL;
        v20 = (_DWORD *)v18;
        v19 = (_DWORD *)v8;
        v23 = (unsigned int)v32;
        do
        {
          *v19 = *(_OWORD *)(v22 + *((_QWORD *)v6 + 2));
          v19 += 2;
          v24 = *(__m128 *)(v22 + *((_QWORD *)v6 + 2));
          v22 += 20LL;
          *(v19 - 1) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
          *v20++ = *(_DWORD *)(v22 + *((_QWORD *)v6 + 2) - 4);
          --v23;
        }
        while ( v23 );
      }
      v32 = 0LL;
      Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
              v9,
              &v32,
              v19,
              v20);
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, unsigned int, _QWORD *))(**(_QWORD **)(*((_QWORD *)this + 14) + 8LL * Key)
                                                                                                + 40LL))(
              *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * Key),
              v8,
              v21,
              v10,
              v21,
              v28);
      v7 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x51u);
        goto LABEL_7;
      }
      if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                           v9,
                           &v30,
                           v28) )
      {
        v13 = v28[0];
        goto LABEL_6;
      }
      v27 = 86;
    }
    else
    {
      v27 = 67;
    }
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v27);
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v5 + 14) + 8LL * v11);
  v28[0] = v13;
LABEL_6:
  (*(void (__fastcall **)(__int64, struct CPolygon *, CD2DCommandList *, __int64))(*(_QWORD *)v13 + 8LL))(
    v13,
    a2,
    v5,
    a4);
  *v31 = (struct ID2D1PrivateCompositorCommandList *)v28[0];
LABEL_7:
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
  if ( v10 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v10);
  return v7;
}
