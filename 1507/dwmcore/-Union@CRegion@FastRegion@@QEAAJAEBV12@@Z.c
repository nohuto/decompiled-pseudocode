/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C
 * Callers:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1800069EC (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18000D204 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180046A20 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18006F084 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18008771C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x180150310 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180088130 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180088530 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089308 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180089388 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800893DC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // r15
  unsigned int v3; // ebp
  char *v6; // rbx
  int *v7; // r13
  char *v8; // rax
  int v9; // r12d
  int v10; // edx
  int v11; // eax
  int v12; // r12d
  int v13; // ecx
  int v14; // esi
  const struct FastRegion::Internal::CRgnData *v15; // r10
  char *v16; // r9
  char *v17; // r8
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  signed __int64 v23; // r9
  int v25; // eax
  int v26; // edi
  __int64 v27; // rbx
  int v28; // [rsp+20h] [rbp-158h] BYREF
  FastRegion::Internal::CRgnData *v29; // [rsp+28h] [rbp-150h]
  char v30; // [rsp+30h] [rbp-148h] BYREF

  v2 = *a2;
  v3 = 0;
  if ( !*(_DWORD *)*a2 )
    return 0LL;
  if ( !*(_DWORD *)*this )
  {
    if ( this != a2 )
    {
      v6 = (char *)v2 + 12;
      v7 = (int *)(this + 1);
      v8 = (char *)v2 + 8 * *(_DWORD *)v2 - 8;
      v9 = (_DWORD)v8 + 24;
      v10 = *((_DWORD *)v8 + 4) + 8 * *(_DWORD *)v2 - *((_DWORD *)v2 + 4) - ((_DWORD)v2 + 12);
      v11 = 60;
      v12 = v10 + v9;
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)*this )
        v11 = *v7;
      if ( v11 >= v12 )
        goto LABEL_7;
      v27 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              v12);
      if ( v27 )
      {
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = (const struct FastRegion::Internal::CRgnData *)v27;
        v6 = (char *)v2 + 12;
        *v7 = v12;
LABEL_7:
        v13 = *(_DWORD *)v2;
        v14 = 0;
        v15 = *this;
        *(_DWORD *)v15 = *(_DWORD *)v2;
        *((_DWORD *)v15 + 1) = *((_DWORD *)v2 + 1);
        *((_DWORD *)v15 + 2) = *((_DWORD *)v2 + 2);
        v16 = &v6[*((int *)v6 + 1)];
        v17 = (char *)v15 + 8 * v13 + 12;
        if ( v13 > 0 )
        {
          v18 = (_DWORD *)((char *)v15 + 12);
          do
          {
            *v18 = *(_DWORD *)((char *)v18 + v2 - v15);
            v19 = v14;
            v18 += 2;
            ++v14;
            *((_DWORD *)v15 + 2 * v19 + 4) = (_DWORD)v2
                                           + 8 * v19
                                           + 4 * ((v17 - v16) >> 2)
                                           + *((_DWORD *)v2 + 2 * v19 + 4)
                                           - ((_DWORD)v15
                                            + 8 * v19);
          }
          while ( v14 < *(_DWORD *)v15 );
        }
        v20 = (__int64)v2 + 8 * *(_DWORD *)v2 + 4;
        v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)v6 + 1) - (int)v6) >> 2;
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
        return v3;
      }
      return (unsigned int)-2147024882;
    }
    return v3;
  }
  v25 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, *a2);
  v28 = 0;
  v29 = (FastRegion::Internal::CRgnData *)&v30;
  v26 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v28, v25);
  if ( v26 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union(v29, *this, *a2);
    v26 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v28);
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v28);
  return (unsigned int)v26;
}
