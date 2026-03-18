/*
 * XREFs of ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444
 * Callers:
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18010E98C (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x180165534 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180152960 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8 (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x180165C50 (-UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ActivateSwapChain(CAnalogExclusiveView *this)
{
  CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  CCompositionSurfaceInfo *v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  CAnalogExclusiveView::UpdateSyncRefreshCount(this);
  if ( !*((_BYTE *)this + 130) )
  {
    ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo(this);
    v3 = ExclusiveSurfaceInfo;
    if ( ExclusiveSurfaceInfo )
    {
      CCompositionSurfaceInfo::SetAnalogExclusive(ExclusiveSurfaceInfo, 1u);
      v4 = *((_DWORD *)v3 + 84);
      v9 = (char *)this + 112;
      v5 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v5 > *((_DWORD *)v3 + 83) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3 + 312, 8u, 1, &v9);
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v3 + 39) + 8LL * v4) = v9;
        *((_DWORD *)v3 + 84) = v5;
      }
      v7 = *((_DWORD *)this + 42) + 1;
      *((_BYTE *)this + 130) = 1;
      *((_DWORD *)this + 48) = CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v7) + 1;
    }
  }
  return 0LL;
}
