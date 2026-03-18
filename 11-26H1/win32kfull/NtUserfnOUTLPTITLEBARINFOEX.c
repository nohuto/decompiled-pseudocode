/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1401F3370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  __int128 v15; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+60h] [rbp-C8h]
  __int128 v17; // [rsp+70h] [rbp-B8h]
  __int128 v18; // [rsp+80h] [rbp-A8h]
  __int128 v19; // [rsp+90h] [rbp-98h]
  __int128 v20; // [rsp+A0h] [rbp-88h]
  __int128 v21; // [rsp+B0h] [rbp-78h]
  __int128 v22; // [rsp+C0h] [rbp-68h]
  __int64 v23; // [rsp+D0h] [rbp-58h]
  int v24; // [rsp+D8h] [rbp-50h]

  memset_0(&v15, 0, 0x8CuLL);
  PtiCurrent(v10);
  ProbeForWrite(a4, 0x8CuLL, 1u);
  v15 = *a4;
  v16 = a4[1];
  v17 = a4[2];
  v18 = a4[3];
  v19 = a4[4];
  v20 = a4[5];
  v21 = a4[6];
  v22 = a4[7];
  v23 = *((_QWORD *)a4 + 16);
  v24 = *((_DWORD *)a4 + 34);
  if ( (_DWORD)v15 == 140 )
  {
    UserSessionState = W32GetUserSessionState(v11, &v15);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
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
    a4[4] = v19;
    a4[5] = v20;
    a4[6] = v21;
    a4[7] = v22;
    *((_QWORD *)a4 + 16) = v23;
    *((_DWORD *)a4 + 34) = v24;
  }
  else
  {
    v12 = 0LL;
    UserSetLastError(87);
  }
  return v12;
}
