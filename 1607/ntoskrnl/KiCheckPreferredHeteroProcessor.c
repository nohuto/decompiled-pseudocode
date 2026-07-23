/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1400DB160
 * Callers:
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 * Callees:
 *     KiGetHeteroCpuPolicyThread @ 0x1400CCDEC (KiGetHeteroCpuPolicyThread.c)
 *     KiGenerateHeteroSets @ 0x1401D7D04 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2)
{
  int HeteroCpuPolicyThread; // eax
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 125) )
    return 0LL;
  HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(a1, a2);
  v6 = *(__int64 **)(a2 + 1600);
  KiGenerateHeteroSets(
    (_DWORD)v6,
    *(_QWORD *)(a1 + 576),
    HeteroCpuPolicyThread,
    (unsigned int)&v12,
    (__int64)&v14,
    (__int64)&v13);
  v7 = *(_QWORD *)(a2 + 1608);
  if ( (v7 & v13) == 0 )
    return 1LL;
  if ( (v7 & v12) != 0 )
    return 0LL;
  v8 = *v6;
  if ( *(_QWORD *)(a2 + 1608) != *(_QWORD *)(a2 + 24920) && (v8 & v6[1]) != 0 )
    v8 &= v6[1];
  if ( (v8 & v12) == 0 )
  {
    v9 = v14 & v8 & ~v12;
    if ( v9 )
    {
      while ( 1 )
      {
        _BitScanReverse64(&v10, v9);
        v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)v6 + 72) + (int)v10]];
        if ( *(_BYTE *)(v11 + 23859) > *(_BYTE *)(a2 + 23859) )
          break;
        v9 &= ~*(_QWORD *)(v11 + 1608);
        if ( !v9 )
          return 0LL;
      }
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
