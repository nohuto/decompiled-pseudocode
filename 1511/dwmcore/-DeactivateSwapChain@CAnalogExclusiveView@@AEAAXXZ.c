/*
 * XREFs of ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1800F9998 (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x18013B4A8 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x18013B540 (-NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801305D8 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?SetExclusiveMode@CAnalogCompositorClient@@QEAAX_N@Z @ 0x18013B958 (-SetExclusiveMode@CAnalogCompositorClient@@QEAAX_N@Z.c)
 *     ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B9A8 (-UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::DeactivateSwapChain(CAnalogExclusiveView *this)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 i; // rcx
  __int64 v6; // rdx

  if ( *((_QWORD *)this + 8) && (*((_BYTE *)this + 57) || *((_BYTE *)this + 58)) )
  {
    CAnalogCompositorClient::SetExclusiveMode(this, 0);
    v2 = *((_QWORD *)this + 8);
    if ( v2 )
      v2 = *(_QWORD *)(v2 + 440);
    if ( v2 )
    {
      CCompositionSurfaceInfo::SetAnalogExclusive((CCompositionSurfaceInfo *)v2, 0);
      CAnalogExclusiveView::UnregisterSurfaceHandles(this);
      if ( *((_BYTE *)this + 58) )
      {
        v3 = *(_DWORD *)(v2 + 216);
        v4 = *(_QWORD *)(v2 + 192);
        for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
        {
          if ( (CAnalogExclusiveView *)((char *)this + 40) == *(CAnalogExclusiveView **)(v4 + 8 * i) )
            break;
        }
        if ( (unsigned int)i < v3 )
        {
          if ( (unsigned int)i < v3 - 1 )
          {
            do
            {
              v6 = (unsigned int)(i + 1);
              *(_QWORD *)(v4 + 8 * i) = *(_QWORD *)(v4 + 8 * v6);
              i = v6;
            }
            while ( (unsigned int)v6 < *(_DWORD *)(v2 + 216) - 1 );
          }
          --*(_DWORD *)(v2 + 216);
        }
        *((_BYTE *)this + 58) = 0;
      }
    }
    *((_DWORD *)this + 28) = 0;
  }
}
