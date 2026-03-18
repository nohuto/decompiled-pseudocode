/*
 * XREFs of _GetInputDesktop @ 0x1402A5218
 * Callers:
 *     NtUserGetInputDesktop @ 0x1402B3A00 (NtUserGetInputDesktop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDesktop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176);
  CurrentProcess = PsGetCurrentProcess(v3);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, v2, 0LL, 0LL, &v6) && (unsigned int)SetHandleFlag(v6, 1LL) )
    return v6;
  else
    return 0LL;
}
