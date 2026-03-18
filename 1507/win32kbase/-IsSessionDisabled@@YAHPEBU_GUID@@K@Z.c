/*
 * XREFs of ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C007B77C
 * Callers:
 *     WinSqmStartSession @ 0x1C007B558 (WinSqmStartSession.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C007B6FC (-RegisterWinSqmProvider@@YAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall IsSessionDisabled(const struct _GUID *Source1, ULONG Value)
{
  unsigned int v4; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+90h] [rbp-9h] BYREF
  char v12; // [rsp+A8h] [rbp+Fh] BYREF

  KeyHandle = 0LL;
  v4 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\DisabledSessions\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( !Source1 || RtlCompareMemory(Source1, &unk_1C00E6FD8, 0x10uLL) == 16 )
    {
      RtlInitUnicodeString(&String, L"GlobalSession");
    }
    else
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v12;
      if ( RtlIntegerToUnicodeString(Value, 0xAu, &String) < 0 )
        goto LABEL_2;
    }
    if ( ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      v4 = 1;
  }
LABEL_2:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
