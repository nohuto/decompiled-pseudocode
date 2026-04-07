/*
 * XREFs of ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x1800381F0
 * Callers:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18000A3E4 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180038088 (--1CWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180039F38 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 */

void __fastcall CDesktopManager::FreeCVIIntoCache(int a1, int a2, struct CResource *a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax

  if ( a3 )
  {
    v3 = 0LL;
    v4 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1576);
    do
    {
      if ( !*v4 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
    }
    while ( (unsigned int)v3 < 2 );
    if ( (unsigned int)v3 < 2 && CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a3 + 2) == 2 )
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v3 + 197) = a3;
      else
        CBaseObject::Release(a3);
    }
  }
}
