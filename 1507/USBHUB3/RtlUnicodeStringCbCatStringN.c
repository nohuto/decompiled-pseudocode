/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1C001502C
 * Callers:
 *     HUBID_BuildContainerID @ 0x1C0015D64 (HUBID_BuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int16 Length; // r11
  unsigned __int16 *Buffer; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rbx
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // r10
  size_t v10; // r8
  __int16 v11; // cx
  unsigned __int64 v12; // r9
  char *v13; // r11

  Length = DestinationString->Length;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0LL;
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
    v6 = (unsigned __int64)MaximumLength >> 1;
    v7 = (unsigned __int64)Length >> 1;
  }
  if ( result < 0 )
    return result;
  v10 = cbToAppend >> 1;
  if ( v10 > 0x7FFF )
    return -1073741811;
  result = 0;
  v11 = 0;
  v12 = v6 - v7;
  if ( !v12 )
    goto LABEL_18;
  v13 = (char *)Buffer + 2 * v7 - (_QWORD)pszSrc;
  do
  {
    if ( !v10 )
      break;
    if ( !*pszSrc )
      break;
    *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v13) = *pszSrc;
    --v10;
    ++pszSrc;
    ++v11;
    --v12;
  }
  while ( v12 );
  if ( !v12 )
  {
LABEL_18:
    if ( v10 )
    {
      if ( *pszSrc )
        result = -2147483643;
    }
  }
  DestinationString->Length = 2 * (v7 + v11);
  return result;
}
