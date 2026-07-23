/*
 * XREFs of NtSetSystemTime @ 0x14066A764
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x14066BA58 (ExpSetTimeZoneInformation.c)
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
 *     ExpSetSystemTime @ 0x14039D9C4 (ExpSetSystemTime.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x14064EE84 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v6; // rcx
  LONGLONG QuadPart; // rax
  NTSTATUS v8; // ebx
  char v9; // di
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !SystemTime )
  {
    v8 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v9 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
      goto LABEL_28;
    RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( !ExpRefreshTimeZoneInformation() )
      goto LABEL_28;
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v11);
        KeSetSystemTime((__int64)&v11, (__int64)&SystemTimea, 0);
LABEL_27:
        PoNotifySystemTimeSet();
        v8 = 0;
LABEL_28:
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        return v8;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v11 = v10;
    goto LABEL_27;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( NewSystemTime )
    {
      if ( ((unsigned __int8)NewSystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = NewSystemTime;
      if ( (unsigned __int64)NewSystemTime >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
    }
    QuadPart = SystemTime->QuadPart;
    v11 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v11 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1LL, v11, (__int64)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v11.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
