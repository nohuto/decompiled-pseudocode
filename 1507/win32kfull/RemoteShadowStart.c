/*
 * XREFs of RemoteShadowStart @ 0x1C0202D00
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GetRemoteHDEV @ 0x1C0202A4C (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C02B86D4 (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(char *Src, size_t Size)
{
  size_t v2; // rbx
  __int64 RemoteContext; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v8; // rax
  void *v9; // rdi
  __int64 RemoteHDEV; // rax
  int v11; // ebx

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v6, v5) != gpepCSRSS )
    return 3221225506LL;
  if ( (_DWORD)v2 && ((unsigned __int64)&Src[v2] > W32UserProbeAddress || &Src[v2] < Src) )
    *W32UserProbeAddress = 0;
  v8 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v9 = v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  memmove(v8, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  v11 = bDrvShadowConnect(RemoteHDEV, v9, (unsigned int)v2);
  Win32FreePool(v9);
  if ( !v11 )
    return 3221880856LL;
  RemoteRedrawScreen();
  SetPointer(1);
  *(_DWORD *)(gpsi + 2220LL) |= 2u;
  return 0LL;
}
