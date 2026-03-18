/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C0150B28
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C0150A50 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  int v5; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rdx
  _OWORD *v34; // [rsp+20h] [rbp-38h] BYREF
  __int128 v35; // [rsp+28h] [rbp-30h] BYREF

  v5 = a3;
  if ( (_DWORD)a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, (__int64)a4) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11) + 408)
        ? (v9 = 0LL)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v9) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
          ? (v18 = 0)
          : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v15,
                                                         v16,
                                                         v17)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v18) )
      {
        v19 = (_OWORD *)(a2 + 108);
      }
      else
      {
        v19 = (_OWORD *)(a2 + 76);
      }
    }
    else
    {
      v19 = (_OWORD *)(a2 + 92);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, (__int64)a4) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v23, v24) + 408)
           ? (v22 = 0LL)
           : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v21,
                                                          v23,
                                                          v24)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !(_DWORD)v22) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
        ? (v31 = 0)
        : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v28,
                                                       v29,
                                                       v30)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v19 = (_OWORD *)(a2 + 60),
          !v31) )
    {
      v19 = (_OWORD *)(a2 + 28);
    }
  }
  else
  {
    v19 = (_OWORD *)(a2 + 44);
  }
  v20 = *v19;
  LOBYTE(v19) = *(_DWORD *)(a1 + 352) & 0xF;
  v35 = v20;
  if ( (_BYTE)v19 != 2 )
  {
    v19 = (_OWORD *)ValidateHmonitorNoRip(*(_QWORD *)(a1 + 344));
    v34 = v19;
    if ( v19 )
    {
      if ( v19 != (_OWORD *)a2 )
      {
        v32 = a2 + 76;
        if ( !v5 )
          v32 = a2 + 28;
        LOBYTE(v19) = PhysicalToLogicalDPIRect(&v35, v32, 0LL, &v34);
      }
    }
  }
  *a4 = v35;
  return (char)v19;
}
