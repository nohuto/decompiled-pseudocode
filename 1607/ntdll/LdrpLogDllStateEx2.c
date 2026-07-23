/*
 * XREFs of LdrpLogDllStateEx2 @ 0x18000CA68
 * Callers:
 *     LdrpGetDllPath @ 0x18000C7F8 (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1800565F0 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned __int16 a4)
{
  BOOLEAN v6; // bl
  BOOLEAN v7; // al
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
      a2 = &word_180113454;
    v6 = RtlCreateUnicodeString(&DestinationString, a2);
    v7 = RtlCreateUnicodeString(&UnicodeString, a3);
    if ( v6 )
    {
      if ( v7 )
      {
        LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&DestinationString);
        RtlFreeAnsiString(&UnicodeString);
      }
      RtlFreeAnsiString(&DestinationString);
    }
  }
}
