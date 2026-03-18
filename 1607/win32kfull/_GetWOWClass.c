/*
 * XREFs of _GetWOWClass @ 0x1C01DEF5C
 * Callers:
 *     NtUserGetWOWClass @ 0x1C0215430 (NtUserGetWOWClass.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C00720F0 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v10; // rcx
  char v11[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( (int)RtlStringCchCopyW(v11, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v11);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 376), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v10 = *(_QWORD *)(ThreadWin32Thread + 408);
    if ( v10 == *(_QWORD *)(*(_QWORD *)ClassPtr + 16LL) )
      return result;
    for ( result = (_QWORD *)result[9]; result; result = (_QWORD *)*result )
    {
      if ( v10 == result[2] )
        return result;
    }
  }
  UserSetLastError(1411LL);
  return 0LL;
}
