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

__int64 __fastcall RtlpHpVsContextFree(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  int v8; // r13d
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 v12; // rsi

  v5 = a3 - 16;
  v7 = a4;
  v8 = a3;
  if ( (*(_WORD *)(a2 + 34) ^ 0xABED) == *(_WORD *)(a2 + 32) )
  {
    *a5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    v11 = a4 & 1;
    if ( (a4 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1, (char *)a2, a3, a4);
    if ( ((HIDWORD(v5) ^ HIDWORD(RtlpLFHKey) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) != 0 )
    {
      v12 = RtlpHpVsChunkFree(a1, a2, v5, v7);
      if ( !v11 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      if ( v12 )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
          *(_QWORD *)(a1 + 56),
          v12,
          v7);
      return 1;
    }
    else
    {
      v10 = 0;
      RtlpLogHeapFailure(8, *(_QWORD *)(a1 + 56), v8, v5, 0LL, 0LL);
      if ( !v11 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    }
  }
  else
  {
    v10 = 0;
    RtlpLogHeapFailure(17, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
  }
  return v10;
}
