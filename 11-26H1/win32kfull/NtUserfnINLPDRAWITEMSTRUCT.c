/*
 * XREFs of NtUserfnINLPDRAWITEMSTRUCT @ 0x140203BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPDRAWITEMSTRUCT(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 UserSessionState; // rax
  _OWORD v14[4]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(v14, 0, sizeof(v14));
  PtiCurrent(v10);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v14[0] = *a4;
  v14[1] = a4[1];
  v14[2] = a4[2];
  v14[3] = a4[3];
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
