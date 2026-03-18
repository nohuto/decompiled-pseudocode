/*
 * XREFs of ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C008E790
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall LW_LoadResources(struct _UNICODE_STRING *a1)
{
  BOOL v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // [rsp+40h] [rbp-18h] BYREF

  FastGetProfileStringFromIDW(a1, 12LL, 5LL, &szN, &v30, 4, 0);
  v2 = (_WORD)v30 == 49 || (_WORD)v30 == 89 || (_WORD)v30 == 121;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v4, v3, v5, v6) & 0xF) == 0 )
    {
LABEL_22:
      v15 = (BOOL *)(gpsi + 2360LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v4)
         && (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_22;
  }
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
      ? (v29 = 0)
      : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v29) )
  {
    v15 = (BOOL *)(gpsi + 2748LL);
  }
  else
  {
    v15 = (BOOL *)(gpsi + 1972LL);
  }
LABEL_9:
  *v15 = v2;
  FastGetProfileStringFromIDW(a1, 11LL, 9LL, &szY, &v30, 4, 0);
  if ( (((_WORD)v30 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x80000u;
  else
    gdwPUDFlags |= 0x80000u;
  FastGetProfileStringFromIDW(a1, 11LL, 220LL, &szN, &v30, 4, 0);
  if ( (((_WORD)v30 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x1000000u;
  else
    gdwPUDFlags |= 0x1000000u;
}
