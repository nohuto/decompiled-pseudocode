/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800952A8
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180095448 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18005E568 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  int v0; // ebx
  bool v1; // zf
  unsigned int v2; // eax
  bool HKLMDword; // al
  unsigned int v4; // ecx
  bool v5; // al
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+30h] [rbp+10h] BYREF

  v0 = 0;
  v8 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v8) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v8;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v8 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v8) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v8 != 0;
  v8 = 0;
  v1 = !RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DrawListRenderPathMode", &v8);
  v2 = CCommonRegistryData::m_drawListRenderPathMode;
  if ( !v1 )
  {
    if ( v8 <= 2 )
      v2 = v8;
    CCommonRegistryData::m_drawListRenderPathMode = v2;
  }
  if ( v2 == 1 )
  {
    CCommonRegistryData::m_fEnableCpuClipping = 0;
  }
  else if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v8) )
  {
    CCommonRegistryData::m_fEnableCpuClipping = v8 != 0;
  }
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v8) )
    CCommonRegistryData::m_fEnableMegaRects = v8 != 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v8);
  v4 = CCommonRegistryData::m_dwMegaRectSize;
  if ( HKLMDword )
    v4 = v8;
  CCommonRegistryData::m_dwMegaRectSize = v4;
  v5 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v8);
  v6 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v5 )
    v6 = v8;
  CCommonRegistryData::m_dwMegaRectSearchCount = v6;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v8) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v8 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v8) )
  {
    LOBYTE(v0) = v8 != 0;
    CCommonRegistryData::m_fDisableDrawListCaching = v0;
  }
  return 0LL;
}
