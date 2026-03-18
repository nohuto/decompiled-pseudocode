/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800A2474
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9688 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AE270 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)this = 0LL;
}
