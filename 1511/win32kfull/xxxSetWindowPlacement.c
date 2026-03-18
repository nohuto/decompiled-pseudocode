/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00F7AE0
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00F79F0 (NtUserSetWindowPlacement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00F7FA0 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F82A4 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  char v2; // r12
  struct tagMONITOR *v5; // rdi
  _DWORD *v6; // r14
  _DWORD *v7; // rsi
  __int64 v8; // r13
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  tagPOINT v14; // rax
  int v15; // r13d
  struct tagPOINT v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  __int64 updated; // rax
  struct tagPOINT *v22; // r8
  int v23; // edx
  struct tagPOINT v24; // rax
  char v25; // al
  int v26; // edi
  __int64 v27; // r9
  int v28; // edi
  int v30; // ecx
  __int64 v31; // r10
  struct tagPOINT v32; // [rsp+40h] [rbp-30h] BYREF
  tagPOINT v33; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+50h] [rbp-20h]
  struct tagRECT v35; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !a1
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
    || (v8 = *((_QWORD *)a1 + 2),
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
        v10 = SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v8 + 376)),
        v34 = 1,
        v10) )
  {
    v34 = 0;
  }
  v35 = *(struct tagRECT *)(a2 + 28);
  if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
  {
    v5 = (struct tagMONITOR *)MonitorFromRect(&v35.left, 1u);
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v12 = 0LL)
        : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v12) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v12 = 0LL)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v6 = (_DWORD *)((char *)v5 + 108),
            !(_DWORD)v12) )
      {
        v6 = (_DWORD *)((char *)v5 + 76);
      }
    }
    else
    {
      v6 = (_DWORD *)((char *)v5 + 92);
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v7 = (_DWORD *)((char *)v5 + 60),
            !v30) )
      {
        v7 = (_DWORD *)((char *)v5 + 28);
      }
    }
    else
    {
      v7 = (_DWORD *)((char *)v5 + 44);
    }
  }
  v14 = *(tagPOINT *)(a2 + 12);
  v33 = v14;
  if ( v14.x == -1 || (v15 = 1, v14.y == -1) )
    v15 = 0;
  v16 = *(struct tagPOINT *)(a2 + 20);
  v32 = v16;
  if ( v16.x != -1 && v16.y != -1 )
    v2 = 1;
  if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) && *((char *)a1 + 48) >= 0 )
  {
    v18 = v6[1] - v7[1];
    v19 = *v6 - *v7;
    v35.left += v19;
    v35.right += v19;
    v35.bottom += v18;
    v35.top += v18;
    if ( v15 )
    {
      v33.x = *v6 - *v7 + v17;
      v33.y += v6[1] - v7[1];
    }
    CheckPlacementBounds(&v35, &v33, &v32, v5);
  }
  v20 = v34;
  if ( v34 )
    TransformRectBetweenCoordinateSpaces(&v35, &v35, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v22 = (struct tagPOINT *)updated;
  if ( updated )
  {
    *(struct tagRECT *)updated = v35;
    *(tagPOINT *)(updated + 16) = v33;
    *(_DWORD *)(updated + 32) ^= (*(_DWORD *)(updated + 32) ^ (8 * v15)) & 8;
    v23 = *(_DWORD *)(updated + 32) ^ (*(_BYTE *)(a2 + 4) & 1 ^ (unsigned __int8)*(_DWORD *)(updated + 32)) & 1;
    *(_DWORD *)(updated + 32) = v23;
    v24 = v32;
    v22[4].x = v23 & 0xFFFFFFED | (16 * (v2 & 1));
    v22[3] = v24;
  }
  v25 = *((_BYTE *)a1 + 55);
  v26 = ((*(_BYTE *)(a2 + 4) & 4) << 12) | 0x14;
  if ( (v25 & 0x20) != 0 )
  {
    if ( (!v22 || (v22[4].x & 1) != 0) && v15 )
    {
      if ( v20 )
        TransformPointBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
      xxxSetWindowPosAndBand(a1, 0, v33.x, v33.y, 0, 0, v26 | 1, 0);
    }
  }
  else if ( (v25 & 1) != 0 )
  {
    if ( v22 )
    {
      if ( (*((_BYTE *)a1 + 43) & 0x40) != 0 )
        v22[4].x &= ~0x10u;
      if ( (v22[4].x & 0x10) != 0 )
      {
        if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
        {
          v32.x += *v6;
          v32.y += v6[1];
        }
        if ( v20 )
          TransformPointBetweenCoordinateSpaces(&v32, &v32, a1, 0LL);
        xxxSetWindowPosAndBand(a1, 0, v32.x, v32.y, 0, 0, v26 | 1, 0);
      }
    }
  }
  else
  {
    xxxSetWindowPosAndBand(a1, 0, v35.left, v35.top, v35.right - v35.left, v35.bottom - v35.top, v26, 0);
  }
  v27 = *(unsigned int *)(a2 + 4);
  if ( (v27 & 4) == 0 || (v31 = *((_QWORD *)a1 + 2), *(_QWORD *)(v31 + 384) == *(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v28 = 0;
    xxxShowWindowEx(a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    v28 = 1;
    PostEventMessageEx(
      v31,
      *(_QWORD *)(v31 + 384),
      1u,
      (__int64)a1,
      0,
      v27,
      gdwPUDFlags & 0x10000 | (unsigned __int64)*(unsigned int *)(a2 + 8),
      0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 && !v28 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
