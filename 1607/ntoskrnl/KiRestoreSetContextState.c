/*
 * XREFs of KiRestoreSetContextState @ 0x14015E540
 * Callers:
 *     NtContinue @ 0x14015DBA0 (NtContinue.c)
 *     NtRaiseException @ 0x14015DFA0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x14015E9B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F290 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015F640 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015F9F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14015FDA0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140160150 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140161FC0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140162D50 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140164FF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401655D0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401666E0 (KxStartUserThread.c)
 *     KiNmiInterruptStart @ 0x140169880 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016A900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14016D140 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14016D680 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401704C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeContextToKframes @ 0x14015D630 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
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
    v15[21] = 0x14015E71ALL;
    v15[52] = 0x14015E831LL;
    v15[51] = 0x14015E828LL;
    v15[50] = 0x14015E81FLL;
    v15[49] = 0x14015E816LL;
    v15[48] = 0x14015E80DLL;
    v15[47] = 0x14015E804LL;
    v15[46] = 0x14015E7FBLL;
    v15[45] = 0x14015E7F2LL;
    v15[44] = 0x14015E7E9LL;
    v15[43] = 0x14015E7E0LL;
    v15[42] = 0x14015E7D7LL;
    v15[41] = 0x14015E7CELL;
    v15[40] = 0x14015E7C5LL;
    v15[39] = 0x14015E7BCLL;
    v15[38] = 0x14015E7B3LL;
    v15[37] = 0x14015E7AALL;
    v15[36] = 0x14015E7A1LL;
    v15[35] = 0x14015E798LL;
    v15[34] = 0x14015E78FLL;
    v15[33] = 0x14015E786LL;
    v15[32] = 0x14015E77DLL;
    v15[31] = 0x14015E774LL;
    v15[30] = 0x14015E76BLL;
    v15[29] = 0x14015E762LL;
    v15[28] = 0x14015E759LL;
    v15[27] = 0x14015E750LL;
    v15[26] = 0x14015E747LL;
    v15[25] = 0x14015E73ELL;
    v15[24] = 0x14015E735LL;
    v15[23] = 0x14015E72CLL;
    v15[22] = 0x14015E723LL;
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
