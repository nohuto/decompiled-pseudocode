/*
 * XREFs of KeSetTimeAdjustment @ 0x14013433C
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14009D5D0 (ExpUpdateTimerConfigurationWorker.c)
 * Callees:
 *     KiUpdateSystemTime @ 0x140132D8C (KiUpdateSystemTime.c)
 *     RtlGenerateQpcToIncrementConstants @ 0x140136920 (RtlGenerateQpcToIncrementConstants.c)
 */

__int64 __fastcall KeSetTimeAdjustment(unsigned int a1)
{
  unsigned __int64 v3; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 == KeTimeAdjustment )
    return 0LL;
  if ( !a1 )
    return 3221225620LL;
  v3 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / a1;
  if ( v3 - 2 <= 0xFFFFFFFD )
  {
    v5 = RtlGenerateQpcToIncrementConstants((unsigned int)v3, &v7);
    v6 = v7;
    v4[0] = KeTimeAdjustment;
    KeTimeAdjustment = a1;
    v4[1] = a1;
    KiUpdateSystemTime(0LL, (__int64)v4, 0);
    return 0LL;
  }
  return 3221225621LL;
}
