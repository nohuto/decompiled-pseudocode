/*
 * XREFs of ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180097F3C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z @ 0x180097C50 (-OnAnimationComplete@CAccentTransition@@UEAAJI@Z.c)
 * Callees:
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x180097BF8 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

void __fastcall CAccentTransition::StopAnimation(CAccent **this)
{
  if ( *((_BYTE *)this + 32) )
    CAccentTransition::CleanupAnimation((CAccentTransition *)this);
  CAccent::EndTransition(this[3]);
}
