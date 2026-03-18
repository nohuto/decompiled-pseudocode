/*
 * XREFs of xxxDrawMenuItem @ 0x1C00144C0
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00146B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0014734 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0014A44 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C67B4 (GetDPIServerInfoForDpi.c)
 *     FixHDCBITSBmp @ 0x1C00FBAA4 (FixHDCBITSBmp.c)
 *     BltColor @ 0x1C023DC5C (BltColor.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C023E928 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023E9DC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C029225C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029229C (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 a3, __int64 a4, char a5, struct tagWND *a6)
{
  struct tagMENU *v10; // r8
  struct tagITEM *v11; // r9
  int v12; // eax
  BOOL v13; // r11d
  BOOL v14; // r12d
  BOOL v15; // r13d
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  int *v23; // rbx
  int v24; // r10d
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rdi
  BOOL v38; // ebx
  unsigned int v39; // r15d
  int v40; // [rsp+50h] [rbp-78h]
  unsigned int v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+60h] [rbp-68h]
  __int64 v43; // [rsp+68h] [rbp-60h]
  int v44; // [rsp+E8h] [rbp+20h]

  v41 = 0;
  v43 = 0LL;
  v44 = 0;
  v40 = MNIsOwnerDrawItem(a3, a4, a3, a4);
  v12 = MNDrawHilite(v10, v11);
  if ( v13 )
  {
    v14 = v12 || (*(_DWORD *)(a4 + 4) & 0x10000100) != 0;
    v15 = (*(_BYTE *)(a3 + 40) & 1) == 0;
  }
  else
  {
    v14 = v12;
    v15 = 0;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
  {
    v17 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 16);
    if ( v17 )
    {
      v43 = GreSelectFont(a1, v17);
    }
    else
    {
      v44 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIMETRICSForDpi(a2);
      GetDPIServerInfoForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v13 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
  }
  if ( v40 )
  {
    GreSetTextColor(a1);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage(a1, ((a5 & 1) != 0) + 1, (struct tagMENU *)a3, (struct tagITEM *)a4, 0, 0, a6);
    result = MNGetpItemIndex(a3, a4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (*(_DWORD *)(a3 + 40) & 1) == 0 )
      goto LABEL_10;
    if ( !*(_QWORD *)(a4 + 16) )
      goto LABEL_10;
    if ( (unsigned int)MNIsUAHMenu(a3) )
      goto LABEL_10;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gpsi) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v20 = 0)
        : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v20) )
    {
      v21 = (_QWORD *)gpsi;
    }
    else
    {
      v21 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
      {
        v22 = gpsi + 5748LL;
LABEL_35:
        v23 = (int *)(v22 + 16LL * ((*(_DWORD *)a4 & 0x2000) != 0 ? 92 : 62));
        FixHDCBITSBmp();
        v24 = v23[3];
        v25 = 0;
        if ( (*(_DWORD *)(a4 + 84) - v24 - 2) / 2 > 0 )
          v25 = (*(_DWORD *)(a4 + 84) - v24 - 2) / 2;
        BltColor(a1, *(_DWORD *)(a4 + 76) + v25, v23[2], v24, *v23, v23[1], 1);
LABEL_10:
        MNDrawInsertionBar(a1, (struct tagITEM *)a4);
        result = v41;
        if ( v41 )
          result = GreSetBkMode(a1);
        if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
        {
          if ( v43 )
          {
            return GreSelectFont(a1, v43);
          }
          else
          {
            GreGetTextCharacterExtra(a1);
            return GreSetTextCharacterExtra(a1);
          }
        }
        return result;
      }
    }
    v22 = *v21 + 4260LL;
    goto LABEL_35;
  }
  if ( v14 )
  {
    if ( v13 )
    {
      v26 = gpsi;
      v27 = *(_DWORD *)(gpsi + 3684LL);
LABEL_43:
      v42 = *(_QWORD *)(v26 + 3808);
      goto LABEL_47;
    }
    if ( (*(_DWORD *)(a3 + 40) & 1) != 0 )
    {
      v26 = gpsi;
      v27 = *(_DWORD *)(gpsi + 3620LL);
      goto LABEL_43;
    }
  }
  else if ( v15 )
  {
    v26 = gpsi;
    v27 = *(_DWORD *)(gpsi + 3688LL);
    v42 = *(_QWORD *)(gpsi + 3752LL);
    goto LABEL_47;
  }
  v26 = gpsi;
  v27 = *(_DWORD *)(gpsi + 3584LL);
  v42 = *(_QWORD *)(gpsi + 3752LL);
LABEL_47:
  v28 = *(_DWORD *)(a4 + 4);
  if ( (v28 & 0x20000000) != 0 && !*(_QWORD *)(a4 + 40) || (v28 & 1) == 0 && (*(_DWORD *)(a3 + 40) & 0x10) == 0 )
    goto LABEL_76;
  if ( v14 || v27 != *(_DWORD *)(v26 + 3628) )
    goto LABEL_83;
  if ( (unsigned int)IsDPIAbsoluteSysMet(73LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
    {
      goto LABEL_56;
    }
LABEL_67:
    v26 = gpsi;
    v36 = (_DWORD *)(gpsi + 2560LL);
    goto LABEL_72;
  }
  if ( (unsigned int)IsDPIDWMSysMet(v29)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_67;
  }
LABEL_56:
  if ( (unsigned int)IsDPIDWMSysMet(73LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      ? (v32 = 0)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
        v32) )
  {
    v26 = gpsi;
    v36 = (_DWORD *)(gpsi + 2948LL);
  }
  else
  {
    v26 = gpsi;
    v36 = (_DWORD *)(gpsi + 2172LL);
  }
LABEL_72:
  if ( !*v36 )
  {
    if ( *(_DWORD *)(v26 + 3632) != v27 || *(_DWORD *)(v26 + 3648) != v27 )
    {
      v44 |= (*(_BYTE *)(a3 + 40) & 0x10) != 0 ? 256 : 32;
      goto LABEL_76;
    }
LABEL_75:
    v44 |= 0x10u;
LABEL_76:
    v37 = v42;
    goto LABEL_77;
  }
LABEL_83:
  if ( *(_DWORD *)(v26 + 3636) == v27 )
    goto LABEL_75;
  v37 = *(_QWORD *)(v26 + 3832);
LABEL_77:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(a3 + 112) || v14 || v15 )
  {
    GrePolyPatBlt(a1);
    v38 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
    if ( v14 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(a4 + 72),
        *(_DWORD *)(a4 + 76),
        *(_DWORD *)(a4 + 80),
        *(_DWORD *)(a4 + 84),
        1,
        *(HBRUSH *)(gpsi + 3800LL));
  }
  else
  {
    v38 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
  }
  if ( *(_QWORD *)(a3 + 112) )
  {
    v39 = GreSetBkMode(a1);
    v41 = v39;
  }
  else
  {
    v39 = 0;
  }
  GreSelectBrush(a1, v37);
  xxxDrawState(a1, *(_DWORD *)(a4 + 76), *(_DWORD *)(a4 + 80), *(_DWORD *)(a4 + 84), v44);
  result = MNGetpItemIndex(a3, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( !v38 )
      MNDrawMenu3DHotTracking(a1, (struct tagMENU *)a3, (struct tagITEM *)a4);
    goto LABEL_10;
  }
  if ( v39 )
    return GreSetBkMode(a1);
  return result;
}
