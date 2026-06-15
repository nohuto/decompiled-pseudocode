/*
 * XREFs of ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180091080
 * Callers:
 *     s_mmeNotifyDefaultDeviceChanged @ 0x180091310 (s_mmeNotifyDefaultDeviceChanged.c)
 * Callees:
 *     WPP_SF_ddS @ 0x18009124C (WPP_SF_ddS.c)
 */

__int64 __fastcall MmeOnDefaultDeviceChanged(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a2,
        const unsigned __int16 *a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      28,
      (unsigned int)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids,
      a1,
      a2,
      (__int64)a3);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
