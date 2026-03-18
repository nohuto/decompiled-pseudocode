/*
 * XREFs of xxxDrawMenuItem @ 0x1C0051CE0
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02279A0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0051984 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0051CA4 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0052498 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x1C0053EE8 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     FixHDCBITSBmp @ 0x1C00F4B48 (FixHDCBITSBmp.c)
 *     GetDPIServerInfoForDpi @ 0x1C0100128 (GetDPIServerInfoForDpi.c)
 *     BltColor @ 0x1C023DA94 (BltColor.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C023E778 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023E82C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C0292714 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0292750 (GreSetTextCharacterExtra.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 a3, __int64 a4, char a5, struct tagWND *a6)
{
  struct tagMENU *v10; // r8
  struct tagITEM *v11; // r9
  int v12; // eax
  BOOL v13; // r11d
  BOOL v14; // r12d
  BOOL v15; // r13d
  int v16; // edx
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // ecx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  int *v22; // rbx
  int v23; // ecx
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rdi
  BOOL v37; // ebx
  unsigned int v38; // r15d
  int v39; // [rsp+50h] [rbp-78h]
  int v40; // [rsp+50h] [rbp-78h]
  unsigned int v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+60h] [rbp-68h]
  __int64 v43; // [rsp+68h] [rbp-60h]
  int v44; // [rsp+E8h] [rbp+20h]

  v41 = 0;
  v43 = 0LL;
  v44 = 0;
  v39 = MNIsOwnerDrawItem(a3, a4, a3, a4);
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
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 16) )
    {
      v43 = GreSelectFontInternal(a1);
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
  if ( v39 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 3596LL));
    if ( v15 )
      v16 = *(_DWORD *)(gpsi + 3688LL);
    else
      v16 = *(_DWORD *)(gpsi + 3584LL);
    GreSetBkColor(a1, v16);
    xxxSendMenuDrawItemMessage(a1, ((a5 & 1) != 0) + 1, (struct tagMENU *)a3, (struct tagITEM *)a4, 0, 0, a6);
    result = MNGetpItemIndex(a3, a4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (*(_DWORD *)(a3 + 40) & 1) == 0 || !*(_QWORD *)(a4 + 16) || (unsigned int)MNIsUAHMenu(a3) )
      goto LABEL_92;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gpsi) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v19 = 0)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !v19) )
    {
      v20 = (_QWORD *)gpsi;
    }
    else
    {
      v20 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
      {
        v21 = gpsi + 5748LL;
LABEL_31:
        v22 = (int *)(v21 + 16LL * ((*(_DWORD *)a4 & 0x2000) != 0 ? 92 : 62));
        FixHDCBITSBmp();
        v23 = 0;
        v24 = v22[3];
        if ( (*(_DWORD *)(a4 + 84) - v24 - 2) / 2 > 0 )
          v23 = (*(_DWORD *)(a4 + 84) - v24 - 2) / 2;
        BltColor(a1, *(_DWORD *)(a4 + 76) + v23, v22[2], v24, *v22, v22[1], 1);
LABEL_92:
        MNDrawInsertionBar(a1, (struct tagITEM *)a4);
        result = v41;
        if ( v41 )
          result = GreSetBkMode(a1);
        if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
        {
          if ( v43 )
          {
            return GreSelectFontInternal(a1);
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
    v21 = *v20 + 4260LL;
    goto LABEL_31;
  }
  if ( v14 )
  {
    if ( v13 )
    {
      v25 = gpsi;
      v26 = *(_DWORD *)(gpsi + 3684LL);
LABEL_39:
      v40 = *(_DWORD *)(v25 + 3624);
      v42 = *(_QWORD *)(v25 + 3808);
      goto LABEL_43;
    }
    if ( (*(_DWORD *)(a3 + 40) & 1) != 0 )
    {
      v25 = gpsi;
      v26 = *(_DWORD *)(gpsi + 3620LL);
      goto LABEL_39;
    }
  }
  else if ( v15 )
  {
    v25 = gpsi;
    v26 = *(_DWORD *)(gpsi + 3688LL);
    v42 = *(_QWORD *)(gpsi + 3752LL);
    v40 = *(_DWORD *)(gpsi + 3596LL);
    goto LABEL_43;
  }
  v25 = gpsi;
  v26 = *(_DWORD *)(gpsi + 3584LL);
  v40 = *(_DWORD *)(gpsi + 3596LL);
  v42 = *(_QWORD *)(gpsi + 3752LL);
LABEL_43:
  v27 = *(_DWORD *)(a4 + 4);
  if ( (v27 & 0x20000000) != 0 && !*(_QWORD *)(a4 + 40) || (v27 & 1) == 0 && (*(_DWORD *)(a3 + 40) & 0x10) == 0 )
    goto LABEL_72;
  if ( v14 || v26 != *(_DWORD *)(v25 + 3628) )
    goto LABEL_81;
  if ( (unsigned int)IsDPIAbsoluteSysMet(73LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
    {
      goto LABEL_52;
    }
LABEL_63:
    v25 = gpsi;
    v35 = (_DWORD *)(gpsi + 2560LL);
    goto LABEL_68;
  }
  if ( (unsigned int)IsDPIDWMSysMet(v28)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_63;
  }
LABEL_52:
  if ( (unsigned int)IsDPIDWMSysMet(73LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v31 = 0)
      : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v31) )
  {
    v25 = gpsi;
    v35 = (_DWORD *)(gpsi + 2948LL);
  }
  else
  {
    v25 = gpsi;
    v35 = (_DWORD *)(gpsi + 2172LL);
  }
LABEL_68:
  if ( !*v35 )
  {
    if ( *(_DWORD *)(v25 + 3632) != v26 || *(_DWORD *)(v25 + 3648) != v26 )
    {
      v44 |= (*(_BYTE *)(a3 + 40) & 0x10) != 0 ? 256 : 32;
      goto LABEL_72;
    }
LABEL_71:
    v44 |= 0x10u;
LABEL_72:
    v36 = v42;
    goto LABEL_73;
  }
LABEL_81:
  if ( *(_DWORD *)(v25 + 3636) == v26 )
    goto LABEL_71;
  v36 = *(_QWORD *)(v25 + 3832);
  v40 = *(_DWORD *)(v25 + 3636);
LABEL_73:
  GreSetBkColor(a1, v26);
  GreSetTextColor(a1, v40);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(a3 + 112) || v14 || v15 )
  {
    GrePolyPatBlt(a1);
    v37 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
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
    v37 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
  }
  if ( *(_QWORD *)(a3 + 112) )
  {
    v38 = GreSetBkMode(a1);
    v41 = v38;
  }
  else
  {
    v38 = 0;
  }
  GreSelectBrush(a1, v36);
  xxxDrawState(a1, *(_DWORD *)(a4 + 76), *(_DWORD *)(a4 + 80), *(_DWORD *)(a4 + 84), v44);
  result = MNGetpItemIndex(a3, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( !v37 )
      MNDrawMenu3DHotTracking(a1, (struct tagMENU *)a3, (struct tagITEM *)a4);
    goto LABEL_92;
  }
  if ( v38 )
    return GreSetBkMode(a1);
  return result;
}
