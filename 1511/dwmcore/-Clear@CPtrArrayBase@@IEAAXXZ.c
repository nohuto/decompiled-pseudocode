/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x180067A84
 * Callers:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AB6E8 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)this = 0LL;
}
