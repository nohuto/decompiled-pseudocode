/*
 * XREFs of ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x18011B840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::`vector deleting destructor'(
        CLegacySurfaceManager *this,
        char a2)
{
  CLegacySurfaceManager::~CLegacySurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacySurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
