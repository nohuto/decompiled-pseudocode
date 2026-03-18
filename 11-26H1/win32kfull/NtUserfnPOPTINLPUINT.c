/*
 * XREFs of NtUserfnPOPTINLPUINT @ 0x1402C1F10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnPOPTINLPUINT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  PtiCurrent(a1);
  if ( a4 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    ProbeForRead(a4, 8 * a3, 4u);
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, volatile void *, __int64))(UserSessionState
                                                                                                + 8LL
                                                                                                * ((a6 + 6) & 0x1F)
                                                                                                + 70904))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
