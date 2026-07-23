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

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  BOOLEAN v2; // si
  _RTL_CRITICAL_SECTION *v3; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+26h] [rbp-32h]
  PVOID v8; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    v2 = 0;
    if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
    {
      if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
        return ((__int64 (__fastcall *)(PVOID))qword_180143CE8)(HeapHandle);
      if ( (unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap") )
      {
        if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
        {
          v3 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
          --*((_WORD *)HeapHandle + 188);
          RtlLeaveCriticalSection(v3);
        }
LABEL_7:
        if ( MEMORY[0x7FFE0380] )
        {
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            v7 = 4140;
            v8 = HeapHandle;
            NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
          }
        }
        return 1;
      }
      return v2;
    }
    if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 && (*((_WORD *)HeapHandle + 19))-- == 1 )
    {
      *((_DWORD *)HeapHandle + 10) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 6);
      if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 11);
        if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 22);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 42);
    }
    goto LABEL_7;
  }
  return RtlpHpVirtUnlockHeap();
}
