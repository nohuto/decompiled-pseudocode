/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C01FB91C
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C0219CB0 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  int *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _DWORD *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  unsigned int v56; // eax
  char v57; // al

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
        if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18) + 408)
            ? (v16 = 0LL)
            : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v15,
                                                           v17,
                                                           v18)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v16) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18) + 408)
              ? (v16 = 0LL)
              : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v15,
                                                             v17,
                                                             v18)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v19 = (_DWORD *)(v10 + 108),
                !(_DWORD)v16) )
          {
            v19 = (_DWORD *)(v10 + 76);
          }
        }
        else
        {
          v19 = (_DWORD *)(v10 + 92);
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v22, v23) + 408)
            ? (v21 = 0LL)
            : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v20,
                                                           v22,
                                                           v23)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v21) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
              ? (v31 = 0)
              : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v28,
                                                             v29,
                                                             v30)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v31) )
          {
            v24 = (_DWORD *)(v10 + 60);
          }
          else
          {
            v24 = (_DWORD *)(v10 + 28);
          }
        }
        else
        {
          v24 = (_DWORD *)(v10 + 44);
        }
        v32 = v19[1] - v24[1];
        v33 = *v19 - *v24;
        *v9 += v33;
        v9[2] += v33;
        v9[3] += v32;
        v9[1] += v32;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v56 = v9[8] & 0xFFFFFFF6;
    }
    else
    {
      *((_QWORD *)v9 + 2) = *a4;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v34 = MonitorFromRect(v9, 1u);
        if ( (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v41, v42) + 408)
            ? (v40 = 0LL)
            : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v39,
                                                           v41,
                                                           v42)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v40) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v41, v42) + 408)
              ? (v40 = 0LL)
              : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v39,
                                                             v41,
                                                             v42)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v43 = (_DWORD *)(v34 + 108),
                !(_DWORD)v40) )
          {
            v43 = (_DWORD *)(v34 + 76);
          }
        }
        else
        {
          v43 = (_DWORD *)(v34 + 92);
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v46, v47) + 408)
            ? (v45 = 0LL)
            : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v44,
                                                           v46,
                                                           v47)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v45) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 408)
              ? (v55 = 0)
              : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v52,
                                                             v53,
                                                             v54)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v48 = (_DWORD *)(v34 + 60),
                !v55) )
          {
            v48 = (_DWORD *)(v34 + 28);
          }
        }
        else
        {
          v48 = (_DWORD *)(v34 + 44);
        }
        v9[4] += *v43 - *v48;
        v9[5] += v43[1] - v48[1];
      }
      v56 = v9[8] | 9;
    }
    v9[8] = v56;
    v57 = *((_BYTE *)a1 + 55);
    if ( (v57 & 0x20) != 0 )
    {
      if ( (v9[8] & 8) != 0 )
        xxxSetWindowPosAndBand(a1, 0, v9[4], v9[5], 0, 0, 21, 0);
    }
    else if ( (v57 & 1) == 0 && a3 )
    {
      xxxSetWindowPosAndBand(a1, 0, *a3, a3[1], a3[2] - *a3, a3[3] - a3[1], 4, 0);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
