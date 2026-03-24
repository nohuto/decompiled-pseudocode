/*
 * XREFs of KiDpcInterruptBypass @ 0x140158120
 * Callers:
 *     KiChainedDispatch @ 0x140154BE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140155360 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401555B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140155800 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140155A50 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140155C90 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x14015A980 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140158120
 * Reason: Hex-Rays returned no pseudocode for 0x140158120
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140158120: sub     rsp, 8
 * 0000000140158124: mov     ecx, 2
 * 0000000140158129: mov     cr8, rcx
 * 000000014015812D: sti
 * 000000014015812E: mov     al, [rbp-57h]
 * 0000000140158131: mov     rcx, gs:188h
 * 000000014015813A: mov     [rcx+186h], al
 * 0000000140158140: call    KiDispatchInterrupt
 * 0000000140158145: cli
 * 0000000140158146: add     rsp, 8
 * 000000014015814A: retn
 */
