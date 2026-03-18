/*
 * XREFs of _GetCurrentInputMessageSource @ 0x1C011DA14
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C011D960 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C02129A0 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetCurrentInputMessageSource(int a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // edx
  BOOL v15; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v15 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 432) & 0x40000000) != 0;
  v13 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 432) < 0;
  if ( a1 )
  {
    if ( v13 || (**(_DWORD **)(ThreadWin32Thread + 400) & 8) != 0 )
      goto LABEL_4;
LABEL_6:
    *a2 = *(_DWORD *)(ThreadWin32Thread + 1100);
    a2[1] = *(_DWORD *)(ThreadWin32Thread + 1104);
    return 1LL;
  }
  if ( !v15 && (**(_DWORD **)(ThreadWin32Thread + 400) & 6) == 0 )
    goto LABEL_6;
LABEL_4:
  *a2 = 0;
  a2[1] = 0;
  return 1LL;
}
