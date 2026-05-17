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

char __fastcall RtlLockHeap(__int64 a1)
{
  _BYTE v3[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapLock(a1);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return qword_180142100(a1);
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 376);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v5 = a1;
      v4 = 4139;
      NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v3);
    }
  }
  return 1;
}
