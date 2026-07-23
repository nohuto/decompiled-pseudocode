/*
 * XREFs of ExpSetSystemTime @ 0x1403D230C
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x1400B3208 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x140126D94 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 */

__int64 __fastcall ExpSetSystemTime(char a1, char a2, __int64 a3, LARGE_INTEGER a4, __int64 a5)
{
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  SystemTime = a4;
  if ( ExpRealTimeIsUniversal )
    LocalTime = a4;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, a5, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation();
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
    }
  }
  return PoNotifySystemTimeSet();
}
