/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x18001AF30
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18005CA38 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180060E4C (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)this = 0LL;
}
