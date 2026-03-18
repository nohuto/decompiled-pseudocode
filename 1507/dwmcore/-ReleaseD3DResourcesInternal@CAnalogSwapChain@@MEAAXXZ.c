/*
 * XREFs of ?ReleaseD3DResourcesInternal@CAnalogSwapChain@@MEAAXXZ @ 0x180128890
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAnalogSwapChain::ReleaseD3DResourcesInternal(CAnalogSwapChain *this)
{
  __int64 v2; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 88LL))(*((_QWORD *)this + 36));
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 36));
    *((_QWORD *)this + 36) = 0LL;
  }
}
