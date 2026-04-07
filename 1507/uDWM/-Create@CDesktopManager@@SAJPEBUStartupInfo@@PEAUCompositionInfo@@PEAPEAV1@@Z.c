/*
 * XREFs of ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180047E0C
 * Callers:
 *     DwmClientStartup @ 0x180047D70 (DwmClientStartup.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180040248 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800409AC (--0CDesktopManager@@AEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::Create(
        const struct StartupInfo *a1,
        struct CompositionInfo *a2,
        struct CDesktopManager **a3)
{
  CDesktopManager *v5; // rax
  CDesktopManager *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = (CDesktopManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            1656LL);
  if ( v5 )
    v6 = CDesktopManager::CDesktopManager(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = CDesktopManager::Initialize(v6, a1, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A32E8, 1LL, v7, 0x405u);
    }
    else
    {
      g_pdmInstance = v6;
      v6 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800A32E8, 1LL, -2147024882, 0x401u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v8;
}
