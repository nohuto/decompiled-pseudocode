/*
 * XREFs of KiDpcInterruptBypass @ 0x140187950
 * Callers:
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140187950
 * Reason: Hex-Rays returned no pseudocode for 0x140187950
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187950: sub     rsp, 8
 * 0000000140187954: mov     ecx, 2
 * 0000000140187959: mov     cr8, rcx
 * 000000014018795D: sti
 * 000000014018795E: mov     al, [rbp-57h]
 * 0000000140187961: mov     rcx, gs:188h
 * 000000014018796A: mov     [rcx+186h], al
 * 0000000140187970: call    KiDispatchInterrupt
 * 0000000140187975: cli
 * 0000000140187976: add     rsp, 8
 * 000000014018797A: retn
 */
