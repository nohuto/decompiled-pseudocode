/*
 * XREFs of ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x180060750
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800608F0 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::`scalar deleting destructor'(
        CDcompRenderTargetGroup *this,
        char a2)
{
  CDcompRenderTargetGroup::~CDcompRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDcompRenderTargetGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
