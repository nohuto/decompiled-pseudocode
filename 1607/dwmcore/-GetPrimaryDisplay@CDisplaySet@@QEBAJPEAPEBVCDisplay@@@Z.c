/*
 * XREFs of ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4
 * Callers:
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180033508 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180116A7C (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18011E730 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::GetPrimaryDisplay(CDisplaySet *this, const struct CDisplay **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  const struct CDisplay *v4; // rcx

  v2 = *((unsigned int *)this + 10);
  v3 = 0;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1D8u);
  }
  else
  {
    v4 = *(const struct CDisplay **)(*((_QWORD *)this + 6) + 8 * v2);
    *a2 = v4;
    (**(void (__fastcall ***)(const struct CDisplay *))v4)(v4);
  }
  return v3;
}
