/*
 * XREFs of NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1401BC620
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rbx
  unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v16[9]; // [rsp+34h] [rbp-24h] BYREF

  v15 = 0;
  v16[0] = 0;
  PsGetCurrentThreadWin32Thread(a1);
  UserSessionState = W32GetUserSessionState(v11, v10);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _DWORD *, __int64))(UserSessionState
                                                                                      + 8LL * ((a6 + 6) & 0x1F)
                                                                                      + 70904))(
          a1,
          a2,
          &v15,
          v16,
          a5);
  if ( a3 )
    RtlWriteULongToUser(a3, v15);
  if ( a4 )
    RtlWriteULongToUser(a4, v16[0]);
  return v13;
}
