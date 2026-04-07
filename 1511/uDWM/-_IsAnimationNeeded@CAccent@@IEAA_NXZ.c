/*
 * XREFs of ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180010A3C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800109C4 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180038F64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

bool __fastcall CAccent::_IsAnimationNeeded(CAccent *this)
{
  int v2; // ecx

  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21)
      && !CDesktopManager::CheckAnyPreference(0x10u)
      && (v2 = *((_DWORD *)this + 73)) != 0
      && (unsigned int)(*((_DWORD *)this + 66) - 2) > 1
      && (unsigned int)(v2 - 2) > 3;
}
