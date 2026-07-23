/*
 * XREFs of RtlRegisterForWnfMetaNotification @ 0x180066E60
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180065890 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 */

__int64 __fastcall RtlRegisterForWnfMetaNotification(PWNF_USER_CALLBACK *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  *a1 = 0LL;
  if ( !a3 || (a3 & 0x11) != 0 )
    return 3221225485LL;
  else
    return RtlSubscribeWnfStateChangeNotificationInternal(a1, a2, -1, a4, a5, 0LL, 0, 1, a3);
}
