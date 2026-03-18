/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8C5C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18011F67C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B7ED0 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107E94 (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x180107EB8 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 66) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v6, &v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65), v5, v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
    *((_QWORD *)this + 66) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 50) + 16LL * i + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 400, 0x10u);
  v4 = *((_QWORD *)this + 65);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 65) = 0LL;
  }
  *((_BYTE *)this + 512) &= ~8u;
  *((_BYTE *)this + 328) = 0;
  CIndirectSwapchainRenderTarget::ResetFrameInformation(this);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
}
