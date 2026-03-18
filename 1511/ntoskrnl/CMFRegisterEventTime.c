/*
 * XREFs of CMFRegisterEventTime @ 0x140549218
 * Callers:
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall CMFRegisterEventTime(__int16 a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  const WCHAR *v4; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  __int64 v8; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING v10; // [rsp+78h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-11h] BYREF
  UNICODE_STRING v12; // [rsp+B8h] [rbp+1Fh] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C8h] [rbp+2Fh] BYREF
  int v14; // [rsp+CCh] [rbp+33h]
  _BYTE Data[12]; // [rsp+D4h] [rbp+3Bh] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\CMF\\SqmData");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v8 = MEMORY[0xFFFFF78000000014];
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&ValueName, L"CMFStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v14 == 11 )
      {
        RtlInitUnicodeString(&v12, L"CMFLastStartTime");
        ZwSetValueKey(KeyHandle, &v12, 0, 0xBu, Data, 8u);
      }
      RtlInitUnicodeString(&ValueName, L"SystemStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v14 == 11 )
      {
        RtlInitUnicodeString(&v10, L"SystemLastStartTime");
        ZwSetValueKey(KeyHandle, &v10, 0, 0xBu, Data, 8u);
      }
    }
    else
    {
      if ( a1 == 2 )
      {
        v4 = L"CMFStartTime";
      }
      else
      {
        if ( a1 != 4 )
          return -1073741811;
        v4 = L"CMFStopTime";
      }
      RtlInitUnicodeString(&ValueName, v4);
    }
    v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 0xBu, &v8, 8u);
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
