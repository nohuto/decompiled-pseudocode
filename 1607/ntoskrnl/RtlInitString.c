/*
 * XREFs of RtlInitString @ 0x1400A9798
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x14020D360 (PopEmModuleAddressMatchCallback.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
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
