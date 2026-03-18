/*
 * XREFs of IsDeviceExcluded @ 0x1C01CDA48
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  BOOL v2; // ebx
  _DWORD *v4; // rdi
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
          v4 = (_DWORD *)Win32AllocPool(ResultLength);
          if ( v4 )
          {
            if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, v4, ResultLength, &ResultLength) >= 0
              && v4[1] == 4 )
            {
              v2 = (_DWORD)v4 == -11;
            }
            Win32FreePool(v4);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
  return v2;
}
