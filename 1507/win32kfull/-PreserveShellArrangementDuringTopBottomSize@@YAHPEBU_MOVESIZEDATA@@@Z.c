/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C0205A04
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020530C (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C3AA0 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020505C (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C02050D4 (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

__int64 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  __int64 v3; // r9
  unsigned int v4; // edi
  int v5; // edx
  struct tagRECT *v6; // rbx
  __int64 v7; // rcx
  char OverlapCoordinatesForArrangement; // al
  int ShellArrangedWindowType; // eax
  int v10; // eax
  struct tagRECT v12; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 64) & 2) != 0
    && ((v2 = *((_DWORD *)a1 + 40), (unsigned int)(v2 - 6) <= 2) || (unsigned int)(v2 - 3) <= 2) )
  {
    v3 = *(_QWORD *)a1;
    v4 = 0;
    v5 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
    if ( v5 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v5 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
        v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 108LL);
      else
        v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 76LL);
    }
    else
    {
      v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 92LL);
    }
    v7 = *(_QWORD *)a1;
    v12 = *(struct tagRECT *)(v3 + 112);
    ReduceArrangedRectangleByFrameMargin(v7, v6, &v12.left);
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v6, &v12, 0);
    ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
    if ( (unsigned __int64)ShellArrangedWindowType < 6 )
    {
      v10 = dword_1C02EBC10[ShellArrangedWindowType];
      LOBYTE(v4) = !_bittest(&v10, (unsigned __int8)(*((_DWORD *)a1 + 40) - 3));
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
