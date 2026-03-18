/*
 * XREFs of ?FreeUnclaimedTokens@CLegacySurfaceManager@@IEAAXXZ @ 0x180109BDC
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180105064 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CLegacySurfaceManager::FreeUnclaimedTokens(CLegacySurfaceManager *this)
{
  int i; // r15d

  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1) + 8));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 13, 0x10u);
}
