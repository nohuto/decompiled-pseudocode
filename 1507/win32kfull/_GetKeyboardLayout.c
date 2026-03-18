/*
 * XREFs of _GetKeyboardLayout @ 0x1C00E4590
 * Callers:
 *     GetActiveHKL @ 0x1C004A700 (GetActiveHKL.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  __int64 v1; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  HANDLE v5; // rsi

  if ( a1 )
  {
    v3 = (_QWORD **)(*(_QWORD *)(gptiCurrent + 416LL) + 160LL);
    v4 = *v3;
    if ( *v3 == v3 )
      return 0LL;
    v5 = (HANDLE)a1;
    while ( PsGetThreadId((PETHREAD)*(v4 - 83)) != v5 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 == v3 )
        return 0LL;
    }
    v1 = *(v4 - 33);
  }
  else
  {
    v1 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 400);
  }
  if ( v1 )
    return *(_QWORD *)(v1 + 40);
  return 0LL;
}
