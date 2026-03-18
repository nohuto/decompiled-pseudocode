/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01CE014
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0155CF0 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C0039FF0 (GetPointerDeviceId.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall CheckLegacyPadControlledStatus(struct _DEVICE_OBJECT *a1)
{
  __int64 v1; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  char v7; // [rsp+90h] [rbp-70h] BYREF

  *(_DWORD *)&ValueName.Length = 13107200;
  ValueName.Buffer = (PWSTR)&v7;
  ResultLength = 0;
  if ( (int)GetPointerDeviceId(a1, &ValueName) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v1 = Win32AllocPool(ResultLength, 2019914581LL);
          if ( v1 )
          {
            if ( ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   (PVOID)v1,
                   ResultLength,
                   &ResultLength) >= 0
              && *(_DWORD *)(v1 + 4) == 4
              && (*(_BYTE *)(v1 + 12) & 1) != 0 )
            {
              DWORD1(gTouchPadParameters) |= *(_BYTE *)(v1 + 12) & 7;
            }
            Win32FreePool(v1);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
