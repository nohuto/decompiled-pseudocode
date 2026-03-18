/*
 * XREFs of RtlLockBootStatusData @ 0x1405478FC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x14052EC58 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140531690 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x140580424 (PoClearTransitionMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x14066A310 (PopClearConnectedStandbyMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A420 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A52C (PopRecordPowerButton.c)
 *     PopSetCleanShutdownMarker @ 0x14066A634 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14066A6C4 (PopSetConnectedStandbyMarker.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcscpy_s @ 0x140153094 (wcscpy_s.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  HANDLE v2; // rbx
  NTSTATUS result; // eax
  HANDLE FileHandlea; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  wchar_t Dst[264]; // [rsp+90h] [rbp-70h] BYREF

  wcscpy_s(Dst, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.ObjectName = &DestinationString;
  v2 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( result >= 0 )
    v2 = FileHandlea;
  *FileHandle = v2;
  return result;
}
