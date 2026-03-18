/*
 * XREFs of ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C007A6F8
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C007A224 (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void __fastcall CitpParameterGetInt32(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned int *a3)
{
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  unsigned int v9; // [rsp+54h] [rbp-14h]

  RtlInitUnicodeString(&DestinationString, a2);
  ResultLength = 16;
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && v8 == 4 )
  {
    *a3 = v9;
  }
}
