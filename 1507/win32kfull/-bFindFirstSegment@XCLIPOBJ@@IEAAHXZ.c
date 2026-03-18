/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C00015C4
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C0001978 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C0001DF8 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0001474 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C00014C8 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C000258C (-vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edi
  struct _POINTL *v8; // r8
  int y; // edx
  struct _POINTL *v10; // r8
  int v11; // r9d
  int x; // edx
  _DWORD *v13; // rsi
  struct _POINTL *v14; // r8
  int v15; // eax
  LONG v16; // edx
  int v17; // ecx
  int v18; // r11d
  int v19; // r9d
  LONG v20; // edx
  int *v22; // r10
  _DWORD *v23; // r10
  _DWORD *v24; // rcx
  int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // [rsp+40h] [rbp+8h] BYREF
  int v31; // [rsp+44h] [rbp+Ch] BYREF

  *(_QWORD *)(*((_QWORD *)this + 18) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 18) + 152LL);
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)this + 10);
  if ( (*(_DWORD *)(v2 + 24) & 0x800000) != 0 )
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 4);
    v4 = *((_QWORD *)this + 10);
    v5 = *((_QWORD *)this + 18);
    v6 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 8);
    v5 = *((_QWORD *)this + 18);
    v6 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL);
  }
  *(_DWORD *)(v5 + 168) = v6;
  v7 = 0;
  v8 = (struct _POINTL *)*((_QWORD *)this + 18);
  y = v8[20].y;
  if ( (((unsigned int)v8[3].x >> 23) & 1) == v8[16].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0LL, v8 + 16, &v8[3].y);
  }
  else
  {
    v8[3].y = v8[20].x;
    *(_DWORD *)(*((_QWORD *)this + 18) + 164LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 132LL);
  }
  v10 = (struct _POINTL *)*((_QWORD *)this + 18);
  v11 = v10[15].y;
  x = v10[21].x;
  if ( (((unsigned int)v10[3].x >> 23) & 1) == v11 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v10 + 18, v10 + 19, (int *)&v10[20]);
  }
  else
  {
    v10[18].y = v11;
    *(_DWORD *)(*((_QWORD *)this + 18) + 144LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 120LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) + 1;
    v22 = (int *)*((_QWORD *)this + 18);
    v30 = v22[24];
    v31 = v22[25];
    DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v22 + 16), &v30, &v31);
    if ( (*v24 & 5) != 0 )
    {
      v25 = v23[31];
      v26 = v31;
    }
    else
    {
      v25 = v23[30];
      v26 = v30;
    }
    if ( v25 - v26 < 0 )
      v27 = v26 - v25;
    else
      v27 = v25 - v26;
    v23[40] = v27;
  }
  v13 = (_DWORD *)*((_QWORD *)this + 10);
  v14 = (struct _POINTL *)*((_QWORD *)this + 18);
  v15 = *v13 - 1;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = v15;
  v16 = v14[16].x;
  v17 = v15;
  if ( v16 >= v13[v15 + 3] )
  {
    *((_DWORD *)this + 24) = v15;
    if ( (v14[3].x & 0x400000) != 0 )
      return 0LL;
    *((_DWORD *)this + 24) = v15 + 1;
  }
  else if ( v16 < v13[3] )
  {
    if ( (v14[3].x & 0x400000) == 0 )
      return 0LL;
    *((_DWORD *)this + 24) = -1;
  }
  else
  {
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = (v17 + v18) / 2;
        *((_DWORD *)this + 24) = v19;
        v20 = v14[16].x;
        if ( v20 >= v13[v19 + 3] )
          break;
        v17 = v19 - 1;
        if ( v20 >= v13[v19 + 2] )
          goto LABEL_13;
      }
      v18 = v19 + 1;
    }
    while ( v20 >= v13[v19 + 4] );
    *((_DWORD *)this + 24) = v19 + 1;
LABEL_13:
    *((_DWORD *)this + 24) -= ((unsigned int)v14[3].x >> 22) & 1;
  }
  if ( (((unsigned int)v14[3].x >> 22) & 1) != (*((_DWORD *)this + 24) & 1) )
    return 1LL;
  v28 = *((_DWORD *)this + 24) + *((_DWORD *)this + 25);
  *((_DWORD *)this + 24) = v28;
  v29 = v13[v28 + 3];
  LOBYTE(v7) = v29 > v14[18].x;
  if ( (((unsigned int)v14[3].x >> 22) & 1) != v7 )
  {
    XCLIPOBJ::bIntersectWall(this, v29, 0LL, v14 + 16, &v14[3].y);
    return 1LL;
  }
  return 0LL;
}
