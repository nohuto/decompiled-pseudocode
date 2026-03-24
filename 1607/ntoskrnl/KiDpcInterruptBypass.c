/*
 * XREFs of KiDpcInterruptBypass @ 0x140165590
 * Callers:
 *     KiChainedDispatch @ 0x14015E9B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F290 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015F640 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015F9F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14015FDA0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140160150 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140162D50 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x1401655D0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140165DB0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140165590
 * Reason: Hex-Rays returned no pseudocode for 0x140165590
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140165590: sub     rsp, 8
 * 0000000140165594: mov     ecx, 2
 * 0000000140165599: mov     cr8, rcx
 * 000000014016559D: sti
 * 000000014016559E: mov     al, [rbp-57h]
 * 00000001401655A1: mov     rcx, gs:188h
 * 00000001401655AA: mov     [rcx+186h], al
 * 00000001401655B0: call    KiDispatchInterrupt
 * 00000001401655B5: cli
 * 00000001401655B6: add     rsp, 8
 * 00000001401655BA: retn
 */
