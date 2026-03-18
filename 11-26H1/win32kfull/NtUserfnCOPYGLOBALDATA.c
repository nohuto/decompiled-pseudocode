/*
 * XREFs of NtUserfnCOPYGLOBALDATA @ 0x1402C10D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnCOPYGLOBALDATA(
        __int64 a1,
        unsigned int a2,
        SIZE_T a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  PtiCurrent(a1);
  ProbeForRead(a4, a3, 1u);
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, volatile void *, __int64))(UserSessionState
                                                                                      + 8LL * ((a6 + 6) & 0x1F)
                                                                                      + 70904))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
