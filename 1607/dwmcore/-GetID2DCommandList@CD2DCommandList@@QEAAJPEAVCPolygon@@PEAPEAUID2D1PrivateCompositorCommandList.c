/*
 * XREFs of ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C698
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000F4E4 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C564 (-GetD2D1CommandListForContext@CAtlasedRects@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009EC78 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x180113208 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 */

__int64 __fastcall CD2DCommandList::GetID2DCommandList(
        CD2DCommandList *this,
        struct CPolygon *a2,
        struct ID2D1PrivateCompositorCommandList **a3)
{
  unsigned int v3; // ebx
  struct CPolygon ***v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // r9
  struct CPolygon *v9; // r15
  struct CPolygon **v11; // rcx
  struct ID2D1PrivateCompositorCommandList *v12; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // r8
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  __int128 v22; // xmm1
  __int64 v23; // rcx
  int v24; // eax
  struct ID2D1PrivateCompositorCommandList *v25; // [rsp+B0h] [rbp+48h] BYREF
  struct CPolygon *v26; // [rsp+B8h] [rbp+50h] BYREF
  struct ID2D1PrivateCompositorCommandList **v27; // [rsp+C0h] [rbp+58h]
  __int64 v28; // [rsp+C8h] [rbp+60h] BYREF

  v27 = a3;
  v26 = a2;
  v3 = 0;
  v4 = (struct CPolygon ***)((char *)this + 104);
  v25 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = -1LL;
  v9 = a2;
  if ( *((int *)this + 30) <= 0 )
  {
LABEL_12:
    v7 = -1;
  }
  else
  {
    a3 = (struct ID2D1PrivateCompositorCommandList **)*((int *)this + 30);
    a2 = 0LL;
    v11 = *v4;
    while ( *v11 != v9 )
    {
      ++v7;
      a2 = (struct CPolygon *)((char *)a2 + 1);
      ++v11;
      if ( (__int64)a2 >= (__int64)a3 )
        goto LABEL_12;
    }
  }
  if ( v7 == -1 )
  {
    v14 = *((_DWORD *)v9 + 10);
    v15 = 8LL * v14;
    v16 = v14;
    if ( !is_mul_ok(v14, 8uLL) )
      v15 = -1LL;
    v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, _QWORD, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
           WPF::g_pProcessHeap,
           v15,
           *(_QWORD *)WPF::g_pProcessHeap,
           -1LL);
    if ( !v5 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x40u);
      return v3;
    }
    v17 = 4LL * v14;
    if ( !is_mul_ok(v14, 4uLL) )
      v17 = -1LL;
    v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v17);
    v6 = v18;
    if ( !v18 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x43u);
      goto LABEL_7;
    }
    if ( v14 )
    {
      v20 = 0LL;
      v19 = (_DWORD *)v18;
      v21 = (_DWORD *)v5;
      do
      {
        v22 = *(_OWORD *)(v20 + *((_QWORD *)v9 + 2));
        v20 += 20LL;
        *v21 = v22;
        v21 += 2;
        *(v21 - 1) = *(_DWORD *)(v20 + *((_QWORD *)v9 + 2) - 16);
        *v19++ = *(_DWORD *)(v20 + *((_QWORD *)v9 + 2) - 4);
        --v16;
      }
      while ( v16 );
    }
    v28 = 0LL;
    v23 = *(_QWORD *)(*((_QWORD *)this + 14)
                    + 8LL
                    * (int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
                             v4,
                             &v28,
                             v19));
    v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v23 + 40LL))(
            v23,
            v5,
            v14,
            v6,
            v14,
            &v25);
    v3 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x51u);
      goto LABEL_7;
    }
    if ( !(unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                          v4,
                          &v26,
                          &v25) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56u);
      goto LABEL_7;
    }
    v12 = v25;
  }
  else
  {
    v12 = *(struct ID2D1PrivateCompositorCommandList **)(*((_QWORD *)this + 14) + 8LL * v7);
    v25 = v12;
  }
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, struct CPolygon *, struct ID2D1PrivateCompositorCommandList **, __int64))(*(_QWORD *)v12 + 8LL))(
    v12,
    a2,
    a3,
    v8);
  *v27 = v25;
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  if ( v6 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
  return v3;
}
