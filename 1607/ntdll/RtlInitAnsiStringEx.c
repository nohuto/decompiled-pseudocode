/*
 * XREFs of RtlInitAnsiStringEx @ 0x180073DB0
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180073D70 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlInitStringEx @ 0x1800E3740 (RtlInitStringEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
