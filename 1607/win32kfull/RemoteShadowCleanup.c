/*
 * XREFs of RemoteShadowCleanup @ 0x1C01FA230
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01FA100 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C02BAEDC (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(char *Src, size_t Size)
{
  size_t v2; // rdi
  __int64 RemoteContext; // r15
  __int64 v5; // rcx
  void *v7; // rax
  void *v8; // rbx
  __int64 RemoteHDEV; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v5) != gpepCSRSS )
    return 3221225506LL;
  if ( (_DWORD)v2 && ((unsigned __int64)&Src[v2] > W32UserProbeAddress || &Src[v2] < Src) )
    *W32UserProbeAddress = 0;
  v7 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v8 = v7;
  if ( !v7 )
    ExRaiseStatus(-1073741801);
  memmove(v7, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v8, (unsigned int)v2);
  Win32FreePool(v8, v10, v11);
  v12 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v12 != 1) || gbConnected )
    RemoteRedrawScreen();
  SetPointer(1);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2220LL) &= ~2u;
  return 0LL;
}
