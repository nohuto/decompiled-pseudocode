/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x18008BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDWMOffScreenSwapChain::ReleaseD3DResourcesInternal(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 36) = 0LL;
  }
}
