/*
 * XREFs of KGetUnlockSetting @ 0x1404B8F28
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1404B8EB4 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KGetUnlockSetting(UNICODE_STRING *a1, UNICODE_STRING *a2, unsigned int *a3)
{
  NTSTATUS v6; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v12; // [rsp+74h] [rbp+2Bh]
  unsigned int v13; // [rsp+78h] [rbp+2Fh]
  unsigned int v14; // [rsp+7Ch] [rbp+33h]

  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  v6 = ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x18u, &ResultLength);
    if ( v6 >= 0 )
    {
      if ( v12 == 4 && v13 >= 4 && (v14 <= 1 || v14 == 0xFFFF) )
        *a3 = v14;
      else
        v6 = -1073739509;
    }
    ZwClose(KeyHandle);
  }
  if ( v6 == -1073741772 )
  {
    *a3 = 0xFFFF;
    return 0;
  }
  return (unsigned int)v6;
}
