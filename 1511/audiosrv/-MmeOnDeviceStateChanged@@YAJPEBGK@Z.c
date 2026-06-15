/*
 * XREFs of ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800911CC
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x180091420 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

__int64 __fastcall MmeOnDeviceStateChanged(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids, a1);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
