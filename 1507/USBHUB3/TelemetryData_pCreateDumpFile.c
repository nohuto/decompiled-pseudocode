/*
 * XREFs of TelemetryData_pCreateDumpFile @ 0x1C006FBC4
 * Callers:
 *     TelemetryData_pWriteDumpFile @ 0x1C007010C (TelemetryData_pWriteDumpFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000EFEC (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

__int64 __fastcall TelemetryData_pCreateDumpFile(__int64 a1, void **a2)
{
  NTSTATUS v4; // ebx
  int v5; // edi
  const wchar_t *v6; // r8
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-A9h]
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A1h]
  __int64 ShareAccess; // [rsp+30h] [rbp-99h]
  __int64 Disposition; // [rsp+38h] [rbp-91h]
  __int64 CreateOptions; // [rsp+40h] [rbp-89h]
  PVOID EaBuffer; // [rsp+48h] [rbp-81h]
  union _LARGE_INTEGER SystemTime; // [rsp+70h] [rbp-59h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+78h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-9h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp+7h] BYREF

  v4 = -1073741823;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  v5 = 0;
  while ( 1 )
  {
    v6 = L"%ws-%04u%02u%02u-%02u%02u.dmp";
    if ( v5 )
      v6 = L"%ws-%04u%02u%02u-%02u%02u-%02u.dmp";
    LODWORD(EaBuffer) = v5;
    LODWORD(CreateOptions) = TimeFields.Minute;
    LODWORD(Disposition) = TimeFields.Hour;
    LODWORD(ShareAccess) = TimeFields.Day;
    FileAttributes[0] = TimeFields.Month;
    LODWORD(AllocationSize) = TimeFields.Year;
    if ( RtlStringCbPrintfW(
           (NTSTRSAFE_PWSTR)(a1 + 656),
           0x40uLL,
           v6,
           a1 + 624,
           AllocationSize,
           *(_QWORD *)FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer) < 0 )
      break;
    if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 720), 0x208uLL, L"%ws\\%ws\\%ws", a1 + 104, a1 + 624, a1 + 656) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 720));
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = IoCreateFile(
             a2,
             0x120116u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             0,
             2u,
             0x22u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v4 >= 0 )
        return (unsigned int)v4;
      if ( (unsigned int)++v5 <= 0xA )
        continue;
    }
    goto LABEL_10;
  }
  *(_WORD *)(a1 + 656) = 0;
  v4 = -1073741823;
LABEL_10:
  *(_WORD *)(a1 + 720) = 0;
  *a2 = 0LL;
  return (unsigned int)v4;
}
