/*
 * XREFs of xxxMNInvertItem @ 0x1C0139128
 * Callers:
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0244814 (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0014A44 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetpwndNotifypMenuState @ 0x1C00CAFB0 (GetpwndNotifypMenuState.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0101830 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C0139480 (xxxSendMenuSelect.c)
 *     MNPositionSysMenu @ 0x1C0143254 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C021738C (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C023EB74 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C023F0C4 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C023FB70 (MNEraseBackground.c)
 */

__int64 __fastcall xxxMNInvertItem(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rcx
  int v13; // ebx
  HDC DC; // r14
  int TextAlign; // eax
  int v16; // r12d
  struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned int v22; // edx
  _QWORD *v23; // rax
  int v24; // ecx
  __int64 SysMenuHandle; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // ecx
  _DWORD *v30; // r8
  int v31; // r12d
  int v32; // ebx
  int SystemMetricsForWindow; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rcx
  int v38; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+34h] [rbp-64h]
  int v40; // [rsp+38h] [rbp-60h]
  int v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-58h]
  int v43; // [rsp+48h] [rbp-50h] BYREF
  int v44; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v45[4]; // [rsp+50h] [rbp-48h] BYREF
  int v46; // [rsp+A8h] [rbp+10h]

  v5 = (unsigned int)a3;
  v46 = 0;
  v38 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( !a2 || !a4 )
    return 0LL;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 != a4 )
    {
      v45[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v45;
      v45[1] = v11;
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
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(a2 + 40) & 1) == 0 )
  {
    SysMenuHandle = xxxGetSysMenuHandle(a4);
    if ( a2 == SysMenuHandle )
    {
      MNPositionSysMenu(a4, SysMenuHandle);
      v10 = 1;
      v46 = 1;
    }
  }
  v12 = 0xFFFFFFFFLL;
  if ( (unsigned int)v5 < *(_DWORD *)(a2 + 52) )
    v9 = *(_QWORD *)(a2 + 80) + 152 * v5;
  if ( !v9 || (*(_DWORD *)(a2 + 40) & 1) == 0 && (*(_BYTE *)(a4 + 55) & 0x20) != 0 )
    goto LABEL_39;
  if ( (*(_DWORD *)v9 & 0x800) == 0 )
  {
    if ( (*(_DWORD *)(v9 + 4) & 0x80) == a5 )
      goto LABEL_39;
    if ( a5 && a1 && (*(_DWORD *)(a2 + 128) & 3) != 0 )
    {
      v27 = *(unsigned int *)(a2 + 120);
      if ( (int)v5 >= (int)v27 )
      {
        if ( (_DWORD)v27 == -1 || (unsigned int)v27 >= *(_DWORD *)(a2 + 52) )
          v28 = 0LL;
        else
          v28 = *(_QWORD *)(a2 + 80) + 152 * v27;
        v29 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84) - *(_DWORD *)(v28 + 76) - *(_DWORD *)(a2 + 60);
        if ( v29 > 0 )
        {
          v30 = (_DWORD *)(v28 + 84);
          do
          {
            if ( (int)v27 >= *(_DWORD *)(a2 + 52) )
              break;
            v29 -= *v30;
            v27 = (unsigned int)(v27 + 1);
            v30 += 38;
          }
          while ( v29 > 0 );
        }
        if ( (int)v27 >= *(_DWORD *)(a2 + 52) )
          v27 = *(unsigned int *)(a2 + 52);
      }
      else
      {
        v27 = (unsigned int)v5;
      }
      if ( (unsigned int)xxxMNSetTop(a1, v27) )
        xxxInternalUpdateWindow((struct tagWND *)v11, 1u);
      if ( (unsigned int)MNGetpItemIndex(a2, v9) == -1 )
        goto LABEL_39;
    }
    v13 = *(_DWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80);
    v39 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84);
    v41 = *(_DWORD *)(v9 + 72);
    v40 = *(_DWORD *)(v9 + 76);
    if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
    {
      DC = (HDC)_GetDC(v11);
    }
    else
    {
      DC = (HDC)_GetDCEx(v11, 0LL, 65537LL);
      if ( (*(_BYTE *)(v11 + 54) & 4) != 0 && !v10 )
      {
        v31 = *(_DWORD *)(v11 + 120) - *(_DWORD *)(v11 + 112) - GetSystemMetricsForWindow(v11, 0x20u);
        if ( v13 > v31
          || v39 > (int)(*(_DWORD *)(v11 + 124) - *(_DWORD *)(v11 + 116) - GetSystemMetricsForWindow(v11, 0x21u)) )
        {
          GreLockVisRgn(*gpDispInfo);
          v32 = *(_DWORD *)(v11 + 112);
          v38 = 1;
          SystemMetricsForWindow = GetSystemMetricsForWindow(v11, 0x21u);
          GreIntersectVisRect(
            DC,
            (unsigned int)(v32 + v41),
            (unsigned int)(*(_DWORD *)(v11 + 116) + v40),
            (unsigned int)(v32 + v31),
            *(_DWORD *)(v11 + 124) - SystemMetricsForWindow);
          GreUnlockVisRgn(*gpDispInfo);
        }
      }
    }
    TextAlign = GreGetTextAlign(DC);
    v16 = TextAlign;
    if ( (*(_DWORD *)v9 & 0x2000) != 0 )
      GreSetTextAlign(DC, TextAlign | 0x100);
    DPIMETRICS = GetDPIMETRICS((struct tagWND *)v11);
    v18 = GreSelectFont((__int64)DC, *((_QWORD *)DPIMETRICS + 1));
    v43 = 0;
    v44 = 0;
    v42 = v18;
    v19 = v18;
    GreGetDCPoint(DC, 4LL, &v43);
    if ( a5 )
      *(_DWORD *)(v9 + 4) |= 0x80u;
    else
      *(_DWORD *)(v9 + 4) &= ~0x80u;
    if ( v46 || *(_QWORD *)(v9 + 104) == 1LL && (*(_DWORD *)(a2 + 40) & 1) == 0 )
      goto LABEL_34;
    if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
    {
      v34 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v34 == -1 || (unsigned int)v34 >= *(_DWORD *)(a2 + 52) )
        v35 = 0LL;
      else
        v35 = *(_QWORD *)(a2 + 80) + 152 * v34;
      GreSetViewportOrg(DC, v43, v44 - *(_DWORD *)(v35 + 76));
    }
    if ( *(_QWORD *)(a2 + 112)
      && !(unsigned int)MNDrawHilite((struct tagMENU *)a2, (struct tagITEM *)v9)
      && !(unsigned int)MNIsOwnerDrawItem(v20, (_DWORD *)v9) )
    {
      v36 = GreSetBkMode(DC, 1);
      MNEraseBackground(DC, a2, *(_DWORD *)(v9 + 72));
      GreSetBkMode(DC, v36);
      v19 = v42;
    }
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 288) & 0x10000000) != 0 )
      {
        v22 = *(unsigned __int16 *)(v11 + 360);
        goto LABEL_33;
      }
      v21 = *(_DWORD *)(v11 + 344) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0 )
      {
LABEL_32:
        v22 = *(unsigned __int16 *)(gpsi + 7286LL);
LABEL_33:
        xxxDrawMenuItem(DC, v22, a2, v9, 1, (struct tagWND *)v11);
LABEL_34:
        if ( v38 )
          RecalcDCVisRgn(DC);
        GreSelectFont((__int64)DC, v19);
        GreSetViewportOrg(DC, v43, v44);
        GreSetTextAlign(DC, v16);
        _ReleaseDC(DC);
        goto LABEL_37;
      }
      v21 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) == 0;
    }
    if ( v21 )
    {
      v22 = 96;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
LABEL_37:
  if ( a5 )
  {
LABEL_38:
    v23 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v24, v11, a2, v5, (__int64)v23);
  }
LABEL_39:
  if ( v11 != a4 )
    ThreadUnlock1(v12, a2);
  if ( (unsigned int)MNGetpItemIndex(a2, v9) == -1 )
    return 0LL;
  return v9;
}
