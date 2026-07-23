/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x1403C8DA4
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1400A3284 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1400A3298 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 */

BOOLEAN __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  BOOLEAN result; // al
  int v5; // edx
  unsigned __int64 v6; // rcx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  result = HalQueryRealTimeClock(&TimeFields);
  if ( result )
  {
    result = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( result )
    {
      if ( ExpRealTimeIsUniversal )
        SystemTime = Time;
      else
        ExLocalTimeToSystemTime(&Time, &SystemTime);
      result = MEMORY[0xFFFFF78000000014];
      v9 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart > MEMORY[0xFFFFF78000000014] )
        v6 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      else
        v6 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      if ( v6 > v3 )
      {
        LOBYTE(v5) = a1;
        return ExpSetSystemTime(0, v5, 2, SystemTime.LowPart, (__int64)&v9);
      }
    }
  }
  return result;
}
