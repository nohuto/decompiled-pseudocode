/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140155C90
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiSpuriousDispatchNoEOI(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  struct _KPRCB *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  struct _KTHREAD *v19; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *(_BYTE *)(v5 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v10 = __rdtsc() - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v10;
    v11 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v10;
    v12 = v10 + v11;
    v13 = v12;
    if ( HIDWORD(v12) )
      v13 = -1;
    *(_DWORD *)(CurrentThread + 80) = v13;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v10, a4);
  }
  _enable();
  ++*(_DWORD *)(v6 + 116);
  _disable();
  v14 = KeGetCurrentPrcb();
  if ( v14->NestingLevel <= 1u )
  {
    v15 = __rdtsc();
    v16 = (unsigned __int64)HIDWORD(v15) << 32;
    v17 = (v16 | (unsigned int)v15) - v14->StartCycles;
    v14->CycleTime += v17;
    v14->StartCycles += v17;
    v18 = v17;
    if ( (v14->CurrentThread->Header.Size & 0x32) != 0 )
    {
      KiBeginThreadAccountingPeriod((__int64)v14, 0LL, v17);
      v14 = KeGetCurrentPrcb();
      ++v14->NestingLevel;
    }
    LOBYTE(v16) = v14->InterruptRequest;
    v14->InterruptRequest = 0;
    if ( !v14->IdleHalt )
    {
      if ( (_BYTE)v16 )
      {
        if ( *(_BYTE *)(v5 - 87) < 2u )
        {
          v14->NestingLevel = 0;
          KiDpcInterruptBypass(v14, v16, v18);
          goto LABEL_15;
        }
        HalRequestSoftwareInterrupt(2LL);
        v14 = KeGetCurrentPrcb();
      }
    }
  }
  --v14->NestingLevel;
LABEL_15:
  __writecr8(*(unsigned __int8 *)(v5 - 87));
  _disable();
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
  v19 = KeGetCurrentThread();
  if ( (v19->Header.LockNV & 0x40010000) != 0 && (v19->Header.Size & 1) != 0 )
  {
    KiCopyCounters();
    v19 = KeGetCurrentThread();
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState(v19);
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
