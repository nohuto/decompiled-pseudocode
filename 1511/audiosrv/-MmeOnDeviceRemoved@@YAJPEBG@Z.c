/*
 * XREFs of ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x180091150
 * Callers:
 *     s_mmeNotifyDeviceRemoved @ 0x1800913D0 (s_mmeNotifyDeviceRemoved.c)
 * Callees:
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceRemoved(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids, a1);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
