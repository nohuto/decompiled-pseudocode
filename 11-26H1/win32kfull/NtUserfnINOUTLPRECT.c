/*
 * XREFs of NtUserfnINOUTLPRECT @ 0x14020BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTLPRECT(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int128 *v11; // rax
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF

  v14 = 0LL;
  PtiCurrent(a1);
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (__int128 *)MmUserProbeAddress;
  v14 = *v11;
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70904))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  *a4 = v14;
  return result;
}
