/*
 * XREFs of xxxMenuBarCompute @ 0x14000AC68
 * Callers:
 *     xxxCalcMenuBar @ 0x140009E50 (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 * Callees:
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140009F5C (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     MNClearCachedPopupSizes @ 0x140235800 (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int16 WindowDpiLastNotify; // bx
  __int64 v13; // rax
  int v14; // ebp
  int v15; // ebx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(v9 + 288) & 0xF;
    if ( v10 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v9 + 288) >> 8) & 0x1FF;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v9 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      goto LABEL_10;
    }
    if ( v10
      || (v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 488LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL) + 272LL);
      goto LABEL_10;
    }
LABEL_9:
    WindowDpiLastNotify = 96;
    goto LABEL_10;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  WindowDpiLastNotify = *(_WORD *)(CurrentProcessWin32Process + 272);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 380) & 0x80000) != 0 )
    goto LABEL_22;
  v13 = PsGetCurrentProcessWin32Process();
  if ( v13 )
    v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
  if ( (*(_DWORD *)(v13 + 808) & 0x100000) != 0 )
  {
LABEL_22:
    if ( *(_WORD *)(**(_QWORD **)a1 + 76LL) != WindowDpiLastNotify )
    {
      v17 = *(_QWORD *)(a1 + 16);
      if ( !v17 )
        v17 = **(_QWORD **)a1;
      MNClearCachedPopupSizes(v17);
      *(_WORD *)(**(_QWORD **)a1 + 76LL) = WindowDpiLastNotify;
    }
  }
  v14 = a5;
  v15 = xxxMNCompute(a1, a2, a2, a3, a4, a5, (__int64)&v19);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 1) == 0 )
  {
    if ( v19 )
      v15 = xxxMNCompute(a1, a2, a2, a3, a4, v14, (__int64)&v19);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v15 + 1);
  if ( !v15 )
    return 0LL;
  return result;
}
