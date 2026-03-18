/*
 * XREFs of GreExtTextOutRect @ 0x1C003CB0C
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C003E280 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C003FDF8 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+28h] [rbp-58h]
  int v9; // [rsp+2Ch] [rbp-54h]
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  v2 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  v4 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 36) & 0x10000) == 0 )
    {
      v14 = 0;
      v15 = 0;
      v11 = 0LL;
      v12 = 0;
      v13 = 0LL;
      v18 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v10 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v10, (struct XDCOBJ *)&v7, 0) )
        v5 = ExtTextOutRect((struct XDCOBJ *)&v7, a2);
      else
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)&v7);
      v2 = v5;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
      v4 = v7;
    }
    if ( v4 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v7);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
  }
  return v2;
}
