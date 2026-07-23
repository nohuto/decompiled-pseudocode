/*
 * XREFs of KiSegmentNotPresentFault @ 0x14016BF00
 * Callers:
 *     KiSegmentNotPresentFaultShadow @ 0x14023F580 (KiSegmentNotPresentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiSegmentNotPresentFault @ 0x14016BF00 (KiSegmentNotPresentFault.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiSegmentNotPresentFault()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v1; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  ULONG64 v4; // rax
  _QWORD *Object; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  __int64 v9; // [rsp+168h] [rbp+E8h]
  char v10; // [rsp+170h] [rbp+F0h]
  __int16 v11; // [rsp+178h] [rbp+F8h]

  if ( (v10 & 1) != 0 )
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
      JUMPOUT(0x14016C10DLL);
    if ( (BpbState & 0x100) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v1);
    _mm_lfence();
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v1 = 3221225730LL;
      v4 = __readmsr(0xC0000102);
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v4 )
      {
        Object = CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        Object[16] = v4;
      }
    }
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
  if ( (v11 & 0x200) != 0 )
    _enable();
  if ( (v10 & 1) != 0 )
    KiExceptionDispatch(3221225477LL, 2LL, v9, (unsigned __int16)retaddr | 3u);
  v6 = (unsigned int)retaddr;
  v7 = __readcr0();
  KiBugCheckDispatch(127LL, 11LL, v7, v6);
}
