/*
 * XREFs of RtlTimeToTimeFields @ 0x1400A9368
 * Callers:
 *     WheaInitializeRecordHeader @ 0x140230974 (WheaInitializeRecordHeader.c)
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14055F514 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057CD74 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DEAFC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     HdlspProcessDumpCommand @ 0x140723978 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x1407A9E8C (GetBootSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407BD1DC (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     TimeToDaysAndFraction @ 0x1400A954C (TimeToDaysAndFraction.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  int v3; // r11d
  unsigned int v4; // kr00_4
  unsigned int v5; // esi
  unsigned int v6; // r9d
  __int64 v7; // r11
  __int64 v8; // rbx
  __int16 v9; // ax
  unsigned int v10; // kr04_4
  unsigned int v11; // r8d
  int v12; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+18h] BYREF

  TimeToDaysAndFraction(Time, &v12, &v13);
  v3 = v12;
  v4 = v12;
  TimeFields->Weekday = (v12 + 1) % 7u;
  v5 = (100 * ((-36524 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49) + v4 % 0x23AB1) % 0x5B5) + 75) / 0x8EAD
     + 4
     * ((-36524 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49) + v4 % 0x23AB1) / 0x5B5
      + 25 * ((100 * (v4 % 0x23AB1) + 75) / 0x37BB49 + 4 * (v4 / 0x23AB1)));
  v6 = v5 + 1;
  v7 = -365 * v5 - v5 / 0x190 - (v5 >> 2) + v5 / 0x64 + v3;
  if ( v5 + 1 != 400 * ((v5 + 1) / 0x190) && (v6 == 100 * (v6 / 0x64) || (v6 & 3) != 0) )
  {
    v8 = NormalYearDayToMonth[v7];
    v9 = NormalYearDaysPrecedingMonth[v8];
  }
  else
  {
    v8 = LeapYearDayToMonth[v7];
    v9 = LeapYearDaysPrecedingMonth[v8];
  }
  v10 = v13;
  TimeFields->Month = v8 + 1;
  TimeFields->Year = v5 + 1601;
  TimeFields->Day = v7 - v9 + 1;
  TimeFields->Milliseconds = v10 % 0x3E8;
  v11 = v10 / 0x3E8 / 0x3C;
  TimeFields->Hour = v11 / 0x3C;
  TimeFields->Minute = v11 % 0x3C;
  TimeFields->Second = v10 / 0x3E8 % 0x3C;
}
