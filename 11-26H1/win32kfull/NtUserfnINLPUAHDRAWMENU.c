/*
 * XREFs of NtUserfnINLPUAHDRAWMENU @ 0x140250790
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENU(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  PtiCurrent(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v13 = *(_OWORD *)a4;
  v14 = *(_QWORD *)(a4 + 16);
  UserSessionState = W32GetUserSessionState(v10, MmUserProbeAddress);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70904))(
           a1,
           a2,
           a3,
           &v13,
           a5);
}
