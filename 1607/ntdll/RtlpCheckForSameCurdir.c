/*
 * XREFs of RtlpCheckForSameCurdir @ 0x1800791BC
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x180079060 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007936C (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

bool __fastcall RtlpCheckForSameCurdir(unsigned __int16 *a1)
{
  bool v2; // di
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = RtlpReferenceCurrentDirectory(0LL);
  v4 = v3;
  if ( v3 )
    DosPath = *(_UNICODE_STRING *)(v3 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v7 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != *a1 )
      goto LABEL_7;
    v7.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == *a1 )
LABEL_6:
    v2 = RtlEqualUnicodeString(&v7.Length, a1, 1) != 0;
LABEL_7:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v4 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  return v2;
}
