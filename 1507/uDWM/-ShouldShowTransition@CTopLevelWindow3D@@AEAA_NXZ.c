/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180027B64
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180027994 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000891C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F00 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(CTopLevelWindow3D *this)
{
  char v2; // dl
  __int64 v3; // rdx
  char v4; // bl
  CLivePreview *v5; // rcx
  bool v6; // al
  __int64 v8; // rax

  v2 = *(_BYTE *)(*((_QWORD *)this + 39) + 552LL);
  if ( (v2 & 0x10) != 0 )
    return 0;
  if ( (v2 & 0x20) != 0 )
    return 0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v3 = *((_QWORD *)this + 39);
  v4 = 1;
  if ( (*(_DWORD *)(v3 + 100) & 0xC00000) != 0xC00000 && (*(_BYTE *)(v3 + 557) & 1) == 0 )
    return 0;
  if ( *(char *)(v3 + 104) < 0 )
    return 0;
  if ( (*(_BYTE *)(v3 + 552) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v3 + 556) & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(v3 + 316) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 395) )
  {
    v8 = *((_QWORD *)this + 43);
    if ( !v8 || *(_BYTE *)(v8 + 72) )
      return 0;
  }
  v5 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
  v6 = *((_BYTE *)v5 + 264) && v3 && CLivePreview::_IsInLivePreview(v5, (const struct CWindowData *)v3);
  if ( v6
    || !CDesktopManager::IsFeatureEnabled(1)
    || (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x10000) != 0
    && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1408) )
  {
    return 0;
  }
  return v4;
}
