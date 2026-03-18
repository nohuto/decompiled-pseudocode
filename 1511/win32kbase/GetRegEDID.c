/*
 * XREFs of GetRegEDID @ 0x1C0061060
 * Callers:
 *     ?GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00603CC (-GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0060558 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00BE450 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRegEDID(struct _DEVICE_OBJECT *a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // esi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  if ( IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &KeyHandle) < 0 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"EDID");
  v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, a2, 0x190u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( a2[3] < 0x80 )
      v6 = -1073741823;
    else
      *a3 = (char *)a2 + a2[2];
  }
  ZwClose(KeyHandle);
  LOBYTE(v5) = v6 >= 0;
  return v5;
}
