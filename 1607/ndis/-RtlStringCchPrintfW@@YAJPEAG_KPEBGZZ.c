/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0017A44
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A1324 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A74DC (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AAE98 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AB064 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00ACF9C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CE108 (ndisGetOrCreateFilterInstanceKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00D1EF4 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00E2BC0 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00E2ED4 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCchPrintfW(wchar_t *Dest, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Dest = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Dest, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Dest[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Dest[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
