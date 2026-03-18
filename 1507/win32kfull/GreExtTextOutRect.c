/*
 * XREFs of GreExtTextOutRect @ 0x1C0098EB8
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C0098B40 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009A640 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  _QWORD v6[6]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v7; // [rsp+50h] [rbp-19h] BYREF
  __int64 v8; // [rsp+60h] [rbp-9h]
  int v9; // [rsp+68h] [rbp-1h]
  _QWORD v10[10]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] && (*(_DWORD *)(v6[0] + 36LL) & 0x10000) == 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10);
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0;
    v10[0] = 0LL;
    memset(&v10[6], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v7, (struct XDCOBJ *)v6, 0) )
      v4 = ExtTextOutRect((struct XDCOBJ *)v6, a2);
    else
      v4 = XDCOBJ::bFullScreen((XDCOBJ *)v6);
    v3 = v4;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v7);
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
