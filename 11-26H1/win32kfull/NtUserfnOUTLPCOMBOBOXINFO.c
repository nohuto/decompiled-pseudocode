/*
 * XREFs of NtUserfnOUTLPCOMBOBOXINFO @ 0x1401F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserfnOUTLPCOMBOBOXINFO(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+50h] [rbp-78h] BYREF
  __int128 v16; // [rsp+60h] [rbp-68h]
  __int128 v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+80h] [rbp-48h]

  memset_0(&v15, 0, 0x40uLL);
  PtiCurrent(v10);
  ProbeForWrite(a4, 0x40uLL, 1u);
  v15 = *a4;
  v16 = a4[1];
  v17 = a4[2];
  v18 = a4[3];
  UserSessionState = W32GetUserSessionState(v12, v11);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70904))(
             a1,
             a2,
             a3,
             &v15,
             a5);
  *a4 = v15;
  a4[1] = v16;
  a4[2] = v17;
  a4[3] = v18;
  return result;
}
