/*
 * XREFs of ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x18013BE20
 * Callers:
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18013BF40 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSwapChainBase::ReleaseD2DBitmaps(CSwapChainBase *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  __int64 v4; // r14

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 70); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * i);
    v4 = *(_QWORD *)(v3 + 216);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(_QWORD *)(v3 + 216));
      *(_QWORD *)(v3 + 216) = 0LL;
    }
  }
}
