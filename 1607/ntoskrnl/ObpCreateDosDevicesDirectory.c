/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x140579BE8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009CC4 (RtlGetDaclSecurityDescriptor.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x140079F68 (PsIsHostSilo.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x14015B020 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x14015B320 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObpSetSiloDeviceMap @ 0x140579DF0 (ObpSetSiloDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, __int64 a3)
{
  __int64 result; // rax
  int DirectoryObject; // ebx
  BOOLEAN DaclPresent[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  PACL Dacl; // [rsp+80h] [rbp+Fh] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp+17h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+3Fh] BYREF
  BOOLEAN DaclDefaulted; // [rsp+F0h] [rbp+7Fh] BYREF

  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDirectoryName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 528;
    DirectoryObject = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL, (__int64)&ObjectAttributes);
    if ( DirectoryObject < 0 )
    {
      Handle = 0LL;
    }
    else
    {
      DirectoryObject = ObpSetSiloDeviceMap(a1, Handle);
      if ( DirectoryObject >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_140583CF0);
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalRootNameString;
        ObjectAttributes.Attributes = 528;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        DirectoryObject = ZwCreateSymbolicLinkObject(
                            &SymbolicLinkHandle,
                            0xF0001u,
                            &ObjectAttributes,
                            &DestinationString);
        if ( DirectoryObject >= 0 )
        {
          ZwClose(SymbolicLinkHandle);
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalNameString;
          ObjectAttributes.Attributes = 528;
          ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
          DirectoryObject = ZwCreateSymbolicLinkObject(
                              &SymbolicLinkHandle,
                              0xF0001u,
                              &ObjectAttributes,
                              (PUNICODE_STRING)&ObpGlobalDosDevicesShortName);
          if ( DirectoryObject >= 0 )
          {
            ZwClose(SymbolicLinkHandle);
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpDosDevicesNameString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.RootDirectory = a2;
            ObjectAttributes.Attributes = 528;
            DirectoryObject = ZwCreateSymbolicLinkObject(
                                &SymbolicLinkHandle,
                                0xF0001u,
                                &ObjectAttributes,
                                (PUNICODE_STRING)&ObpDosDevicesShortNameRootString);
            if ( DirectoryObject >= 0 )
              ZwClose(SymbolicLinkHandle);
          }
        }
      }
    }
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, &Dacl, &DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)DirectoryObject;
  }
  return result;
}
