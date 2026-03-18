/*
 * XREFs of _GetWOWClass @ 0x1402A4A94
 * Callers:
 *     NtUserGetWOWClass @ 0x1402B5170 (NtUserGetWOWClass.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GetClassPtr @ 0x140150850 (GetClassPtr.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 *ClassPtr; // rdi
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v8; // rcx
  char v9[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  v4 = PtiCurrent(a1);
  if ( (int)RtlStringCchCopyW(v9, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v9, v5);
  if ( Atom )
    ClassPtr = GetClassPtr((_QWORD *)Atom, *((_QWORD **)v4 + 57), a1);
  if ( ClassPtr )
  {
    result = (_QWORD *)*ClassPtr;
    v8 = *((_QWORD *)v4 + 61);
    if ( v8 == *(_QWORD *)(*ClassPtr + 32) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v8 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
