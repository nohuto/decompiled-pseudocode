/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FF024
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C010D470 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
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
  __int64 DPIServerInfo; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagSIZE v36; // [rsp+90h] [rbp+18h] BYREF

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
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x43uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v10 = 0)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
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
      DPIServerInfo = GetDPIServerInfo(v17, v16, v18);
      v4 = GreSelectFont((__int64)a1, *(_QWORD *)(DPIServerInfo + 8));
    }
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v21, v20);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v22 = GreSetBkMode(a1, 1);
    v23 = GreSetTextColor(a1, 0xFFFFFF);
    GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v36, 1);
    GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    GreExtTextOutWInternal(a1, a2->right - v36.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    v24 = gSafeModeStrLen;
    v28 = GetDPIServerInfo(v26, v25, v27);
    GreExtTextOutWInternal(
      a1,
      a2->right - v36.cx,
      a2->bottom - *(_DWORD *)(v28 + 44),
      0,
      0LL,
      gwszSafeModeStr,
      v24,
      0LL,
      0LL,
      0);
    v29 = gSafeModeStrLen;
    v33 = GetDPIServerInfo(v31, v30, v32);
    GreExtTextOutWInternal(a1, a2->left, a2->bottom - *(_DWORD *)(v33 + 44), 0, 0LL, gwszSafeModeStr, v29, 0LL, 0LL, 0);
    GreSetBkMode(a1, v22);
    GreSetTextColor(a1, v23);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v35, v34);
    EnterCrit(0LL, 1LL);
    if ( v4 )
      GreSelectFont((__int64)a1, v4);
  }
}
