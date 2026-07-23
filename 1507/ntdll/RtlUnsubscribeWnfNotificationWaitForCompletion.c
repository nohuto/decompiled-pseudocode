/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B080
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180076F20 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18000B0E0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification((PWNF_USER_CALLBACK)a1);
  do
  {
    if ( byte_180146208 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCount);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
