/*
 * XREFs of ??_GCRegionWrapper@@UEAAPEAXI@Z @ 0x180187A50
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

FastRegion::CRegion **__fastcall CRegionWrapper::`scalar deleting destructor'(FastRegion::CRegion **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 2);
  *this = (FastRegion::CRegion *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, FastRegion::CRegion **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
