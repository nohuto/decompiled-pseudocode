/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1401BEE9C
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x14060263C (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     sub_1401BEF30 @ 0x1401BEF30 (sub_1401BEF30.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r8
  wchar_t *Buffer; // r10
  unsigned __int64 v5; // r9
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx
  NTSTRSAFE_PCWSTR v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = pszSrc;
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  result = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( result >= 0 )
  {
    v8 = 0LL;
    result = sub_1401BEF30(Buffer, v5, &v8);
    DestinationString->Length = 2 * (_WORD)v8;
  }
  return result;
}
