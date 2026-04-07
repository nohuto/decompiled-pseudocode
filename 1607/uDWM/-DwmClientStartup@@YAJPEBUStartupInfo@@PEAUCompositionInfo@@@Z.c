/*
 * XREFs of ?DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180044ABC (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DwmClientStartup(const struct StartupInfo *a1, struct CompositionInfo *a2)
{
  struct CDesktopManager **v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (dword_1800B7F44 & 1) == 0 )
  {
    dword_1800B7EF8 = -2147024846;
    dword_1800B7F44 |= 1u;
    dword_1800B7EFC = -2003302655;
  }
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = CDesktopManager::Create(a1, a2, v4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1800B7EF8, 2u, v5, 0x4Bu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v6;
}
