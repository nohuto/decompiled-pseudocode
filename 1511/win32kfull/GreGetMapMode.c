/*
 * XREFs of GreGetMapMode @ 0x1C02B0950
 * Callers:
 *     IsSysFontAndDefaultMode @ 0x1C024B568 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetMapMode(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 308LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
