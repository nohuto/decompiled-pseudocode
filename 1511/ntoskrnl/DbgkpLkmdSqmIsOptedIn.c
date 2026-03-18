/*
 * XREFs of DbgkpLkmdSqmIsOptedIn @ 0x1405F1544
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 */

bool DbgkpLkmdSqmIsOptedIn()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  int v4; // [rsp+50h] [rbp-19h] BYREF
  const wchar_t *v5; // [rsp+58h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  int v7; // [rsp+90h] [rbp+27h] BYREF
  const wchar_t *v8; // [rsp+98h] [rbp+2Fh]
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+A4h] [rbp+3Bh]
  int v11; // [rsp+A8h] [rbp+3Fh]
  int v12; // [rsp+ACh] [rbp+43h]

  v4 = 8388734;
  v5 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows";
  v7 = 7209068;
  v8 = L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows";
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"CEIPEnable";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v10 == 4
      && v11 == 4 )
    {
      goto LABEL_5;
    }
    ZwClose(KeyHandle);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v10 == 4
      && v11 == 4 )
    {
LABEL_5:
      ZwClose(KeyHandle);
      return v12 == 1;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
