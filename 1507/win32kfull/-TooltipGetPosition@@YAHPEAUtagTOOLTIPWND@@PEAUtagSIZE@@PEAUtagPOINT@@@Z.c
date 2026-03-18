/*
 * XREFs of ?TooltipGetPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0120D24
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0120E0C (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall TooltipGetPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  LONG *v11; // rdi
  LONG cy; // edx
  LONG y; // ecx
  int v14; // edx
  int v15; // ecx

  v6 = *(_QWORD *)(gpsi + 3976LL);
  *a3 = (struct tagPOINT)v6;
  result = MonitorFromPoint(v6, 0LL, (__int64)a3);
  v9 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v10 = 0LL)
        : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v10) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v15 = 0)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v15) )
      {
        v11 = (LONG *)(v9 + 60);
      }
      else
      {
        v11 = (LONG *)(v9 + 28);
      }
    }
    else
    {
      v11 = (LONG *)(v9 + 44);
    }
    cy = a2->cy;
    y = a3->y;
    if ( y + cy >= v11[3] )
    {
      *((_DWORD *)a1 + 100) &= ~1u;
      a3->y = y - cy;
    }
    else
    {
      a3->y += GetCursorHeight();
      *((_DWORD *)a1 + 100) |= 1u;
    }
    v14 = v11[2];
    if ( a2->cx + a3->x >= v14 )
      a3->x = v14 - a2->cx;
    if ( a3->x < *v11 )
      a3->x = *v11;
    return 1LL;
  }
  return result;
}
