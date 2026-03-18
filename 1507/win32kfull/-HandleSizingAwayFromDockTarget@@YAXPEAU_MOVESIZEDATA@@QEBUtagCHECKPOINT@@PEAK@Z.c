/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020530C
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C0205E54 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0204F98 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205830 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C0205A04 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0205BAC (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0205C6C (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(
        struct _MOVESIZEDATA *a1,
        const struct tagCHECKPOINT *const a2,
        unsigned int *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r10d
  int v9; // r11d
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  const struct _MOVESIZEDATA *v19; // rcx
  int v20; // ecx
  const struct _MOVESIZEDATA *v21; // rcx
  int v22; // ecx

  v6 = PreserveShellArrangementDuringTopBottomSize(a1);
  v7 = *((_DWORD *)a1 + 54);
  v8 = v6;
  v9 = 768;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_27;
        if ( (unsigned int)(*((_DWORD *)a1 + 40) - 6) > 2
          || (v12 = *((_DWORD *)a1 + 45), (v12 & 0x6000) == 0)
          || (v12 & 0x300) == 0 )
        {
          v14 = *((_DWORD *)a1 + 27);
          *((_DWORD *)a1 + 15) = v14;
          *((_DWORD *)a1 + 7) = v14;
          goto LABEL_27;
        }
        if ( !v8 )
        {
          if ( a2 )
          {
            *((_DWORD *)a1 + 15) = *((_DWORD *)a2 + 1);
            v13 = *((_DWORD *)a2 + 1);
          }
          else
          {
            v13 = *((_DWORD *)a1 + 27);
            *((_DWORD *)a1 + 15) = v13;
          }
          *((_DWORD *)a1 + 7) = v13;
LABEL_25:
          SetDragInThresholdAlways(a1);
          goto LABEL_27;
        }
      }
      else
      {
        *((_DWORD *)a1 + 14) = *((_DWORD *)a1 + 6);
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = *((_DWORD *)a1 + 8);
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 40) - 3) <= 2 )
  {
    v15 = *((_DWORD *)a1 + 45);
    if ( (v15 & 0x6000) != 0 && (v15 & 0x300) != 0 )
    {
      if ( !v8 )
      {
        if ( a2 )
        {
          *((_DWORD *)a1 + 17) = *((_DWORD *)a2 + 3);
          v16 = *((_DWORD *)a2 + 3);
        }
        else
        {
          v16 = *((_DWORD *)a1 + 29);
          *((_DWORD *)a1 + 17) = v16;
        }
        *((_DWORD *)a1 + 9) = v16;
        goto LABEL_25;
      }
LABEL_16:
      SetDragOutToDragInThreshold(a1);
      goto LABEL_27;
    }
  }
  v17 = *((_DWORD *)a1 + 29);
  *((_DWORD *)a1 + 17) = v17;
  *((_DWORD *)a1 + 9) = v17;
LABEL_27:
  if ( !v8 )
  {
    v18 = *((_DWORD *)a1 + 40);
    if ( (unsigned int)(v18 - 1) <= 1 )
    {
      v20 = *((_DWORD *)a1 + 45);
      if ( ((v20 & 0x6000) != 0x6000 || (v9 & v20) != v9)
        && (v18 == 1 && (v20 & 0x2100) == 0x2100 || v18 == 2 && (v20 & 0x4200) == 0x4200) )
      {
        *((_DWORD *)a1 + 64) &= ~2u;
        *((_DWORD *)a1 + 45) = v9 | v20;
        DisableTemporayMetricsOverrides(a1);
        MakeArrangedStateObservable(v21);
        ++*((_DWORD *)a1 + 74);
      }
    }
    else
    {
      *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 64) &= ~2u;
      DisableTemporayMetricsOverrides(a1);
      MakeArrangedStateObservable(v19);
      ++*((_DWORD *)a1 + 75);
    }
  }
  v22 = *((_DWORD *)a1 + 45);
  *((_DWORD *)a1 + 54) = 4;
  if ( (v22 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 45) = v22 & 0xFDFFFFFF;
    if ( a3 )
      *a3 |= 4u;
  }
}
