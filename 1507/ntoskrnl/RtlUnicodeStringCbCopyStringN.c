/*
 * XREFs of RtlUnicodeStringCbCopyStringN @ 0x1402445BC
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x140244688 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToCopy)
{
  __int16 v3; // ax
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rdi
  size_t v8; // rdx
  int v9; // r9d
  unsigned __int16 MaximumLength; // r10
  size_t cchToCopy; // r8
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Length = DestinationString->Length;
  Buffer = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v9 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v8 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v9 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    pcchNewDestLength = 0LL;
    if ( cchToCopy <= 0x7FFF )
    {
      v9 = RtlWideCharArrayCopyStringWorker(Buffer, v8, &pcchNewDestLength, pszSrc, cchToCopy);
      v3 = pcchNewDestLength;
    }
    else
    {
      v9 = -1073741811;
    }
    DestinationString->Length = 2 * v3;
  }
  return v9;
}
