/*
 * XREFs of RaidGetTelemetryLogPageIds @ 0x1C000FC6C
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

char __fastcall RaidGetTelemetryLogPageIds(int a1, __int64 a2, _WORD *a3)
{
  char v5; // di
  const WCHAR *v6; // rdx
  void *v7; // rbx
  PVOID SystemRoutineAddress; // rax
  int v9; // ebx
  void *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v18[22]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = 1;
  if ( ((a1 - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( a1 == 1 || a1 == 10 )
      v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\SCSI";
    else
      v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\Generic";
  }
  else
  {
    v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\ATA";
  }
  RtlInitUnicodeString(&DestinationString, v6);
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0;
  memset(v18, 0, 0xA8uLL);
  LODWORD(v18[1]) = 48;
  LODWORD(v18[4]) = 4;
  v7 = KeyHandle;
  v18[2] = L"PrivateLogAddress";
  v18[3] = &v13;
  v18[7] = RaidpTelemetryRegQueryRoutine;
  LODWORD(v18[6]) = 4;
  LODWORD(v18[8]) = 17;
  LODWORD(v18[11]) = 4;
  v12 = 17LL;
  v18[9] = L"PublicLogAddressList";
  v18[0] = 0LL;
  v18[5] = 0LL;
  v18[10] = a2;
  v18[12] = 0LL;
  LODWORD(v18[13]) = 0;
  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v9 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *, __int64 *, _QWORD))SystemRoutineAddress)(
         0x40000000LL,
         v7,
         v18,
         &v12,
         0LL);
  if ( HIDWORD(v12) && HIDWORD(v12) < (unsigned int)(v12 - 1) )
    *(_WORD *)(a2 + 2LL * (unsigned int)(HIDWORD(v12) + 1)) = 0;
  v10 = KeyHandle;
  *a3 = v13;
  ZwClose(v10);
  if ( v9 < 0 )
    return 0;
  return v5;
}
