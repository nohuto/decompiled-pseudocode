/*
 * XREFs of ?CitpTimeDateStampToString@@YAXIPEAGI@Z @ 0x1C00E4488
 * Callers:
 *     ?CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z @ 0x1C00E3298 (-CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007EF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void __fastcall CitpTimeDateStampToString(unsigned int a1, unsigned __int16 *a2)
{
  __int64 v3; // rbx
  int Month; // [rsp+20h] [rbp-50h]
  int Day; // [rsp+28h] [rbp-48h]
  int Hour; // [rsp+30h] [rbp-40h]
  int Minute; // [rsp+38h] [rbp-38h]
  int Second; // [rsp+40h] [rbp-30h]
  union _LARGE_INTEGER Time; // [rsp+50h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  *(_DWORD *)&TimeFields.Hour = 0;
  *(_DWORD *)&TimeFields.Second = 0;
  TimeFields.Weekday = 0;
  TimeFields.Day = 1;
  v3 = a1;
  *(_DWORD *)&TimeFields.Year = 67506;
  RtlTimeFieldsToTime(&TimeFields, &Time);
  Time.QuadPart += 10000000 * v3;
  RtlTimeToTimeFields(&Time, &TimeFields);
  Second = TimeFields.Second;
  Minute = TimeFields.Minute;
  Hour = TimeFields.Hour;
  Day = TimeFields.Day;
  Month = TimeFields.Month;
  StringCchPrintfW(
    a2,
    32LL,
    L"%04d/%02d/%02d:%02d:%02d:%02d",
    (unsigned int)TimeFields.Year,
    Month,
    Day,
    Hour,
    Minute,
    Second);
}
