/*
 * XREFs of xxxCalcClientRect @ 0x1C0094474
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C0225300 (xxxUpdateClientRect.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C004F804 (xxxMenuBarCompute.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     _HungWindowFromGhostWindow @ 0x1C0085B70 (_HungWindowFromGhostWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0093900 (GetWindowBordersWithDpiAwareness.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     GetCaptionHeight @ 0x1C00F3714 (GetCaptionHeight.c)
 */

char __fastcall xxxCalcClientRect(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v5; // rsi
  int v6; // r14d
  int WindowBordersWithDpiAwareness; // ebx
  int v8; // eax
  signed int v9; // r15d
  signed int v10; // ebx
  int v11; // eax
  int v12; // r14d
  int v13; // r12d
  int v14; // ecx
  char result; // al
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct tagMENU *v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v25; // [rsp+58h] [rbp-18h]
  char v26; // [rsp+B0h] [rbp+40h]
  unsigned int v28; // [rsp+C8h] [rbp+58h]

  v5 = a1;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2AA )
  {
    v19 = HungWindowFromGhostWindow(a1);
    if ( v19 )
      v5 = v19;
  }
  v26 = *(_BYTE *)(a1 + 40) & 0xF;
  SetOrClrWF(0, (_DWORD *)a1, 0xFu, 1);
  SetOrClrWF(0, (_DWORD *)a1, 0x410u, 1);
  if ( (*(_BYTE *)(v5 + 55) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v21 = HIDWORD(*(_QWORD *)a2);
    v22 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, (_DWORD *)a1, 8u, 1);
      v6 = GetCaptionHeight(v5) + DWORD1(v22);
    }
    else
    {
      v6 = HIDWORD(*(_QWORD *)a2);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v5);
    v28 = WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(v5, 5LL);
    v8 = WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(v5, 6LL);
    v9 = v22 + v28;
    v10 = DWORD2(v22) - v28;
    LODWORD(v22) = v22 + v28;
    DWORD2(v22) -= v28;
    v11 = -v8;
    v12 = v6 - v11;
    v13 = v11 + HIDWORD(v22);
    DWORD1(v22) = v12;
    HIDWORD(v22) += v11;
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
    {
      v20 = *(struct tagMENU **)(a1 + 192);
      if ( v20 )
      {
        if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x2AA )
        {
          SetOrClrWF(1, (_DWORD *)a1, 1u, 1);
          if ( !a3 )
          {
            *((_DWORD *)v20 + 10) |= 0x200u;
            v24 = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = &v24;
            v25 = v20;
            ++*((_DWORD *)v20 + 2);
            v12 += xxxMenuBarCompute(v20, a1, (unsigned int)(v12 - v21), v28, v10 - v9);
            DWORD1(v22) = v12;
            *((_DWORD *)v25 + 10) &= ~0x200u;
            ThreadUnlock1(v18, v17);
          }
        }
      }
    }
    v14 = 0;
    if ( v12 >= v13 )
    {
      v13 = v12;
      HIDWORD(v22) = v12;
      v14 = 1;
    }
    if ( (*(_BYTE *)(v5 + 45) & 2) != 0 && v9 >= v10 )
    {
      v10 = v9;
      v14 = 1;
      DWORD2(v22) = v9;
    }
    if ( !v14 )
    {
      if ( (*(_BYTE *)(a1 + 49) & 2) != 0
        && v10 - v9 >= 2 * *(_DWORD *)(gpsi + 2060LL)
        && v13 - v12 >= 2 * *(_DWORD *)(gpsi + 2064LL) )
      {
        SetOrClrWF(1, (_DWORD *)a1, 0x410u, 1);
        v12 += *(_DWORD *)(gpsi + 2064LL);
        v9 += *(_DWORD *)(gpsi + 2060LL);
        v10 -= *(_DWORD *)(gpsi + 2060LL);
        *(_QWORD *)&v22 = __PAIR64__(v12, v9);
        v13 -= *(_DWORD *)(gpsi + 2064LL);
        *((_QWORD *)&v22 + 1) = __PAIR64__(v13, v10);
      }
      if ( (*(_BYTE *)(a1 + 54) & 0x10) != 0 && v13 - v12 > (int)GetSystemMetricsForWindow(v5, 3LL) )
      {
        SetOrClrWF(1, (_DWORD *)a1, 4u, 1);
        v16 = a3;
        if ( !a3 )
          HIDWORD(v22) = v13 - GetSystemMetricsForWindow(v5, 3LL);
      }
      else
      {
        v16 = a3;
      }
      if ( (*(_BYTE *)(a1 + 54) & 0x20) != 0 && v10 - v9 >= (int)GetSystemMetricsForWindow(v5, 2LL) )
      {
        SetOrClrWF(1, (_DWORD *)a1, 2u, 1);
        if ( !v16 )
        {
          if ( ((*(unsigned __int8 *)(a1 + 49) >> 6) & 1) != ((*(unsigned __int8 *)(a1 + 50) >> 6) & 1) )
            LODWORD(v22) = GetSystemMetricsForWindow(v5, 2LL) + v9;
          else
            DWORD2(v22) = v10 - GetSystemMetricsForWindow(v5, 2LL);
        }
      }
    }
    *(_OWORD *)a2 = v22;
  }
  result = *(_BYTE *)(a1 + 40) & 0xF;
  if ( v26 != result )
  {
    result = *(_BYTE *)(a1 + 47);
    if ( result < 0 )
      return xxxWindowEvent(0x8004u, (__int64 *)a1, 0, 0, 1);
  }
  return result;
}
