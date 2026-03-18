/*
 * XREFs of KiInitiateUserApc @ 0x1401872F0
 * Callers:
 *     NtContinue @ 0x140182DD0 (NtContinue.c)
 *     NtRaiseException @ 0x1401831C0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x1401873D0 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x14018AD30 (KxStartUserThread.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401949C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
