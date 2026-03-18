/*
 * XREFs of RtlLockBootStatusData @ 0x140583F50
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x140564C8C (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140567668 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x1405C2574 (PoClearTransitionMarker.c)
 *     PopSetShutdownMarker @ 0x1406B0898 (PopSetShutdownMarker.c)
 *     PdcPoRecordButton @ 0x1406B7644 (PdcPoRecordButton.c)
 *     PopCheckShutdownMarker @ 0x1407E8B40 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
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
