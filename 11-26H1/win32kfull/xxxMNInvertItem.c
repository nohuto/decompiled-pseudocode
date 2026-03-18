/*
 * XREFs of xxxMNInvertItem @ 0x140120C3C
 * Callers:
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1402F2B8C (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000BCD4 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     GreSetViewportOrg @ 0x14012045C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GetpwndNotifypMenuState @ 0x140122DB8 (GetpwndNotifypMenuState.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1402084A0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402FA3AC (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1402FA3FC (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1402FA5BC (MNEraseBackground.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, struct tagWND *a4, int a5)
{
  struct tagITEM *v6; // r15
  int v8; // r12d
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r8d
  HDC DC; // rsi
  _QWORD *DpiMetricsForWindow; // rax
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rax
  struct tagWND *v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // r10
  int v30; // r9d
  int i; // edx
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 DCEx; // rax
  __int64 v39; // rcx
  int v40; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int DpiDependentMetric; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct tagMENU *v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // [rsp+38h] [rbp-31h]
  int v57; // [rsp+38h] [rbp-31h]
  int v58; // [rsp+3Ch] [rbp-2Dh]
  int v59; // [rsp+40h] [rbp-29h]
  int v60; // [rsp+44h] [rbp-25h]
  int v61; // [rsp+48h] [rbp-21h]
  struct _POINTL v62; // [rsp+50h] [rbp-19h] BYREF
  int v63; // [rsp+58h] [rbp-11h]
  int v64; // [rsp+5Ch] [rbp-Dh]
  __int64 v65; // [rsp+60h] [rbp-9h]
  __int64 v66[3]; // [rsp+68h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+80h] [rbp+17h] BYREF

  v6 = 0LL;
  v58 = 0;
  v8 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v66);
  v61 = 0;
  v62 = 0LL;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
    goto LABEL_32;
  if ( **a1 )
  {
    v10 = **a1;
    v11 = *(struct tagWND **)(v10 + 16);
    if ( v11 != a4 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, *(_QWORD *)(v10 + 16));
  }
  else
  {
    v11 = a4;
  }
  if ( v8 < 0 )
  {
    if ( **a1 && (unsigned int)(v8 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)v8);
LABEL_26:
    v21 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v22, v11, a2, v8, v21);
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    v66[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v66, SysMenuPtr);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a2, v66) )
    {
      MNPositionSysMenu(a4);
      v58 = 1;
    }
  }
  v12 = (__int64)a2[2];
  if ( !v12 )
    v12 = **a2;
  v6 = (struct tagITEM *)MNGetpItemFromIndex(v12, v8);
  if ( v6
    && ((*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 || (*(_BYTE *)(*((_QWORD *)a4 + 5) + 31LL) & 0x20) == 0) )
  {
    if ( (**(_DWORD **)v6 & 0x800) != 0 )
      goto LABEL_25;
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 0x80) != a5 )
    {
      v13 = 96;
      if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
        goto LABEL_15;
      if ( a3 >= *(_DWORD *)(**a2 + 116) )
      {
        v28 = (__int64)a2[2];
        if ( !v28 )
          v28 = **a2;
        v29 = MNGetpItemFromIndex(v28, *(_DWORD *)(v28 + 116));
        v30 = *(_DWORD *)(*(_QWORD *)v6 + 68LL)
            + *(_DWORD *)(*(_QWORD *)v6 + 76LL)
            - *(_DWORD *)(**a2 + 68)
            - *(_DWORD *)(*(_QWORD *)v29 + 68LL);
        for ( i = *(_DWORD *)(**a2 + 116); v30 > 0 && i < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); ++i )
        {
          v36 = *(_QWORD *)v29;
          v29 += 96LL;
          v30 -= *(_DWORD *)(v36 + 76);
        }
      }
      if ( (unsigned int)xxxMNSetTop(a1) )
        xxxInternalUpdateWindow(v11, 1u);
      v37 = (__int64)a2[2];
      if ( !v37 )
        v37 = **a2;
      if ( MNIspItemValid(v37, (__int64)v6) )
      {
LABEL_15:
        v14 = *(_QWORD *)v6;
        v15 = *(_DWORD *)(*(_QWORD *)v6 + 64LL);
        v16 = *(_DWORD *)(*(_QWORD *)v6 + 68LL);
        v63 = v15 + *(_DWORD *)(*(_QWORD *)v6 + 72LL);
        v60 = v15;
        v64 = v16 + *(_DWORD *)(v14 + 76);
        v59 = v16;
        if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v11);
        }
        else
        {
          DCEx = _GetDCEx(v11, 0LL, 65537LL);
          v39 = *((_QWORD *)v11 + 5);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v39 + 30) & 4) != 0 && !v58 )
          {
            v56 = *(_DWORD *)(v39 + 96) - *(_DWORD *)(v39 + 88);
            v40 = *(_DWORD *)(v39 + 288) & 0xF;
            if ( v40 == 3 )
            {
              WindowDpiLastNotify = (*(_DWORD *)(v39 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v39 + 232) & 0x400) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v11);
            }
            else if ( !v40
                   && (v42 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 488LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 64LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 456LL) + 272LL);
            }
            v57 = v56 - GetDpiDependentMetric(14, WindowDpiLastNotify);
            v43 = *((_QWORD *)v11 + 5);
            v44 = *(_DWORD *)(v43 + 288) & 0xF;
            if ( v44 == 3 )
            {
              v45 = (*(_DWORD *)(v43 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v43 + 232) & 0x400) != 0 )
            {
              v45 = GetWindowDpiLastNotify((__int64)v11);
            }
            else if ( !v44
                   && (v46 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 488LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 64LL) & 1) != 0 )
            {
              v45 = 96;
            }
            else
            {
              v45 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 456LL) + 272LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(15, v45);
            LODWORD(v65) = DpiDependentMetric;
            if ( v63 > v57
              || (v48 = *(_DWORD *)(*((_QWORD *)v11 + 5) + 100LL)
                      - *(_DWORD *)(*((_QWORD *)v11 + 5) + 92LL)
                      - DpiDependentMetric,
                  v64 > (int)v48) )
            {
              GreLockVisRgn(v49, v48, DpiDependentMetric);
              v61 = 1;
              GreIntersectVisRect(
                DC,
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 5) + 88LL) + v60),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 5) + 92LL) + v59),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 5) + 88LL) + v57),
                *(_DWORD *)(*((_QWORD *)v11 + 5) + 100LL) - v65);
              GreUnlockVisRgn(v50);
            }
          }
        }
        GreGetTextAlign(DC);
        if ( (**(_DWORD **)v6 & 0x2000) != 0 )
          GreSetTextAlign(DC);
        DpiMetricsForWindow = (_QWORD *)GetDpiMetricsForWindow(v11);
        v65 = GreSelectFont(DC, *DpiMetricsForWindow);
        GreGetDCPoint(DC, 4u, &v62);
        v19 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
        if ( a5 )
          v20 = v19 | 0x80;
        else
          v20 = v19 & 0xFFFFFF7F;
        *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v20;
        if ( v58 || *(_QWORD *)(*(_QWORD *)v6 + 96LL) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
          goto LABEL_22;
        if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
        {
          v51 = (__int64)a2[2];
          if ( !v51 )
            v51 = **a2;
          v52 = MNGetpItemFromIndex(v51, *(_DWORD *)(v51 + 116));
          GreSetViewportOrg(DC, v62.x, v62.y - *(_DWORD *)(*(_QWORD *)v52 + 68LL));
        }
        v25 = **a2;
        if ( *(_QWORD *)(*(_QWORD *)(v25 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, v6) )
        {
          v53 = (struct tagMENU *)a2[2];
          if ( !v53 )
            v53 = (struct tagMENU *)**a2;
          if ( !(unsigned int)MNIsOwnerDrawItem(v53, v6) )
          {
            GreSetBkMode(DC);
            MNEraseBackground(DC, *(_DWORD *)(*(_QWORD *)v6 + 72LL), *(_DWORD *)(*(_QWORD *)v6 + 76LL));
            GreSetBkMode(DC);
          }
        }
        if ( !v11 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v25) & 0xF) != 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
            v34 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process )
              v34 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
            v13 = *(unsigned __int16 *)(v34 + 272);
          }
          goto LABEL_41;
        }
        v26 = *((_QWORD *)v11 + 5);
        v27 = *(_DWORD *)(v26 + 288) & 0xF;
        if ( v27 == 3 )
        {
          v54 = (*(_DWORD *)(v26 + 288) >> 8) & 0x1FF;
        }
        else
        {
          if ( (*(_DWORD *)(v26 + 232) & 0x400) == 0 )
          {
            if ( v27
              || (v55 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 488LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 64LL) & 1) == 0 )
            {
              v13 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 456LL) + 272LL);
            }
            goto LABEL_41;
          }
          v54 = GetWindowDpiLastNotify((__int64)v11);
        }
        v13 = v54;
LABEL_41:
        xxxDrawMenuItem(DC, v13, (struct tagMENU ***)a2, (__int64)v6, 1, (__int64)v11);
LABEL_22:
        if ( v61 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC, v65);
        GreSetViewportOrg(DC, v62.x, v62.y);
        GreSetTextAlign(DC);
        _ReleaseDC(DC);
        v8 = a3;
LABEL_25:
        if ( !a5 )
          goto LABEL_27;
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  v23 = (__int64)a2[2];
  if ( !v23 )
    v23 = **a2;
  if ( MNIspItemValid(v23, (__int64)v6) )
  {
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v66);
    return v6;
  }
LABEL_32:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v66);
  return 0LL;
}
