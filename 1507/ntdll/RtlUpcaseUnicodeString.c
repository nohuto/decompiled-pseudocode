/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180050AE0
 * Callers:
 *     RtlCreateServiceSid @ 0x18004F110 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180050F90 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180052D20 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // cx
  unsigned int Length; // eax
  unsigned __int16 *StringRoutine; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( SourceString->Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v6 = SourceString->Length >> 1;
  v7 = Nls844UnicodeUpcaseTable;
  while ( v5 < v6 )
  {
    v8 = SourceString->Buffer[v5];
    if ( v8 < 0x61u )
    {
      v9 = SourceString->Buffer[v5];
    }
    else if ( v8 > 0x7Au )
    {
      v9 = v8
         + *(_WORD *)(v7
                    + 2LL
                    * ((v8 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(v7
                                                         + 2LL
                                                         * (((v8 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(v7 + 2LL * HIBYTE(v8))))));
    }
    else
    {
      v9 = v8 - 32;
    }
    DestinationString->Buffer[v5++] = v9;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
