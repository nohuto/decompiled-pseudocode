/*
 * XREFs of RtlpLockHeapInternal @ 0x1800D9540
 * Callers:
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800D9620 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x18002A3CC (RtlpHpHeapLock.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

char __fastcall RtlpLockHeapInternal(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapLock(a1);
LABEL_8:
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        NtTraceEvent();
    }
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return qword_180143CE0(a1);
  result = RtlpCheckHeapSignature((_DWORD *)a1, "RtlLockHeap");
  if ( result )
  {
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 376);
    }
    goto LABEL_8;
  }
  return result;
}
