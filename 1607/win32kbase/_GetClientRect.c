/*
 * XREFs of _GetClientRect @ 0x1C00E278C
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C007FFB0 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  char *v9; // rax
  int v10; // ecx
  int v11; // ecx
  char *v12; // rax
  int v13; // ecx

  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 || (*(_BYTE *)(a1 + 45) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x29D )
    {
      v5 = *(_OWORD *)(a1 + 128);
      v6 = *(_DWORD *)(a1 + 128);
      v7 = -*(_DWORD *)(a1 + 132);
      *(_OWORD *)a2 = v5;
      *(_DWORD *)(a2 + 12) += v7;
      result = (unsigned int)-v6;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v7;
      return result;
    }
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v8 = 0)
        : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          !v8) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v10 = 0)
          : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v10) )
      {
        v9 = (char *)gpsi + 2656;
      }
      else
      {
        v9 = (char *)gpsi + 1880;
      }
    }
    else
    {
      v9 = (char *)gpsi + 2268;
    }
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v9;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v11 = 0)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v11) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v13 = 0)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v13) )
      {
        v12 = (char *)gpsi + 2660;
      }
      else
      {
        v12 = (char *)gpsi + 1884;
      }
    }
    else
    {
      v12 = (char *)gpsi + 2272;
    }
    result = *(unsigned int *)v12;
  }
  else
  {
    v3 = gpsi;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = v3[527];
    result = (unsigned int)v3[528];
  }
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
