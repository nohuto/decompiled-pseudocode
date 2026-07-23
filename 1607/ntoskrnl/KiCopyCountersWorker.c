/*
 * XREFs of KiCopyCountersWorker @ 0x14064FF10
 * Callers:
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x14008B940 (KeGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall KiCopyCountersWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned int v8; // eax
  __int64 v9; // r8

  v4 = *(_QWORD *)(a2 + 8);
  KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)(v4 + 4));
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 72) - *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v4 + 48) = KeGetCurrentPrcb()->StartCycles;
  v5 = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 20);
    if ( *(_QWORD *)a2 )
      *(_QWORD *)(v4 + 24) |= _InterlockedExchange64((volatile __int64 *)a2, 0LL);
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = 1LL;
    v8 = KiHwCountersCount;
    while ( v5 < v8 )
    {
      if ( (v7 & v6) != 0 )
      {
        v9 = 3LL * v5;
        *(_DWORD *)(v4 + 8 * v9 + 68) = KiHwCounters[v5];
        *(_QWORD *)(v4 + 24LL * v5 + 72) = *(_QWORD *)(a2 + 24LL * v5 + 48);
        *(_QWORD *)(v4 + 8 * v9 + 80) = *(_QWORD *)(a2 + 24LL * v5 + 56);
        v8 = KiHwCountersCount;
      }
      v7 *= 2LL;
      ++v5;
    }
    *(_DWORD *)(v4 + 12) = v8;
  }
  ++*(_QWORD *)(v4 + 16);
  return 0LL;
}
