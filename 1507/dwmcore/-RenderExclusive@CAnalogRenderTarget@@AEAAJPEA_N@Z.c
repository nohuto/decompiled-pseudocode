/*
 * XREFs of ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C
 * Callers:
 *     ?Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180126F00 (-Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970 (-ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ.c)
 *     ?RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ @ 0x180126D48 (-RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z @ 0x180127930 (-ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::RenderExclusive(CAnalogRenderTarget *this, bool *a2)
{
  CAnalogRenderTarget *v4; // rcx

  if ( (int)CAnalogRenderTarget::ValidateSwapChain(this, *((struct CResource **)this + 28)) < 0 )
    CAnalogRenderTarget::UnregisterSwapChain(v4);
  if ( *((_BYTE *)this + 215) )
  {
    *a2 = 1;
    if ( !WaitForSingleObject(*((HANDLE *)this + 29), 0x64u) )
      CAnalogRenderTarget::ProcessExclusiveSurfaceUpdate(this);
  }
  else if ( *((_QWORD *)this + 28) )
  {
    CAnalogRenderTarget::RegisterSwapChain(this);
  }
  return 0LL;
}
