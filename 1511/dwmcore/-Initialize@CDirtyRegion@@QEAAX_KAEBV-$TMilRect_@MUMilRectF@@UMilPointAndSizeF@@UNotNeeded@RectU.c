/*
 * XREFs of ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180079700
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ??_GCDirtyRegionAnnotation@@QEAAPEAXI@Z @ 0x1800F34B0 (--_GCDirtyRegionAnnotation@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CDirtyRegion::Initialize(__int64 a1, __int64 a2, _OWORD *a3, char a4)
{
  unsigned int v8; // edx
  unsigned int v9; // edi
  CDirtyRegionAnnotation **v10; // rbx
  CDirtyRegionAnnotation *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  CDirtyRegionAnnotation **v14; // rax

  memset_0((void *)(a1 + 24), 0, 0x80uLL);
  memset_0((void *)(a1 + 576), 0, 0x120uLL);
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_WORD *)(a1 + 1013) = 0;
  if ( a4 )
    *(_BYTE *)(a1 + 1012) = 1;
  else
    *(_BYTE *)(a1 + 1012) = 0;
  v9 = 0;
  v10 = (CDirtyRegionAnnotation **)(a1 + 448);
  *(_OWORD *)(a1 + 996) = *a3;
  do
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (CDirtyRegionAnnotation *)v10 )
        break;
      v14 = *(CDirtyRegionAnnotation ***)v11;
      if ( *((CDirtyRegionAnnotation ***)v11 + 1) != v10 || v14[1] != v11 )
        __fastfail(3u);
      *v10 = (CDirtyRegionAnnotation *)v14;
      v14[1] = (CDirtyRegionAnnotation *)v10;
      CDirtyRegionAnnotation::`scalar deleting destructor'(v11, v8);
    }
    ++v9;
    v10 += 2;
  }
  while ( v9 < 8 );
  result = a1 + 160;
  v13 = 8LL;
  do
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result - 8) = 0LL;
    *(_BYTE *)(result + 716) = 1;
    *(_QWORD *)(result + 708) = 0LL;
    *(_DWORD *)(result + 704) = 0;
    *(_QWORD *)(result - 128) = 0LL;
    *(_QWORD *)(result - 136) = 0LL;
    result += 16LL;
    --v13;
  }
  while ( v13 );
  return result;
}
