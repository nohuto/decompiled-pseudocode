/*
 * XREFs of GrePolyTextOutW @ 0x1C0152640
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C0029E00 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  ERECTL *v10; // r8
  _QWORD v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  char v21; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  v7 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !v12[0] || (*(_DWORD *)(v12[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    v17 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v13, (struct XDCOBJ *)v12, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = a2 + 8;
        while ( 1 )
        {
          v10 = (ERECTL *)&v21;
          if ( ((30 * *(_DWORD *)v9 + 7) & 0xFFFFFFF8) > 0xC0 )
            v10 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v12,
                                *(_DWORD *)(v9 - 8),
                                *(_DWORD *)(v9 - 4),
                                *(_DWORD *)(v9 + 16),
                                (struct tagRECT *)(v9 + 20),
                                *(unsigned __int16 **)(v9 + 8),
                                *(_DWORD *)v9,
                                *(int **)(v9 + 40),
                                *(unsigned __int8 *)(*(_QWORD *)(v12[0] + 80LL) + 73LL),
                                v10,
                                a4) )
            break;
          v9 += 56LL;
          if ( v9 - 8 >= v8 )
            goto LABEL_13;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v13);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  return v7;
}
