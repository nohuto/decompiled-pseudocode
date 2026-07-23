/*
 * XREFs of RtlpHpVsContextFree @ 0x180050AE0
 * Callers:
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x180050C3C (RtlpHpVsChunkFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v8; // r13d
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // rsi

  v5 = a3 - 16;
  v8 = a3;
  if ( (*(_WORD *)(a2 + 34) ^ 0xABED) == *(_WORD *)(a2 + 32) )
  {
    *a5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    v10 = a4 & 1;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive(SRWLock);
    if ( ((HIDWORD(v5) ^ HIDWORD(RtlpLFHKey) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) != 0 )
    {
      v11 = RtlpHpVsChunkFree(SRWLock);
      if ( !v10 )
        RtlReleaseSRWLockExclusive(SRWLock);
      if ( v11 )
        ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)SRWLock ^ RtlpHeapKey ^ SRWLock[9].Value))(
          SRWLock[7].Value,
          v11,
          a4);
      return 1;
    }
    else
    {
      v9 = 0;
      RtlpLogHeapFailure(8, SRWLock[7].Value, v8, v5, 0LL, 0LL);
      if ( !v10 )
        RtlReleaseSRWLockExclusive(SRWLock);
    }
  }
  else
  {
    v9 = 0;
    RtlpLogHeapFailure(17, SRWLock[7].Value, a2, 0, 0LL, 0LL);
  }
  return v9;
}
