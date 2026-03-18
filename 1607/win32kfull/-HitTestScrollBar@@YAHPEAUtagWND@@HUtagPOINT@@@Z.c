/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022ABA0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C014F10C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  int v6; // r8d
  int v7; // esi
  __int64 v8; // rbp
  int v9; // edi
  int v10; // ebx
  LONG y; // r12d
  _DWORD *v13; // rbp
  _BYTE v15[64]; // [rsp+30h] [rbp-78h] BYREF

  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    v9 = *(_DWORD *)(v5 + 364);
    v10 = v6;
    y = a3.y;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 50) & 0x40) == 0 || a2 )
      v10 = a3.x - *((_DWORD *)a1 + 28);
    else
      v10 = *((_DWORD *)a1 + 30) - a3.x;
    y = a3.y - *((_DWORD *)a1 + 29);
    LOBYTE(v9) = GetWndSBDisableFlags((__int64)a1, a2);
  }
  if ( (v9 & 3) == 3 )
    return 4294967294LL;
  if ( v8 )
  {
    v13 = (_DWORD *)(v8 + 368);
  }
  else
  {
    v13 = v15;
    CalcSBStuff((__int64)a1, (__int64)v15, a2);
  }
  if ( a2 )
    v10 = y;
  if ( v10 < v13[9] )
    return (v9 & 1) != 0 ? -2 : 60;
  if ( v10 >= v13[10] )
    return (v9 & 2) != 0 ? -2 : 61;
  if ( v10 < v13[13] )
    return 62LL;
  LOBYTE(v7) = v10 < v13[12];
  return (unsigned int)(v7 + 63);
}
