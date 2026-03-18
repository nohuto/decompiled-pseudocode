/*
 * XREFs of ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F722C (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1800FE324 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014EB48 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180150320 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800889AC (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180088DF4 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // rbx
  unsigned int v9; // ebp
  int v10; // r13d
  int v11; // eax
  int v12; // ecx
  int v13; // r10d
  const struct FastRegion::Internal::CRgnData *v14; // r11
  __int64 v15; // rsi
  _DWORD *v16; // r9
  _DWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // [rsp+20h] [rbp-158h]
  const struct FastRegion::Internal::CRgnData *v28; // [rsp+28h] [rbp-150h]
  _BYTE v29[256]; // [rsp+30h] [rbp-148h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v29;
  v28 = (const struct FastRegion::Internal::CRgnData *)v29;
  v27 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v6);
    v7 = (FastRegion::Internal::CRgnData *)v25;
    if ( !v25 )
    {
LABEL_25:
      v9 = -2147024882;
      goto LABEL_15;
    }
    v28 = (const struct FastRegion::Internal::CRgnData *)v25;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, *this, *a2);
  v8 = v28;
  v9 = 0;
  if ( *(_DWORD *)v28 )
  {
    if ( v29 != (_BYTE *)v28 )
    {
      v28 = (const struct FastRegion::Internal::CRgnData *)v29;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = v8;
      *((_DWORD *)this + 2) = v27;
      goto LABEL_15;
    }
    v10 = *((_DWORD *)v28 + 2 * *(_DWORD *)v28 + 2)
        + 8 * *(_DWORD *)v28
        - *((_DWORD *)v28 + 4)
        - 12
        + 8 * (*(_DWORD *)v28 - 1)
        + 24;
    if ( this + 1 == (const struct FastRegion::Internal::CRgnData **)*this )
      v11 = 60;
    else
      v11 = *((_DWORD *)this + 2);
    if ( v11 >= v10 )
      goto LABEL_9;
    v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v10);
    if ( v26 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = (const struct FastRegion::Internal::CRgnData *)v26;
      *((_DWORD *)this + 2) = v10;
LABEL_9:
      v12 = *(_DWORD *)v28;
      v13 = 0;
      v14 = *this;
      *(_DWORD *)v14 = *(_DWORD *)v28;
      *((_DWORD *)v14 + 1) = *((_DWORD *)v28 + 1);
      *((_DWORD *)v14 + 2) = *((_DWORD *)v28 + 2);
      v15 = (__int64)v28 + *((int *)v28 + 4) + 12;
      v16 = (_DWORD *)((char *)v14 + 8 * v12 + 12);
      if ( v12 > 0 )
      {
        v17 = (_DWORD *)((char *)v14 + 12);
        do
        {
          *v17 = *(_DWORD *)((char *)v17 + v28 - v14);
          v18 = v13;
          v17 += 2;
          v19 = (__int64)v14 + 8 * v13++ + 12;
          *(_DWORD *)(v19 + 4) = (_DWORD)v28
                               + 12
                               + 8 * v18
                               + 4 * (((__int64)v16 - v15) >> 2)
                               + *((_DWORD *)v28 + 2 * v18 + 4)
                               - v19;
        }
        while ( v13 < *(_DWORD *)v14 );
      }
      v20 = (__int64)v28 + 8 * *(_DWORD *)v28 + 4;
      v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)v28 + 4) - ((int)v28 + 12)) >> 2;
      v22 = (int)v21;
      if ( (int)v21 > 0 )
      {
        v23 = v15 - (_QWORD)v16;
        do
        {
          *v16 = *(_DWORD *)((char *)v16 + v23);
          ++v16;
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
  if ( v29 != (_BYTE *)v28 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const struct FastRegion::Internal::CRgnData *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 32LL))(
      WPF::g_pProcessHeap,
      v28);
  return v9;
}
