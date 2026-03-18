/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00F297C
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00F2890 (NtUserSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     UpdateCheckpoint @ 0x1C0085BE8 (UpdateCheckpoint.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00F2E18 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F311C (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(LARGE_INTEGER *a1, __int64 a2)
{
  char v2; // r12
  struct tagMONITOR *v5; // rdi
  _DWORD *v6; // r14
  _DWORD *v7; // rsi
  LARGE_INTEGER v8; // r13
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  tagPOINT v15; // rax
  int v16; // r13d
  struct tagPOINT v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  __int64 updated; // rax
  struct tagPOINT *v23; // r8
  int v24; // edx
  struct tagPOINT v25; // rax
  char QuadPart_high; // al
  int v27; // edi
  DWORD v28; // r10d
  int v29; // edi
  int v31; // ecx
  __int64 v32; // rdx
  struct tagPOINT v33; // [rsp+40h] [rbp-30h] BYREF
  tagPOINT v34; // [rsp+48h] [rbp-28h] BYREF
  int v35; // [rsp+50h] [rbp-20h]
  struct tagRECT v36; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !a1
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) != 0
    || (v8 = a1[2],
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
        v10 = SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v8.QuadPart + 384)),
        v35 = 1,
        v10) )
  {
    v35 = 0;
  }
  v36 = *(struct tagRECT *)(a2 + 28);
  if ( a1[11].QuadPart == GetDesktopWindow((__int64)a1) )
  {
    v5 = (struct tagMONITOR *)MonitorFromRect(&v36.left, 1LL, v11);
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v13 = 0LL)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v6 = (_DWORD *)((char *)v5 + 108),
            !(_DWORD)v13) )
      {
        v6 = (_DWORD *)((char *)v5 + 76);
      }
    }
    else
    {
      v6 = (_DWORD *)((char *)v5 + 92);
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v14 = 0LL)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v14) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v31 = 0)
          : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v7 = (_DWORD *)((char *)v5 + 60),
            !v31) )
      {
        v7 = (_DWORD *)((char *)v5 + 28);
      }
    }
    else
    {
      v7 = (_DWORD *)((char *)v5 + 44);
    }
  }
  v15 = *(tagPOINT *)(a2 + 12);
  v34 = v15;
  if ( v15.x == -1 || (v16 = 1, v15.y == -1) )
    v16 = 0;
  v17 = *(struct tagPOINT *)(a2 + 20);
  v33 = v17;
  if ( v17.x != -1 && v17.y != -1 )
    v2 = 1;
  if ( a1[11].QuadPart == GetDesktopWindow((__int64)a1) && SLOBYTE(a1[6].QuadPart) >= 0 )
  {
    v19 = v6[1] - v7[1];
    v20 = *v6 - *v7;
    v36.left += v20;
    v36.right += v20;
    v36.bottom += v19;
    v36.top += v19;
    if ( v16 )
    {
      v34.x = *v6 - *v7 + v18;
      v34.y += v6[1] - v7[1];
    }
    CheckPlacementBounds(&v36, &v34, &v33, v5);
  }
  v21 = v35;
  if ( v35 )
    TransformRectBetweenCoordinateSpaces(&v36, &v36, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v23 = (struct tagPOINT *)updated;
  if ( updated )
  {
    *(struct tagRECT *)updated = v36;
    *(tagPOINT *)(updated + 16) = v34;
    *(_DWORD *)(updated + 32) ^= (*(_DWORD *)(updated + 32) ^ (8 * v16)) & 8;
    v24 = *(_DWORD *)(updated + 32) ^ (*(_BYTE *)(a2 + 4) & 1 ^ (unsigned __int8)*(_DWORD *)(updated + 32)) & 1;
    *(_DWORD *)(updated + 32) = v24;
    v25 = v33;
    v23[4].x = v24 & 0xFFFFFFED | (16 * (v2 & 1));
    v23[3] = v25;
  }
  QuadPart_high = HIBYTE(a1[6].QuadPart);
  v27 = ((*(_BYTE *)(a2 + 4) & 4) << 12) | 0x14;
  if ( (QuadPart_high & 0x20) != 0 )
  {
    if ( (!v23 || (v23[4].x & 1) != 0) && v16 )
    {
      if ( v21 )
        TransformPointBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
      xxxSetWindowPosAndBand((struct tagWND *)a1, 0LL, v34.x, v34.y, 0, 0, v27 | 1, 0);
    }
  }
  else if ( (QuadPart_high & 1) != 0 )
  {
    if ( v23 )
    {
      if ( (a1[5].QuadPart & 0x40000000) != 0 )
        v23[4].x &= ~0x10u;
      if ( (v23[4].x & 0x10) != 0 )
      {
        if ( a1[11].QuadPart == GetDesktopWindow((__int64)a1) )
        {
          v33.x += *v6;
          v33.y += v6[1];
        }
        if ( v21 )
          TransformPointBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
        xxxSetWindowPosAndBand((struct tagWND *)a1, 0LL, v33.x, v33.y, 0, 0, v27 | 1, 0);
      }
    }
  }
  else
  {
    xxxSetWindowPosAndBand(
      (struct tagWND *)a1,
      0LL,
      v36.left,
      v36.top,
      v36.right - v36.left,
      v36.bottom - v36.top,
      v27,
      0);
  }
  v28 = *(_DWORD *)(a2 + 4);
  if ( (v28 & 4) == 0 || (v32 = *(_QWORD *)(a1[2].QuadPart + 392), v32 == *(_QWORD *)(gptiCurrent + 392LL)) )
  {
    v29 = 0;
    xxxShowWindow((struct tagWND *)a1, *(unsigned __int16 *)(a2 + 8));
  }
  else
  {
    v29 = 1;
    PostEventMessageEx(
      a1[2].QuadPart,
      v32,
      1u,
      0LL,
      v28,
      *a1,
      (LARGE_INTEGER)(gdwPUDFlags & 0x10000 | (unsigned __int64)*(unsigned int *)(a2 + 8)),
      0LL);
  }
  if ( (a1[6].QuadPart & 0x2000000000000000LL) != 0 && !v29 )
    WPUpdateCheckPointSettings(a1);
  return 1LL;
}
