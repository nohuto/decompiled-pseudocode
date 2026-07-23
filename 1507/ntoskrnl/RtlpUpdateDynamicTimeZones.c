/*
 * XREFs of RtlpUpdateDynamicTimeZones @ 0x1405A63CC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140165350 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 */

char __fastcall RtlpUpdateDynamicTimeZones(__int16 a1)
{
  ULONG v2; // edi
  char v3; // bl
  ULONG i; // edx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v10; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD Buf2[12]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD Buf1[12]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE KeyInformation[12]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v16; // [rsp+16Ch] [rbp+6Ch]
  char v17; // [rsp+170h] [rbp+70h] BYREF

  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 292;
  LODWORD(v12[4]) = 50331648;
  v12[3] = Buf2;
  v12[2] = L"TZI";
  if ( (int)RtlpGetRegistryHandle(3, L"Time Zones", 0, &KeyHandle) < 0 )
    return 0;
  v2 = 0;
  v3 = 1;
  for ( i = 0; ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x110u, &ResultLength) >= 0; i = v2 )
  {
    DestinationString.MaximumLength = v16;
    DestinationString.Length = v16;
    ObjectAttributes.RootDirectory = KeyHandle;
    DestinationString.Buffer = (wchar_t *)&v17;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Dynamic DST");
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v10, 0x20019u, &ObjectAttributes) >= 0 )
      {
        memset(Buf2, 0, 0x2CuLL);
        Buf2[0] = -44;
        if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v12, 0LL) >= 0
          && (int)RtlpFindRegTziForCurrentYear(Buf1, (const WCHAR *)v10, a1) >= 0 )
        {
          if ( memcmp(Buf1, Buf2, 0x2CuLL) )
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"TZI", 3u, Buf1, 0x2Cu);
        }
        ZwClose(v10);
      }
      ZwClose(Handle);
    }
    ++v2;
  }
  ZwClose(KeyHandle);
  return v3;
}
