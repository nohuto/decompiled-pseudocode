/*
 * XREFs of xxxGetUpdateRect @ 0x14002BE14
 * Callers:
 *     NtUserGetUpdateRect @ 0x14025E9B0 (NtUserGetUpdateRect.c)
 * Callees:
 *     IntersectWithParents @ 0x14002CFAC (IntersectWithParents.c)
 *     GreDPtoLP @ 0x14003E6C0 (GreDPtoLP.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(struct tagWND *a1, _OWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  LONG x; // edx
  LONG v8; // ecx
  _DWORD *v9; // r8
  LONG y; // edx
  LONG v11; // ecx
  __int64 DesktopWindow; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *i; // rdi
  int v28; // edx
  struct tagPOINT v29[2]; // [rsp+20h] [rbp-20h] BYREF

  *(_OWORD *)&v29[0].x = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v5 + 136);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *(_OWORD *)&v29[0].x = *(_OWORD *)(v5 + 104);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v6, v29) < 2 )
        *(_OWORD *)&v29[0].x = 0LL;
      x = v29[0].x;
      v8 = v29[1].x;
      v9 = (_DWORD *)*((_QWORD *)a1 + 5);
      if ( v29[0].x <= v9[26] )
        x = v9[26];
      v29[0].x = x;
      if ( v29[1].x >= v9[28] )
        v8 = v9[28];
      v29[1].x = v8;
      if ( x >= v8 )
        goto LABEL_17;
      y = v29[0].y;
      v11 = v29[1].y;
      if ( v29[0].y <= v9[27] )
        y = v9[27];
      v29[0].y = y;
      if ( v29[1].y >= v9[29] )
        v11 = v9[29];
      v29[1].y = v11;
      if ( y >= v11 )
LABEL_17:
        *(_OWORD *)&v29[0].x = 0LL;
    }
    if ( (unsigned int)IntersectWithParents(a1, v29) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      v14 = (unsigned int)v29[0].x;
      v15 = (unsigned int)v29[1].x;
      if ( a1 != (struct tagWND *)DesktopWindow )
      {
        v16 = *((_QWORD *)a1 + 5);
        v17 = *(_DWORD *)(v16 + 104);
        v13 = (unsigned int)-*(_DWORD *)(v16 + 108);
        v29[1].y -= *(_DWORD *)(v16 + 108);
        v18 = -v17;
        v14 = (unsigned int)(v18 + v29[0].x);
        v15 = (unsigned int)(v18 + v29[1].x);
        v29[0].y += v13;
        v29[0].x += v18;
        v29[1].x += v18;
      }
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
      if ( (*(_BYTE *)(v19 + 8) & 0x20) != 0 )
      {
        GreLockVisRgnShared(v19, v13, v15, v14);
        v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 56968);
        for ( i = *(__int64 **)(v26 + 24); ; i = (__int64 *)*i )
        {
          v26 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 56968) + 24LL;
          if ( i == (__int64 *)v26 )
            break;
          if ( (struct tagWND *)i[10] == a1 && (i[6] & 2) == 0 )
          {
            GreDPtoLP((HDC)i[2], v29);
            break;
          }
        }
        GreUnlockVisRgn();
        LODWORD(v15) = v29[1].x;
        LODWORD(v14) = v29[0].x;
      }
      v20 = *(_OWORD *)&v29[0].x;
    }
    else
    {
      v20 = 0LL;
      LODWORD(v15) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      *(_OWORD *)&v29[0].x = 0LL;
      LODWORD(v14) = _mm_cvtsi128_si32((__m128i)0LL);
    }
    if ( a2 )
    {
      v22 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v22 + 26) & 0x40) != 0 )
      {
        v28 = *(_DWORD *)(v22 + 112) - *(_DWORD *)(v22 + 104);
        v29[0].x = v28 - v15;
        v29[1].x = v28 - v14;
        v20 = *(_OWORD *)&v29[0].x;
      }
      *a2 = v20;
    }
    return 1LL;
  }
  else
  {
    if ( a2 )
      *a2 = 0LL;
    return 0LL;
  }
}
