/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C0218B30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0111B6C (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  _DWORD *v54; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v5 = IsDPIAbsoluteSysMet(0x60uLL);
  if ( v5 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v4, v3, v6, v7) & 0xF) != 0 )
      goto LABEL_3;
LABEL_13:
    v30 = (_DWORD *)(gpsi + 2652LL);
    goto LABEL_18;
  }
  if ( IsDPIDWMSysMet(v4)
    && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_13;
  }
LABEL_3:
  if ( IsDPIDWMSysMet(0x60uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
      ? (v18 = 0)
      : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v18) )
  {
    v30 = (_DWORD *)(gpsi + 3040LL);
  }
  else
  {
    v30 = (_DWORD *)(gpsi + 2264LL);
  }
LABEL_18:
  if ( *v30 || !(unsigned int)IsPrivileged(psTcb) )
  {
    v2 = 0;
    UserSetLastError(5LL);
    goto LABEL_39;
  }
  if ( v5 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0 )
      goto LABEL_22;
  }
  else if ( !IsDPIDWMSysMet(0x60uLL)
         || (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 408)
           ? (v53 = 0)
           : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v35,
                                                          v51,
                                                          v52)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v53) )
  {
LABEL_22:
    if ( IsDPIDWMSysMet(0x60uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v39, v40) + 408)
        ? (v43 = 0)
        : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v35,
                                                       v41,
                                                       v42)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v43) )
    {
      v54 = (_DWORD *)(gpsi + 3040LL);
    }
    else
    {
      v54 = (_DWORD *)(gpsi + 2264LL);
    }
    goto LABEL_37;
  }
  v54 = (_DWORD *)(gpsi + 2652LL);
LABEL_37:
  *v54 = a1;
LABEL_39:
  UserSessionSwitchLeaveCrit(v54, v35);
  return v2;
}
