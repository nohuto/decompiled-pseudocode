/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C0151610 (xxxDesktopPaintCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  int v22; // edi
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 DPIServerInfo; // rax
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagSIZE v35; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x43uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
LABEL_15:
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 2536LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v5)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x43uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v10 = 0)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v10) )
  {
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 2924LL);
  }
  else
  {
    v14 = gpsi;
    v15 = (_DWORD *)(gpsi + 2148LL);
  }
LABEL_20:
  if ( *v15 )
  {
    if ( v14 && *(_QWORD *)(GetDPIServerInfo(v14, v7, v8) + 8) )
    {
      GetDPIServerInfo(v17, v16, v18);
      v4 = GreSelectFontInternal(a1);
    }
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v20, v19);
    EnterSharedCrit(1LL);
    EnterSharedRenderCrit();
    v21 = GreSetBkMode(a1, 1);
    v22 = GreSetTextColor(a1, 0xFFFFFF);
    GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v35, 1);
    GreExtTextOutWInternal(
      a1,
      a2->left,
      a2->top,
      0,
      0LL,
      (unsigned __int16 *)gwszSafeModeStr,
      gSafeModeStrLen,
      0LL,
      0LL,
      0);
    GreExtTextOutWInternal(
      a1,
      a2->right - v35.cx,
      a2->top,
      0,
      0LL,
      (unsigned __int16 *)gwszSafeModeStr,
      gSafeModeStrLen,
      0LL,
      0LL,
      0);
    v23 = gSafeModeStrLen;
    DPIServerInfo = GetDPIServerInfo(v25, v24, v26);
    GreExtTextOutWInternal(
      a1,
      a2->right - v35.cx,
      a2->bottom - *(_DWORD *)(DPIServerInfo + 44),
      0,
      0LL,
      (unsigned __int16 *)gwszSafeModeStr,
      v23,
      0LL,
      0LL,
      0);
    v28 = gSafeModeStrLen;
    v32 = GetDPIServerInfo(v30, v29, v31);
    GreExtTextOutWInternal(
      a1,
      a2->left,
      a2->bottom - *(_DWORD *)(v32 + 44),
      0,
      0LL,
      (unsigned __int16 *)gwszSafeModeStr,
      v28,
      0LL,
      0LL,
      0);
    GreSetBkMode(a1, v21);
    GreSetTextColor(a1, v22);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v34, v33);
    EnterCrit(1LL);
    if ( v4 )
      GreSelectFontInternal(a1);
  }
}
