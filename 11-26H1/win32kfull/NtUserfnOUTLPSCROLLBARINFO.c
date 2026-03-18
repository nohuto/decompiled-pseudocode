/*
 * XREFs of NtUserfnOUTLPSCROLLBARINFO @ 0x140219B10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTLPSCROLLBARINFO(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int128 v15; // [rsp+48h] [rbp-70h] BYREF
  __int128 v16; // [rsp+58h] [rbp-60h]
  __int128 v17; // [rsp+68h] [rbp-50h]
  __int64 v18; // [rsp+78h] [rbp-40h]
  int v19; // [rsp+80h] [rbp-38h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  PtiCurrent(a1);
  ProbeForWrite(a4, 0x3CuLL, 1u);
  v15 = *a4;
  v16 = a4[1];
  v17 = a4[2];
  v18 = *((_QWORD *)a4 + 6);
  v19 = *((_DWORD *)a4 + 14);
  UserSessionState = W32GetUserSessionState(v11, v10);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
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
  *((_QWORD *)a4 + 6) = v18;
  *((_DWORD *)a4 + 14) = v19;
  return v14;
}
