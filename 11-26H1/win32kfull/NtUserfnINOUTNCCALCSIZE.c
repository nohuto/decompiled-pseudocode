/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1401BD3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void **a4,
        __int64 a5,
        char a6)
{
  _OWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 *v13; // r14
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  volatile void *Address; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+B8h] [rbp-50h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Address = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  PtiCurrent(a1);
  if ( a3 )
  {
    ProbeForWrite(a4, 0x38uLL, 1u);
    v19 = *(_OWORD *)a4;
    v20 = *((_OWORD *)a4 + 1);
    v21 = *((_OWORD *)a4 + 2);
    Address = a4[6];
    ProbeForWrite(Address, 0x28uLL, 1u);
    v10 = Address;
    v16 = *(_OWORD *)Address;
    v17 = *((_OWORD *)Address + 1);
    v18 = *((_QWORD *)Address + 4);
    Address = &v16;
    v13 = &v19;
  }
  else
  {
    ProbeForWrite(a4, 0x10uLL, 1u);
    v23 = *(_OWORD *)a4;
    v13 = &v23;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70904))(
             a1,
             a2,
             a3,
             v13,
             a5);
  if ( a3 )
  {
    *(_OWORD *)a4 = v19;
    *((_OWORD *)a4 + 1) = v20;
    *((_OWORD *)a4 + 2) = v21;
    a4[6] = v10;
    *v10 = v16;
    v10[1] = v17;
    *((_QWORD *)v10 + 4) = v18;
  }
  else
  {
    *(_OWORD *)a4 = v23;
  }
  return result;
}
