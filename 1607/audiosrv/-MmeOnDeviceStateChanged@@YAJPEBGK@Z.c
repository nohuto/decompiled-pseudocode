/*
 * XREFs of ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x180079E24
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x18007A0B0 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 */

__int64 __fastcall MmeOnDeviceStateChanged(const unsigned __int16 *a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)IsMmeDeviceStateChangedSupported() )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = a2;
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids,
        a1,
        v5);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
