/*
 * XREFs of ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ @ 0x180126BD4 (-PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126C5C (-RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ.c)
 *     ?UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ @ 0x1801277E4 (-UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z @ 0x180127930 (-ValidateSwapChain@CAnalogRenderTarget@@AEAAJPEAVCResource@@@Z.c)
 */

void __fastcall CAnalogRenderTarget::NotifyUpdate(CAnalogRenderTarget *this, char a2, char a3, char a4)
{
  CAnalogRenderTarget *v6; // rdi
  struct CResource *v7; // rdx
  CAnalogRenderTarget *v8; // rcx

  if ( a3 || a4 )
  {
    v6 = (CAnalogRenderTarget *)((char *)this - 80);
    CAnalogRenderTarget::UnregisterSurfaceHandles((CAnalogRenderTarget *)((char *)this - 80));
    v7 = (struct CResource *)*((_QWORD *)this + 18);
    if ( v7 )
    {
      if ( (int)CAnalogRenderTarget::ValidateSwapChain(v6, v7) < 0 )
        CAnalogRenderTarget::UnregisterSwapChain(v8);
    }
  }
  if ( !*((_QWORD *)this + 18) || *((_BYTE *)this + 134) )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)this + 134) )
        CAnalogRenderTarget::PublishSurfaceUpdate((CAnalogRenderTarget *)((char *)this - 80));
    }
  }
  else
  {
    CAnalogRenderTarget::RegisterSurfaceHandles((CAnalogRenderTarget *)((char *)this - 80));
  }
}
