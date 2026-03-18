/*
 * XREFs of ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x1800077A4
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CRenderTargetManager::AlwaysNeedsRenderPass(CRenderTargetManager *this)
{
  char v2; // si
  __int64 v3; // r14
  __int64 v4; // rdx

  if ( *((_DWORD *)this + 16) )
    return 1;
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v3) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3),
           36LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 80LL);
      if ( *(_QWORD *)(v4 + 152) != v4 )
        v2 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v2 );
  return v2;
}
