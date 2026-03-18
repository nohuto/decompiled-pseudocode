/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800A990C
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800A982C (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800A9C58 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  int v0; // ebx
  bool HKLMDword; // al
  unsigned int v2; // ecx
  bool v3; // al
  unsigned int v4; // ecx
  bool v5; // al
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // ecx
  bool v9; // zf
  unsigned int v10; // eax
  bool v11; // al
  unsigned int v12; // ecx
  bool v13; // al
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+30h] [rbp+10h] BYREF

  v0 = 0;
  v16 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v16) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v16;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v16 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v16) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v16 != 0;
  v16 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v16);
  v2 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( HKLMDword )
    v2 = v16;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v2;
  v16 = 0;
  v3 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v16);
  v4 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v3 )
    v4 = v16;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v4;
  v16 = 0;
  v5 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v16);
  v6 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v5 )
    v6 = v16;
  CCommonRegistryData::m_uOverlayQualifyCount = v6;
  v16 = 0;
  v7 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v16);
  v8 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v7 )
    v8 = v16;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v8;
  v16 = 0;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v16);
  v16 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v16) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v16 != 0;
  v16 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"HighColor", &v16) )
    CCommonRegistryData::m_fEnableHighColor = v16 != 0;
  v16 = 0;
  v9 = !RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DrawListRenderPathMode", &v16);
  v10 = CCommonRegistryData::m_drawListRenderPathMode;
  if ( !v9 && v16 <= 2 )
    v10 = v16;
  if ( CCommonRegistryData::m_fEnableHighColor )
    v10 = 1;
  CCommonRegistryData::m_drawListRenderPathMode = v10;
  if ( v10 == 1 )
  {
    CCommonRegistryData::m_fEnableCpuClipping = 0;
  }
  else if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v16) )
  {
    CCommonRegistryData::m_fEnableCpuClipping = v16 != 0;
  }
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v16) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v16 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v16) )
    CCommonRegistryData::m_fEnableMegaRects = v16 != 0;
  v11 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v16);
  v12 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v11 )
    v12 = v16;
  CCommonRegistryData::m_dwMegaRectSize = v12;
  v13 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v16);
  v14 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v13 )
    v14 = v16;
  CCommonRegistryData::m_dwMegaRectSearchCount = v14;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v16) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v16 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v16) )
    CCommonRegistryData::m_fDisableDrawListCaching = v16 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v16) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v16 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v16) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v16 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v16) )
  {
    LOBYTE(v0) = v16 != 0;
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v0;
  }
  return 0LL;
}
