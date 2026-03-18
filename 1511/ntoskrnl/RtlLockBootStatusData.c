/*
 * XREFs of RtlLockBootStatusData @ 0x14050CBEC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x1404F5BA8 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x1404F899C (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x14054B15C (PoClearTransitionMarker.c)
 *     PopSetShutdownMarker @ 0x140632328 (PopSetShutdownMarker.c)
 *     PdcPoRecordButton @ 0x1406378B4 (PdcPoRecordButton.c)
 *     PopCheckShutdownMarker @ 0x1407661AC (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
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
