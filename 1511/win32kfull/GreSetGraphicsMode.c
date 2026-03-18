/*
 * XREFs of GreSetGraphicsMode @ 0x1C02B719C
 * Callers:
 *     FlipUserTextOutW @ 0x1C0010200 (FlipUserTextOutW.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 80LL);
    v3 = *(_DWORD *)(v4 + 68);
    if ( (unsigned int)(a2 - 1) <= 1 )
      *(_DWORD *)(v4 + 68) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v3;
}
