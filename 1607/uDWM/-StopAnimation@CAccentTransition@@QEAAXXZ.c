/*
 * XREFs of ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180096444
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z @ 0x180096160 (-OnAnimationComplete@CAccentTransition@@UEAAJI@Z.c)
 * Callees:
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x180096104 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

void __fastcall CAccentTransition::StopAnimation(CAccent **this)
{
  if ( *((_BYTE *)this + 32) )
    CAccentTransition::CleanupAnimation((CAccentTransition *)this);
  CAccent::EndTransition(this[3]);
}
