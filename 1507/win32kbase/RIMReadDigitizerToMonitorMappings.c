/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C0073110
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C00CD65C (rimReadSingleDigitizerToMonitorMappings.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(__int64 a1)
{
  int result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( Win32AllocPoolZInit(0x20CuLL) )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 10LL);
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 20LL);
      Win32FreePool();
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
