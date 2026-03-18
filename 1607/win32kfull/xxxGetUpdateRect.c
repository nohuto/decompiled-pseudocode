/*
 * XREFs of xxxGetUpdateRect @ 0x1C01173D4
 * Callers:
 *     NtUserGetUpdateRect @ 0x1C0117290 (NtUserGetUpdateRect.c)
 * Callees:
 *     IntersectWithParents @ 0x1C005CC28 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  int *v6; // rsi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _QWORD **v11; // rdx
  __int64 **v12; // rcx
  int v13; // r8d
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, (_DWORD *)a1, 0x120u, 1);
  v5 = *(_QWORD *)(a1 + 160);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = (int *)(a1 + 128);
      v14 = *(_OWORD *)(a1 + 128);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v5, &v14) <= 1 )
        v14 = 0uLL;
      v6 = (int *)(a1 + 128);
      IntersectRect(&v14, (int *)&v14, (int *)(a1 + 128));
    }
    if ( (unsigned int)IntersectWithParents(a1, (__int64)&v14) )
    {
      if ( a1 != GetDesktopWindow(a1) )
      {
        v7 = *v6;
        v8 = -*(_DWORD *)(a1 + 132);
        HIDWORD(v14) -= *(_DWORD *)(a1 + 132);
        v9 = -v7;
        LODWORD(v14) = v9 + v14;
        DWORD2(v14) += v9;
        DWORD1(v14) += v8;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 84LL) & 0x20) != 0
        && ((*(_BYTE *)(a1 + 45) & 1) != 0 || *(_QWORD *)(a1 + 160) != 1LL) )
      {
        GreLockVisRgnShared(*gpDispInfo);
        v11 = (_QWORD **)gpDispInfo;
        v12 = *(__int64 ***)(gpDispInfo + 64LL);
        if ( v12 )
        {
          while ( v12[2] != (__int64 *)a1 || ((_DWORD)v12[8] & 2) != 0 )
          {
            v12 = (__int64 **)*v12;
            if ( !v12 )
              goto LABEL_25;
          }
          GreTransformPoints((HDC)v12[1], (struct _POINTL *)&v14, (struct _POINTL *)&v14, 2, 0);
          v11 = (_QWORD **)gpDispInfo;
        }
LABEL_25:
        GreUnlockVisRgn(**v11);
      }
    }
    else
    {
      v14 = 0uLL;
    }
    if ( a2 )
    {
      if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 136) - *v6 - v14;
        LODWORD(v14) = *(_DWORD *)(a1 + 136) - *v6 - DWORD2(v14);
        DWORD2(v14) = v13;
      }
      *(_OWORD *)a2 = v14;
    }
    return 1LL;
  }
  else
  {
    if ( a2 )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    return 0LL;
  }
}
