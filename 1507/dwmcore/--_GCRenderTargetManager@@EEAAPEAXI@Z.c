/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x1800E8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x1800E89FC (--1CRenderTargetManager@@EEAA@XZ.c)
 */

void **__fastcall CRenderTargetManager::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
