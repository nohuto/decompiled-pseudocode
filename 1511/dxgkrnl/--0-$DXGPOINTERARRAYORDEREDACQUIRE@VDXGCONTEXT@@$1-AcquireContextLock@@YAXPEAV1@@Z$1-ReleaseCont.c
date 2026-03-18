/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C007C660 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0136560 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     DxgkRender @ 0x1C014F530 (DxgkRender.c)
 *     OutputDuplPresent @ 0x1C015A6B4 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0164410 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0164A80 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v5 = a3;
  if ( a3 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
      goto LABEL_5;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 8;
  }
  v6 = *(void **)a1;
  *(_DWORD *)(a1 + 40) = v5;
  if ( v6 )
    memset(v6, 0, 8 * v5);
LABEL_5:
  v7 = *(void **)a1;
  *(_BYTE *)(a1 + 48) = 1;
  if ( v7 )
  {
    memmove(v7, a2, 8LL * *(unsigned int *)(a1 + 40));
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    for ( i = 1LL; i < *(unsigned int *)(a1 + 40); ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * i) == *(_QWORD *)(*(_QWORD *)a1 + 8 * i - 8) )
        return a1;
    }
    for ( j = 0LL;
          j < *(unsigned int *)(a1 + 40);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * j++) + 360LL)) )
    {
      ;
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
