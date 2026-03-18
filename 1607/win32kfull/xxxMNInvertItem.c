/*
 * XREFs of xxxMNInvertItem @ 0x1C013F324
 * Callers:
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C023A75C (xxxHiliteMenuItem.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetpwndNotifypMenuState @ 0x1C00AD4E0 (GetpwndNotifypMenuState.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00B4BBC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00B99DC (GreSetViewportOrg.c)
 *     xxxSendMenuSelect @ 0x1C0140374 (xxxSendMenuSelect.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0236524 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0237348 (MNEraseBackground.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMNInvertItem(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rbp
  __int64 SysMenuHandle; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  _DWORD *v17; // r8
  int v18; // ebx
  HDC DC; // r14
  int v20; // r12d
  int v21; // ebx
  int SystemMetricsForWindow; // eax
  int TextAlign; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebx
  unsigned int v35; // edx
  _QWORD *v36; // rax
  int v37; // ecx
  __int64 v39; // rax
  int v40; // [rsp+30h] [rbp-68h]
  int v41; // [rsp+34h] [rbp-64h]
  int v42; // [rsp+38h] [rbp-60h]
  int v43; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+48h] [rbp-50h] BYREF
  int v45; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v46[4]; // [rsp+50h] [rbp-48h] BYREF
  int v47; // [rsp+A8h] [rbp+10h]

  v5 = (unsigned int)a3;
  v47 = 0;
  v40 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( !a2 || !a4 )
    return 0LL;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 != a4 )
    {
      v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v46;
      v46[1] = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
    }
  }
  else
  {
    v11 = a4;
  }
  if ( a3 < 0 )
  {
    if ( a1 && (unsigned int)(a3 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)a3);
    goto LABEL_74;
  }
  if ( (*(_DWORD *)(a2 + 40) & 1) == 0 )
  {
    SysMenuHandle = xxxGetSysMenuHandle(a4);
    if ( a2 == SysMenuHandle )
    {
      MNPositionSysMenu(a4, SysMenuHandle);
      v10 = 1;
      v47 = 1;
    }
  }
  v13 = 0xFFFFFFFFLL;
  if ( (unsigned int)v5 < *(_DWORD *)(a2 + 52) )
    v9 = *(_QWORD *)(a2 + 80) + 152 * v5;
  if ( !v9 || (*(_DWORD *)(a2 + 40) & 1) == 0 && (*(_BYTE *)(a4 + 55) & 0x20) != 0 )
    goto LABEL_75;
  if ( (*(_DWORD *)v9 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)(v9 + 4) & 0x80) == a5 )
      goto LABEL_75;
    if ( a5 && a1 && (*(_DWORD *)(a2 + 128) & 3) != 0 )
    {
      v14 = *(unsigned int *)(a2 + 120);
      if ( (int)v5 >= (int)v14 )
      {
        if ( (_DWORD)v14 == -1 || (unsigned int)v14 >= *(_DWORD *)(a2 + 52) )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)(a2 + 80) + 152 * v14;
        v16 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84) - *(_DWORD *)(v15 + 76) - *(_DWORD *)(a2 + 60);
        if ( v16 > 0 )
        {
          v17 = (_DWORD *)(v15 + 84);
          do
          {
            if ( (int)v14 >= *(_DWORD *)(a2 + 52) )
              break;
            v16 -= *v17;
            v14 = (unsigned int)(v14 + 1);
            v17 += 38;
          }
          while ( v16 > 0 );
        }
        if ( (int)v14 >= *(_DWORD *)(a2 + 52) )
          v14 = *(unsigned int *)(a2 + 52);
      }
      else
      {
        v14 = (unsigned int)v5;
      }
      if ( (unsigned int)xxxMNSetTop(a1, v14) )
        xxxInternalUpdateWindow((struct tagWND *)v11, 1u);
      if ( (unsigned int)MNGetpItemIndex(a2, v9) == -1 )
        goto LABEL_75;
    }
    v18 = *(_DWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80);
    v41 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84);
    v43 = *(_DWORD *)(v9 + 72);
    v42 = *(_DWORD *)(v9 + 76);
    if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
    {
      DC = (HDC)_GetDC(v11);
    }
    else
    {
      DC = (HDC)_GetDCEx(v11, 0LL, 65537LL);
      if ( (*(_BYTE *)(v11 + 54) & 4) != 0 && !v10 )
      {
        v20 = *(_DWORD *)(v11 + 120) - *(_DWORD *)(v11 + 112) - GetSystemMetricsForWindow(v11, 0x20u);
        if ( v18 > v20
          || v41 > (int)(*(_DWORD *)(v11 + 124) - *(_DWORD *)(v11 + 116) - GetSystemMetricsForWindow(v11, 0x21u)) )
        {
          GreLockVisRgn(*gpDispInfo);
          v21 = *(_DWORD *)(v11 + 112);
          v40 = 1;
          SystemMetricsForWindow = GetSystemMetricsForWindow(v11, 0x21u);
          GreIntersectVisRect(
            DC,
            (unsigned int)(v21 + v43),
            (unsigned int)(*(_DWORD *)(v11 + 116) + v42),
            (unsigned int)(v21 + v20),
            *(_DWORD *)(v11 + 124) - SystemMetricsForWindow);
          GreUnlockVisRgn(*gpDispInfo);
        }
      }
    }
    TextAlign = GreGetTextAlign(DC);
    v27 = TextAlign;
    if ( (*(_DWORD *)v9 & 0x2000) != 0 )
      GreSetTextAlign(DC, TextAlign | 0x100);
    GetDPIMETRICS((struct tagWND *)v11, v24, v25, v26);
    v44 = 0;
    v45 = 0;
    GreSelectFontInternal(DC);
    GreGetDCPoint(DC, 4LL, &v44);
    if ( a5 )
      *(_DWORD *)(v9 + 4) |= 0x80u;
    else
      *(_DWORD *)(v9 + 4) &= ~0x80u;
    if ( v47 || *(_QWORD *)(v9 + 104) == 1LL && (*(_DWORD *)(a2 + 40) & 1) == 0 )
      goto LABEL_70;
    if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
    {
      v32 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v32 == -1 || (unsigned int)v32 >= *(_DWORD *)(a2 + 52) )
        v33 = 0LL;
      else
        v33 = *(_QWORD *)(a2 + 80) + 152 * v32;
      GreSetViewportOrg(DC, v44, v45 - *(_DWORD *)(v33 + 76));
    }
    if ( *(_QWORD *)(a2 + 112)
      && !(unsigned int)MNDrawHilite((struct tagMENU *)a2, (struct tagITEM *)v9)
      && !(unsigned int)MNIsOwnerDrawItem(v29, (_DWORD *)v9) )
    {
      v34 = GreSetBkMode(DC, 1);
      MNEraseBackground(DC, a2, *(_DWORD *)(v9 + 72));
      GreSetBkMode(DC, v34);
    }
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 288) & 0x10000000) != 0 )
      {
        v35 = *(unsigned __int16 *)(v11 + 356);
        goto LABEL_69;
      }
      if ( (*(_DWORD *)(v11 + 352) & 0xF) != 0
        || (v39 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)) == 0
        || (*(_DWORD *)(*(_QWORD *)(v39 + 8) + 244LL) & 1) == 0 )
      {
LABEL_68:
        v35 = *(unsigned __int16 *)(gpsi + 8678LL);
LABEL_69:
        xxxDrawMenuItem(DC, v35, a2, v9, 1, (struct tagWND *)v11);
LABEL_70:
        if ( v40 )
          RecalcDCVisRgn(DC);
        GreSelectFontInternal(DC);
        GreSetViewportOrg(DC, v44, v45);
        GreSetTextAlign(DC, v27);
        _ReleaseDC(DC);
        goto LABEL_73;
      }
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) != 0 )
    {
      goto LABEL_68;
    }
    v35 = 96;
    goto LABEL_69;
  }
LABEL_73:
  if ( a5 )
  {
LABEL_74:
    v36 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v37, v11, a2, v5, (__int64)v36);
  }
LABEL_75:
  if ( v11 != a4 )
    ThreadUnlock1(v13, a2);
  if ( (unsigned int)MNGetpItemIndex(a2, v9) == -1 )
    return 0LL;
  return v9;
}
