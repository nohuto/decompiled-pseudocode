/*
 * XREFs of ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180074728
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800751E0 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x180075400 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWaitForService::Cleanup(SC_HANDLE *this)
{
  SC_HANDLE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseServiceHandle(v2);
    *this = 0LL;
  }
}
