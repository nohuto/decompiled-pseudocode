/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1402C1390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        SIZE_T a3,
        _WORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  int v11; // ecx
  __int64 v12; // rbx
  SIZE_T v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v18; // [rsp+40h] [rbp-18h] BYREF
  int v19; // [rsp+44h] [rbp-14h]
  _WORD *v20; // [rsp+48h] [rbp-10h]

  PtiCurrent(a1);
  v11 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v19 = v11;
  v12 = 0LL;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v19 = v11;
  }
  if ( (v11 & 0x7FFFFFFFu) < 2 || (v13 = v11 & 0x7FFFFFFF, v13 < a3) )
  {
    UserSetLastError(87);
  }
  else
  {
    v18 = 0;
    v20 = a4;
    ProbeForWrite(a4, v13, (v11 >> 31) + 2);
    *a4 = 0;
    UserSessionState = W32GetUserSessionState(v15, v14);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, int *, __int64))(UserSessionState
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 70904))(
             a1,
             a2,
             a3,
             &v18,
             a5);
  }
  return v12;
}
