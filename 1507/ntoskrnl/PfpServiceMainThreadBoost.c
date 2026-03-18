/*
 * XREFs of PfpServiceMainThreadBoost @ 0x14014C308
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  volatile signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2[1];
  v3 = 0;
  if ( *a2 )
  {
    *(_DWORD *)(v2 + 160) = 1;
    v6 = (volatile signed __int32 *)(a1 + 104);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 104);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 104));
    }
    *(_DWORD *)(v2 + 164) = ++*(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v8 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v8, 0xCu);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    __writecr8(CurrentIrql);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_BYTE *)(v2 + 64) = 8;
    *(_QWORD *)(v2 + 80) = v2 + 72;
    *(_QWORD *)(v2 + 72) = v2 + 72;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_QWORD *)(v2 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v2 = 275;
    *(_QWORD *)(v2 + 32) = v2;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v3;
}
