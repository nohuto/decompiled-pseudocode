/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180036BEC
 * Callers:
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     LdrpLogEtwEventEx @ 0x1800BD3DC (LdrpLogEtwEventEx.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  BOOLEAN v6; // bl
  BOOLEAN v7; // al
  int v8; // r8d
  int v9; // r9d
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    if ( !a2 )
      a2 = &word_1801074EC;
    v6 = RtlCreateUnicodeString(&DestinationString, a2);
    v7 = RtlCreateUnicodeString(&UnicodeString, a3);
    if ( v6 )
    {
      if ( v7 )
      {
        LdrpLogEtwEventEx(a4, 0, v8, v9, (__int64)&UnicodeString, (__int64)&DestinationString);
        RtlFreeAnsiString(&UnicodeString);
      }
      RtlFreeAnsiString(&DestinationString);
    }
  }
}
