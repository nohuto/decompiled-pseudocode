/*
 * XREFs of RIMIsDeviceExcluded @ 0x1C0073698
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 */

_BOOL8 __fastcall RIMIsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  BOOL v2; // ebx
  _DWORD *v5; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0;
  ResultLength = 0;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\ExcludedDEvices");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v5 = (_DWORD *)Win32AllocPool();
          if ( v5 )
          {
            if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, v5, ResultLength, &ResultLength) >= 0
              && v5[1] == 4 )
            {
              v2 = (_DWORD)v5 == -11;
            }
            Win32FreePool();
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
  return v2;
}
