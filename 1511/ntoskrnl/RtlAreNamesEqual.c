/*
 * XREFs of RtlAreNamesEqual @ 0x1400C7580
 * Callers:
 *     VerifierFsRtlAreNamesEqual @ 0x1406C0470 (VerifierFsRtlAreNamesEqual.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400C3240 (RtlpUpcaseUnicodeStringPrivate.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  char v4; // di
  UNICODE_STRING *v6; // rbx
  unsigned int v7; // r9d
  __int64 v8; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  BOOLEAN v13; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v6 = (UNICODE_STRING *)ConstantNameB;
  if ( ConstantNameA->Length != ConstantNameB->Length )
    return 0;
  v7 = ConstantNameA->Length >> 1;
  if ( IgnoreCase )
  {
    if ( UpcaseTable )
    {
      v8 = 0LL;
      if ( !v7 )
        return 1;
      while ( UpcaseTable[ConstantNameA->Buffer[v8]] == UpcaseTable[ConstantNameB->Buffer[v8]] )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return 1;
      }
      return 0;
    }
    v10 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &ConstantNameA->Length);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v11 = RtlpUpcaseUnicodeStringPrivate((__int64)&v15, &v6->Length);
    ConstantNameA = &UnicodeString;
    v12 = v11;
    if ( v11 < 0 )
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlRaiseStatus(v12);
    }
    v6 = &v15;
    v4 = 1;
  }
  v13 = memcmp(ConstantNameA->Buffer, v6->Buffer, ConstantNameA->Length) == 0;
  if ( v4 )
  {
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&v15);
  }
  return v13;
}
