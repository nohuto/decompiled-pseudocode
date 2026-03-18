/*
 * XREFs of xxxCalcClientRect @ 0x1C0071278
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C0224810 (xxxUpdateClientRect.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C0013EA8 (xxxMenuBarCompute.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00707C8 (GetWindowBordersWithDpiAwareness.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     GetCaptionHeight @ 0x1C00757A8 (GetCaptionHeight.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

char __fastcall xxxCalcClientRect(__int64 a1, __int128 *a2, int a3)
{
  __int64 v5; // rsi
  int v6; // r12d
  int WindowBordersWithDpiAwareness; // ebx
  unsigned int v8; // r14d
  signed int v9; // r13d
  signed int v10; // r15d
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbx
  int v14; // esi
  int v15; // ecx
  char result; // al
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // r14d
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rbx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  _BOOL8 v31; // rcx
  __int128 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+30h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+48h] [rbp-18h]
  char v37; // [rsp+A0h] [rbp+40h]

  v37 = *(_BYTE *)(a1 + 40) & 0xF;
  SetOrClrWF(0LL, a1, 15LL, 1LL);
  SetOrClrWF(0LL, a1, 1040LL, 1LL);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
  {
    v5 = HIDWORD(*(_QWORD *)a2);
    v33 = *a2;
    if ( (*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      v6 = GetCaptionHeight(a1) + DWORD1(v33);
    }
    else
    {
      v6 = HIDWORD(*(_QWORD *)a2);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
    v8 = WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(a1, 5LL);
    v9 = v33 + v8;
    v10 = DWORD2(v33) - v8;
    LODWORD(v33) = v33 + v8;
    DWORD2(v33) -= v8;
    v11 = -(WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(a1, 6LL));
    HIDWORD(v34) = v11 + HIDWORD(v33);
    v12 = v6 - v11;
    DWORD1(v34) = v12;
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
    {
      v13 = *(_QWORD *)(a1 + 192);
      if ( v13 )
      {
        SetOrClrWF(1LL, a1, 1LL, 1LL);
        if ( !a3 )
        {
          *(_DWORD *)(v13 + 40) |= 0x200u;
          v35 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v35;
          v36 = v13;
          ++*(_DWORD *)(v13 + 8);
          v12 += xxxMenuBarCompute((struct tagMENU *)v13, a1, (unsigned int)(v12 - v5), v8, v10 - v9);
          DWORD1(v34) = v12;
          *(_DWORD *)(v36 + 40) &= ~0x200u;
          ThreadUnlock1(v28, v27);
        }
      }
    }
    v14 = HIDWORD(v34);
    v15 = 0;
    if ( v12 >= SHIDWORD(v34) )
    {
      v14 = v12;
      HIDWORD(v34) = v12;
      v15 = 1;
    }
    if ( (*(_BYTE *)(a1 + 45) & 2) != 0 && v9 >= v10 )
    {
      v10 = v9;
      DWORD2(v34) = v9;
      v15 = 1;
    }
    if ( v15 )
      goto LABEL_12;
    if ( (*(_BYTE *)(a1 + 49) & 2) == 0 )
      goto LABEL_16;
    if ( (v19 = IsDPIDWMSysMet(45LL)) == 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v18 = 0LL)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v18) )
    {
      if ( v19
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v29 = 0)
          : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v29) )
      {
        v20 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v20 = (_DWORD *)(gpsi + 2060LL);
      }
    }
    else
    {
      v20 = (_DWORD *)(gpsi + 2448LL);
    }
    if ( v10 - v9 < 2 * *v20
      || ((v22 = IsDPIDWMSysMet(46LL)) == 0
       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         ? (v21 = 0LL)
         : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
           !(_DWORD)v21)
        ? (!v22
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !v30)
         ? (v23 = (_DWORD *)(gpsi + 2064LL))
         : (v23 = (_DWORD *)(gpsi + 2840LL)))
        : (v23 = (_DWORD *)(gpsi + 2452LL)),
          v14 - v12 < 2 * *v23) )
    {
LABEL_16:
      if ( (*(_BYTE *)(a1 + 54) & 0x10) != 0 && v14 - v12 > (int)GetSystemMetricsForWindow(a1, 3LL) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v17 = a3;
        if ( !a3 )
          HIDWORD(v34) = v14 - GetSystemMetricsForWindow(a1, 3LL);
      }
      else
      {
        v17 = a3;
      }
      if ( (*(_BYTE *)(a1 + 54) & 0x20) != 0 && v10 - v9 >= (int)GetSystemMetricsForWindow(a1, 2LL) )
      {
        SetOrClrWF(1LL, a1, 2LL, 1LL);
        if ( !v17 )
        {
          if ( ((*(unsigned __int8 *)(a1 + 49) >> 6) & 1) != ((*(unsigned __int8 *)(a1 + 50) >> 6) & 1) )
            LODWORD(v34) = GetSystemMetricsForWindow(a1, 2LL) + v9;
          else
            DWORD2(v34) = v10 - GetSystemMetricsForWindow(a1, 2LL);
        }
      }
LABEL_12:
      *a2 = v34;
      goto LABEL_13;
    }
    SetOrClrWF(1LL, a1, 1040LL, 1LL);
    if ( !v22 )
      goto LABEL_35;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v24 = 0LL)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v24) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v24 = 0LL)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v24) )
      {
LABEL_35:
        v25 = (_DWORD *)(gpsi + 2064LL);
        goto LABEL_36;
      }
      v25 = (_DWORD *)(gpsi + 2840LL);
    }
    else
    {
      v25 = (_DWORD *)(gpsi + 2452LL);
    }
LABEL_36:
    if ( v19 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0 )
      {
        v31 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1;
        if ( v31 )
        {
          v26 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_38;
        }
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1 )
      {
        v26 = (_DWORD *)(gpsi + 2836LL);
        goto LABEL_38;
      }
    }
    v26 = (_DWORD *)(gpsi + 2060LL);
LABEL_38:
    v12 += *v25;
    v9 += *v26;
    v10 -= *v26;
    *(_QWORD *)&v34 = __PAIR64__(v12, v9);
    v14 -= *v25;
    *((_QWORD *)&v34 + 1) = __PAIR64__(v14, v10);
    goto LABEL_16;
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a2 + 1);
LABEL_13:
  result = *(_BYTE *)(a1 + 40) & 0xF;
  if ( v37 != result )
  {
    result = *(_BYTE *)(a1 + 47);
    if ( result < 0 )
      return xxxWindowEvent(0x8004u, (__int64 *)a1, 0, 0, 1);
  }
  return result;
}
