/*
 * XREFs of RtlInitString @ 0x14011A9A4
 * Callers:
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140704FA4 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
