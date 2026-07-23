/*
 * XREFs of KiRestoreSetContextState @ 0x14015EAB0
 * Callers:
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 *     NtRaiseException @ 0x14015E510 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x14015EF20 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F800 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015FBB0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140160310 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
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
 *     KxStartUserThread @ 0x140166C50 (KxStartUserThread.c)
 *     KiNmiInterruptStart @ 0x140169D80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14016D640 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeContextToKframes @ 0x14015DBA0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  _DWORD *Object; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v11; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  __writecr8(1uLL);
  _enable();
  Object = KeGetCurrentThread()[1].WaitBlock[3].Object;
  KeContextToKframes(v5 - 128, (__int64)v15, (__int64)Object, Object[12], 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EBCu, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v11 = _bittestandreset16(MK_FP(__GS__, 11960LL), 2u);
  if ( v11 )
    __writemsr(0x49u, 1uLL);
  v11 = _bittestandreset16(MK_FP(__GS__, 11960LL), 5u);
  if ( v11 )
  {
    v15[21] = 0x14015EC8ALL;
    v15[52] = 0x14015EDA1LL;
    v15[51] = 0x14015ED98LL;
    v15[50] = 0x14015ED8FLL;
    v15[49] = 0x14015ED86LL;
    v15[48] = 0x14015ED7DLL;
    v15[47] = 0x14015ED74LL;
    v15[46] = 0x14015ED6BLL;
    v15[45] = 0x14015ED62LL;
    v15[44] = 0x14015ED59LL;
    v15[43] = 0x14015ED50LL;
    v15[42] = 0x14015ED47LL;
    v15[41] = 0x14015ED3ELL;
    v15[40] = 0x14015ED35LL;
    v15[39] = 0x14015ED2CLL;
    v15[38] = 0x14015ED23LL;
    v15[37] = 0x14015ED1ALL;
    v15[36] = 0x14015ED11LL;
    v15[35] = 0x14015ED08LL;
    v15[34] = 0x14015ECFFLL;
    v15[33] = 0x14015ECF6LL;
    v15[32] = 0x14015ECEDLL;
    v15[31] = 0x14015ECE4LL;
    v15[30] = 0x14015ECDBLL;
    v15[29] = 0x14015ECD2LL;
    v15[28] = 0x14015ECC9LL;
    v15[27] = 0x14015ECC0LL;
    v15[26] = 0x14015ECB7LL;
    v15[25] = 0x14015ECAELL;
    v15[24] = 0x14015ECA5LL;
    v15[23] = 0x14015EC9CLL;
    v15[22] = 0x14015EC93LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}
