/*
 * XREFs of ExGetExpirationDate @ 0x1405A6944
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  int LicenseValue; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  char v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+59h] [rbp-27h]
  int v10; // [rsp+61h] [rbp-1Fh]
  __int16 v11; // [rsp+65h] [rbp-1Bh]
  char v12; // [rsp+67h] [rbp-19h]
  _BYTE v13[9]; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+71h] [rbp-Fh]
  __int16 v15; // [rsp+75h] [rbp-Bh]
  char v16; // [rsp+77h] [rbp-9h]

  v8 = 0;
  v5 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  v15 = 0;
  v16 = 0;
  TimeFields = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    LicenseValue = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v5, 0LL);
    v3 = LicenseValue;
    if ( LicenseValue == -1073741789 )
    {
      v3 = -1073741772;
    }
    else if ( LicenseValue >= 0 )
    {
      v3 = -1073741823;
    }
    Time->QuadPart = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
