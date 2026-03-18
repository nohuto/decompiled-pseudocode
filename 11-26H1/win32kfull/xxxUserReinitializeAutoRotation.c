/*
 * XREFs of xxxUserReinitializeAutoRotation @ 0x140262F60
 * Callers:
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserReinitializeAutoRotation(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (***(__int64 (__fastcall ****)(_QWORD))(UserSessionState + 66064))(*(_QWORD *)(UserSessionState + 66064));
}
