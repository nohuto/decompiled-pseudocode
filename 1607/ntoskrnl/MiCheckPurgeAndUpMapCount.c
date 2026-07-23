/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x14002C4A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  signed __int32 v3; // edx
  __int64 result; // rax
  bool v5; // zf
  signed __int32 v6; // eax
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  __int16 v9; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+32h] [rbp-36h]
  int v11; // [rsp+34h] [rbp-34h]
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72, CurrentIrql);
  }
  else
  {
    v14 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v14 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 72, CurrentIrql);
    v3 = *(_DWORD *)(a1 + 72);
    while ( (v3 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3 & 0x40000000) == 0 )
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v3 | 0x40000000, v3);
        v5 = v3 == v6;
        v3 = v6;
        if ( !v5 )
          continue;
      }
      KeYieldProcessorEx(&v14);
      v3 = *(_DWORD *)(a1 + 72);
    }
  }
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v8 = 2;
    v12[1] = v12;
    v9 = 263;
    v12[0] = v12;
    v7 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v7;
    v10 = 6;
    v11 = 0;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), CurrentIrql);
    KeWaitForGate(&v9, 18LL);
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
