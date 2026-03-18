/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FEFF8
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0201B98 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01CEBD8 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C01FC1B8 (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FC710 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FD5F8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 *v10; // rcx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rax
  char OverlapCoordinatesForArrangement; // al
  int v15; // eax
  struct tagRECT v17; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF

  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  v9 = *(_QWORD *)(v8 + 320);
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 316) & 0x18) == 0 )
    {
      v10 = *(__int64 **)a1;
      if ( *(_QWORD *)(v9 + 16) != v10[2] && (unsigned int)(a3 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 256);
        if ( (v11 & 8) != 0 )
        {
          v12 = *(_OWORD *)(a1 + 224);
          *(_DWORD *)(a1 + 256) = v11 | 2;
          *(_OWORD *)a4 = v12;
          return (*(_DWORD *)(a1 + 256) >> 1) & 1;
        }
        if ( (unsigned int)xxxCallIAMGetArrangementRectangleHandler(*v10, *(_QWORD *)(a1 + 284), &v17, v19)
          && PtInRect(v19, *(_QWORD *)(a1 + 284))
          && (unsigned int)IntersectRect(v18, &v17.left, (int *)(a2 + 76)) )
        {
          v13 = v18[0] - *(_QWORD *)&v17.left;
          if ( v18[0] == *(_QWORD *)&v17.left )
            v13 = v18[1] - *(_QWORD *)&v17.right;
          if ( !v13 )
          {
            OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                                 (const struct tagRECT *const)(a2 + 76),
                                                 &v17,
                                                 1);
            v15 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
            if ( a3 == 1 )
            {
              if ( v15 != 63745 )
                return (*(_DWORD *)(a1 + 256) >> 1) & 1;
            }
            else if ( a3 != 2 || v15 != 63746 )
            {
              return (*(_DWORD *)(a1 + 256) >> 1) & 1;
            }
            TransformShellProvidedRectangles(
              (__int64 *)a1,
              a2,
              a3,
              &v17,
              (__int64)v19,
              *(_QWORD *)(v8 + 320),
              a4,
              a1 + 240);
            *(_DWORD *)(a1 + 256) |= 2u;
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 256) >> 1) & 1;
}
