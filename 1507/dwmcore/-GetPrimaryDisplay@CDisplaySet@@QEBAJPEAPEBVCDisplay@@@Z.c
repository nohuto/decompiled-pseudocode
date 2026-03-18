/*
 * XREFs of ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180054CFC
 * Callers:
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180052E90 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1800EC190 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetPrimaryDisplay(CDisplaySet *this, const struct CDisplay **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // r8

  v2 = *((unsigned int *)this + 10);
  v3 = 0;
  if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1FAu);
  }
  else
  {
    v4 = *(volatile signed __int32 **)(*((_QWORD *)this + 6) + 8 * v2);
    *a2 = (const struct CDisplay *)v4;
    _InterlockedIncrement(v4 + 2);
  }
  return v3;
}
