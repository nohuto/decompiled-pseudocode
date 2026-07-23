/*
 * XREFs of MiInsertVadEvent @ 0x140014090
 * Callers:
 *     MiWaitForVadDeletion @ 0x1401F7544 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int16 *v5; // rbx
  LONG *v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  if ( a3 == 1 )
  {
    v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    if ( (v5[92] & 7) == 2 )
      v6 = &dword_140327CC0;
    else
      v6 = (LONG *)(v5 + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v6, CurrentIrql);
    v6[1] = 0;
  }
  else
  {
    CurrentIrql = 17;
    v5 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *a2 = result;
  *(_QWORD *)(a1 + 56) = a2;
  if ( CurrentIrql != 17 )
    return MiUnlockWorkingSetExclusive(v5, CurrentIrql);
  return result;
}
