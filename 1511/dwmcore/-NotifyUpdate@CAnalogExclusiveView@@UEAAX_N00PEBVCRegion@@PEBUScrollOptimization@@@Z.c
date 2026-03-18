/*
 * XREFs of ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18013B570
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x18013B710 (-PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z.c)
 *     ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x18013B81C (-RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B928 (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B9A8 (-UnregisterSurfaceHandles@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::NotifyUpdate(
        CAnalogExclusiveView *this,
        char a2,
        char a3,
        __int64 a4,
        const struct CRegion *a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 3) )
  {
    if ( a3 )
      CAnalogExclusiveView::UnregisterSurfaceHandles((CAnalogExclusiveView *)((char *)this - 40));
    if ( !*((_BYTE *)this + 17) )
    {
      v7 = *((_QWORD *)this + 3);
      if ( v7 && (v8 = *(_QWORD *)(v7 + 440)) != 0 && (*(_DWORD *)(v8 + 104) & 0xFFFFFFFD) == 0 )
      {
        CAnalogExclusiveView::RegisterSurfaceHandles((CAnalogExclusiveView *)((char *)this - 40));
      }
      else
      {
        CAnalogExclusiveView::DeactivateSwapChain((CAnalogExclusiveView *)((char *)this - 40));
        CAnalogExclusiveView::ReleaseSwapChain((CAnalogExclusiveView *)((char *)this - 40));
      }
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 17) )
        CAnalogExclusiveView::PublishSurfaceUpdate((CAnalogExclusiveView *)((char *)this - 40), a5);
    }
  }
}
