/*
 * XREFs of SmKmKeyGenLoadKey @ 0x14069851C
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14069867C (SmKmKeyGenNewKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall SmKmKeyGenLoadKey(UNICODE_STRING *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS v5; // ebx
  wchar_t *v6; // r8
  __int64 v7; // rax
  wchar_t *v8; // rdx
  unsigned int v9; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[264]; // [rsp+88h] [rbp-78h] BYREF

  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v6 = *(wchar_t **)(a2 + 16);
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    if ( v6 )
    {
      v7 = 0x7FFFLL;
      v8 = v6;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
      if ( v7 )
      {
        ValueName.Buffer = v6;
        ValueName.Length = 2 * (0x7FFF - v7);
        ValueName.MaximumLength = ValueName.Length + 2;
      }
    }
    v5 = ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10Cu,
           &ResultLength);
    if ( v5 >= 0 )
    {
      if ( a3 )
      {
        if ( KeyValueInformation[0] == 3 )
        {
          v9 = *(_DWORD *)(a2 + 32);
          if ( KeyValueInformation[1] == v9 )
          {
            memmove(*(void **)(a2 + 24), Src, v9);
            v5 = 0;
            *a3 = KeyHandle;
            return (unsigned int)v5;
          }
        }
        v5 = -1073741772;
      }
      else
      {
        v5 = 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
