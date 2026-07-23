/*
 * XREFs of KiSaveDebugRegisterState @ 0x14015DF70
 * Callers:
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140165560 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401669C0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x140169600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401699C0 (KxDebugTrapOrFault.c)
 *     KiNmiInterruptStart @ 0x140169D80 (KiNmiInterruptStart.c)
 *     KiBreakpointTrap @ 0x14016A1C0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14016A4C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14016B400 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14016B6C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B980 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14016BC40 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14016BF00 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14016C240 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14016C540 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14016CFC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14016D340 (KiAlignmentFault.c)
 *     KiMcheckAbort @ 0x14016D640 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14016E180 (KiXmmException.c)
 *     KiRaiseSecurityCheckFailure @ 0x14016E500 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14016E800 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14016EB00 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14016F040 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140240B80 (KiSystemCall32Shadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveDebugRegisterState()
{
  __int64 v0; // rbp
  KPCR *Pcr; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 KernelDr1; // rdx
  unsigned __int64 KernelDr3; // rdx
  unsigned __int64 KernelDr7; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  Pcr = KeGetPcr();
  v2 = __readdr(0);
  v3 = __readdr(1u);
  *(_QWORD *)(v0 + 88) = v2;
  *(_QWORD *)(v0 + 96) = v3;
  v4 = __readdr(2u);
  v5 = __readdr(3u);
  *(_QWORD *)(v0 + 104) = v4;
  *(_QWORD *)(v0 + 112) = v5;
  v6 = __readdr(6u);
  v7 = __readdr(7u);
  *(_QWORD *)(v0 + 120) = v6;
  *(_QWORD *)(v0 + 128) = v7;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v7 & 0x300) != 0 )
  {
    v9 = KiLastBranchTOSMSR;
    if ( KiLastBranchTOSMSR )
    {
      v10 = __readmsr(KiLastBranchTOSMSR);
      v9 = v10;
    }
    v11 = __readmsr(v9 + KiLastBranchFromBaseMSR);
    *(_DWORD *)(v0 + 152) = v11;
    v12 = KiLastBranchToBaseMSR;
    *(_DWORD *)(v0 + 156) = HIDWORD(v11);
    *(_QWORD *)(v0 + 144) = __readmsr(v9 + v12);
    *(_QWORD *)(v0 + 168) = __readmsr(KiLastExceptionFromBaseMSR);
    *(_QWORD *)(v0 + 160) = __readmsr(KiLastExceptionToBaseMSR);
    v13 = __readmsr(0x1D9u);
    v14 = HIDWORD(v13);
    result = (unsigned int)v13 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v14, result));
  }
  if ( (Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7 & 0x355) != 0 )
  {
    KernelDr1 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr1;
    __writedr(0, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr0);
    __writedr(1u, KernelDr1);
    KernelDr3 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr3;
    __writedr(2u, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr2);
    __writedr(3u, KernelDr3);
    KernelDr7 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7;
    result = 0LL;
    __writedr(6u, 0LL);
    __writedr(7u, KernelDr7);
    if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 )
    {
      if ( (KernelDr7 & 0x200) != 0 )
        result = 2LL;
      if ( (KernelDr7 & 0x100) != 0 )
        result = (unsigned int)result | 1;
      if ( (_DWORD)result )
      {
        v18 = result;
        v19 = __readmsr(0x1D9u);
        v20 = HIDWORD(v19);
        result = v18 | (unsigned int)v19 & 0xFFFFFFFC;
        __writemsr(0x1D9u, __PAIR64__(v20, result));
      }
    }
  }
  return result;
}
