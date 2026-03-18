/*
 * XREFs of ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x180142750
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwSolidColorTextureSource *__fastcall CHwSolidColorTextureSource::`scalar deleting destructor'(
        CHwSolidColorTextureSource *this,
        char a2)
{
  CMILPoolResource *v4; // rcx

  *(_QWORD *)this = &CHwSolidColorTextureSource::`vftable';
  v4 = (CMILPoolResource *)*((_QWORD *)this + 13);
  if ( v4 )
    CMILPoolResource::Release(v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwSolidColorTextureSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
