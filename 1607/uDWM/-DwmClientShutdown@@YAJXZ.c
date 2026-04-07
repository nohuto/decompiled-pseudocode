/*
 * XREFs of ?DwmClientShutdown@@YAJXZ @ 0x18007C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180076BEC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 DwmClientShutdown(void)
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v0 = CDesktopManager::NotifyRedirectionShutdown(g_pdmInstance);
  if ( v0 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v0, 0x61u);
  v1 = DwmRedirectionManagerShutdown();
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x63u);
  if ( g_pdmInstance )
  {
    CBaseObject::Release(g_pdmInstance);
    g_pdmInstance = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
