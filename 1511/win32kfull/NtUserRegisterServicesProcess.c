/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C021EF00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     IsPrivileged @ 0x1C01017AC (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  _DWORD *v20; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v4 = IsDPIAbsoluteSysMet(0x60uLL);
  if ( v4 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
LABEL_15:
    v11 = (_DWORD *)(gpsi + 2652LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v3)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x60uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v7 = 0)
      : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        v7) )
  {
    v11 = (_DWORD *)(gpsi + 3040LL);
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 2264LL);
  }
LABEL_20:
  if ( *v11 || !(unsigned int)IsPrivileged(psTcb) )
  {
    v2 = 0;
    UserSetLastError(5);
    goto LABEL_43;
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
    {
      goto LABEL_25;
    }
  }
  else if ( !IsDPIDWMSysMet(0x60uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v19 = 0)
           : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v19) )
  {
LABEL_25:
    if ( IsDPIDWMSysMet(0x60uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v16 = 0)
        : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v16) )
    {
      v20 = (_DWORD *)(gpsi + 3040LL);
    }
    else
    {
      v20 = (_DWORD *)(gpsi + 2264LL);
    }
    goto LABEL_41;
  }
  v20 = (_DWORD *)(gpsi + 2652LL);
LABEL_41:
  *v20 = a1;
LABEL_43:
  UserSessionSwitchLeaveCrit(v20, v14);
  return v2;
}
