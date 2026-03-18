/*
 * XREFs of RemoteConnectState @ 0x1C00F5470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RemoteConnectState()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gbRemoteSession )
  {
    if ( gbVideoInitialized )
    {
      if ( gbExitInProgress )
        return 2;
      else
        return 4 - (unsigned int)(gbConnected != 0);
    }
    else
    {
      return 1;
    }
  }
  return v0;
}
