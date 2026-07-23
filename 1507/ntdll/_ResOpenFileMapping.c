/*
 * XREFs of _ResOpenFileMapping @ 0x1800FA9B0
 * Callers:
 *     _ResCOpenMapping @ 0x1800F978C (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     NtOpenSection @ 0x180093C70 (NtOpenSection.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8BA8 (BaseGetNamedObjectDirectory.c)
 */

HANDLE __fastcall ResOpenFileMapping(ACCESS_MASK a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS v4; // ecx
  LONG v5; // eax
  NTSTATUS NamedObjectDirectory; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+80h] [rbp+20h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp+28h] BYREF

  if ( !a3 )
  {
    v4 = -1073741811;
LABEL_3:
    v5 = RtlNtStatusToDosError(v4);
    RtlSetLastWin32Error(v5);
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, a3);
  NamedObjectDirectory = BaseGetNamedObjectDirectory(&v10);
  if ( NamedObjectDirectory < 0 )
    goto LABEL_5;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a1 == 1 )
  {
    a1 = 4;
  }
  else if ( (a1 & 0x20) != 0 )
  {
    a1 = a1 & 0xFFFFFFD7 | 8;
  }
  NamedObjectDirectory = NtOpenSection(&SectionHandle, a1, &ObjectAttributes);
  if ( NamedObjectDirectory < 0 )
  {
LABEL_5:
    v4 = NamedObjectDirectory;
    goto LABEL_3;
  }
  return SectionHandle;
}
