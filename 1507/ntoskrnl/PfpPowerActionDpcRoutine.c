/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x14014C4D8
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PVOID v4; // rbx
  int v5; // edi
  int v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = DeferredContext;
  v5 = DeferredContext[40];
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353538);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353538, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353538);
  }
  v6 = *((_DWORD *)v4 + 41);
  if ( v5 )
  {
    if ( Object && dword_140353540 == v6 )
    {
      *((_QWORD *)v4 + 16) = 0LL;
      *((_QWORD *)v4 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v4 + 19) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v4 + 4, DelayedWorkQueue);
      v4 = 0LL;
    }
  }
  else if ( dword_140353544 == v6 )
  {
    _InterlockedAnd(&dword_140367DD4, 0xFFFFFFFE);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353538, retaddr);
  else
    _InterlockedAnd64(&qword_140353538, 0LL);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
