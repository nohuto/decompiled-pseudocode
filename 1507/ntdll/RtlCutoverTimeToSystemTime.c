/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x18005CF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeFieldsToTime @ 0x18005D110 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x18005D320 (RtlTimeToTimeFields.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  PTIME_FIELDS v5; // r14
  __int16 Day; // r13
  CSHORT Weekday; // r15
  bool v10; // r12
  CSHORT Month; // ax
  CSHORT Year; // si
  CSHORT v13; // di
  CSHORT v14; // r15
  __int16 i; // r14
  CSHORT v17; // [rsp+20h] [rbp-40h]
  LARGE_INTEGER Time; // [rsp+28h] [rbp-38h] BYREF
  _TIME_FIELDS v19; // [rsp+30h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS v21; // [rsp+50h] [rbp-10h] BYREF

  v5 = CutoverTime;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( !v5->Year )
  {
    Day = v5->Day;
    if ( Day <= 5 && Day )
    {
      Weekday = v5->Weekday;
      v10 = 0;
      Month = v5->Month;
      Year = TimeFields.Year;
      v17 = Weekday;
      if ( !ThisYear )
      {
        if ( Month >= TimeFields.Month )
          v10 = Month <= TimeFields.Month;
        else
          Year = TimeFields.Year + 1;
      }
      v19.Month = v5->Month;
      v19.Weekday = 0;
      while ( 1 )
      {
        v19.Hour = v5->Hour;
        v13 = 1;
        v19.Minute = v5->Minute;
        v19.Second = v5->Second;
        v19.Milliseconds = v5->Milliseconds;
        v19.Year = Year;
        v19.Day = 1;
        if ( !RtlTimeFieldsToTime(&v19, &Time) )
          break;
        RtlTimeToTimeFields(&Time, &v21);
        if ( v21.Weekday <= Weekday )
        {
          if ( v21.Weekday < Weekday )
            v13 = Weekday - v21.Weekday + 1;
        }
        else
        {
          v13 = Weekday - v21.Weekday + 8;
        }
        v14 = v13;
        if ( Day > 1 )
        {
          for ( i = 1; i < Day; ++i )
          {
            v13 += 7;
            v19.Day = v13;
            if ( !RtlTimeFieldsToTime(&v19, &Time) )
              break;
            RtlTimeToTimeFields(&Time, &v21);
            v14 = v21.Day;
          }
          v5 = CutoverTime;
        }
        v19.Day = v14;
        if ( !RtlTimeFieldsToTime(&v19, &Time) )
          break;
        if ( !v10 || v14 >= TimeFields.Day && (v14 != TimeFields.Day || Time.QuadPart >= CurrentSystemTime->QuadPart) )
        {
          *SystemTime = Time;
          return 1;
        }
        Weekday = v17;
        v10 = 0;
        ++Year;
      }
    }
    return 0;
  }
  return RtlTimeFieldsToTime(v5, SystemTime) && (ThisYear || SystemTime->QuadPart >= CurrentSystemTime->QuadPart);
}
