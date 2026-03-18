/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x1400626D0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  signed __int32 v5; // edx
  __int64 result; // rax
  bool v7; // zf
  signed __int32 v8; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+28h] [rbp-40h]
  __int16 v11; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+32h] [rbp-36h]
  int v13; // [rsp+34h] [rbp-34h]
  _QWORD v14[6]; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72, CurrentIrql);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72), CurrentIrql, a3);
    v5 = *(_DWORD *)(a1 + 72);
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v5 | 0x40000000, v5);
        v7 = v5 == v8;
        v5 = v8;
        if ( !v7 )
          continue;
      }
      KeYieldProcessorEx(&v16);
      v5 = *(_DWORD *)(a1 + 72);
    }
  }
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v10 = 2;
    v14[1] = v14;
    v11 = 263;
    v14[0] = v14;
    v9 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v9;
    v12 = 6;
    v13 = 0;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), CurrentIrql);
    KeWaitForGate(&v11, 18LL);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
