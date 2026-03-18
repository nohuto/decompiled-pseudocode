/*
 * XREFs of ?SetMonitorSpecificContent@CHwTextureRenderTarget@@UEAA_N_N@Z @ 0x18002C810
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

char __fastcall CHwTextureRenderTarget::SetMonitorSpecificContent(CHwTextureRenderTarget *this, char a2)
{
  char v2; // bl
  CMILCOMBase *v6; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 64) != a2 )
  {
    v6 = (CMILCOMBase *)*((_QWORD *)this + 7);
    if ( v6 )
    {
      CMILCOMBase::InternalRelease(v6);
      *((_QWORD *)this + 7) = 0LL;
    }
    *((_BYTE *)this + 64) = a2;
    return 1;
  }
  return v2;
}
