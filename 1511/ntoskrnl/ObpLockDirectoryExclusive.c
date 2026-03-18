/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1400CF104
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

signed __int64 __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  ULONG_PTR v5; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int16 v11; // ax
  bool v12; // zf
  signed __int64 result; // rax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  --CurrentThread->KernelApcDisable;
  v5 = a2 + 296;
  if ( !KiAbEnabled )
  {
    v9 = 0LL;
    goto LABEL_11;
  }
  v6 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v6, a2 + 296, KeGetCurrentIrql(), 0LL);
  --v6->SpecialApcDisable;
  if ( !v6->AbEntrySummary )
  {
    if ( !v6->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v6, a2 + 296);
      goto LABEL_24;
    }
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    v6->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v6->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  a1 = 96 * v8;
  v9 = (__int64)v6->LockEntries + a1;
  if ( !v9 )
  {
LABEL_24:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v5 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = v6->ApcState.Process, (v15 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v10 = -1;
  }
  else
  {
    v10 = *(_DWORD *)(v15 + 8);
  }
  *(_DWORD *)(v9 + 40) = v10;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v11 = v6->SpecialApcDisable + 1;
  v6->SpecialApcDisable = v11;
  if ( !v11 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v9, v5);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v12 = ObpTraceFlags == 0;
  *(_DWORD *)(v4 + 32) = -859041228;
  if ( !v12 )
    ObpPushStackInfo(a2 - 48);
  result = ObpIncrPointerCount((volatile signed __int64 *)(a2 - 48));
  *(_QWORD *)v4 = a2;
  *(_WORD *)(v4 + 30) = 257;
  return result;
}
