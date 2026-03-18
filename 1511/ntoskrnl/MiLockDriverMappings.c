/*
 * XREFs of MiLockDriverMappings @ 0x1400E2808
 * Callers:
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  __int16 v6; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v9; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  --*(_WORD *)(a1 + 486);
  if ( !KiAbEnabled )
  {
    v4 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_1402FE578, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v4 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &qword_1402FE578);
      goto LABEL_23;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v3, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v3);
  a1 = 96 * v3;
  v4 = (__int64)CurrentThread->LockEntries + a1;
  if ( !v4 )
  {
LABEL_23:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( (unsigned __int64)&qword_1402FE578 < 0xFFFFF90000000000uLL
    || (unsigned __int64)&qword_1402FE578 >= 0xFFFFF98000000000uLL
    || (Process = CurrentThread->ApcState.Process, (v9 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v5 = -1;
  }
  else
  {
    v5 = *(_DWORD *)(v9 + 8);
  }
  *(_DWORD *)(v4 + 40) = v5;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v4 + 32) = (unsigned __int64)&qword_1402FE578 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v6 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v6;
  if ( !v6 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE578, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE578, v4, (ULONG_PTR)&qword_1402FE578);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
}
