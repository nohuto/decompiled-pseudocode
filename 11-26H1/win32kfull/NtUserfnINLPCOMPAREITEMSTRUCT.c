/*
 * XREFs of NtUserfnINLPCOMPAREITEMSTRUCT @ 0x14024F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINLPCOMPAREITEMSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PtiCurrent(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_OWORD *)(a4 + 32);
  v16 = *(_QWORD *)(a4 + 48);
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70904))(
           a1,
           a2,
           a3,
           &v13,
           a5);
}
