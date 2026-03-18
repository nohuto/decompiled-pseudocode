/*
 * XREFs of ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000D778
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00036A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::FindBestMatch(
        DMMVIDPNSOURCEMODESET *this,
        int a2,
        int a3,
        enum _D3DDDIFORMAT a4,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a5)
{
  _QWORD *v5; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  UINT cy; // edx

  v5 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v5 == v5 )
    return 0LL;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(*v5 - 8LL);
  if ( !NextMode )
    return 0LL;
  while ( 1 )
  {
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode);
    if ( *((_DWORD *)NextMode + 18) == a5 && GraphicsInfo->PrimSurfSize.cx == a2 )
    {
      cy = GraphicsInfo->PrimSurfSize.cy;
      if ( cy == a3
        && GraphicsInfo->PixelFormat == a4
        && GraphicsInfo->VisibleRegionSize.cx == GraphicsInfo->PrimSurfSize.cx
        && GraphicsInfo->VisibleRegionSize.cy == cy )
      {
        break;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      return 0LL;
  }
  return NextMode;
}
