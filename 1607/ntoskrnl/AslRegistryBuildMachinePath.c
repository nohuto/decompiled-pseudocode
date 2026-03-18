/*
 * XREFs of AslRegistryBuildMachinePath @ 0x1405735D4
 * Callers:
 *     AslRegistryGetKey @ 0x140573500 (AslRegistryGetKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  int MaximumLength; // [rsp+20h] [rbp-28h]
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
    MaximumLength = Destination->MaximumLength;
    v5 = -1073741801;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildMachinePath",
      1256,
      (unsigned int)"Failed to allocate %d bytes for user key buffer",
      MaximumLength);
  }
  return v5;
}
