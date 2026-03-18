/*
 * XREFs of _GetKeyboardLayout @ 0x1C005C9B0
 * Callers:
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD **v6; // rdi
  _QWORD *v7; // rbx
  HANDLE v8; // rsi

  if ( a1 )
  {
    v6 = (_QWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 160LL);
    v7 = *v6;
    if ( *v6 == v6 )
      return 0LL;
    v8 = (HANDLE)a1;
    while ( PsGetThreadId((PETHREAD)*(v7 - 82)) != v8 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == v6 )
        return 0LL;
    }
    v4 = *(v7 - 33);
  }
  else
  {
    v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0LL, a3, a4) + 392);
  }
  if ( v4 )
    return *(_QWORD *)(v4 + 40);
  return 0LL;
}
