/*
 * XREFs of s_tsUnregisterAudioProtocolNotification @ 0x180029EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_tsUnregisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  if ( (unsigned int)IsTSUnregisterAudioProtocolNotificationSupported() )
    return TS_UnregisterAudioProtocolNotification(a1, a2);
  else
    return 1LL;
}
