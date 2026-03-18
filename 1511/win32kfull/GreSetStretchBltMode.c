/*
 * XREFs of GreSetStretchBltMode @ 0x1C00156A4
 * Callers:
 *     BltIcon @ 0x1C00153C8 (BltIcon.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v6 = *(_QWORD *)(v8[0] + 80LL);
    v3 = *(_DWORD *)(v6 + 100);
    *(_DWORD *)(v6 + 100) = a2;
    v7 = *(_QWORD *)(v4 + 80);
    if ( a2 > 4 )
      LOBYTE(a2) = 2;
    *(_BYTE *)(v7 + 75) = a2;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8[0] + 12LL));
  }
  return v3;
}
