/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800AEBF8
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180108CC0 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B4D38 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F449C (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1800F44E8 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  void *v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 51) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, &v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 400) + 64LL))(
           *(_QWORD *)(v3 + 400),
           v6,
           v7);
    v1 = v4;
    if ( v4 >= 0 )
    {
      CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 16LL))(*((_QWORD *)this + 51));
      *((_QWORD *)this + 51) = 0LL;
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
