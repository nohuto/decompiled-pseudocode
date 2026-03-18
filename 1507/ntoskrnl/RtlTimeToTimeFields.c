/*
 * XREFs of RtlTimeToTimeFields @ 0x140137F0C
 * Callers:
 *     WheaInitializeRecordHeader @ 0x14026701C (WheaInitializeRecordHeader.c)
 *     ExpSetSystemTime @ 0x1403EFEF4 (ExpSetSystemTime.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14058B1A0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405A6274 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x14075AAA0 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x1407E73E0 (GetBootSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407E8F58 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     sub_1401380D0 @ 0x1401380D0 (sub_1401380D0.c)
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

  sub_1401380D0(Time, &v12, &v13);
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
