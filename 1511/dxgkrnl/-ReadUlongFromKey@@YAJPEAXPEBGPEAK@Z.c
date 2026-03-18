/*
 * XREFs of ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C000C060
 * Callers:
 *     DxgkSqmOptedIn @ 0x1C000BF30 (DxgkSqmOptedIn.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

__int64 __fastcall ReadUlongFromKey(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned int *a3)
{
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int v11; // [rsp+50h] [rbp-28h]
  unsigned int v12; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  result = 3221225524LL;
  if ( v5 >= 0 )
  {
    if ( v5 != -1073741772 )
    {
      if ( v10 == 4 && v11 == 4 )
      {
        *a3 = v12;
        return 0LL;
      }
      else
      {
        return 3221225473LL;
      }
    }
  }
  else if ( v5 != -1073741772 )
  {
    return (unsigned int)v5;
  }
  return result;
}
