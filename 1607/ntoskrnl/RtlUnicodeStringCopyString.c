/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1401CD280
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x1401CD314 (RtlWideCharArrayCopyStringWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r8
  wchar_t *Buffer; // r10
  const wchar_t *v5; // r9
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
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
    v5 = (const wchar_t *)((unsigned __int64)MaximumLength >> 1);
  }
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker_0(Buffer, (size_t)v5, &pcchNewDestLength, v5, v8);
    DestinationString->Length = 2 * pcchNewDestLength;
  }
  return result;
}
