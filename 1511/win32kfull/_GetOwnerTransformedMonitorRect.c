/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C014B5A8
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C014B4D0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

_OWORD *__fastcall GetOwnerTransformedMonitorRect(__int64 a1, _OWORD *a2, int a3, _OWORD *a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  _OWORD *result; // rax
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // ecx
  char *v14; // rdx
  _OWORD *v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF

  if ( a3 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v8 = 0LL)
        : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v8) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v9 = 0)
          : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
            v9) )
      {
        result = (_OWORD *)((char *)a2 + 108);
      }
      else
      {
        result = (_OWORD *)((char *)a2 + 76);
      }
    }
    else
    {
      result = (_OWORD *)((char *)a2 + 92);
    }
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v12 = 0LL)
           : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !(_DWORD)v12) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v13 = 0)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          result = (_OWORD *)((char *)a2 + 60),
          !v13) )
    {
      result = (_OWORD *)((char *)a2 + 28);
    }
  }
  else
  {
    result = (_OWORD *)((char *)a2 + 44);
  }
  v11 = *(_DWORD *)(a1 + 344) == 2;
  v16 = *result;
  if ( !v11 )
  {
    result = (_OWORD *)ValidateHmonitorNoRip(*(_QWORD *)(a1 + 352));
    v15 = result;
    if ( result )
    {
      if ( result != a2 )
      {
        v14 = (char *)a2 + 76;
        if ( !a3 )
          v14 = (char *)a2 + 28;
        result = (_OWORD *)PhysicalToLogicalDPIRect(&v16, v14, 0LL, &v15);
      }
    }
  }
  *a4 = v16;
  return result;
}
