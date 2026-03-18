/*
 * XREFs of ?GetInContactDelta@CScrollAnimation@@AEAAMXZ @ 0x18015DEB0
 * Callers:
 *     ?CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z @ 0x18015D8E4 (-CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z.c)
 * Callees:
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x18015E3E4 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 */

void __fastcall CScrollAnimation::GetInContactDelta(CScrollAnimation *this)
{
  if ( *((_DWORD *)this + 106) != 1 )
    CScrollAnimation::StartInContact(this);
  (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 232LL))(this);
}
