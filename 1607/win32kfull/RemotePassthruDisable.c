/*
 * XREFs of RemotePassthruDisable @ 0x1C01FA180
 * Callers:
 *     <none>
 * Callees:
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C01FA100 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C02BAB34 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbx
  __int64 v1; // rcx
  PVOID v3; // r8
  HANDLE v4; // rdx
  __int64 RemoteHDEV; // rcx

  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v1) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v3 = gConsoleShadowThinwireFileObject;
      v4 = ghConsoleShadowThinwireChannel;
      RemoteHDEV = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v3 = (PVOID)gThinwireFileObject;
      v4 = (HANDLE)ghRemoteThinwireChannel;
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v4, v3, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen();
    UpdateKeyLights(0);
  }
  return 0LL;
}
