/*
 * XREFs of RmpClientSubscriptionWnfCallback @ 0x18000A4F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     RmpClientCallbackGenerateLastMessage @ 0x180009D8C (RmpClientCallbackGenerateLastMessage.c)
 *     RmpClientSubscriptionAcquireLock @ 0x180009E30 (RmpClientSubscriptionAcquireLock.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x18000A1BC (RmpClientSubscriptionDeliverPayload.c)
 *     RmpClientSubscriptionFindCallbackContext @ 0x18000A24C (RmpClientSubscriptionFindCallbackContext.c)
 */

BOOLEAN __fastcall RmpClientSubscriptionWnfCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 CallbackContext; // rax
  _QWORD *v10; // rbp
  BOOLEAN result; // al
  _QWORD v12[7]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h]

  RmpClientSubscriptionAcquireLock(a1);
  v4 = (_QWORD *)(a1 + 40);
  while ( 1 )
  {
    v5 = a1 + 8;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v6 = (_QWORD *)*v4;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(v5);
    RmpClientCallbackGenerateLastMessage((__int64)(v6 - 2), v12);
    RmpClientSubscriptionDeliverPayload(a1, v6 - 2, v12);
    RmpClientSubscriptionAcquireLock(a1);
  }
  *(_DWORD *)(a1 + 16) = 0;
  RtlReleaseSRWLockExclusive(v5);
  v7 = *(_DWORD *)a2 == 1;
  v14 = 0LL;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    LODWORD(v14) = 1;
  }
  else
  {
    LODWORD(v14) = 0;
    v8 = *(_QWORD *)(a2 + 8);
  }
  v13 = v8;
  RmpClientSubscriptionAcquireLock(a1);
  CallbackContext = RmpClientSubscriptionFindCallbackContext(a1, (unsigned __int8 *)&v13);
  *(_DWORD *)(a1 + 16) = 0;
  v10 = (_QWORD *)CallbackContext;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( v10 )
    return RmpClientSubscriptionDeliverPayload(a1, v10, (_DWORD *)a2);
  return result;
}
