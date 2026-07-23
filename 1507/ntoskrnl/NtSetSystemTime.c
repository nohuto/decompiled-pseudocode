/*
 * XREFs of NtSetSystemTime @ 0x1406EDD3C
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1406EF0A4 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x140131280 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x14014C6F8 (KeSetSystemTime.c)
 *     ExLocalTimeToSystemTime @ 0x140159CE0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14015A6C4 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x1403EFEF4 (ExpSetSystemTime.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v6; // rcx
  LONGLONG QuadPart; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  NTSTATUS v10; // ebx
  char v11; // di
  LARGE_INTEGER v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v14; // ax
  LARGE_INTEGER v15; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-40h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-30h] BYREF

  if ( !SystemTime )
  {
    v10 = -1073741811;
    ExAcquireTimeRefreshLock(1u);
    v11 = ExpSystemIsInCmosMode;
    if ( !(unsigned __int8)HalQueryRealTimeClock(&TimeFields)
      || (RtlTimeFieldsToTime(&TimeFields, &Time), !ExpRefreshTimeZoneInformation()) )
    {
LABEL_32:
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v10;
    }
    v12.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &v15);
        KeSetSystemTime((__int64)&v15, (__int64)&SystemTimea, 0);
LABEL_31:
        PoNotifySystemTimeSet();
        v10 = 0;
        goto LABEL_32;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields);
      v12 = SystemTimea;
    }
    v15 = v12;
    goto LABEL_31;
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
    v15 = *SystemTime;
  }
  else
  {
    QuadPart = SystemTime->QuadPart;
    v15 = *SystemTime;
  }
  if ( HIDWORD(QuadPart) > 0x20000000 )
    return -1073741811;
  ExAcquireTimeRefreshLock(1u);
  ExpSetSystemTime(1, 0, 1LL, v15, (__int64)&SystemTimea);
  SeAuditSystemTimeChange(SystemTimea.QuadPart, v15.QuadPart);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( NewSystemTime )
    *NewSystemTime = SystemTimea;
  return 0;
}
