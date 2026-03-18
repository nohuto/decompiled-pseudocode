/*
 * XREFs of BiGetObjectIdentifier @ 0x1404F4F98
 * Callers:
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x1404F4FE4 (BiGetKeyName.c)
 */

__int64 __fastcall BiGetObjectIdentifier(void *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  WCHAR *SourceString; // [rsp+50h] [rbp+18h]

  result = BiGetKeyName(a1);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = RtlGUIDFromString(&DestinationString, a2);
    ExFreePoolWithTag(SourceString, 0);
    return v4;
  }
  return result;
}
