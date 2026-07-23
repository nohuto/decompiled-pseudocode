/*
 * XREFs of RtlpCheckForSameCurdir @ 0x180077D40
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180077BE0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x180077EEC (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

bool __fastcall RtlpCheckForSameCurdir(PUNICODE_STRING String2)
{
  bool v2; // di
  __int64 v3; // rax
  HANDLE *v4; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = RtlpReferenceCurrentDirectory(0LL);
  v4 = (HANDLE *)v3;
  if ( v3 )
    DosPath = *(_UNICODE_STRING *)(v3 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  String1 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != String2->Length )
      goto LABEL_7;
    String1.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == String2->Length )
LABEL_6:
    v2 = RtlEqualUnicodeString(&String1, String2, 1u) != 0;
LABEL_7:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      NtClose(v4[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&FastPebLock);
  }
  return v2;
}
