/*
 * XREFs of ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00531CC
 * Callers:
 *     NtUserInitialize @ 0x1C0051920 (NtUserInitialize.c)
 *     PowerIsDimTimeOutManual @ 0x1C0053180 (PowerIsDimTimeOutManual.c)
 *     InitializePowerRequestList @ 0x1C01550AC (InitializePowerRequestList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall GetConfigUlong(PCWSTR SourceString, PCWSTR a2, unsigned int *a3)
{
  NTSTATUS v5; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+27h] BYREF
  int v13; // [rsp+94h] [rbp+2Bh]
  int v14; // [rsp+98h] [rbp+2Fh]
  unsigned int v15; // [rsp+9Ch] [rbp+33h]

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && (RtlInitUnicodeString(&ValueName, a2),
        v5 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength),
        ZwClose(KeyHandle),
        v5 >= 0)
    && v13 == 4
    && v14 == 4 )
  {
    *a3 = v15;
    return 1LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
