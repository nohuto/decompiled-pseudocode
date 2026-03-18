/*
 * XREFs of ?RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126C5C
 * Callers:
 *     ?NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180126750 (-NotifyUpdate@CAnalogRenderTarget@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?SetExclusiveMode@CAnalogCompositorClient@@QEAAXH@Z @ 0x18012755C (-SetExclusiveMode@CAnalogCompositorClient@@QEAAXH@Z.c)
 */

bool __fastcall CAnalogRenderTarget::RegisterSurfaceHandles(CAnalogRenderTarget *this)
{
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  struct CCompositionSurfaceInfo *v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  CAnalogCompositorClient *v6; // rcx

  ExclusiveSurfaceInfo = CAnalogRenderTarget::GetExclusiveSurfaceInfo(this);
  v3 = ExclusiveSurfaceInfo;
  if ( ExclusiveSurfaceInfo && *((_DWORD *)ExclusiveSurfaceInfo + 28) == 2 )
  {
    v4 = 0LL;
    v5 = 0LL;
    do
    {
      if ( (unsigned int)v4 < *((_DWORD *)v3 + 28) )
        (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v5 + *((_QWORD *)v3 + 11)) + 88LL))(
          *(_QWORD *)(v5 + *((_QWORD *)v3 + 11)),
          (char *)this + 8 * v4 + 240);
      v4 = (unsigned int)(v4 + 1);
      v5 += 8LL;
    }
    while ( (unsigned int)v4 < 2 );
    if ( (*(int (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)qword_180195FD0 + 64LL))(
           qword_180195FD0,
           (char *)this + 240,
           2LL) >= 0 )
    {
      *((_BYTE *)this + 214) = 1;
      CAnalogCompositorClient::SetExclusiveMode(v6, 1);
    }
  }
  return *((_BYTE *)this + 214);
}
