/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B4D38
 * Callers:
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800AEBF8 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800F3F9C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180107890 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180107B20 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x1801087A0 (-ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi
  __int64 v3; // r14

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 22, 8u);
}
