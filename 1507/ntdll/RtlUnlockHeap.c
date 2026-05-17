/*
 * XREFs of RtlUnlockHeap @ 0x180033370
 * Callers:
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpHpVirtUnlockHeap @ 0x1800EBCBC (RtlpHpVirtUnlockHeap.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  _BYTE v6[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+26h] [rbp-32h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    v2 = 0;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
        return qword_180143CE8(a1);
      if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlUnlockHeap") )
      {
        if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
        {
          v3 = *(_QWORD *)(a1 + 352);
          --*(_WORD *)(a1 + 376);
          RtlLeaveCriticalSection(v3);
        }
LABEL_7:
        if ( MEMORY[0x7FFE0380] )
        {
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            v7 = 4140;
            v8 = a1;
            NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v6);
          }
        }
        return 1;
      }
      return v2;
    }
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive(a1 + 48);
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(a1 + 88);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive(a1 + 176);
      }
      RtlReleaseSRWLockExclusive(a1 + 336);
    }
    goto LABEL_7;
  }
  return RtlpHpVirtUnlockHeap();
}
