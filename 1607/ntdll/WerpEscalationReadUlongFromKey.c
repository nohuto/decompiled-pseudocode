/*
 * XREFs of WerpEscalationReadUlongFromKey @ 0x1800D980C
 * Callers:
 *     WerpEscalationIsDisabled @ 0x1800D96AC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D975C (WerpEscalationIsWMRSendStringSet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 __fastcall WerpEscalationReadUlongFromKey(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  v5 = NtQueryValueKey(
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
