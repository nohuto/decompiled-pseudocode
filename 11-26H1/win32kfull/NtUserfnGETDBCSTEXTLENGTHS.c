/*
 * XREFs of NtUserfnGETDBCSTEXTLENGTHS @ 0x1401D4F10
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1401D4B90 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1401D4D50 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  PtiCurrent(a1);
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(UserSessionState
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 70904))(
           a1,
           a2,
           a3,
           a7,
           a5);
}
