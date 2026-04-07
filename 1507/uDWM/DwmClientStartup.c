/*
 * XREFs of DwmClientStartup @ 0x180047D70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180047E0C (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DwmClientStartup(struct StartupInfo *a1, struct CompositionInfo *a2)
{
  int v4; // eax
  struct CDesktopManager **v5; // r8
  unsigned int v6; // ebx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  if ( (dword_1800BC744 & 1) == 0 )
  {
    dword_1800BC6F8 = -2147024846;
    dword_1800BC744 |= 1u;
    dword_1800BC6FC = -2003302655;
  }
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = DwmVersionCheck(1398215484LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BC6F8, 2LL, v4, 0x4Au);
  }
  else
  {
    v7 = CDesktopManager::Create(a1, a2, v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800BC6F8, 2LL, v7, 0x4Du);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
