/*
 * XREFs of CleanupLogonProcess @ 0x1C006D120
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006CFF4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C01422C8 (WmsgpDisconnect.c)
 */

NTSTATUS CleanupLogonProcess()
{
  NTSTATUS result; // eax

  if ( gWinLogonRpcHandle )
  {
    result = WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  if ( ghSMSS )
  {
    result = ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  return result;
}
