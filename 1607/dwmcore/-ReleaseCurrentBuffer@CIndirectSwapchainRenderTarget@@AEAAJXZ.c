/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8C5C
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18011F740 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B7ED0 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107E94 (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x180107EB8 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 66) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v7, &v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 520) + 64LL))(
           *(_QWORD *)(v3 + 520),
           v6,
           v7);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A2u);
    }
    else
    {
      CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
      *((_QWORD *)this + 66) = 0LL;
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
