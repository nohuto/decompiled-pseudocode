/*
 * XREFs of _GetWindowRect @ 0x1C0249A30
 * Callers:
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetWindowRect(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  unsigned int *v19; // rcx

  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 112);
    return result;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
    {
      goto LABEL_6;
    }
LABEL_17:
    v11 = (_DWORD *)(gpsi + 2268LL);
    goto LABEL_22;
  }
  if ( IsDPIDWMSysMet(v4)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_17;
  }
LABEL_6:
  if ( IsDPIDWMSysMet(0LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v7 = 0)
      : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        v7) )
  {
    v11 = (_DWORD *)(gpsi + 2656LL);
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 1880LL);
  }
LABEL_22:
  *(_DWORD *)(a2 + 8) = *v11;
  if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
    {
      goto LABEL_25;
    }
  }
  else if ( !IsDPIDWMSysMet(v12)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v18 = 0)
           : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v18) )
  {
LABEL_25:
    if ( IsDPIDWMSysMet(1uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v15 = 0)
        : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v15) )
    {
      v19 = (unsigned int *)(gpsi + 2660LL);
    }
    else
    {
      v19 = (unsigned int *)(gpsi + 1884LL);
    }
    goto LABEL_41;
  }
  v19 = (unsigned int *)(gpsi + 2272LL);
LABEL_41:
  result = *v19;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
