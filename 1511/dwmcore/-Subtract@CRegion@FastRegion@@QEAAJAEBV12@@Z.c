/*
 * XREFs of ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C
 * Callers:
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x18001903C (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801116AC (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801173E8 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30 (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015D608 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006DFA8 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006E890 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  unsigned int v3; // r14d
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v6; // rcx
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  const struct FastRegion::Internal::CRgnData *v9; // r12
  _BYTE *v10; // rbx
  int v11; // r13d
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  const struct FastRegion::Internal::CRgnData *v15; // r10
  _BYTE *v16; // r9
  char *v17; // r8
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-E0h]
  _BYTE *v28; // [rsp+28h] [rbp-D8h]
  _BYTE v29[256]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = 0;
  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v6 = *this;
  if ( !*(_DWORD *)v6 )
    return 0LL;
  v7 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v6, v4);
  v8 = (FastRegion::Internal::CRgnData *)v29;
  v28 = v29;
  v27 = v7;
  if ( (unsigned __int64)v7 > 0x100 )
  {
    v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v7);
    v8 = (FastRegion::Internal::CRgnData *)v26;
    if ( !v26 )
    {
LABEL_25:
      v3 = -2147024882;
      goto LABEL_15;
    }
    v28 = (_BYTE *)v26;
  }
  FastRegion::Internal::CRgnData::Subtract(v8, *this, *a2);
  v9 = (const struct FastRegion::Internal::CRgnData *)v28;
  if ( *(_DWORD *)v28 )
  {
    if ( v29 != v28 )
    {
      v28 = v29;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = v9;
      *((_DWORD *)this + 2) = v27;
      goto LABEL_15;
    }
    v10 = v28 + 12;
    v11 = *(_DWORD *)&v28[8 * *(_DWORD *)v28 + 8]
        + 8 * *(_DWORD *)v28
        - *((_DWORD *)v28 + 4)
        - 12
        + 8 * (*(_DWORD *)v28 - 1)
        + 24;
    if ( this + 1 == (const struct FastRegion::Internal::CRgnData **)*this )
      v12 = 60;
    else
      v12 = *((_DWORD *)this + 2);
    if ( v12 >= v11 )
      goto LABEL_9;
    v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v11);
    if ( v25 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = (const struct FastRegion::Internal::CRgnData *)v25;
      v10 = v28 + 12;
      *((_DWORD *)this + 2) = v11;
LABEL_9:
      v13 = *(_DWORD *)v28;
      v14 = 0;
      v15 = *this;
      *(_DWORD *)v15 = *(_DWORD *)v28;
      *((_DWORD *)v15 + 1) = *((_DWORD *)v28 + 1);
      *((_DWORD *)v15 + 2) = *((_DWORD *)v28 + 2);
      v16 = &v10[*((int *)v10 + 1)];
      v17 = (char *)v15 + 8 * v13 + 12;
      if ( v13 > 0 )
      {
        v18 = (_DWORD *)((char *)v15 + 12);
        do
        {
          *v18 = *(_DWORD *)((char *)v18 + v28 - (_BYTE *)v15);
          v19 = v14;
          v18 += 2;
          ++v14;
          *((_DWORD *)v15 + 2 * v19 + 4) = (_DWORD)v28
                                         + 8 * v19
                                         + 4 * ((v17 - v16) >> 2)
                                         + *(_DWORD *)&v28[8 * v19 + 16]
                                         - ((_DWORD)v15
                                          + 8 * v19);
        }
        while ( v14 < *(_DWORD *)v15 );
      }
      v20 = (__int64)&v28[8 * *(_DWORD *)v28 + 4];
      v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)v10 + 1) - (int)v10) >> 2;
      v22 = (int)v21;
      if ( (int)v21 > 0 )
      {
        v23 = v16 - v17;
        do
        {
          *(_DWORD *)v17 = *(_DWORD *)&v17[v23];
          v17 += 4;
          --v22;
        }
        while ( v22 );
      }
      goto LABEL_15;
    }
    goto LABEL_25;
  }
  *(_DWORD *)*this = 0;
LABEL_15:
  if ( v29 != v28 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v28);
  return v3;
}
