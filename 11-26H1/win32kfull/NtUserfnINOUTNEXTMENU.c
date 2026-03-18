/*
 * XREFs of NtUserfnINOUTNEXTMENU @ 0x1402C1C20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTNEXTMENU(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  PtiCurrent(a1);
  ProbeForWrite(a4, 0x18uLL, 1u);
  v14 = *(_OWORD *)a4;
  v15 = a4[2];
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70904))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  *(_OWORD *)a4 = v14;
  a4[2] = v15;
  return result;
}
