/*
 * XREFs of ?MME_ServiceStart@@YAJXZ @ 0x18003125C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?InitializePnpInfo@@YAHXZ @ 0x180031C70 (-InitializePnpInfo@@YAHXZ.c)
 *     ?ConvertTwoStringSidsToSids@@YAHPEBG0PEAPEAX1@Z @ 0x18003222C (-ConvertTwoStringSidsToSids@@YAHPEBG0PEAPEAX1@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 MME_ServiceStart(void)
{
  const unsigned __int16 *v0; // rdx
  void **v1; // r8
  void **v2; // r9
  const unsigned __int16 *v3; // rcx

  if ( (unsigned int)IsMmeServiceStartSupported() )
  {
    v3 = (const unsigned __int16 *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_b102d38601a836944f027ba64192a35a_Traceguids);
    }
    if ( (unsigned int)ConvertTwoStringSidsToSids(v3, v0, v1, v2) && (unsigned int)InitializePnpInfo() )
    {
      RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
      _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
      _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
      RtlReleaseResource(&PnpInfoResource);
    }
  }
  return 0LL;
}
