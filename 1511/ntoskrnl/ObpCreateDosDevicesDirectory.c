/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x14076D380
 * Callers:
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtCreateDirectoryObject @ 0x14044E338 (NtCreateDirectoryObject.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x14076D55C (ObpGetDosDevicesProtection.c)
 */

NTSTATUS ObpCreateDosDevicesDirectory()
{
  NTSTATUS result; // eax
  HANDLE v1; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+30h] [rbp-19h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+1Fh] BYREF
  HANDLE DirectoryHandle; // [rsp+B0h] [rbp+67h] BYREF
  BOOLEAN DaclPresent; // [rsp+B8h] [rbp+6Fh] BYREF
  PACL Dacl; // [rsp+C0h] [rbp+77h] BYREF

  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\GLOBAL??");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 16;
    result = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v1 = DirectoryHandle;
      result = ObSetDeviceMap(0LL, DirectoryHandle);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&Name, &word_140773D70);
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&GlobalRootNameString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.RootDirectory = v1;
        ObjectAttributes.Attributes = 16;
        result = NtCreateSymbolicLinkObject(&DirectoryHandle, 0xF0001u, &ObjectAttributes, &Name);
        if ( result >= 0 )
        {
          NtClose(DirectoryHandle);
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&GlobalNameString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
          ObjectAttributes.RootDirectory = v1;
          ObjectAttributes.Attributes = 16;
          result = NtCreateSymbolicLinkObject(&DirectoryHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
          if ( result >= 0 )
          {
            NtClose(DirectoryHandle);
            NtClose(v1);
            RtlInitUnicodeString(&DestinationString, L"\\??");
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&DosDevicesNameString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.Attributes = 16;
            result = NtCreateSymbolicLinkObject(&DirectoryHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
            if ( result >= 0 )
            {
              NtClose(DirectoryHandle);
              Dacl = 0LL;
              RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, (PBOOLEAN)&DirectoryHandle);
              ExFreePoolWithTag(Dacl, 0);
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
