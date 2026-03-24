/*
 * XREFs of RtlCompressBuffer @ 0x1400C21A4
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     RtlCompressChunks @ 0x140644104 (RtlCompressChunks.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlCompressBuffer @ 0x1400C21A4
 * Reason: Hex-Rays returned no pseudocode for 0x1400C21A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400C21A4: movzx   eax, cx
 * 00000001400C21A7: mov     r10d, 0FFh
 * 00000001400C21AD: and     ax, r10w
 * 00000001400C21B1: cmp     ax, 2
 * 00000001400C21B5: jb      short loc_1400C21DA
 * 00000001400C21B7: cmp     ax, 4; switch with an invalid jump table
 * 00000001400C21BB: ja      short def_1400C21D0; jumptable 00000001400C21D0 default case
 * 00000001400C21BD: movzx   r10d, ax
 * 00000001400C21C1: lea     r11, RtlCompressBufferProcs
 * 00000001400C21C8: mov     eax, 0FF00h
 * 00000001400C21CD: and     cx, ax
 * 00000001400C21D0: jmp     ds:(RtlCompressBufferProcs - 140245378h)[r11+r10*8]; switch jump
 * 00000001400C21D4: mov     eax, 0C000025Fh; jumptable 00000001400C21D0 default case
 * 00000001400C21D9: retn
 * 00000001400C21DA: mov     eax, 0C000000Dh
 * 00000001400C21DF: retn
 */
