/*
 * XREFs of _SwapMouseButton @ 0x1C01E9660
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1)
{
  int v1; // ebp
  __int64 CurrentProcessWin32Process; // rdi
  int v3; // ebx
  unsigned __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  _DWORD *v21; // rcx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = 0;
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 656), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459);
    return 0LL;
  }
  v6 = IsDPIAbsoluteSysMet(0x17uLL);
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0 )
    {
      goto LABEL_8;
    }
LABEL_19:
    v13 = (unsigned int *)(gpsi + 2360LL);
    goto LABEL_24;
  }
  if ( IsDPIDWMSysMet(v5)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_19;
  }
LABEL_8:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v9 = 0)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        v9) )
  {
    v13 = (unsigned int *)(gpsi + 2748LL);
  }
  else
  {
    v13 = (unsigned int *)(gpsi + 1972LL);
  }
LABEL_24:
  v14 = *v13;
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
    {
      goto LABEL_27;
    }
  }
  else if ( !IsDPIDWMSysMet(0x17uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v20 = 0)
           : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v20) )
  {
LABEL_27:
    if ( IsDPIDWMSysMet(0x17uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v17 = 0)
        : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v17) )
    {
      v21 = (_DWORD *)(gpsi + 2748LL);
    }
    else
    {
      v21 = (_DWORD *)(gpsi + 1972LL);
    }
    goto LABEL_43;
  }
  v21 = (_DWORD *)(gpsi + 2360LL);
LABEL_43:
  *v21 = v1;
  if ( v1 != v14 )
  {
    LOBYTE(v3) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v3;
  }
  return v14;
}
