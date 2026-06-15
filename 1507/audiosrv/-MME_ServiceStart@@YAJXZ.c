/*
 * XREFs of ?MME_ServiceStart@@YAJXZ @ 0x180039A78
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003AA60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?InitializePnpInfo@@YAHXZ @ 0x180039048 (-InitializePnpInfo@@YAHXZ.c)
 */

__int64 MME_ServiceStart(void)
{
  BOOL v0; // ebx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Fu,
      (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids);
  }
  v0 = ConvertStringSidToSidW(L"S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775", &AudiosrvSid);
  if ( !v0 )
  {
LABEL_11:
    AudiosrvSid = 0LL;
    AudioEndpointBuilderSid = 0LL;
    if ( !v0 )
      return 0LL;
    goto LABEL_7;
  }
  v0 = ConvertStringSidToSidW(
         L"S-1-5-80-1580948945-3239616721-2529237571-3761093093-1214243633",
         &AudioEndpointBuilderSid);
  if ( !v0 )
  {
    LocalFree(AudiosrvSid);
    goto LABEL_11;
  }
LABEL_7:
  if ( (unsigned int)InitializePnpInfo() )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
