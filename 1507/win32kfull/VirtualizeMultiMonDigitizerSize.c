/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E6484
 * Callers:
 *     MiPConvertLogicalRect @ 0x1C0007EF0 (MiPConvertLogicalRect.c)
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E54E4 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

int __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  INT *v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  INT *v18; // rcx
  _DWORD v20[4]; // [rsp+20h] [rbp-28h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
  {
    ExpandedMonitorSpace(v20);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v3)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v9 = 0)
             : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
               !v9) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x4EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v6 = 0)
          : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
            v6) )
      {
        v10 = (INT *)(gpsi + 2968LL);
      }
      else
      {
        v10 = (INT *)(gpsi + 2192LL);
      }
LABEL_21:
      *(_DWORD *)(a1 + 8) = EngMulDiv(*(_DWORD *)(a1 + 8), *v10, v20[2] - v20[0]);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
        {
          goto LABEL_24;
        }
      }
      else if ( !IsDPIDWMSysMet(v11)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v17 = 0)
               : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v17) )
      {
LABEL_24:
        if ( IsDPIDWMSysMet(0x4FuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v14 = 0)
            : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v14) )
        {
          v18 = (INT *)(gpsi + 2972LL);
        }
        else
        {
          v18 = (INT *)(gpsi + 2196LL);
        }
        goto LABEL_40;
      }
      v18 = (INT *)(gpsi + 2584LL);
LABEL_40:
      LODWORD(CurrentProcessWin32Process) = EngMulDiv(*(_DWORD *)(a1 + 12), *v18, v20[3] - v20[1]);
      *(_DWORD *)(a1 + 12) = CurrentProcessWin32Process;
      return CurrentProcessWin32Process;
    }
    v10 = (INT *)(gpsi + 2580LL);
    goto LABEL_21;
  }
  return CurrentProcessWin32Process;
}
