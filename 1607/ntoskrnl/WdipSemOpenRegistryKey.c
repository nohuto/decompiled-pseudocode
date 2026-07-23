/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140565E80
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140564E58 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140564EA8 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140565058 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14056534C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BF80 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
