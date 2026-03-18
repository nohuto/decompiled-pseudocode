/*
 * XREFs of AslRegistryBuildUserPath @ 0x140573674
 * Callers:
 *     AslRegistryGetKey @ 0x140573500 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  wchar_t *v9; // rax
  NTSTATUS v11; // [rsp+20h] [rbp-28h]
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Sourcea.Length = 0LL;
  Sourcea.Buffer = 0LL;
  v4 = RtlFormatCurrentUserKeyPath(&Sourcea);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = v4;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildUserPath",
      1308,
      (unsigned int)"RtlFormatCurrentUserKeyPath failed [%x]",
      v11);
  }
  else
  {
    Destination->Length = 0;
    v7 = -1LL;
    do
      ++v7;
    while ( Source[v7] );
    v8 = Sourcea.Length + 2 * (v7 + 1);
    Destination->MaximumLength = v8;
    v9 = (wchar_t *)AslAlloc(v5, v8);
    Destination->Buffer = v9;
    if ( v9 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryBuildUserPath", 1320, (unsigned int)"Out of memory");
    }
  }
  RtlFreeAnsiString(&Sourcea);
  return v6;
}
