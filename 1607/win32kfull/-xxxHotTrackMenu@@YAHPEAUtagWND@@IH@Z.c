/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC (xxxMNRecomputeBarIfNeeded.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // eax
  HDC DCEx; // rbp
  unsigned int v13; // r14d
  int TextAlign; // eax
  _DWORD *v15; // rcx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_QWORD *)a1 + 24);
  if ( (*((_BYTE *)a1 + 40) & 1) == 0 || !v4 )
    return 0LL;
  v6 = a2 == -1 || a2 >= *(_DWORD *)(v4 + 52) ? 0LL : *(_QWORD *)(v4 + 80) + 152LL * a2;
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 24);
  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v20;
  v20[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxMNRecomputeBarIfNeeded(a1, v7);
  if ( (unsigned int)MNGetpItemIndex(v4, v6) == -1 )
  {
LABEL_9:
    ThreadUnlock1(v9, v8);
    return 0LL;
  }
  if ( a3 )
  {
    v11 = *(_DWORD *)(v6 + 4);
    if ( (v11 & 1) != 0 )
      goto LABEL_9;
    *(_DWORD *)(v6 + 4) = v11 | 0x100;
  }
  else
  {
    *(_DWORD *)(v6 + 4) &= ~0x100u;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 5144LL));
  v13 = 96;
  GetDPIMETRICSForDpi();
  GreSelectFontInternal(DCEx);
  TextAlign = GreGetTextAlign(DCEx);
  v15 = *(_DWORD **)(v4 + 80);
  v16 = TextAlign;
  if ( v15 && (*v15 & 0x2000) != 0 )
    GreSetTextAlign(DCEx, TextAlign | 0x100);
  if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
  {
    v13 = *((unsigned __int16 *)a1 + 178);
  }
  else if ( (*((_DWORD *)a1 + 88) & 0xF) != 0
         || (v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) == 0
         || (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 244LL) & 1) == 0 )
  {
    v13 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  xxxDrawMenuItem(DCEx, v13, v4, v6, 0, 0LL);
  GreSetTextAlign(DCEx, v16);
  ThreadUnlock1(v19, v18);
  _ReleaseDC(DCEx);
  return 1LL;
}
