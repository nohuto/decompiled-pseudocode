/*
 * XREFs of KiNpxSegmentOverrunAbort @ 0x14016B980
 * Callers:
 *     KiNpxSegmentOverrunAbortShadow @ 0x14023F480 (KiNpxSegmentOverrunAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B980 (KiNpxSegmentOverrunAbort.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiNpxSegmentOverrunAbort()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v1; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  char v6; // [rsp+170h] [rbp+F0h]
  __int16 v7; // [rsp+178h] [rbp+F8h]

  if ( (v6 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v1 = *(_QWORD *)&CurrentThread->Process[2].ThreadSeed[18];
    __writegsqword(0x2EB0u, v1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x2EBCu, BpbKernelSpecCtrl);
      v1 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v1 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x14016BB91LL);
    if ( (BpbState & 0x100) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v1);
    _mm_lfence();
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v1);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v7 & 0x200) != 0 )
    _enable();
  v4 = __readcr4();
  v5 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v5, v4);
}
