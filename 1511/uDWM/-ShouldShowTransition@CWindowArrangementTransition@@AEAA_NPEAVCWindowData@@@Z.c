/*
 * XREFs of ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18008490C
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084670 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180038F64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007268C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CWindowArrangementTransition::ShouldShowTransition(
        CWindowArrangementTransition *this,
        struct CWindowData *a2)
{
  char v2; // al
  char v4; // r11
  CLivePreview *v5; // rcx

  v2 = *((_BYTE *)a2 + 568);
  if ( (v2 & 0x10) != 0 )
    return 0;
  if ( (v2 & 0x20) != 0 )
    return 0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v4 = 1;
  if ( (*((_BYTE *)a2 + 568) & 1) == 0 )
    return 0;
  v5 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
  if ( *((_BYTE *)v5 + 264) ? CLivePreview::_IsInLivePreview(v5, a2) : 0 )
    return 0;
  return v4;
}
