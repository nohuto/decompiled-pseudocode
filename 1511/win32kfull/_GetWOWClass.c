/*
 * XREFs of _GetWOWClass @ 0x1C01E86E4
 * Callers:
 *     NtUserGetWOWClass @ 0x1C021C270 (NtUserGetWOWClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C011D590 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v8; // rcx
  char v9[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)RtlStringCchCopyW(v9, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v9);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 376), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v8 = *(_QWORD *)(ThreadWin32Thread + 408);
    if ( v8 == *(_QWORD *)(*(_QWORD *)ClassPtr + 16LL) )
      return result;
    for ( result = (_QWORD *)result[9]; result; result = (_QWORD *)*result )
    {
      if ( v8 == result[2] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
