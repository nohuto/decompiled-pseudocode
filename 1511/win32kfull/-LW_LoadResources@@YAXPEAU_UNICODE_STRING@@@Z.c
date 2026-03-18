/*
 * XREFs of ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C010DB64
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall LW_LoadResources(struct _UNICODE_STRING *a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  BOOL *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // ecx
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF

  FastGetProfileStringFromIDW(a1, 12LL, 5LL, &szN, &v11, 4, 0);
  v2 = (_WORD)v11 == 49 || (_WORD)v11 == 89 || (_WORD)v11 == 121;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) == 0 )
    {
LABEL_24:
      v6 = (BOOL *)(gpsi + 2360LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v3)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_24;
  }
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v10 = 0)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v10) )
  {
    v6 = (BOOL *)(gpsi + 2748LL);
  }
  else
  {
    v6 = (BOOL *)(gpsi + 1972LL);
  }
LABEL_9:
  *v6 = v2;
  FastGetProfileStringFromIDW(a1, 11LL, 9LL, &szY, &v11, 4, 0);
  if ( (((_WORD)v11 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x80000u;
  else
    gdwPUDFlags |= 0x80000u;
  FastGetProfileStringFromIDW(a1, 11LL, 220LL, &szN, &v11, 4, 0);
  if ( (((_WORD)v11 - 89) & 0xFFDF) != 0 )
    gdwPUDFlags &= ~0x1000000u;
  else
    gdwPUDFlags |= 0x1000000u;
}
