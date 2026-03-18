/*
 * XREFs of NtUserfnOUTDWORDINDWORD @ 0x140226000
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserfnOUTDWORDINDWORD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rbx
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  PtiCurrent(a1);
  UserSessionState = W32GetUserSessionState(v11, v10);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, __int64))(UserSessionState
                                                                               + 8LL * ((a6 + 6) & 0x1F)
                                                                               + 70904))(
          a1,
          a2,
          v15,
          a4,
          a5);
  RtlWriteULongToUser(a3, v15[0]);
  return v13;
}
