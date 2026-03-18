/*
 * XREFs of CleanupLogonProcess @ 0x1C0063480
 * Callers:
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00632A8 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C0128088 (WmsgpDisconnect.c)
 */

__int64 CleanupLogonProcess()
{
  __int64 result; // rax

  if ( gWinLogonRpcHandle )
  {
    result = WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  return result;
}
