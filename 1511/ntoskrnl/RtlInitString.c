/*
 * XREFs of RtlInitString @ 0x1400E561C
 * Callers:
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140680170 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
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
