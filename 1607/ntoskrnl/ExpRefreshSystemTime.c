/*
 * XREFs of ExpRefreshSystemTime @ 0x14055E7F0
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExLocalTimeToSystemTime @ 0x1400A3284 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1400A3298 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x1400B3208 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x140126D94 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  char v0; // bl
  int v1; // edi
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v4; // [rsp+28h] [rbp-28h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-18h] BYREF

  ExAcquireTimeRefreshLock(1u);
  v0 = ExpSystemIsInCmosMode;
  if ( (unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
  {
    RtlTimeFieldsToTime(&TimeFields, &Time);
    v1 = ExpLastTimeZoneBias;
    if ( (unsigned __int8)ExpRefreshTimeZoneInformation() )
    {
      if ( v1 != ExpLastTimeZoneBias )
      {
        v2.QuadPart = MEMORY[0xFFFFF78000000014];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        if ( !ExpRealTimeIsUniversal )
        {
          if ( v0 )
          {
            ExLocalTimeToSystemTime(&Time, &v4);
            KeSetSystemTime((__int64)&v4, (__int64)&SystemTime, 0);
            goto LABEL_9;
          }
          ExSystemTimeToLocalTime(&SystemTime, &Time);
          RtlTimeToTimeFields(&Time, &TimeFields);
          HalSetRealTimeClock(&TimeFields);
          v2 = SystemTime;
        }
        v4 = v2;
LABEL_9:
        PoNotifySystemTimeSet();
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
