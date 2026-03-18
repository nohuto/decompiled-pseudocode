/*
 * XREFs of BiGetObjectIdentifier @ 0x140532888
 * Callers:
 *     BcdQueryObject @ 0x14053D33C (BcdQueryObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 */

__int64 __fastcall BiGetObjectIdentifier(__int64 a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+18h] BYREF

  result = BiGetKeyName(a1, &SourceString);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = RtlGUIDFromString(&DestinationString, a2);
    ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    return v4;
  }
  return result;
}
