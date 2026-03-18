/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C0039450
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00393F0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01EFB40 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // r12d
  unsigned __int16 *v10; // rbx
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  __int64 result; // rax
  int v15; // ecx
  int v16; // ecx

  EtwTraceChangeDisplayModeBroadcast(0LL);
  v6 = IsDPIAbsoluteSysMet(0LL);
  v8 = v7 + 1;
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
    {
LABEL_7:
      v10 = (unsigned __int16 *)(gpsi + 2268LL);
      goto LABEL_8;
    }
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       ? v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL)
       : 0 )
    {
      goto LABEL_7;
    }
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v15 = 0)
      : (v15 = v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL)),
        v15) )
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
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
    {
LABEL_14:
      v12 = gpsi;
      v13 = (unsigned __int16 *)(gpsi + 2272LL);
      goto LABEL_15;
    }
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       ? v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL)
       : 0 )
    {
      goto LABEL_14;
    }
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v16 = 0)
      : (v16 = v8 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL)),
        v16) )
  {
    v12 = gpsi;
    v13 = (unsigned __int16 *)(gpsi + 2660LL);
  }
  else
  {
    v12 = gpsi;
    v13 = (unsigned __int16 *)(gpsi + 1884LL);
  }
LABEL_15:
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
             126LL,
             *(unsigned __int16 *)(v12 + 7284),
             *v10 | (*v13 << 16),
             v8,
             0LL,
             v8,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 26LL, 0LL, 0LL, v8, 0LL, v8, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 21LL, 0LL, 0LL, v8, 0LL, v8, a3);
  }
  return result;
}
