/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01FD0D0
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01FC9C0 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C47C8 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FC710 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C01FC788 (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

__int64 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct tagRECT *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  char OverlapCoordinatesForArrangement; // al
  int ShellArrangedWindowType; // eax
  int v11; // eax
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 64) & 2) != 0
    && ((v2 = *((_DWORD *)a1 + 40), (unsigned int)(v2 - 6) <= 2) || (unsigned int)(v2 - 3) <= 2) )
  {
    v3 = *(_QWORD *)a1;
    v4 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) == 0
      && (v5 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 244LL) & 1) != 0 )
    {
      v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 92LL);
    }
    else if ( (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) == 1
           && (v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v7 + 8) + 244LL) & 1) != 0 )
    {
      v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 108LL);
    }
    else
    {
      v6 = (struct tagRECT *)(*((_QWORD *)a1 + 24) + 76LL);
    }
    v8 = *(_QWORD *)a1;
    v13 = *(struct tagRECT *)(v3 + 112);
    ReduceArrangedRectangleByFrameMargin(v8, v6, &v13.left);
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v6, &v13, 0);
    ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
    if ( (unsigned __int64)ShellArrangedWindowType < 6 )
    {
      v11 = dword_1C02F0290[ShellArrangedWindowType];
      LOBYTE(v4) = !_bittest(&v11, (unsigned __int8)(*((_DWORD *)a1 + 40) - 3));
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
