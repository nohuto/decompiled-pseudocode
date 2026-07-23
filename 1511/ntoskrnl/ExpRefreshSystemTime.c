/*
 * XREFs of ExpRefreshSystemTime @ 0x14051ECD8
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlTimeFieldsToTime @ 0x1400E16C4 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x1400F3D68 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x14011784C (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14012664C (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140126FB0 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  char v0; // bl
  int v1; // edi
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER v3; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-28h] BYREF
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
            ExLocalTimeToSystemTime(&Time, &v3);
            KeSetSystemTime((__int64)&v3, (__int64)&SystemTime, 0);
            goto LABEL_9;
          }
          ExSystemTimeToLocalTime(&SystemTime, &Time);
          RtlTimeToTimeFields(&Time, &TimeFields);
          HalSetRealTimeClock(&TimeFields);
          v2 = SystemTime;
        }
        v3 = v2;
LABEL_9:
        PoNotifySystemTimeSet();
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
