/*
 * XREFs of CacheRotationInfo @ 0x1402961D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CacheRotationInfo(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66064) + 24LL))(*(_QWORD *)(UserSessionState + 66064));
}
