/*
 * XREFs of CtxDisplayIOCtl @ 0x1C0202D6C
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C0218820 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     RemoteRedrawRectangle @ 0x1C01EFABC (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C0202DEC (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02B7778 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 RemoteContext; // rax
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
