/*
 * XREFs of IopCreateArcNamesDisk @ 0x1407985F0
 * Callers:
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 *     IoGetConfigurationInformation @ 0x14054FB38 (IoGetConfigurationInformation.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     IopFetchConfigurationInformation @ 0x140798548 (IopFetchConfigurationInformation.c)
 */

__int64 IopCreateArcNamesDisk()
{
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  unsigned int DiskCount; // esi
  unsigned int v2; // r8d
  int v3; // eax
  const WCHAR *v4; // rbx
  bool v5; // r12
  unsigned int i; // edi
  unsigned int v7; // r15d
  __int64 v8; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-79h] BYREF
  PCWSTR SourceString; // [rsp+30h] [rbp-71h] BYREF
  PFILE_OBJECT FileObject[2]; // [rsp+38h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  wchar_t pszDest[64]; // [rsp+58h] [rbp-49h] BYREF

  SourceString = 0LL;
  ConfigurationInformation = IoGetConfigurationInformation();
  LODWORD(DeviceObject) = 0;
  DiskCount = ConfigurationInformation->DiskCount;
  v2 = ConfigurationInformation->DiskCount;
  *(GUID *)FileObject = GUID_DEVINTERFACE_DISK;
  v3 = IopFetchConfigurationInformation((PZZWSTR *)&SourceString, (GUID *)FileObject, v2, (unsigned int *)&DeviceObject);
  v4 = SourceString;
  v5 = v3 < 0;
  if ( (unsigned int)DeviceObject > DiskCount )
    DiskCount = (unsigned int)DeviceObject;
  if ( v3 < 0 && !(_DWORD)DeviceObject )
    DiskCount += 20;
  for ( i = 0; i < DiskCount; ++i )
  {
    if ( v4 && *v4 )
    {
      v7 = -1;
      RtlInitUnicodeString(&DestinationString, v4);
      v8 = -1LL;
      do
        ++v8;
      while ( v4[v8] );
      v4 += v8 + 1;
      if ( v5 && !*v4 )
        DiskCount = i + 20;
    }
    else
    {
      v7 = i;
      RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition0", i);
      RtlInitUnicodeString(&DestinationString, pszDest);
    }
    if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, FileObject, &DeviceObject) >= 0 )
    {
      IopCreateArcName(DeviceObject, v7);
      ObfDereferenceObjectWithTag(FileObject[0], 0x746C6644u);
    }
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return 0LL;
}
