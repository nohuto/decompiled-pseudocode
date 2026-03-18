/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401555B0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140155130 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

__int64 __fastcall KiInterruptDispatchNoLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF

  KiInterruptSubDispatchNoLock((__int64)KeGetPcr()->Prcb.IsrStack, (__int64)&retaddr, a3, a4);
  HalPerformEndOfInterrupt_0();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    v7 = __rdtsc();
    v8 = (unsigned __int64)HIDWORD(v7) << 32;
    v9 = (v8 | (unsigned int)v7) - CurrentPrcb->StartCycles;
    CurrentPrcb->CycleTime += v9;
    CurrentPrcb->StartCycles += v9;
    v10 = v9;
    if ( (CurrentPrcb->CurrentThread->Header.Size & 0x32) != 0 )
    {
      KiBeginThreadAccountingPeriod((__int64)CurrentPrcb, 0LL, v9);
      CurrentPrcb = KeGetCurrentPrcb();
      ++CurrentPrcb->NestingLevel;
    }
    LOBYTE(v8) = CurrentPrcb->InterruptRequest;
    CurrentPrcb->InterruptRequest = 0;
    if ( !CurrentPrcb->IdleHalt )
    {
      if ( (_BYTE)v8 )
      {
        if ( *(_BYTE *)(v5 - 87) < 2u )
        {
          CurrentPrcb->NestingLevel = 0;
          KiDpcInterruptBypass(CurrentPrcb, v8, v10);
          goto LABEL_10;
        }
        HalRequestSoftwareInterrupt(2LL);
        CurrentPrcb = KeGetCurrentPrcb();
      }
    }
  }
  --CurrentPrcb->NestingLevel;
LABEL_10:
  __writecr8(*(unsigned __int8 *)(v5 - 87));
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( KeGetCurrentThread()->ApcState.UserApcPending )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
  {
    KiCopyCounters();
    CurrentThread = KeGetCurrentThread();
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState(CurrentThread);
  Signalling = KeGetCurrentThread()->Header.Signalling;
  if ( (Signalling & 1) == 0 )
  {
    __writemsr(0x48u, Signalling);
    TrappedSecurityDomain = KeGetPcr()->Prcb.TrappedSecurityDomain;
    if ( TrappedSecurityDomain )
    {
      if ( TrappedSecurityDomain != *(_QWORD *)&KeGetCurrentThread()->Process[2].ThreadSeed[8] )
        __writemsr(0x49u, 1uLL);
    }
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), *(_QWORD *)(v5 - 56), *(_QWORD *)(v5 - 48), a5);
}
