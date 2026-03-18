/*
 * XREFs of AccessPTPEnabledStatus @ 0x1C01461D0
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     EnablePTPDevices @ 0x1C01CF0F4 (EnablePTPDevices.c)
 *     SetUserPTPEnabledPreference @ 0x1C01CFBA0 (SetUserPTPEnabledPreference.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C003D0A4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall AccessPTPEnabledStatus(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v10; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-68h] BYREF
  int v14; // [rsp+9Ch] [rbp-64h]
  int v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A4h] [rbp-5Ch]
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  Data = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  if ( a3 )
    *a3 = 1;
  *(_DWORD *)&v10.Length = 45875200;
  v10.Buffer = (PWSTR)&v17;
  if ( (int)RtlUnicodeStringCopy(&v10, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL)) >= 0
    && (int)RtlUnicodeStringCatString(&v10, L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status") >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v10;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Enabled");
      if ( a2 )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) < 0
          || v14 != 4
          || v15 != 4 )
        {
          goto LABEL_13;
        }
        if ( !v16 )
          *a3 = 0;
      }
      else if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u) < 0 )
      {
        goto LABEL_13;
      }
      v3 = 1;
LABEL_13:
      ZwClose(KeyHandle);
    }
  }
  return v3;
}
