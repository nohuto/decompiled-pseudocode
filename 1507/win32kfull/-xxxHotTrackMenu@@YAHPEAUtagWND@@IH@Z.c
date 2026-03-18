/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02279A0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C007AECC (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // eax
  HDC DCEx; // rbp
  unsigned int v13; // r14d
  int v14; // ecx
  int TextAlign; // eax
  _DWORD *v16; // rcx
  int v17; // r15d
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
  v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v20;
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
  GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 3752LL));
  v13 = 96;
  if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
  {
    v14 = *((unsigned __int16 *)a1 + 180);
  }
  else if ( *((_DWORD *)a1 + 86) )
  {
    v14 = *(unsigned __int16 *)(gpsi + 7286LL);
  }
  else
  {
    v14 = 96;
  }
  GetDPIMETRICSForDpi(v14);
  GreSelectFontInternal(DCEx);
  TextAlign = GreGetTextAlign(DCEx);
  v16 = *(_DWORD **)(v4 + 80);
  v17 = TextAlign;
  if ( v16 && (*v16 & 0x2000) != 0 )
    GreSetTextAlign(DCEx, TextAlign | 0x100);
  if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
  {
    v13 = *((unsigned __int16 *)a1 + 180);
  }
  else if ( *((_DWORD *)a1 + 86) )
  {
    v13 = *(unsigned __int16 *)(gpsi + 7286LL);
  }
  xxxDrawMenuItem(DCEx, v13, v4, v6, 0, 0LL);
  GreSetTextAlign(DCEx, v17);
  ThreadUnlock1(v19, v18);
  _ReleaseDC(DCEx);
  return 1LL;
}
