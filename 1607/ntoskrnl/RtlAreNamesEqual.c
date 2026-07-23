/*
 * XREFs of RtlAreNamesEqual @ 0x1400893D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132EB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  char v4; // di
  PCUNICODE_STRING v6; // rbx
  unsigned int v7; // r9d
  __int64 v8; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  BOOLEAN v13; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v6 = ConstantNameB;
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
    v10 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, ConstantNameA);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v11 = RtlpUpcaseUnicodeStringPrivate(&v15, v6);
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
