/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EE9B4
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x1800EE690 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800ED144 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1800EE638 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EEBAC (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  void *v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 54) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, &v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 424) + 64LL))(
           *(_QWORD *)(v3 + 424),
           v6,
           v7);
    v1 = v4;
    if ( v4 >= 0 )
    {
      CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 16LL))(*((_QWORD *)this + 54));
      *((_QWORD *)this + 54) = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x19Bu);
    }
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( v1 == -2005270490 )
  {
    CIndirectSwapchainRenderTarget::Unregister(this);
    return 0;
  }
  return v1;
}
