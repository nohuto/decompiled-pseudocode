/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800AEBF8 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800AECC8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180108BFC (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B4D38 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F449C (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1800F44E8 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  unsigned int i; // edi
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 51) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v6, &v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 50) + 64LL))(*((_QWORD *)this + 50), v5, v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 16LL))(*((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 88); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 41) + 16LL * i + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 41, 0x10u);
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 50));
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_BYTE *)this + 392) &= ~0x10u;
  *((_BYTE *)this + 256) = 0;
  CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
}
