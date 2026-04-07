/*
 * XREFs of ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18006C7E8
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x18006D2A0 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x18006D350 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
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
