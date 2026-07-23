/*
 * XREFs of CmpQueryHiveRedirectionFileList @ 0x1404A4ED0
 * Callers:
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpInitializeSystemHivesLoad @ 0x140577634 (CmpInitializeSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 */

bool __fastcall CmpQueryHiveRedirectionFileList(PUNICODE_STRING ValueName, PUNICODE_STRING Destination)
{
  NTSTATUS v4; // eax
  bool v5; // zf
  NTSTATUS v7; // eax
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[250]; // [rsp+9Ch] [rbp-64h] BYREF

  Length = 512;
  if ( !CmpHiveRedirectionFileListHandle )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\registry\\machine\\system\\currentcontrolset\\control\\hiveredirectionlist");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    v5 = v7 == 0;
    if ( v7 < 0 )
      return v5;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveRedirectionFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  v4 = ZwQueryValueKey(
         CmpHiveRedirectionFileListHandle,
         ValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         Length,
         &Length);
  v5 = v4 == 0;
  if ( v4 >= 0 )
    return RtlAppendUnicodeToString(Destination, Source) == 0;
  return v5;
}
