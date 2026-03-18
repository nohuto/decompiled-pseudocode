/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C02045CC
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C021FEF0 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  int *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  char v27; // al

  result = UpdateCheckpoint((__int64)a1);
  v9 = (int *)result;
  if ( result )
  {
    if ( a3 )
    {
      *(_OWORD *)result = *(_OWORD *)a3;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v10 = MonitorFromRect(a3, 1u);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v12 = 0LL)
            : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v12) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v12 = 0LL)
              : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v13 = (_DWORD *)(v10 + 108),
                !(_DWORD)v12) )
          {
            v13 = (_DWORD *)(v10 + 76);
          }
        }
        else
        {
          v13 = (_DWORD *)(v10 + 92);
        }
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v14 = 0LL)
            : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v14) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v16 = 0)
              : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v16) )
          {
            v15 = (_DWORD *)(v10 + 60);
          }
          else
          {
            v15 = (_DWORD *)(v10 + 28);
          }
        }
        else
        {
          v15 = (_DWORD *)(v10 + 44);
        }
        v17 = v13[1] - v15[1];
        v18 = *v13 - *v15;
        *v9 += v18;
        v9[2] += v18;
        v9[3] += v17;
        v9[1] += v17;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v26 = v9[8] & 0xFFFFFFF6;
    }
    else
    {
      *((_QWORD *)v9 + 2) = *a4;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v19 = MonitorFromRect(v9, 1u);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v21 = 0LL)
            : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v21) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v21 = 0LL)
              : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v22 = (_DWORD *)(v19 + 108),
                !(_DWORD)v21) )
          {
            v22 = (_DWORD *)(v19 + 76);
          }
        }
        else
        {
          v22 = (_DWORD *)(v19 + 92);
        }
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v23 = 0LL)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v23) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v25 = 0)
              : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v24 = (_DWORD *)(v19 + 60),
                !v25) )
          {
            v24 = (_DWORD *)(v19 + 28);
          }
        }
        else
        {
          v24 = (_DWORD *)(v19 + 44);
        }
        v9[4] += *v22 - *v24;
        v9[5] += v22[1] - v24[1];
      }
      v26 = v9[8] | 9;
    }
    v9[8] = v26;
    v27 = *((_BYTE *)a1 + 55);
    if ( (v27 & 0x20) != 0 )
    {
      if ( (v9[8] & 8) != 0 )
        xxxSetWindowPosAndBand(a1, 0, v9[4], v9[5], 0, 0, 21, 0);
    }
    else if ( (v27 & 1) == 0 && a3 )
    {
      xxxSetWindowPosAndBand(a1, 0, *a3, a3[1], a3[2] - *a3, a3[3] - a3[1], 4, 0);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
