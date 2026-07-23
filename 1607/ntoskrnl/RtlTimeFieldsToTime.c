/*
 * XREFs of RtlTimeFieldsToTime @ 0x1400A3298
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     ExGetExpirationDate @ 0x14052DFE8 (ExGetExpirationDate.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14055F514 (RtlCutoverTimeToSystemTime.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 *     GetBootSystemTime @ 0x1407A9E8C (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  unsigned int Year; // r8d
  unsigned int Hour; // esi
  __int64 v4; // r9
  unsigned int Minute; // r14d
  int v6; // ebx
  unsigned int Second; // r15d
  unsigned int Milliseconds; // ebp
  int v10; // edx
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  BOOLEAN result; // al

  Year = TimeFields->Year;
  Hour = TimeFields->Hour;
  v4 = (unsigned int)(TimeFields->Month - 1);
  Minute = TimeFields->Minute;
  v6 = TimeFields->Day - 1;
  Second = TimeFields->Second;
  Milliseconds = TimeFields->Milliseconds;
  if ( TimeFields->Month < 1 || TimeFields->Day < 1 || Year - 1601 > 0x722A || (unsigned int)v4 > 0xB )
    return 0;
  if ( Year != 400 * (Year / 0x190) && (Year == 100 * (Year / 0x64) || (Year & 3) != 0) )
  {
    v10 = NormalYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v4;
    v12 = NormalYearDaysPrecedingMonth[v4];
  }
  else
  {
    v10 = LeapYearDaysPrecedingMonth[TimeFields->Month];
    v11 = v4;
    v12 = LeapYearDaysPrecedingMonth[v4];
  }
  if ( (__int16)v6 >= v10 - v12 || Hour > 0x17 || Minute > 0x3B || Second > 0x3B || Milliseconds > 0x3E7 )
    return 0;
  if ( Year - 1600 != 400 * ((Year - 1600) / 0x190) && (Year - 1600 == 100 * ((Year - 1600) / 0x64) || (Year & 3) != 0) )
    v13 = NormalYearDaysPrecedingMonth[v11];
  else
    v13 = LeapYearDaysPrecedingMonth[v11];
  v14 = v13 + ((Year - 1601) >> 2) + 365 * (Year - 1601) + (Year - 1601) / 0x190 - (Year - 1601) / 0x64;
  result = 1;
  Time->QuadPart = 10000 * (Milliseconds + 1000 * (Second + 60 * (Minute + 60 * Hour)) + 86400000LL * (v14 + v6));
  return result;
}
