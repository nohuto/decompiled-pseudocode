/*
 * XREFs of RtlUnlockHeap @ 0x180023960
 * Callers:
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005B6FC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800E1380 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  char result; // al
  __int64 v4; // rcx
  _BYTE v5[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v6; // [rsp+26h] [rbp-32h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive(a1 + 48);
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(a1 + 88);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive(a1 + 168);
      }
      RtlReleaseSRWLockExclusive(a1 + 320);
    }
LABEL_13:
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v7 = a1;
        v6 = 4140;
        NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v5);
      }
    }
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return qword_180142108(a1);
  result = RtlpCheckHeapSignature(a1, "RtlUnlockHeap");
  if ( result )
  {
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v4 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 376);
      RtlLeaveCriticalSection(v4);
    }
    goto LABEL_13;
  }
  return result;
}
