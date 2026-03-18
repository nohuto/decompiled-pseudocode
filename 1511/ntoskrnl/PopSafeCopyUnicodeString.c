/*
 * XREFs of PopSafeCopyUnicodeString @ 0x140097E40
 * Callers:
 *     PopCaptureReasonContext @ 0x140097B84 (PopCaptureReasonContext.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x140097EF0 (RtlStringCbCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopSafeCopyUnicodeString(PCUNICODE_STRING SourceString, wchar_t **a2, __int64 a3, char a4)
{
  wchar_t *v4; // rsi
  __int64 Length; // rcx
  __int64 v8; // rax
  wchar_t *Buffer; // rax

  v4 = *a2;
  Length = SourceString->Length;
  if ( Length + 2 > (unsigned __int64)(a3 - (_QWORD)*a2) )
    return 3221225485LL;
  if ( a4 && (_WORD)Length )
  {
    Buffer = SourceString->Buffer;
    if ( ((unsigned __int8)Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Buffer + Length > MmUserProbeAddress || (wchar_t *)((char *)Buffer + Length) < Buffer )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( RtlStringCbCopyUnicodeString(v4, Length + 2, SourceString) < 0 )
    return 3221225485LL;
  v8 = -1LL;
  do
    ++v8;
  while ( v4[v8] );
  if ( SourceString->Length != 2 * v8 )
    return 3221225485LL;
  *a2 += v8 + 1;
  return 0LL;
}
