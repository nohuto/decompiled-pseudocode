/*
 * XREFs of InitMice @ 0x1C009D358
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitMice()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v24; // ecx

  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v0) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
    {
LABEL_23:
      v3 = (_DWORD *)(gpsi + 2344LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v0)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_23;
  }
  if ( IsDPIDWMSysMet(0x13uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v16 = 0)
      : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v16) )
  {
    v3 = (_DWORD *)(gpsi + 2732LL);
  }
  else
  {
    v3 = (_DWORD *)(gpsi + 1956LL);
  }
LABEL_5:
  *v3 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2BuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) == 0 )
    {
LABEL_39:
      v7 = (_DWORD *)(gpsi + 2440LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v4)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_39;
  }
  if ( IsDPIDWMSysMet(0x2BuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v20 = 0)
      : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v20) )
  {
    v7 = (_DWORD *)(gpsi + 2828LL);
  }
  else
  {
    v7 = (_DWORD *)(gpsi + 2052LL);
  }
LABEL_9:
  *v7 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x4BuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) == 0 )
    {
LABEL_55:
      result = gpsi;
      v12 = (_DWORD *)(gpsi + 2568LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(v8)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_55;
  }
  if ( IsDPIDWMSysMet(0x4BuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v24 = 0)
      : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v24) )
  {
    result = gpsi;
    v12 = (_DWORD *)(gpsi + 2956LL);
  }
  else
  {
    result = gpsi;
    v12 = (_DWORD *)(gpsi + 2180LL);
  }
LABEL_13:
  *v12 = 0;
  return result;
}
