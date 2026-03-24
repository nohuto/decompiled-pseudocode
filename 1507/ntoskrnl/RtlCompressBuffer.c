/*
 * XREFs of RtlCompressBuffer @ 0x1400F790C
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     RtlCompressChunks @ 0x1406C7190 (RtlCompressChunks.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlCompressBuffer @ 0x1400F790C
 * Reason: Hex-Rays returned no pseudocode for 0x1400F790C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F790C: movzx   eax, cx
 * 00000001400F790F: mov     r10d, 0FFh
 * 00000001400F7915: and     ax, r10w
 * 00000001400F7919: cmp     ax, 2
 * 00000001400F791D: jb      short loc_1400F7942
 * 00000001400F791F: cmp     ax, 4; switch with an invalid jump table
 * 00000001400F7923: ja      short def_1400F7938; jumptable 00000001400F7938 default case
 * 00000001400F7925: movzx   r10d, ax
 * 00000001400F7929: lea     r11, RtlCompressBufferProcs
 * 00000001400F7930: mov     eax, 0FF00h
 * 00000001400F7935: and     cx, ax
 * 00000001400F7938: jmp     ds:(RtlCompressBufferProcs - 140295358h)[r11+r10*8]; switch jump
 * 00000001400F793C: mov     eax, 0C000025Fh; jumptable 00000001400F7938 default case
 * 00000001400F7941: retn
 * 00000001400F7942: mov     eax, 0C000000Dh
 * 00000001400F7947: retn
 */
