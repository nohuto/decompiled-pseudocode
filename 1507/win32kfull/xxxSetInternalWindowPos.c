/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C020425C
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C02200D0 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     UpdateCheckpoint @ 0x1C0085BE8 (UpdateCheckpoint.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int16 a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  int *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  char v29; // al

  result = UpdateCheckpoint((__int64)a1);
  v9 = (int *)result;
  if ( result )
  {
    if ( a3 )
    {
      *(_OWORD *)result = *(_OWORD *)a3;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v11 = MonitorFromRect(a3, 1LL, v10);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v13 = 0LL)
            : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v13) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v13 = 0LL)
              : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v14 = (_DWORD *)(v11 + 108),
                !(_DWORD)v13) )
          {
            v14 = (_DWORD *)(v11 + 76);
          }
        }
        else
        {
          v14 = (_DWORD *)(v11 + 92);
        }
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v15 = 0LL)
            : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v15) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v17 = 0)
              : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v17) )
          {
            v16 = (_DWORD *)(v11 + 60);
          }
          else
          {
            v16 = (_DWORD *)(v11 + 28);
          }
        }
        else
        {
          v16 = (_DWORD *)(v11 + 44);
        }
        v18 = v14[1] - v16[1];
        v19 = *v14 - *v16;
        *v9 += v19;
        v9[2] += v19;
        v9[3] += v18;
        v9[1] += v18;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v28 = v9[8] & 0xFFFFFFF6;
    }
    else
    {
      *((_QWORD *)v9 + 2) = *a4;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v21 = MonitorFromRect(v9, 1LL, v20);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v23 = 0LL)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v23) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v23 = 0LL)
              : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v24 = (_DWORD *)(v21 + 108),
                !(_DWORD)v23) )
          {
            v24 = (_DWORD *)(v21 + 76);
          }
        }
        else
        {
          v24 = (_DWORD *)(v21 + 92);
        }
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v25 = 0LL)
            : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v25) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v27 = 0)
              : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v26 = (_DWORD *)(v21 + 60),
                !v27) )
          {
            v26 = (_DWORD *)(v21 + 28);
          }
        }
        else
        {
          v26 = (_DWORD *)(v21 + 44);
        }
        v9[4] += *v24 - *v26;
        v9[5] += v24[1] - v26[1];
      }
      v28 = v9[8] | 9;
    }
    v9[8] = v28;
    v29 = *((_BYTE *)a1 + 55);
    if ( (v29 & 0x20) != 0 )
    {
      if ( (v9[8] & 8) != 0 )
        xxxSetWindowPosAndBand(a1, 0LL, v9[4], v9[5], 0, 0, 21, 0);
    }
    else if ( (v29 & 1) == 0 && a3 )
    {
      xxxSetWindowPosAndBand(a1, 0LL, *a3, a3[1], a3[2] - *a3, a3[3] - a3[1], 4, 0);
    }
    xxxShowWindow(a1, a2);
    return 1LL;
  }
  return result;
}
