/*
 * XREFs of ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x1800E9320
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CCompositionSurfaceManager@@MEAA@XZ @ 0x1800E90D0 (--1CCompositionSurfaceManager@@MEAA@XZ.c)
 */

CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  CCompositionSurfaceManager::~CCompositionSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionSurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
