/*
 * XREFs of LdrpLogDllStateEx2 @ 0x18000CA78
 * Callers:
 *     LdrpGetDllPath @ 0x18000C808 (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, void *a2, __int64 a3, unsigned __int16 a4)
{
  char v6; // bl
  char v7; // al
  UNICODE_STRING v8; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  v8.Length = 0;
  *(_QWORD *)&v8.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
  HIWORD(v8.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    if ( !a2 )
      a2 = &unk_180113454;
    v6 = RtlCreateUnicodeString(&v8, a2);
    v7 = RtlCreateUnicodeString(&UnicodeString, a3);
    if ( v6 )
    {
      if ( v7 )
      {
        LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v8);
        RtlFreeAnsiString(&UnicodeString);
      }
      RtlFreeAnsiString(&v8);
    }
  }
}
