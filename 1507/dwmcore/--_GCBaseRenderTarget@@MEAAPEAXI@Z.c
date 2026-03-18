/*
 * XREFs of ??_GCBaseRenderTarget@@MEAAPEAXI@Z @ 0x18013A240
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBaseRenderTarget *__fastcall CBaseRenderTarget::`scalar deleting destructor'(CBaseRenderTarget *this, char a2)
{
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
