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

void __fastcall LdrpLogDllStateEx2(__int64 a1, _WORD *a2, _WORD *a3, unsigned __int16 a4)
{
  char v6; // bl
  char v7; // al
  int v8; // r8d
  int v9; // r9d
  UNICODE_STRING v10; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  v10.Length = 0;
  *(_QWORD *)&v10.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v10.Buffer + 2) = 0;
  HIWORD(v10.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    if ( !a2 )
      a2 = &unk_1801074EC;
    v6 = RtlCreateUnicodeString((__int64)&v10, a2);
    v7 = RtlCreateUnicodeString((__int64)&UnicodeString, a3);
    if ( v6 )
    {
      if ( v7 )
      {
        LdrpLogEtwEventEx(a4, 0, v8, v9, (__int64)&UnicodeString, (__int64)&v10);
        RtlFreeAnsiString(&UnicodeString);
      }
      RtlFreeAnsiString(&v10);
    }
  }
}
