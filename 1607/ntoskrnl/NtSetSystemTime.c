/*
 * XREFs of NtSetSystemTime @ 0x1406AD104
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1406AC2D0 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExLocalTimeToSystemTime @ 0x1400A4D0C (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1400A4D20 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1400AADE8 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x1400B53D0 (ExSystemTimeToLocalTime.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeSetSystemTime @ 0x140126824 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140131E00 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EA8B0 (ExAcquireTimeRefreshLock.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  LONGLONG QuadPart; // rax
  NTSTATUS v8; // ebx
  char v9; // di
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER SystemTimea; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v12; // [rsp+38h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-28h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-20h] BYREF

  if ( !SystemTime )
  {
    v8 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v9 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields) )
      goto LABEL_29;
    RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( !ExpRefreshTimeZoneInformation() )
      goto LABEL_29;
    v10.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v9 )
      {
        ExLocalTimeToSystemTime(&Time, &v12);
        KeSetSystemTime((__int64)&v12, (__int64)&SystemTimea, 0);
LABEL_28:
        PoNotifySystemTimeSet();
        v8 = 0;
LABEL_29:
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        return v8;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v10 = SystemTimea;
    }
    v12 = v10;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( NewSystemTime )
    {
      if ( ((unsigned __int8)NewSystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = (__int64)NewSystemTime;
      if ( (unsigned __int64)NewSystemTime >= 0x7FFFFFFF0000LL )
        v6 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    }
    QuadPart = SystemTime->QuadPart;
    v12 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v12 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1LL, v12, (__int64)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v12.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
