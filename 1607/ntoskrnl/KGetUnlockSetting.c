/*
 * XREFs of KGetUnlockSetting @ 0x1404CA770
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1404CA6FC (KIsUnlockSettingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KGetUnlockSetting(UNICODE_STRING *a1, UNICODE_STRING *a2, unsigned int *a3)
{
  NTSTATUS v6; // ebx
  bool v7; // cl
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v13; // [rsp+74h] [rbp+2Bh]
  unsigned int v14; // [rsp+78h] [rbp+2Fh]
  unsigned int v15; // [rsp+7Ch] [rbp+33h]

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
      v7 = 1;
      if ( v15 > 1 )
        v7 = v15 == 0xFFFF;
      if ( v13 == 4 && v14 >= 4 && v7 )
        *a3 = v15;
      else
        *a3 = 0xFFFF;
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
