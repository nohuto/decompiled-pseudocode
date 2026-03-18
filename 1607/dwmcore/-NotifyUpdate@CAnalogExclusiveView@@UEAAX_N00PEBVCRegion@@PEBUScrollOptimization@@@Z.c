/*
 * XREFs of ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x1801658F8 (-PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z.c)
 *     ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x1801659F4 (-RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165AEC (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x180165B4C (-UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::NotifyUpdate(
        CAnalogExclusiveView *this,
        char a2,
        char a3,
        __int64 a4,
        const struct CRegion *a5)
{
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  CAnalogExclusiveView *v8; // rcx

  if ( *((_QWORD *)this + 3) )
  {
    if ( a3 )
      CAnalogExclusiveView::UnregisterSurfaceHandles((CAnalogExclusiveView *)((char *)this - 112));
    if ( !*((_BYTE *)this + 17) )
    {
      if ( *((_QWORD *)this + 3)
        && (ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo((CAnalogExclusiveView *)((char *)this - 112))) != 0LL
        && (*((_DWORD *)ExclusiveSurfaceInfo + 26) & 0xFFFFFFFD) == 0 )
      {
        CAnalogExclusiveView::RegisterSurfaceHandles(v8);
      }
      else
      {
        CAnalogExclusiveView::DeactivateSwapChain((CAnalogExclusiveView *)((char *)this - 112));
        CAnalogExclusiveView::ReleaseSwapChain((CAnalogExclusiveView *)((char *)this - 112));
      }
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 17) )
        CAnalogExclusiveView::PublishSurfaceUpdate((CAnalogExclusiveView *)((char *)this - 112), a5);
    }
  }
}
