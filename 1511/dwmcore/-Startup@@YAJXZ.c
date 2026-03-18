/*
 * XREFs of ?Startup@@YAJXZ @ 0x1800AF408
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?Init@CDisplayManager@@QEAAJXZ @ 0x18006F6D0 (-Init@CDisplayManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800AF4C8 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@OSInfo@@SAXXZ @ 0x1800AF8F0 (-Initialize@OSInfo@@SAXXZ.c)
 */

__int64 Startup(void)
{
  int v0; // eax
  CDisplayManager *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  HDC DC; // rax
  HDC v5; // rdi

  OSInfo::Initialize();
  CCommonRegistryData::InitializeFromRegistry();
  v0 = CCriticalSection::Init(&stru_1801A3AB0);
  v2 = v0;
  if ( v0 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v0, 0x98u);
  }
  else
  {
    v3 = CDisplayManager::Init(v1);
    v2 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x99u);
    }
    else
    {
      DC = GetDC(0LL);
      v5 = DC;
      if ( DC )
      {
        g_DesktopDpiX = (float)GetDeviceCaps(DC, 88);
        g_DesktopDpiY = (float)GetDeviceCaps(v5, 90);
        ReleaseDC(0LL, v5);
      }
      if ( g_DesktopDpiX <= 0.0 || g_DesktopDpiY <= 0.0 )
      {
        g_DesktopDpiX = 96.0;
        g_DesktopDpiY = 96.0;
      }
    }
  }
  return v2;
}
