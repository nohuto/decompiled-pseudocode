/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C009C3EC (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C009C998 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AF218 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00B2338 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B2F28 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B3114 (-ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  wchar_t *v5; // rcx
  __int64 v6; // rax
  NTSTATUS result; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+50h] [rbp-20h]
  unsigned int v13; // [rsp+54h] [rbp-1Ch]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( a2 )
  {
    v5 = a2;
    v6 = 0x7FFFLL;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
      return -1073741811;
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v6);
    ValueName.MaximumLength = ValueName.Length + 2;
  }
  result = ZwQueryValueKey(this->_p, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v11 == 4 )
    {
      if ( v12 == 4 )
      {
        *a3 = v13;
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
