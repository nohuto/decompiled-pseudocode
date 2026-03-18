/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74
 * Callers:
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x180011F50 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001210C (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18004D1B4 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800902E0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180099E98 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180127C60 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180129E40 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18012C1FC (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x180166CBC (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18009ABC4 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18009ADC4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18009B208 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x18009D054 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18009D0AC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18009D7F4 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rsi
  unsigned int v3; // edi
  int *v6; // r14
  char *v7; // r8
  int v8; // eax
  int v9; // ebp
  int v11; // eax
  int v12; // esi
  __int64 v13; // r15
  int v14; // [rsp+20h] [rbp-148h] BYREF
  FastRegion::Internal::CRgnData *v15; // [rsp+28h] [rbp-140h]
  char v16; // [rsp+30h] [rbp-138h] BYREF

  v2 = *a2;
  v3 = 0;
  if ( !*(_DWORD *)*a2 )
    return 0LL;
  if ( !*(_DWORD *)*this )
  {
    if ( this != a2 )
    {
      v6 = (int *)(this + 1);
      v7 = (char *)v2 + 8 * *(_DWORD *)v2 - 8;
      v8 = 60;
      v9 = *((_DWORD *)v7 + 4) + 8 * *(_DWORD *)v2 - *((_DWORD *)v2 + 4) - ((_DWORD)v2 + 12) + (_DWORD)v7 + 24;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v8 = *v6;
      if ( v8 < v9 )
      {
        v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v9);
        if ( !v13 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory(this);
        *this = (FastRegion::CRegion *)v13;
        *v6 = v9;
      }
      FastRegion::Internal::CRgnData::Copy(*this, v2);
    }
    return v3;
  }
  v11 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, *a2);
  v14 = 0;
  v15 = (FastRegion::Internal::CRgnData *)&v16;
  v12 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v14, v11);
  if ( v12 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union(v15, *this, *a2);
    v12 = FastRegion::CRegion::SaveResult(this, (struct FastRegion::Internal::CWorkBuffer *)&v14);
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v14);
  return (unsigned int)v12;
}
