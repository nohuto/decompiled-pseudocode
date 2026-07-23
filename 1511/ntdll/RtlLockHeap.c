/*
 * XREFs of RtlLockHeap @ 0x18002E860
 * Callers:
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800E1380 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x18002D9C4 (RtlpHpHeapLock.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  PVOID v5; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapLock((__int64)HeapHandle);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (__fastcall *)(PVOID))qword_180142100)(HeapHandle);
    if ( !(unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlLockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 188);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v5 = HeapHandle;
      v4 = 4139;
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
    }
  }
  return 1;
}
