/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18002A5B4
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002A3B8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x1800417F4 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800744A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  char v2; // dl
  __int64 v3; // rdx
  char v4; // bl
  CLivePreview *v6; // rcx
  bool v7; // al
  __int64 v8; // rax

  v2 = *(_BYTE *)(*((_QWORD *)this + 39) + 576LL);
  if ( (v2 & 0x10) != 0 )
    return 0;
  if ( (v2 & 0x20) != 0 )
    return 0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v3 = *((_QWORD *)this + 39);
  if ( (*(_DWORD *)(v3 + 100) & 0xC00000) != 0xC00000 && (*(_BYTE *)(v3 + 580) & 0x40) == 0 )
    return 0;
  if ( *(char *)(v3 + 104) < 0 )
    return 0;
  v4 = 1;
  if ( (*(_BYTE *)(v3 + 576) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v3 + 580) & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v3 + 332) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 391) )
  {
    v8 = *((_QWORD *)this + 43);
    if ( !v8 || *(_BYTE *)(v8 + 72) )
      return 0;
  }
  v6 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
  v7 = *((_BYTE *)v6 + 264) && v3 && CLivePreview::_IsInLivePreview(v6, (const struct CWindowData *)v3);
  if ( v7 || !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL) )
    return 0;
  return v4;
}
