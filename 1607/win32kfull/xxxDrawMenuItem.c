/*
 * XREFs of xxxDrawMenuItem @ 0x1C00B40F4
 * Callers:
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00B4828 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00B48AC (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00B4BBC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00B76E8 (GetDPIServerInfoForDpi.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C02362D8 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C023638C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C029121C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0291258 (GreSetTextCharacterExtra.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 a3, __int64 a4, char a5, struct tagWND *a6)
{
  struct tagMENU *v10; // r8
  struct tagITEM *v11; // r9
  int v12; // eax
  BOOL v13; // r11d
  BOOL v14; // r15d
  BOOL v15; // r12d
  int v16; // edx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  int *v30; // rbx
  int v31; // ecx
  int v32; // r10d
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rdi
  int v36; // r13d
  int v37; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ecx
  _DWORD *v64; // rax
  BOOL v65; // edi
  int v66; // r15d
  unsigned int v67; // [rsp+54h] [rbp-64h]
  int v68; // [rsp+58h] [rbp-60h]
  __int64 v69; // [rsp+58h] [rbp-60h]
  __int64 v70; // [rsp+60h] [rbp-58h]
  _DWORD v71[4]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v72; // [rsp+88h] [rbp-30h]
  int v73; // [rsp+D8h] [rbp+20h]

  v67 = 0;
  v70 = 0LL;
  v73 = 0;
  v68 = MNIsOwnerDrawItem(a3, a4);
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
      v70 = GreSelectFontInternal(a1);
    }
    else
    {
      v73 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIMETRICSForDpi(a2);
      GetDPIServerInfoForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v13 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
  }
  if ( v68 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4988LL));
    if ( v15 )
      v16 = *(_DWORD *)(gpsi + 5080LL);
    else
      v16 = *(_DWORD *)(gpsi + 4976LL);
    GreSetBkColor(a1, v16);
    xxxSendMenuDrawItemMessage(a1, ((a5 & 1) != 0) + 1, (struct tagMENU *)a3, (struct tagITEM *)a4, 0, 0, a6);
    result = MNGetpItemIndex(a3, a4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (*(_DWORD *)(a3 + 40) & 1) == 0 || !*(_QWORD *)(a4 + 16) || (unsigned int)MNIsUAHMenu(a3) )
      goto LABEL_89;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi, v18, v19, v20) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 408)
        ? (v27 = 0)
        : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v24,
                                                       v25,
                                                       v26)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !v27) )
    {
      v28 = (_QWORD *)gpsi;
    }
    else
    {
      v28 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v29 = gpsi + 7140LL;
LABEL_30:
        v30 = (int *)(v29 + 16LL * ((*(_DWORD *)a4 & 0x2000) != 0 ? 92 : 62));
        FixHDCBITSBmp();
        v31 = 0;
        v32 = v30[3];
        if ( (*(_DWORD *)(a4 + 84) - v32 - 2) / 2 > 0 )
          v31 = (*(_DWORD *)(a4 + 84) - v32 - 2) / 2;
        BltColor(a1, *(_DWORD *)(a4 + 76) + v31, v30[2], v32, *v30, v30[1], 1);
LABEL_89:
        MNDrawInsertionBar(a1, (struct tagITEM *)a4);
        result = v67;
        if ( v67 )
          result = GreSetBkMode(a1, v67);
        if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
        {
          if ( v70 )
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
    v29 = *v28 + 5652LL;
    goto LABEL_30;
  }
  if ( v14 )
  {
    if ( v13 )
    {
      v33 = gpsi;
      v34 = *(_DWORD *)(gpsi + 5076LL);
      v35 = *(_QWORD *)(gpsi + 5320LL);
LABEL_38:
      v36 = *(_DWORD *)(v33 + 5016);
      v69 = *(_QWORD *)(v33 + 5200);
      goto LABEL_43;
    }
    if ( (*(_DWORD *)(a3 + 40) & 1) != 0 )
    {
      v33 = gpsi;
      v34 = *(_DWORD *)(gpsi + 5012LL);
      v35 = *(_QWORD *)(gpsi + 5192LL);
      goto LABEL_38;
    }
    goto LABEL_42;
  }
  if ( !v15 )
  {
LABEL_42:
    v33 = gpsi;
    v34 = *(_DWORD *)(gpsi + 4976LL);
    v35 = *(_QWORD *)(gpsi + 5120LL);
    v36 = *(_DWORD *)(gpsi + 4988LL);
    v69 = *(_QWORD *)(gpsi + 5144LL);
    goto LABEL_43;
  }
  v35 = *(_QWORD *)(a3 + 112);
  v33 = gpsi;
  v36 = *(_DWORD *)(gpsi + 4988LL);
  v34 = *(_DWORD *)(gpsi + 5080LL);
  v69 = *(_QWORD *)(gpsi + 5144LL);
  if ( !v35 )
    v35 = *(_QWORD *)(gpsi + 5328LL);
LABEL_43:
  v37 = *(_DWORD *)(a4 + 4);
  if ( (v37 & 0x20000000) != 0 && !*(_QWORD *)(a4 + 40) || (v37 & 1) == 0 && (*(_DWORD *)(a3 + 40) & 0x10) == 0 )
    goto LABEL_73;
  if ( !v14 && v34 == *(_DWORD *)(v33 + 5020) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x49uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) != 0 )
        goto LABEL_51;
    }
    else if ( !IsDPIDWMSysMet(v39)
           || (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
             ? (v63 = 0)
             : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v60,
                                                            v61,
                                                            v62)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v63) )
    {
LABEL_51:
      if ( IsDPIDWMSysMet(0x49uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
          ? (v52 = 0)
          : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v49,
                                                         v50,
                                                         v51)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v52) )
      {
        v33 = gpsi;
        v64 = (_DWORD *)(gpsi + 2948LL);
      }
      else
      {
        v33 = gpsi;
        v64 = (_DWORD *)(gpsi + 2172LL);
      }
LABEL_66:
      if ( !*v64 )
      {
        if ( *(_DWORD *)(v33 + 5024) != v34 || *(_DWORD *)(v33 + 5040) != v34 )
        {
          v73 |= (*(_BYTE *)(a3 + 40) & 0x10) != 0 ? 256 : 32;
          goto LABEL_73;
        }
        goto LABEL_71;
      }
      goto LABEL_70;
    }
    v33 = gpsi;
    v64 = (_DWORD *)(gpsi + 2560LL);
    goto LABEL_66;
  }
LABEL_70:
  if ( *(_DWORD *)(v33 + 5028) == v34 )
  {
LABEL_71:
    v73 |= 0x10u;
    goto LABEL_73;
  }
  v36 = *(_DWORD *)(v33 + 5028);
  v69 = *(_QWORD *)(v33 + 5224);
LABEL_73:
  GreSetBkColor(a1, v34);
  GreSetTextColor(a1, v36);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(a3 + 112) || v14 || v15 )
  {
    v71[0] = *(_DWORD *)(a4 + 72);
    v71[1] = *(_DWORD *)(a4 + 76);
    v71[2] = *(_DWORD *)(a4 + 80);
    v71[3] = *(_DWORD *)(a4 + 84);
    v72 = v35;
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v71, 1);
    v65 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
    if ( v14 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(a4 + 72),
        *(_DWORD *)(a4 + 76),
        *(_DWORD *)(a4 + 80),
        *(_DWORD *)(a4 + 84),
        1,
        *(HBRUSH *)(gpsi + 5192LL));
  }
  else
  {
    v65 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == -2147352576;
  }
  if ( *(_QWORD *)(a3 + 112) )
  {
    v66 = GreSetBkMode(a1, 1);
    v67 = v66;
  }
  else
  {
    v66 = 0;
  }
  GreSelectBrush(a1, v69);
  xxxDrawState(a1, *(_DWORD *)(a4 + 76), *(_DWORD *)(a4 + 80), *(_DWORD *)(a4 + 84), v73);
  result = MNGetpItemIndex(a3, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( !v65 )
      MNDrawMenu3DHotTracking(a1, (struct tagMENU *)a3, (struct tagITEM *)a4);
    goto LABEL_89;
  }
  if ( v66 )
    return GreSetBkMode(a1, v66);
  return result;
}
