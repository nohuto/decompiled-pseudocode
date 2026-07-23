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

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  BOOLEAN result; // al
  _RTL_CRITICAL_SECTION *v4; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v6; // [rsp+26h] [rbp-32h]
  PVOID v7; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 && (*((_WORD *)HeapHandle + 19))-- == 1 )
    {
      *((_DWORD *)HeapHandle + 10) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 6);
      if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 11);
        if ( (*((_BYTE *)HeapHandle + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 21);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)HeapHandle + 40);
    }
LABEL_13:
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v7 = HeapHandle;
        v6 = 4140;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
    }
    return 1;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PVOID))HashTable)(HeapHandle);
  result = RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap");
  if ( result )
  {
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v4 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 188);
      RtlLeaveCriticalSection(v4);
    }
    goto LABEL_13;
  }
  return result;
}
