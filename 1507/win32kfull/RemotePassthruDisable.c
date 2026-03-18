/*
 * XREFs of RemotePassthruDisable @ 0x1C0202AD0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     GetRemoteHDEV @ 0x1C0202A4C (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02B84EC (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  PVOID v4; // r8
  HANDLE v5; // rdx
  __int64 RemoteHDEV; // rcx

  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v2, v1) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v4 = gConsoleShadowThinwireFileObject;
      v5 = ghConsoleShadowThinwireChannel;
      RemoteHDEV = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v4 = (PVOID)gThinwireFileObject;
      v5 = (HANDLE)ghRemoteThinwireChannel;
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v5, v4, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen();
    UpdateKeyLights(0);
  }
  return 0LL;
}
