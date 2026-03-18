/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020514C
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C0205E54 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205830 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C0205B7C (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0205BF0 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020618C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(
        __int64 a1,
        struct tagMONITOR *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r14d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // eax
  __int128 v16; // xmm6
  struct _MOVESIZEDATA *v17; // rcx

  v5 = 0;
  if ( a4 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 160) - 3;
  }
  else
  {
    if ( a4 )
      goto LABEL_7;
    v9 = *(_DWORD *)(a1 + 160) - 6;
  }
  if ( v9 <= 2 )
  {
    *(_QWORD *)(a1 + 208) = a2;
    return;
  }
LABEL_7:
  v10 = *(_DWORD *)(a1 + 160);
  if ( (v10 <= 7 && (v11 = 146, _bittest(&v11, v10)) && a4 == 1
     || v10 <= 8 && (v12 = 292, _bittest(&v12, v10)) && a4 == 2)
    && (v13 = *(_DWORD *)(a1 + 180), (v13 & 0x6000) == 0x6000)
    && (v13 & 0x300) == 0x300 )
  {
    *(_QWORD *)(a1 + 208) = a2;
  }
  else
  {
    v14 = 0;
    if ( (v10 - 3 <= 2 || v10 - 6 <= 2) && (a4 == 3 || !a4) && (*(_BYTE *)(a1 + 256) & 2) != 0 )
      v14 = 1;
    v15 = *(_DWORD *)(a1 + 180);
    v16 = *(_OWORD *)(a1 + 24);
    if ( (v15 & 0x4000000) != 0 && !v14 && (v15 & 0x2000000) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a1 + 180) = v15 | 0x2000000;
    }
    if ( (unsigned int)VerticalSizeRectFromHitTarget(a1, a2, a4, a3, *(_DWORD *)(a1 + 276)) )
    {
      if ( v5 && a5 )
        *a5 |= 8u;
      if ( !a4 || a4 == 3 )
      {
        if ( !v14 )
        {
          *(_DWORD *)(a1 + 180) |= 0x300u;
          *(_DWORD *)(a1 + 256) &= ~2u;
          MakeArrangedStateObservable((const struct _MOVESIZEDATA *const)a1);
        }
        SetDragInToDragOutThreshold((struct _MOVESIZEDATA *)a1);
        *(_DWORD *)(a1 + 216) = a4;
        SetCurrentHitTargetMonitor(v17, a2, 1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 180) &= ~0x2000000u;
      *(_OWORD *)(a1 + 24) = v16;
      *(_QWORD *)(a1 + 208) = a2;
      *(_DWORD *)(a1 + 216) = a4;
    }
  }
}
