/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4
 * Callers:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180007640 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x180018FE0 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180019244 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18006D65C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180083520 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18009145C (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30 (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006D1F0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x18006D450 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18006D4D0 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006D9FC (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006E2D4 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18006E750 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // r15
  unsigned int v3; // ebp
  int *v6; // r13
  char *v7; // r8
  int v8; // eax
  int v9; // r12d
  int v11; // eax
  int v12; // edi
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-158h] BYREF
  FastRegion::Internal::CRgnData *v15; // [rsp+28h] [rbp-150h]
  char v16; // [rsp+30h] [rbp-148h] BYREF

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
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)*this )
        v8 = *v6;
      if ( v8 < v9 )
      {
        v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v9);
        if ( !v13 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = (const struct FastRegion::Internal::CRgnData *)v13;
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
    v12 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v14);
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v14);
  return (unsigned int)v12;
}
