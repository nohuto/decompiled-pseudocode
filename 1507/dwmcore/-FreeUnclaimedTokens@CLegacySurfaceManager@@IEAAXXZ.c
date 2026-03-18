/*
 * XREFs of ?FreeUnclaimedTokens@CLegacySurfaceManager@@IEAAXXZ @ 0x1800EFE28
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1800E9118 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
