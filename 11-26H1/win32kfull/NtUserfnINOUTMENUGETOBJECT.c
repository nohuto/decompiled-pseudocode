/*
 * XREFs of NtUserfnINOUTMENUGETOBJECT @ 0x1402C1B40
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTMENUGETOBJECT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 *v12; // rax
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+48h] [rbp-30h] BYREF
  __int128 v16; // [rsp+58h] [rbp-20h]

  v15 = 0LL;
  v16 = 0LL;
  PtiCurrent(a1);
  v12 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v12 = (__int128 *)MmUserProbeAddress;
  v15 = *v12;
  v16 = v12[1];
  UserSessionState = W32GetUserSessionState(v11, v10);
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
  return result;
}
