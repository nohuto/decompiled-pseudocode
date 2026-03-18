/*
 * XREFs of NtUserfnINPAINTCLIPBRD @ 0x1402C1D00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserfnINPAINTCLIPBRD(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 UserSessionState; // rax
  _OWORD v14[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-48h]

  memset_0(v14, 0, 0x48uLL);
  PtiCurrent(v10);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v14[0] = *(_OWORD *)a4;
  v14[1] = *(_OWORD *)(a4 + 16);
  v14[2] = *(_OWORD *)(a4 + 32);
  v14[3] = *(_OWORD *)(a4 + 48);
  v15 = *(_QWORD *)(a4 + 64);
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))(UserSessionState
                                                                                + 8LL * ((a6 + 6) & 0x1F)
                                                                                + 70904))(
           a1,
           a2,
           a3,
           v14,
           a5);
}
