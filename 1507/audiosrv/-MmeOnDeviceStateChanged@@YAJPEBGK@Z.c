/*
 * XREFs of ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18009399C
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x180093BF0 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

__int64 __fastcall MmeOnDeviceStateChanged(const unsigned __int16 *a1)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids,
      a1);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
