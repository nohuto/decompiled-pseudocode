/*
 * XREFs of GetInheritedMonitor @ 0x1C006E21C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00EB1EC (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C00EB340 (IsTitleWindow.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C013FB14 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rbp
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 j; // rdi
  int v11; // r13d
  BOOL v12; // r14d
  int v13; // r13d
  BOOL v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // r14
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // r14
  int v25; // eax
  int v26; // r15d
  __int64 v27; // rcx
  BOOL v28; // [rsp+20h] [rbp-58h]
  BOOL v29; // [rsp+20h] [rbp-58h]
  _QWORD v30[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[2]; // [rsp+38h] [rbp-40h] BYREF

  v1 = 0LL;
  if ( !*((_QWORD *)a1 + 11) )
    return v1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v4 != DesktopWindow )
  {
    if ( !v4 )
      return v1;
    v5 = *(_QWORD *)(v4 + 352);
    return ValidateHmonitorNoRip(v5);
  }
  if ( *((_DWORD *)a1 + 86) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*((_BYTE *)a1 + 44) & 0x40) != 0
    || (*((_DWORD *)a1 + 72) & 0x8000) != 0 )
  {
    return v1;
  }
  for ( i = *((_QWORD *)a1 + 13);
        i && !(unsigned int)IsCandidateTransformOwner((struct tagWND *)i, a1);
        i = *(_QWORD *)(i + 104) )
  {
    ;
  }
  v8 = *((_QWORD *)a1 + 19);
  if ( (*(_BYTE *)(v8 + 34) & 1) == 0 )
    goto LABEL_14;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) != 0x29C )
  {
    if ( *(_WORD *)(v8 + 8) == gatomShadow )
    {
      for ( i = (unsigned __int64)gpshadowFirst; i; i = *(_QWORD *)(i + 16) )
      {
        if ( *(struct tagWND **)(i + 8) == a1 )
        {
          i = *(_QWORD *)i;
          goto LABEL_14;
        }
      }
    }
    goto LABEL_14;
  }
  v23 = *((_QWORD *)a1 + 47);
  if ( !v23 )
    goto LABEL_14;
  if ( (*(_DWORD *)v23 & 4) == 0 )
  {
    if ( i || (i = *(_QWORD *)(v23 + 8)) != 0 )
      i &= -(__int64)((unsigned int)IntersectRect(v30, (int *)a1 + 28, (int *)(i + 112)) != 0);
    if ( *((_DWORD *)a1 + 86) != 1 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 776LL) & 0x4000) == 0 )
    {
LABEL_14:
      if ( i )
      {
        v1 = ValidateHmonitorNoRip(*(_QWORD *)(i + 352));
        if ( v1 )
          return v1;
      }
      v9 = *((_QWORD *)a1 + 10);
      for ( j = *((_QWORD *)a1 + 9); ; j = *(_QWORD *)(j + 72) )
      {
        do
        {
          if ( v9 )
          {
            v11 = *((_BYTE *)a1 + 51) & 8;
            v12 = ((*((_BYTE *)a1 + 50) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 51) >> 5) & 1) != 0;
            v28 = v12;
            if ( (*(_BYTE *)(v9 + 55) & 0x10) != 0
              && ((*(_BYTE *)(v9 + 40) & 8) != 0 || (*(_BYTE *)(v9 + 54) & 3) != 0)
              && !IsRectEmptyInl((const struct tagRECT *)(v9 + 128))
              && ((*(_BYTE *)(v9 + 50) & 8) == 0 || (*(_BYTE *)(v9 + 51) & 0x20) != 0)
              && (*(_QWORD *)(v16 + 384) == *(_QWORD *)(v15 + 384) || *(_QWORD *)(v16 + 376) == *(_QWORD *)(v15 + 376))
              && (unsigned int)SameCoordinateSpace(*(_QWORD *)(v16 + 376), *(_QWORD *)(v15 + 376)) )
            {
              if ( !v11 && !v12 )
                goto LABEL_34;
              v24 = (_QWORD *)((char *)a1 + 112);
              v25 = IsAdjacentRect((const struct tagRECT *)a1 + 7, (const struct tagRECT *)(v9 + 112));
              v26 = v25;
              if ( !v11 || v25 || (unsigned int)IntersectRect(v31, (int *)a1 + 28, (int *)(v9 + 112)) )
              {
                if ( !v28 || v26 )
                  goto LABEL_34;
                if ( (unsigned int)UnionRect(v31, (char *)a1 + 112, v9 + 112) )
                {
                  v27 = v31[0] - *v24;
                  if ( v31[0] == *v24 )
                    v27 = v31[1] - *((_QWORD *)a1 + 15);
                  if ( !v27 )
                  {
LABEL_34:
                    v5 = *(_QWORD *)(v9 + 352);
                    return ValidateHmonitorNoRip(v5);
                  }
                }
              }
            }
            v9 = *(_QWORD *)(v9 + 80);
          }
          else if ( !j )
          {
            return v1;
          }
        }
        while ( !j );
        v13 = *((_BYTE *)a1 + 51) & 8;
        v14 = ((*((_BYTE *)a1 + 50) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 51) >> 5) & 1) != 0;
        v29 = v14;
        if ( (*(_BYTE *)(j + 55) & 0x10) != 0
          && ((*(_BYTE *)(j + 40) & 8) != 0 || (*(_BYTE *)(j + 54) & 3) != 0)
          && !IsRectEmptyInl((const struct tagRECT *)(j + 128))
          && ((*(_BYTE *)(j + 50) & 8) == 0 || (*(_BYTE *)(j + 51) & 0x20) != 0)
          && (*(_QWORD *)(v18 + 384) == *(_QWORD *)(v17 + 384) || *(_QWORD *)(v18 + 376) == *(_QWORD *)(v17 + 376)) )
        {
          if ( (unsigned int)SameCoordinateSpace(*(_QWORD *)(v18 + 376), *(_QWORD *)(v17 + 376)) )
          {
            if ( !v13 && !v14 )
              break;
            v19 = (_QWORD *)((char *)a1 + 112);
            v20 = IsAdjacentRect((const struct tagRECT *)a1 + 7, (const struct tagRECT *)(j + 112));
            v21 = v20;
            if ( !v13 || v20 || (unsigned int)IntersectRect(v30, (int *)a1 + 28, (int *)(j + 112)) )
            {
              if ( !v29 || v21 )
                break;
              if ( (unsigned int)UnionRect(v30, (char *)a1 + 112, j + 112) )
              {
                v22 = v30[0] - *v19;
                if ( v30[0] == *v19 )
                  v22 = v30[1] - *((_QWORD *)a1 + 15);
                if ( !v22 )
                  break;
              }
            }
          }
        }
      }
      v5 = *(_QWORD *)(j + 352);
      return ValidateHmonitorNoRip(v5);
    }
  }
  return 0LL;
}
