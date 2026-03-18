/*
 * XREFs of _GetCurrentInputMessageSource @ 0x1C00F1B5C
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C00F1AB0 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C0219E70 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetCurrentInputMessageSource(int a1, _DWORD *a2)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v5; // edx
  BOOL v7; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x40000000) != 0;
  v5 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) < 0;
  if ( a1 )
  {
    if ( v5 || (**(_DWORD **)(ThreadWin32Thread + 408) & 8) != 0 )
      goto LABEL_4;
LABEL_6:
    *a2 = *(_DWORD *)(ThreadWin32Thread + 1084);
    a2[1] = *(_DWORD *)(ThreadWin32Thread + 1088);
    return 1LL;
  }
  if ( !v7 && (**(_DWORD **)(ThreadWin32Thread + 408) & 6) == 0 )
    goto LABEL_6;
LABEL_4:
  *a2 = 0;
  a2[1] = 0;
  return 1LL;
}
