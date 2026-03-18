/*
 * XREFs of NtUserfnINOUTLPPOINT5 @ 0x140201A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTLPPOINT5(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-60h] BYREF
  __int128 v15; // [rsp+58h] [rbp-50h]
  __int64 v16; // [rsp+68h] [rbp-40h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PtiCurrent(a1);
  ProbeForWrite(a4, 0x28uLL, 1u);
  v14 = *a4;
  v15 = a4[1];
  v16 = *((_QWORD *)a4 + 4);
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70904))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  *a4 = v14;
  a4[1] = v15;
  *((_QWORD *)a4 + 4) = v16;
  return result;
}
