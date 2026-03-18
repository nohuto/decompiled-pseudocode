/*
 * XREFs of AslRegistryBuildMachinePath @ 0x14054DB20
 * Callers:
 *     AslRegistryGetKey @ 0x14054DA4C (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Sourcea.Length = 0LL;
  Sourcea.Buffer = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v5 = 0;
  Destination->Length = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( Source[v6] );
  v7 = Sourcea.Length + 2 * (v6 + 1);
  Destination->MaximumLength = v7;
  v8 = (wchar_t *)AslAlloc(v4, v7);
  Destination->Buffer = v8;
  if ( v8 )
  {
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
  }
  return v5;
}
