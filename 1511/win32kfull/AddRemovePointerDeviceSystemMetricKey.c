/*
 * XREFs of AddRemovePointerDeviceSystemMetricKey @ 0x1C009601C
 * Callers:
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C0098734 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     InitializePointerDevicesPresenceState @ 0x1C0099CD0 (InitializePointerDevicesPresenceState.c)
 * Callees:
 *     <none>
 */

int __fastcall AddRemovePointerDeviceSystemMetricKey(unsigned int a1, int a2)
{
  int result; // eax
  const WCHAR *v3; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  unsigned int Data; // [rsp+A0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+77h] BYREF

  Data = a1;
  result = gProtocolType;
  if ( gProtocolType != 0xFFFF )
  {
    if ( a2 == 1 )
    {
      v3 = L"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\Windows\\Tablet PC";
    }
    else
    {
      if ( a2 )
        return result;
      v3 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC";
    }
    RtlInitUnicodeString(&DestinationString, v3);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"IsTabletPC");
      if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u) >= 0 )
        gdwSystemMetrics = Data;
      return ZwClose(KeyHandle);
    }
  }
  return result;
}
