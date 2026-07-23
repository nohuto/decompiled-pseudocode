/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180051620
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x18004EFC0 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180004850 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpWaitOnAddress @ 0x18002FFCC (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  LODWORD(v3) = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification((PWNF_USER_CALLBACK)a1);
  do
  {
    if ( byte_180145248 )
      break;
    RtlpWaitOnAddress(&v2, &v3, 4LL, 0LL, RtlpWaitOnAddressSpinCount);
    LODWORD(v3) = v2;
  }
  while ( !(_DWORD)v2 );
  return 0LL;
}
