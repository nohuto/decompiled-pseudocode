/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C012D500 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  int v36; // edi
  int v37; // ebx
  __int64 DPIServerInfo; // rax
  int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagSIZE v43; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x43uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) != 0 )
      goto LABEL_3;
LABEL_13:
    v31 = gpsi;
    v32 = (_DWORD *)(gpsi + 2536LL);
    goto LABEL_18;
  }
  if ( IsDPIDWMSysMet(v6)
    && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_13;
  }
LABEL_3:
  if ( IsDPIDWMSysMet(0x43uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 408)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v19) )
  {
    v31 = gpsi;
    v32 = (_DWORD *)(gpsi + 2924LL);
  }
  else
  {
    v31 = gpsi;
    v32 = (_DWORD *)(gpsi + 2148LL);
  }
LABEL_18:
  if ( *v32 )
  {
    if ( v31 && *(_QWORD *)(GetDPIServerInfo() + 8) )
    {
      GetDPIServerInfo();
      v4 = GreSelectFontInternal(a1);
    }
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v34, v33);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v35 = GreSetBkMode(a1, 1);
    v36 = GreSetTextColor(a1, 0xFFFFFF);
    GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v43, 1);
    GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    GreExtTextOutWInternal(a1, a2->right - v43.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    v37 = gSafeModeStrLen;
    DPIServerInfo = GetDPIServerInfo();
    GreExtTextOutWInternal(
      a1,
      a2->right - v43.cx,
      a2->bottom - *(_DWORD *)(DPIServerInfo + 44),
      0,
      0LL,
      gwszSafeModeStr,
      v37,
      0LL,
      0LL,
      0);
    v39 = gSafeModeStrLen;
    v40 = GetDPIServerInfo();
    GreExtTextOutWInternal(a1, a2->left, a2->bottom - *(_DWORD *)(v40 + 44), 0, 0LL, gwszSafeModeStr, v39, 0LL, 0LL, 0);
    GreSetBkMode(a1, v35);
    GreSetTextColor(a1, v36);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v42, v41);
    EnterCrit(0LL, 1LL);
    if ( v4 )
      GreSelectFontInternal(a1);
  }
}
