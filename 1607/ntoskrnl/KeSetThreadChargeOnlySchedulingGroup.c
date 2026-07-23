/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400D1BC0 (PspRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  char v9; // al
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a1 + 104) )
        return 0;
      goto LABEL_6;
    }
    return 0;
  }
  if ( a2 )
    return 0;
LABEL_6:
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  CurrentPrcb->NestingLevel = 1;
  v6 = __rdtsc();
  v7 = v6 - CurrentPrcb->StartCycles;
  *(_QWORD *)(a1 + 72) += v7;
  v8 = v7 + *(unsigned int *)(a1 + 80);
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  CurrentPrcb->StartCycles = v6;
  v9 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v8;
  if ( (v9 & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, a1, v7);
  KiStartThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
  _enable();
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 8u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 8u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  __writecr8(0LL);
  return 1;
}
