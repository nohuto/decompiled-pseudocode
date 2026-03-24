/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C0002490
 * Callers:
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT Length; // r8
  NTSTATUS v3; // esi
  wchar_t *Buffer; // r10
  size_t v6; // rbx
  NTSTATUS v7; // r9d
  USHORT MaximumLength; // ax
  int v9; // eax
  va_list Args; // [rsp+50h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  v3 = 0;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (DestinationString->Length & 1) != 0
    || (MaximumLength = DestinationString->MaximumLength, (MaximumLength & 1) != 0)
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v7 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v6 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v7 < 0 )
    return v7;
  v9 = _vsnwprintf(Buffer, v6, pszFormat, Args);
  if ( v9 < 0 || v9 > v6 )
  {
    LOWORD(v9) = v6;
    v3 = -2147483643;
  }
  DestinationString->Length = 2 * v9;
  return v3;
}
