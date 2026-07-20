/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1400107D4
 * Callers:
 *     SmpSaveOldPageFile @ 0x14001141C (SmpSaveOldPageFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  wchar_t *Buffer; // rcx
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  USHORT MaximumLength; // ax
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Buffer = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || DestinationString->Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (DestinationString->Length || MaximumLength) )
  {
    v5 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v4 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v5 >= 0 )
  {
    v5 = 0;
    v7 = _vsnwprintf(Buffer, v4, pszFormat, Args);
    if ( v7 < 0 || v7 > v4 )
    {
      LOWORD(v7) = v4;
      v5 = -2147483643;
    }
    DestinationString->Length = 2 * v7;
  }
  return v5;
}
