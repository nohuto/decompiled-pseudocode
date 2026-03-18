/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00B2E28
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00B32B0 (NtUserSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00B33A0 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0130DD8 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  struct tagMONITOR *v7; // rdi
  _DWORD *v8; // r14
  _DWORD *v9; // rsi
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char CurrentThreadDpiAwarenessContext; // al
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct tagPOINT v35; // rax
  struct tagPOINT v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  int v40; // esi
  __int64 updated; // rax
  struct tagPOINT *v42; // r8
  int v43; // edx
  struct tagPOINT v44; // rax
  char v45; // al
  int v46; // edi
  __int64 v47; // r8
  int v48; // edi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  __int64 v54; // r10
  struct tagPOINT v55; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v56; // [rsp+48h] [rbp-28h] BYREF
  int v57; // [rsp+50h] [rbp-20h]
  struct tagRECT v58; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 1;
  if ( !a1
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 432) + 224LL) & 1) != 0
    || (v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 432),
        (*(_BYTE *)(v15 + 224) & 0x20) != 0)
    || (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17),
        v19 = *((_DWORD *)a1 + 88) & 0xF,
        v57 = 1,
        (CurrentThreadDpiAwarenessContext & 0xF) == v19) )
  {
    v57 = 0;
  }
  v58 = *(struct tagRECT *)(a2 + 28);
  if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
  {
    v7 = (struct tagMONITOR *)MonitorFromRect(&v58.left, 1u);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v27) + 408)
        ? (v25 = 0LL)
        : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v24,
                                                       v26,
                                                       v27)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v25) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v27) + 408)
          ? (v25 = 0LL)
          : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v24,
                                                         v26,
                                                         v27)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v8 = (_DWORD *)((char *)v7 + 108),
            !(_DWORD)v25) )
      {
        v8 = (_DWORD *)((char *)v7 + 76);
      }
    }
    else
    {
      v8 = (_DWORD *)((char *)v7 + 92);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v30, v31) + 408)
        ? (v29 = 0LL)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v28,
                                                       v30,
                                                       v31)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v29) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
          ? (v53 = 0)
          : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v50,
                                                         v51,
                                                         v52)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v9 = (_DWORD *)((char *)v7 + 60),
            !v53) )
      {
        v9 = (_DWORD *)((char *)v7 + 28);
      }
    }
    else
    {
      v9 = (_DWORD *)((char *)v7 + 44);
    }
  }
  v35 = *(struct tagPOINT *)(a2 + 12);
  v56 = v35;
  if ( v35.x == -1 || v35.y == -1 )
    v10 = 0;
  v36 = *(struct tagPOINT *)(a2 + 20);
  v55 = v36;
  if ( v36.x != -1 && v36.y != -1 )
    v4 = 1;
  if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) && *((char *)a1 + 48) >= 0 )
  {
    v38 = v8[1] - v9[1];
    v39 = *v8 - *v9;
    v58.left += v39;
    v58.right += v39;
    v58.bottom += v38;
    v58.top += v38;
    if ( v10 )
    {
      v56.x = *v8 - *v9 + v37;
      v56.y += v8[1] - v9[1];
    }
    CheckPlacementBounds(&v58, &v56, &v55, v7);
  }
  v40 = v57;
  if ( v57 )
    TransformRectBetweenCoordinateSpaces(&v58, &v58, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v42 = (struct tagPOINT *)updated;
  if ( updated )
  {
    *(struct tagRECT *)updated = v58;
    *(struct tagPOINT *)(updated + 16) = v56;
    *(_DWORD *)(updated + 32) ^= (*(_DWORD *)(updated + 32) ^ (8 * v10)) & 8;
    v43 = *(_DWORD *)(updated + 32) ^ (*(_BYTE *)(a2 + 4) & 1 ^ (unsigned __int8)*(_DWORD *)(updated + 32)) & 1;
    *(_DWORD *)(updated + 32) = v43;
    v44 = v55;
    v42[4].x = v43 & 0xFFFFFFED | (16 * (v4 & 1));
    v42[3] = v44;
  }
  v45 = *((_BYTE *)a1 + 55);
  v46 = ((*(_BYTE *)(a2 + 4) & 4) << 12) | 0x14;
  if ( (v45 & 0x20) != 0 )
  {
    if ( (!v42 || (v42[4].x & 1) != 0) && v10 )
    {
      if ( v40 )
        TransformPointBetweenCoordinateSpaces(&v56, &v56, a1, 0LL);
      xxxSetWindowPosAndBand(a1, 0, v56.x, v56.y, 0, 0, v46 | 1, 0);
    }
  }
  else if ( (v45 & 1) != 0 )
  {
    if ( v42 )
    {
      if ( (*((_BYTE *)a1 + 43) & 0x40) != 0 )
        v42[4].x &= ~0x10u;
      if ( (v42[4].x & 0x10) != 0 )
      {
        if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
        {
          v55.x += *v8;
          v55.y += v8[1];
        }
        if ( v40 )
          TransformPointBetweenCoordinateSpaces(&v55, &v55, a1, 0LL);
        xxxSetWindowPosAndBand(a1, 0, v55.x, v55.y, 0, 0, v46 | 1, 0);
      }
    }
  }
  else
  {
    xxxSetWindowPosAndBand(a1, 0, v58.left, v58.top, v58.right - v58.left, v58.bottom - v58.top, v46, 0);
  }
  v47 = *(unsigned int *)(a2 + 4);
  if ( (v47 & 4) == 0 || (v54 = *((_QWORD *)a1 + 2), *(_QWORD *)(v54 + 384) == *(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v48 = 0;
    xxxShowWindowEx(a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    v48 = 1;
    PostEventMessageEx(
      v54,
      *(_QWORD *)(v54 + 384),
      1u,
      (__int64)a1,
      0,
      v47,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 && !v48 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
