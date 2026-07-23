/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x1403A6728
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x1406AC880 (KdpTimeSlipWork.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1400E16C4 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14012664C (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x14039D9C4 (ExpSetSystemTime.c)
 */

BOOLEAN __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  BOOLEAN result; // al
  unsigned __int64 v5; // rcx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-28h] BYREF
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
      v7 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart > MEMORY[0xFFFFF78000000014] )
        v5 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      else
        v5 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      if ( v5 > v3 )
        return ExpSetSystemTime(0, a1, 2LL, SystemTime, (__int64)&v7);
    }
  }
  return result;
}
