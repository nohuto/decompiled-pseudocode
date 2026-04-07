/*
 * XREFs of DwmClientShutdown @ 0x180073600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 DwmClientShutdown()
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v0 = CDesktopManager::NotifyRedirectionShutdown(g_pdmInstance);
  if ( v0 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v0, 0x63u);
  v1 = DwmRedirectionManagerShutdown();
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x65u);
  if ( g_pdmInstance )
  {
    CBaseObject::Release(g_pdmInstance);
    g_pdmInstance = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
