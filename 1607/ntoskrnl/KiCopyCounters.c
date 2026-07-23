/*
 * XREFs of KiCopyCounters @ 0x1401D6DE8
 * Callers:
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 *     NtRaiseException @ 0x14015E510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
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
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiCopyCountersWorker @ 0x14064FF10 (KiCopyCountersWorker.c)
 */

__int64 __fastcall KiCopyCounters(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi
  int v5; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    _enable();
    v5 = KiCopyCountersWorker(a1, v2);
    _disable();
  }
  while ( !v5 && v4 != *(_QWORD *)(a1 + 72) );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
