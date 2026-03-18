/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x1C00F5230
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01EE3CC (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C010F75C (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void MKHideMouseCursor(void)
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  _DWORD *v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  _DWORD *v15; // rcx

  if ( (gdwPUDFlags & 0x1000) != 0 )
  {
    gdwPUDFlags &= ~0x1000u;
    gdwGTERMFlags &= ~1u;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v0) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v0)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v6 = 0)
             : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
               !v6) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x13uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v3 = 0)
          : (v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
            v3) )
      {
        v7 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v7 = (_DWORD *)(gpsi + 1956LL);
      }
LABEL_21:
      *v7 = 0;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
        {
          goto LABEL_24;
        }
      }
      else if ( !IsDPIDWMSysMet(v8)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v14 = 0)
               : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v14) )
      {
LABEL_24:
        if ( IsDPIDWMSysMet(0x2BuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v11 = 0)
            : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v11) )
        {
          v15 = (_DWORD *)(gpsi + 2828LL);
        }
        else
        {
          v15 = (_DWORD *)(gpsi + 2052LL);
        }
        goto LABEL_40;
      }
      v15 = (_DWORD *)(gpsi + 2440LL);
LABEL_40:
      *v15 = 0;
      SetGlobalCursorLevel(-1);
      return;
    }
    v7 = (_DWORD *)(gpsi + 2344LL);
    goto LABEL_21;
  }
}
