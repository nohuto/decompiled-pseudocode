/*
 * XREFs of ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x18011B8E0
 * Callers:
 *     ??_ECSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800BF7A0 (--_ECSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECSurfaceManager@@OGA@EAAPEAXI@Z @ 0x1800BF7B0 (--_ECSurfaceManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18011B6BC (--1CSurfaceManager@@MEAA@XZ.c)
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
