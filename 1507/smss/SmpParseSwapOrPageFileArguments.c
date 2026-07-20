/*
 * XREFs of SmpParseSwapOrPageFileArguments @ 0x140002780
 * Callers:
 *     SmpCreatePagingFileDescriptor @ 0x140002610 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000986C (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpParseSwapOrPageFileArguments(PCUNICODE_STRING String, PULONG Value, PULONG a3)
{
  PWSTR Buffer; // r10
  USHORT Length; // r9
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r9
  NTSTATUS v9; // r8d
  PWSTR v10; // rdi
  WCHAR *v11; // rcx
  WCHAR v12; // ax
  NTSTATUS v13; // eax
  __int64 v15; // r8
  signed __int32 v16; // edx
  __int64 v17; // rcx
  signed __int32 v18; // edx

  *Value = 0;
  *a3 = 0;
  Buffer = String->Buffer;
  if ( !Buffer )
    return 0LL;
  Length = String->Length;
  v7 = 0;
  v8 = Length >> 1;
  if ( !v8 )
    return 0LL;
  while ( Buffer[v7] <= 0x30u )
  {
    v15 = 0x1000100000200LL;
    if ( !_bittest64(&v15, Buffer[v7]) )
      break;
    if ( ++v7 >= v8 )
      return 0LL;
  }
  v9 = RtlUnicodeStringToInteger(String, 0, Value);
  if ( v9 < 0 )
  {
    v16 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v17 = 2LL * v16;
    *((_DWORD *)&SmpPagefileLog + 4 * v16) = 4651;
  }
  else
  {
    v10 = String->Buffer;
    v11 = v10;
    if ( !*v10 )
      return 0LL;
    while ( 1 )
    {
      v12 = *v11++;
      if ( v12 == 32 )
        break;
      if ( !*v11 )
        return 0LL;
    }
    String->Buffer = v11;
    String->Length += (_WORD)v10 - (_WORD)v11;
    String->MaximumLength = String->Length;
    v13 = RtlUnicodeStringToInteger(String, 0, a3);
    String->Buffer = v10;
    v9 = v13;
    if ( v13 >= 0 )
      return 0LL;
    v18 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v17 = 2LL * v18;
    *((_DWORD *)&SmpPagefileLog + 4 * v18) = 4673;
  }
  *((_DWORD *)&SmpPagefileLog + 2 * v17 + 1) = v9;
  *((_QWORD *)&SmpPagefileLog + v17 + 1) = 0LL;
  return (unsigned int)v9;
}
