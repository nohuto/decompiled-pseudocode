/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1C01ED628
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C0146144 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void MKShowMouseCursor(void)
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

  if ( (gdwGTERMFlags & 1) == 0 )
  {
    gdwGTERMFlags |= 1u;
    gdwPUDFlags |= 0x1000u;
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
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v6 = 0)
             : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
               !v6) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x13uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v3 = 0)
          : (v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
            v3) )
      {
        v7 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v7 = (_DWORD *)(gpsi + 1956LL);
      }
LABEL_21:
      *v7 = 1;
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
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v14 = 0)
               : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v14) )
      {
LABEL_24:
        if ( IsDPIDWMSysMet(0x2BuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v11 = 0)
            : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
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
      *v15 = 2;
      SetGlobalCursorLevel(0);
      return;
    }
    v7 = (_DWORD *)(gpsi + 2344LL);
    goto LABEL_21;
  }
}
