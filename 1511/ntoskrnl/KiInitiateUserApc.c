/*
 * XREFs of KiInitiateUserApc @ 0x140157B20
 * Callers:
 *     NtContinue @ 0x140154450 (NtContinue.c)
 *     NtRaiseException @ 0x1401546F0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x140154BE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140155360 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401555B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140155800 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140155A50 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140155C90 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401575F0 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x140157C00 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x14015B3A0 (KxStartUserThread.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14015FFC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140163700 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140166140 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  struct _LIST_ENTRY v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, &v1, v0 - 128);
}
