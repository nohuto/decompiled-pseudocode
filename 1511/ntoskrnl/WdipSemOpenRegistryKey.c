/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1405339F8
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1405329D0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140532A20 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140532BD0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140532EC4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14065D05C (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
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
