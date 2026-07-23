/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x1405A6274
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407E8F58 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 */

BOOLEAN __stdcall RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTimeFields,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentTime,
        BOOLEAN ThisYearsCutoverOnly)
{
  __int16 Day; // si
  __int16 Month; // cx
  __int16 Weekday; // r14
  __int16 v9; // bx
  __int16 Milliseconds; // ax
  __int16 v11; // r14
  __int16 v12; // di
  BOOLEAN result; // al
  _TIME_FIELDS v14; // [rsp+20h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+30h] BYREF

  RtlTimeToTimeFields(CurrentTime, &TimeFields);
  if ( CutoverTimeFields->Year )
    return RtlTimeFieldsToTime(CutoverTimeFields, SystemTime) != 0;
  Day = CutoverTimeFields->Day;
  if ( Day > 5 )
    return 0;
  if ( !Day )
    return 0;
  Month = CutoverTimeFields->Month;
  Weekday = CutoverTimeFields->Weekday;
  v9 = 1;
  v14.Year = TimeFields.Year;
  v14.Hour = CutoverTimeFields->Hour;
  v14.Minute = CutoverTimeFields->Minute;
  v14.Second = CutoverTimeFields->Second;
  Milliseconds = CutoverTimeFields->Milliseconds;
  v14.Month = Month;
  v14.Milliseconds = Milliseconds;
  v14.Day = 1;
  v14.Weekday = 0;
  if ( !RtlTimeFieldsToTime(&v14, &Time) )
    return 0;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( TimeFields.Weekday > Weekday )
  {
    v9 = Weekday - TimeFields.Weekday + 8;
  }
  else if ( TimeFields.Weekday < Weekday )
  {
    v9 = Weekday - TimeFields.Weekday + 1;
  }
  v11 = v9;
  v12 = 1;
  if ( Day > 1 )
  {
    do
    {
      v9 += 7;
      v14.Day = v9;
      if ( !RtlTimeFieldsToTime(&v14, &Time) )
        break;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v11 = TimeFields.Day;
      ++v12;
    }
    while ( v12 < Day );
  }
  v14.Day = v11;
  if ( !RtlTimeFieldsToTime(&v14, &Time) )
    return 0;
  result = 1;
  *SystemTime = Time;
  return result;
}
