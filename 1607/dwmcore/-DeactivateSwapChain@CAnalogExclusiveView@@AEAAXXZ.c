/*
 * XREFs of ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588
 * Callers:
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18010E98C (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x180165670 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801656B0 (-DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x180165720 (-NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180152960 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x180165B4C (-UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::DeactivateSwapChain(CAnalogExclusiveView *this)
{
  CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  CCompositionSurfaceInfo *v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 i; // rcx
  __int64 v7; // rdx

  if ( *((_QWORD *)this + 17) && (*((_BYTE *)this + 129) || *((_BYTE *)this + 130)) )
  {
    g_AnalogCompositor = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)xmmword_1801F03A0 + 48LL))(xmmword_1801F03A0, 0LL, 0LL);
    ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo(this);
    v3 = ExclusiveSurfaceInfo;
    if ( ExclusiveSurfaceInfo )
    {
      CCompositionSurfaceInfo::SetAnalogExclusive(ExclusiveSurfaceInfo, 0);
      CAnalogExclusiveView::UnregisterSurfaceHandles(this);
      if ( *((_BYTE *)this + 130) )
      {
        v4 = *((_DWORD *)v3 + 84);
        v5 = *((_QWORD *)v3 + 39);
        for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
        {
          if ( (CAnalogExclusiveView *)((char *)this + 112) == *(CAnalogExclusiveView **)(v5 + 8 * i) )
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
            while ( (unsigned int)v7 < *((_DWORD *)v3 + 84) - 1 );
          }
          --*((_DWORD *)v3 + 84);
        }
        *((_BYTE *)this + 130) = 0;
      }
    }
    *((_DWORD *)this + 48) = 0;
  }
}
