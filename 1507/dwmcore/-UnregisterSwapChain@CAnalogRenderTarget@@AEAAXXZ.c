/*
 * XREFs of ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C
 * Callers:
 *     ?NotifyInvalid@CAnalogRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801266B0 (-NotifyInvalid@CAnalogRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750 (-NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_SETSWAPCHAIN@@@Z @ 0x180126AD4 (-ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET.c)
 *     ?ReleaseResources@CAnalogRenderTarget@@AEAAXXZ @ 0x180126E1C (-ReleaseResources@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C (-RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 *     ?SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x1801276A0 (-SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180119708 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?SetExclusiveMode@CAnalogCompositorClient@@QEAAXH@Z @ 0x18012755C (-SetExclusiveMode@CAnalogCompositorClient@@QEAAXH@Z.c)
 *     ?UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ @ 0x1801277E4 (-UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CAnalogRenderTarget::UnregisterSwapChain(struct CResource **this)
{
  CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  CCompositionSurfaceInfo *v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 i; // rcx
  __int64 v7; // rdx

  if ( this[28] )
  {
    CAnalogCompositorClient::SetExclusiveMode((CAnalogCompositorClient *)this, 0);
    ExclusiveSurfaceInfo = CAnalogRenderTarget::GetExclusiveSurfaceInfo((CAnalogRenderTarget *)this);
    v3 = ExclusiveSurfaceInfo;
    if ( ExclusiveSurfaceInfo )
    {
      CCompositionSurfaceInfo::SetAnalogExclusive(ExclusiveSurfaceInfo, 0);
      CAnalogRenderTarget::UnregisterSurfaceHandles((CAnalogRenderTarget *)this);
      if ( *((_BYTE *)this + 215) )
      {
        v4 = *((_DWORD *)v3 + 56);
        v5 = *((_QWORD *)v3 + 25);
        for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
        {
          if ( this + 10 == *(struct CResource ***)(v5 + 8 * i) )
            break;
        }
        if ( (unsigned int)i < v4 )
        {
          if ( (unsigned int)i < v4 - 1 )
          {
            do
            {
              v7 = (unsigned int)(i + 1);
              *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)(v5 + 8 * v7);
              i = v7;
            }
            while ( (unsigned int)v7 < *((_DWORD *)v3 + 56) - 1 );
          }
          --*((_DWORD *)v3 + 56);
        }
        *((_BYTE *)this + 215) = 0;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[28]);
    this[28] = 0LL;
    this[28] = 0LL;
  }
}
