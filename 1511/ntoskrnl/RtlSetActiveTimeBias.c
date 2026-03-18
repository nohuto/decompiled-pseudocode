/*
 * XREFs of RtlSetActiveTimeBias @ 0x14053BE18
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 */

__int64 RtlSetActiveTimeBias()
{
  __int64 result; // rax
  int RegistryValues; // ebx
  int ValueData[4]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v3[14]; // [rsp+48h] [rbp-19h] BYREF
  int v4; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF

  v4 = 0;
  ValueData[0] = ExpLastTimeZoneBias;
  result = RtlpGetRegistryHandle(2, L"TimeZoneInformation", 1, &Handle);
  if ( (int)result >= 0 )
  {
    memset(v3, 0, sizeof(v3));
    v3[3] = &v4;
    LODWORD(v3[1]) = 292;
    v3[2] = L"ActiveTimeBias";
    LODWORD(v3[4]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v3, 0LL);
    if ( RegistryValues < 0 || v4 != ValueData[0] )
      RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"ActiveTimeBias", 4u, ValueData, 4u);
    ZwClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
