/*
 * XREFs of ExGetExpirationDate @ 0x14052DFE8
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExInitializeTimeRefresh @ 0x1407AE678 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x1400A3298 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14015C9F0 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // rax
  ULONG ResultDataSize; // [rsp+30h] [rbp-50h] BYREF
  ULONG Type; // [rsp+34h] [rbp-4Ch] BYREF
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  __int128 Data; // [rsp+58h] [rbp-28h] BYREF
  __int128 v11; // [rsp+68h] [rbp-18h]

  Data = 0uLL;
  Type = 0;
  ResultDataSize = 0;
  v11 = 0uLL;
  TimeFields = 0LL;
  if ( !Time )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
  v2 = ZwQueryLicenseValue(&DestinationString, &Type, 0LL, 0, &ResultDataSize);
  v3 = v2;
  if ( v2 != -1073741789 )
  {
    if ( v2 < 0 )
      goto LABEL_12;
    goto LABEL_15;
  }
  if ( ResultDataSize == 16 && Type == 3 )
  {
    v3 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
    if ( v3 < 0 )
    {
LABEL_12:
      Time->QuadPart = 0LL;
      return (unsigned int)v3;
    }
    v4 = v11 - Data;
    if ( (_QWORD)v11 == (_QWORD)Data )
      v4 = *((_QWORD *)&v11 + 1) - *((_QWORD *)&Data + 1);
    if ( v4 )
    {
      *(_QWORD *)&TimeFields.Year = Data;
      LOWORD(ResultDataSize) = WORD5(Data);
      *(_DWORD *)&TimeFields.Minute = DWORD2(Data);
      if ( RtlTimeFieldsToTime(&TimeFields, Time) == 1 )
        goto LABEL_10;
LABEL_15:
      v3 = -1073741823;
      goto LABEL_12;
    }
    Time->QuadPart = 0LL;
  }
  else
  {
    v3 = -1073741772;
  }
LABEL_10:
  if ( v3 < 0 )
    goto LABEL_12;
  return (unsigned int)v3;
}
