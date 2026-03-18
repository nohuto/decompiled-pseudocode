/*
 * XREFs of ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x1800E9440
 * Callers:
 *     ??_ECSurfaceManager@@OBA@EAAPEAXI@Z @ 0x180099C90 (--_ECSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECSurfaceManager@@OGA@EAAPEAXI@Z @ 0x180099CA0 (--_ECSurfaceManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1800E91F4 (--1CSurfaceManager@@MEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::`vector deleting destructor'(CSurfaceManager *this, char a2)
{
  CSurfaceManager::~CSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
