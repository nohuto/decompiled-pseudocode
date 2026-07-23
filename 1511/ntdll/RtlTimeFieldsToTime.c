/*
 * XREFs of RtlTimeFieldsToTime @ 0x180067650
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800674B0 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  __int64 v2; // r9
  unsigned int Year; // r8d
  int v4; // ebx
  unsigned int Hour; // esi
  unsigned int Minute; // r14d
  unsigned int Second; // r15d
  unsigned int Milliseconds; // ebp
  int v10; // edx
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  BOOLEAN result; // al

  v2 = (unsigned int)(TimeFields->Month - 1);
  Year = TimeFields->Year;
  v4 = TimeFields->Day - 1;
  Hour = TimeFields->Hour;
  Minute = TimeFields->Minute;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v2 > 0xB )
    return 0;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v10 = NormalYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v2;
    v12 = NormalYearDaysPrecedingMonth[v2];
  }
  else
  {
    v10 = LeapYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v2;
    v12 = LeapYearDaysPrecedingMonth[v2];
  }
  if ( (__int16)v4 >= v10 - v12 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 != 400 * ((Year - 1600) / 0x190) && (Year - 1600 == 100 * ((Year - 1600) / 0x64) || (Year & 3) != 0) )
    v13 = NormalYearDaysPrecedingMonth[v11];
  else
    v13 = LeapYearDaysPrecedingMonth[v11];
  v14 = v13 + ((Year - 1601) >> 2) + 365 * (Year - 1601) + (Year - 1601) / 0x190 - (Year - 1601) / 0x64;
  result = 1;
  Time->QuadPart = 10000 * (Milliseconds + 1000 * (Second + 60 * (Minute + 60 * Hour)) + 86400000LL * (v14 + v4));
  return result;
}
