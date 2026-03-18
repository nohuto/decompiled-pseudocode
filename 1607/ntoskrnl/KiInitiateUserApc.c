/*
 * XREFs of KiInitiateUserApc @ 0x140162560
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
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016A900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14016D680 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401704C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
