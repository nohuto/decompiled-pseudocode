/*
 * XREFs of ExpSetSystemTime @ 0x1403D230C
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400AADE8 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x1400B53D0 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x140126824 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140131E00 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 */

__int64 __fastcall ExpSetSystemTime(char a1, char a2, __int64 a3, LARGE_INTEGER a4, __int64 a5)
{
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-28h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

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
