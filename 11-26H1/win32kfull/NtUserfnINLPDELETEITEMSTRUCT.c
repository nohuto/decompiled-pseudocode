/*
 * XREFs of NtUserfnINLPDELETEITEMSTRUCT @ 0x14020E070
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINLPDELETEITEMSTRUCT(
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
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]

  v14 = 0LL;
  v15 = 0LL;
  PtiCurrent(a1);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v14 = *a4;
  v15 = a4[1];
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70904))(
           a1,
           a2,
           a3,
           &v14,
           a5);
}
