/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x1406B0914
 * Callers:
 *     PoGetRequester @ 0x1400D1464 (PoGetRequester.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140233C18 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // edi
  wchar_t *PoolWithTag; // rsi
  wchar_t *Buffer; // rcx
  NTSTATUS result; // eax

  v2 = SourceString->Length + 2;
  if ( v2 > 0xFFFF )
  {
    if ( DestinationString->Buffer )
      goto LABEL_10;
    v2 = 0xFFFF;
  }
  if ( !DestinationString->Buffer || DestinationString->MaximumLength < v2 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v2, 0x78435250u);
    if ( PoolWithTag )
    {
      Buffer = DestinationString->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      DestinationString->Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v2;
    }
  }
LABEL_10:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
