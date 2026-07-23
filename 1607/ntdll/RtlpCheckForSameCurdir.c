/*
 * XREFs of RtlpCheckForSameCurdir @ 0x1800791AC
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180079050 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007935C (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
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
