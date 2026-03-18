/*
 * XREFs of ?ExitUseContext@CD3DResourceManager@@QEAAXI@Z @ 0x18009F1A8
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002E570 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DResourceManager::ExitUseContext(CD3DResourceManager *this)
{
  char *v1; // r8
  char *v2; // r9
  __int64 v4; // r10
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v1 = (char *)*((_QWORD *)this + 11);
  v2 = (char *)this + 80;
  while ( v1 != v2 && *((_DWORD *)v1 + 8) == *((_DWORD *)this + 2) )
  {
    *((_DWORD *)v1 + 8) = 0;
    v1 = (char *)*((_QWORD *)v1 + 1);
  }
  v4 = *(_QWORD *)v1;
  if ( *(char **)v1 != v2 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 11);
    *(_QWORD *)v1 = v2;
    v6 = (_QWORD *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 11) = v1;
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    *((_QWORD *)this + 9) = v5;
    *v5 = (char *)this + 64;
  }
  --*((_DWORD *)this + 2);
}
