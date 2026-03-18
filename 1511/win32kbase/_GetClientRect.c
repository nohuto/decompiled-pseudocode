/*
 * XREFs of _GetClientRect @ 0x1C00D50F4
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C007B860 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // ecx

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
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10) + 408)
        ? (v8 = 0LL)
        : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v8) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15) + 408)
          ? (v8 = 0LL)
          : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
            (_DWORD)v8) )
      {
        v13 = (char *)gpsi + 2656;
      }
      else
      {
        v13 = (char *)gpsi + 1880;
      }
    }
    else
    {
      v13 = (char *)gpsi + 2268;
    }
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v13;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 408)
        ? (v18 = 0LL)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v18) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 408)
          ? (v28 = 0)
          : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v28) )
      {
        v23 = (char *)gpsi + 2660;
      }
      else
      {
        v23 = (char *)gpsi + 1884;
      }
    }
    else
    {
      v23 = (char *)gpsi + 2272;
    }
    result = *(unsigned int *)v23;
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
