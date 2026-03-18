/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1800EDE84 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800EE6EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EE9B4 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEBF8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800ED144 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1800EE638 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EEBAC (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  unsigned int i; // edi
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 54) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v6, &v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 53) + 64LL))(*((_QWORD *)this + 53), v5, v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 16LL))(*((_QWORD *)this + 54));
    *((_QWORD *)this + 54) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * i + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 94) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 44, 0x10u);
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 53));
    *((_QWORD *)this + 53) = 0LL;
  }
  *((_BYTE *)this + 416) &= ~0x10u;
  *((_BYTE *)this + 280) = 0;
  CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
}
