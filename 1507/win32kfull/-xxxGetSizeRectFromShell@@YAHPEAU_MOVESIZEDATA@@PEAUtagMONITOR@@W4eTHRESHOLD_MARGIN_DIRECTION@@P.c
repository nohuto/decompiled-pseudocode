/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C02078FC
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A560 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01D6040 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C0204B24 (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020505C (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C0205F20 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  __int128 *v10; // rcx
  _OWORD *v11; // r9
  __int64 *v12; // r10
  __int128 v13; // xmm0
  __int64 v14; // rax
  char OverlapCoordinatesForArrangement; // al
  int v16; // eax
  struct tagRECT v18; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-20h] BYREF

  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  v9 = *(_QWORD *)(v8 + 312);
  if ( v9
    && (*(_DWORD *)(a1 + 316) & 0x18) == 0
    && *(_QWORD *)(v9 + 16) != *(_QWORD *)(*(_QWORD *)a1 + 16LL)
    && (unsigned int)(a3 - 1) <= 1 )
  {
    if ( !IsRectEmptyInl((const struct tagRECT *)(a1 + 224)) )
    {
      v13 = *v10;
      *(_DWORD *)(a1 + 256) |= 2u;
      *v11 = v13;
      return (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 256), 2);
    }
    if ( (unsigned int)xxxCallIAMGetArrangementRectangleHandler(*v12, *(_QWORD *)(a1 + 284), &v18, v20)
      && PtInRect(v20, *(_QWORD *)(a1 + 284))
      && (unsigned int)IntersectRect(v19, &v18.left, (int *)(a2 + 76)) )
    {
      v14 = v19[0] - *(_QWORD *)&v18.left;
      if ( v19[0] == *(_QWORD *)&v18.left )
        v14 = v19[1] - *(_QWORD *)&v18.right;
      if ( !v14 )
      {
        OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                             (const struct tagRECT *const)(a2 + 76),
                                             &v18,
                                             1);
        v16 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
        if ( a3 == 1 )
        {
          if ( v16 != 63745 )
            return (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 256), 2);
        }
        else if ( a3 != 2 || v16 != 63746 )
        {
          return (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 256), 2);
        }
        TransformShellProvidedRectangles((_DWORD *)a1, a2, a3, &v18, (__int64)v20, *(_QWORD *)(v8 + 312), a4, a1 + 240);
        *(_DWORD *)(a1 + 256) |= 2u;
      }
    }
  }
  return (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 256), 2);
}
