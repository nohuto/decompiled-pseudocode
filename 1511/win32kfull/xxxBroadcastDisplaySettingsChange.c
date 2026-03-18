/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00EF380
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00EF320 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01EFB40 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 *v14; // rax
  __int64 result; // rax
  int v16; // ecx
  int v17; // ecx

  EtwTraceChangeDisplayModeBroadcast(0LL);
  v6 = IsDPIAbsoluteSysMet(0LL);
  v8 = v7 + 1;
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0 )
    {
LABEL_7:
      v10 = (unsigned __int16 *)(gpsi + 2268LL);
      goto LABEL_8;
    }
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0 )
  {
    v9 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL)
       : 0LL;
    if ( (_DWORD)v9 )
      goto LABEL_7;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v16 = 0)
      : (v16 = v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL)),
        v16) )
  {
    v10 = (unsigned __int16 *)(gpsi + 2656LL);
  }
  else
  {
    v10 = (unsigned __int16 *)(gpsi + 1880LL);
  }
LABEL_8:
  if ( (unsigned int)IsDPIAbsoluteSysMet(v8) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
    {
LABEL_14:
      v13 = gpsi;
      v14 = (unsigned __int16 *)(gpsi + 2272LL);
      goto LABEL_15;
    }
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
  {
    v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
        : 0LL;
    if ( (_DWORD)v12 )
      goto LABEL_14;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v17 = 0)
      : (v17 = v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL)),
        v17) )
  {
    v13 = gpsi;
    v14 = (unsigned __int16 *)(gpsi + 2660LL);
  }
  else
  {
    v13 = gpsi;
    v14 = (unsigned __int16 *)(gpsi + 1884LL);
  }
LABEL_15:
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
             0x7Eu,
             *(unsigned __int16 *)(v13 + 7284),
             (struct _LARGE_STRING *)(*v10 | (*v14 << 16)),
             v8,
             0LL,
             v8,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x1Au, 0LL, 0LL, v8, 0LL, v8, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x15u, 0LL, 0LL, v8, 0LL, v8, a3);
  }
  return result;
}
