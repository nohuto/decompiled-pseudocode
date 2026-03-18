/*
 * XREFs of BiDoesHiveExist @ 0x1404FE728
 * Callers:
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x140150DC0 (ZwQueryAttributesFile.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0;
}
