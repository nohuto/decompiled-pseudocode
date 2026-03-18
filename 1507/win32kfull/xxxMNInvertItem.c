/*
 * XREFs of xxxMNInvertItem @ 0x1C010D450
 * Callers:
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0244684 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C004ED7C (GetpwndNotifypMenuState.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0051CA4 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSetViewportOrg @ 0x1C00F8B4C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     MNPositionSysMenu @ 0x1C0118354 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C0217528 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C023E9C4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C023EF28 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C023F9D4 (MNEraseBackground.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMNInvertItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
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
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  bool v30; // zf
  unsigned int v31; // edx
  _QWORD *v32; // rax
  int v33; // ecx
  int v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+40h] [rbp-58h]
  int v39; // [rsp+48h] [rbp-50h] BYREF
  int v40; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v41[4]; // [rsp+50h] [rbp-48h] BYREF
  int v42; // [rsp+A8h] [rbp+10h]

  v5 = (unsigned int)a3;
  v42 = 0;
  v35 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( !a2 || !a4 )
    return 0LL;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 != a4 )
    {
      v41[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v41;
      v41[1] = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
    }
  }
  else
  {
    v11 = a4;
  }
  if ( (int)a3 < 0 )
  {
    if ( a1 && (unsigned int)(a3 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)a3);
    goto LABEL_80;
  }
  if ( (*(_DWORD *)(a2 + 40) & 1) == 0 )
  {
    SysMenuHandle = xxxGetSysMenuHandle(a4, a2, a3, a4);
    if ( a2 == SysMenuHandle )
    {
      MNPositionSysMenu(a4, SysMenuHandle);
      v10 = 1;
      v42 = 1;
    }
  }
  v13 = 0xFFFFFFFFLL;
  if ( (unsigned int)v5 < *(_DWORD *)(a2 + 52) )
    v9 = *(_QWORD *)(a2 + 80) + 152 * v5;
  if ( !v9 || (*(_DWORD *)(a2 + 40) & 1) == 0 && (*(_BYTE *)(a4 + 55) & 0x20) != 0 )
    goto LABEL_81;
  if ( (*(_DWORD *)v9 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)(v9 + 4) & 0x80) == a5 )
      goto LABEL_81;
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
        goto LABEL_81;
    }
    v18 = *(_DWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80);
    v36 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84);
    v38 = *(_DWORD *)(v9 + 72);
    v37 = *(_DWORD *)(v9 + 76);
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
          || v36 > (int)(*(_DWORD *)(v11 + 124) - *(_DWORD *)(v11 + 116) - GetSystemMetricsForWindow(v11, 0x21u)) )
        {
          GreLockVisRgn(*gpDispInfo);
          v21 = *(_DWORD *)(v11 + 112);
          v35 = 1;
          SystemMetricsForWindow = GetSystemMetricsForWindow(v11, 0x21u);
          GreIntersectVisRect(
            DC,
            (unsigned int)(v21 + v38),
            (unsigned int)(*(_DWORD *)(v11 + 116) + v37),
            (unsigned int)(v21 + v20),
            *(_DWORD *)(v11 + 124) - SystemMetricsForWindow);
          GreUnlockVisRgn(*gpDispInfo);
        }
      }
    }
    TextAlign = GreGetTextAlign(DC);
    v24 = TextAlign;
    if ( (*(_DWORD *)v9 & 0x2000) != 0 )
      GreSetTextAlign(DC, TextAlign | 0x100);
    GetDPIMETRICS((struct tagWND *)v11);
    v39 = 0;
    v40 = 0;
    GreSelectFontInternal(DC);
    GreGetDCPoint(DC, 4LL, &v39);
    if ( a5 )
      *(_DWORD *)(v9 + 4) |= 0x80u;
    else
      *(_DWORD *)(v9 + 4) &= ~0x80u;
    if ( v42 || *(_QWORD *)(v9 + 104) == 1LL && (*(_DWORD *)(a2 + 40) & 1) == 0 )
      goto LABEL_76;
    if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
    {
      v26 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v26 == -1 || (unsigned int)v26 >= *(_DWORD *)(a2 + 52) )
        v27 = 0LL;
      else
        v27 = *(_QWORD *)(a2 + 80) + 152 * v26;
      GreSetViewportOrg(DC, v39, v40 - *(_DWORD *)(v27 + 76));
    }
    if ( *(_QWORD *)(a2 + 112)
      && !(unsigned int)MNDrawHilite((struct tagMENU *)a2, (struct tagITEM *)v9)
      && !(unsigned int)MNIsOwnerDrawItem(v25, (_DWORD *)v9) )
    {
      v28 = GreSetBkMode(DC, 1);
      MNEraseBackground(DC, a2, *(_DWORD *)(v9 + 72));
      GreSetBkMode(DC, v28);
    }
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 288) & 0x10000000) != 0 )
      {
        v31 = *(unsigned __int16 *)(v11 + 360);
LABEL_75:
        xxxDrawMenuItem(DC, v31, a2, v9, 1, (struct tagWND *)v11);
LABEL_76:
        if ( v35 )
          RecalcDCVisRgn(DC);
        GreSelectFontInternal(DC);
        GreSetViewportOrg(DC, v39, v40);
        GreSetTextAlign(DC, v24);
        _ReleaseDC(DC);
        goto LABEL_79;
      }
      v30 = *(_DWORD *)(v11 + 344) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0 )
        goto LABEL_74;
      v30 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0;
    }
    if ( v30 )
    {
      v31 = 96;
      goto LABEL_75;
    }
LABEL_74:
    v31 = *(unsigned __int16 *)(gpsi + 7286LL);
    goto LABEL_75;
  }
LABEL_79:
  if ( a5 )
  {
LABEL_80:
    v32 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v33, v11, a2, v5, (__int64)v32);
  }
LABEL_81:
  if ( v11 != a4 )
    ThreadUnlock1(v13, a2);
  if ( (unsigned int)MNGetpItemIndex(a2, v9) == -1 )
    return 0LL;
  return v9;
}
