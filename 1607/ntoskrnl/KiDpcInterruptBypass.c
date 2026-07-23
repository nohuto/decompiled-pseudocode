/*
 * XREFs of KiDpcInterruptBypass @ 0x140165B00
 * Callers:
 *     KiChainedDispatch @ 0x14015EF20 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14015F800 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14015FBB0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140160310 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140165B00
 * Reason: Hex-Rays returned no pseudocode for 0x140165B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140165B00: sub     rsp, 8
 * 0000000140165B04: mov     ecx, 2
 * 0000000140165B09: mov     cr8, rcx
 * 0000000140165B0D: sti
 * 0000000140165B0E: mov     al, [rbp-57h]
 * 0000000140165B11: mov     rcx, gs:188h
 * 0000000140165B1A: mov     [rcx+186h], al
 * 0000000140165B20: call    KiDispatchInterrupt
 * 0000000140165B25: cli
 * 0000000140165B26: add     rsp, 8
 * 0000000140165B2A: retn
 */
