/*
 * XREFs of ReadDigitizerToMonitorMappings @ 0x1C01CDEA0
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 * Callees:
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C773C (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 */

int __fastcall ReadDigitizerToMonitorMappings(struct DEVICEINFO *a1, __int64 a2)
{
  int result; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rax
  __int64 v6; // r9
  struct _KEY_VALUE_PARTIAL_INFORMATION *v7; // rbx
  __int64 v8; // r9
  unsigned int v9; // [rsp+28h] [rbp-58h]
  unsigned int v10; // [rsp+28h] [rbp-58h]
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
    v5 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)Win32AllocPool(524LL);
    v7 = v5;
    if ( v5 )
    {
      ReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v6, v5, v9, (unsigned __int16 *)(a2 + 1160));
      ReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0x14u, v8, v7, v10, (unsigned __int16 *)(a2 + 904));
      Win32FreePool(v7);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
