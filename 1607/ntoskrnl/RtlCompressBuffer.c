/*
 * XREFs of RtlCompressBuffer @ 0x140080CC0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118544 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     EtwpCompressBuffer @ 0x14022A108 (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x140685A28 (RtlCompressChunks.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlCompressBuffer @ 0x140080CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140080CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140080CC0: movzx   eax, cx
 * 0000000140080CC3: mov     r10d, 0FFh
 * 0000000140080CC9: and     ax, r10w
 * 0000000140080CCD: cmp     ax, 2
 * 0000000140080CD1: jb      short loc_140080CF6
 * 0000000140080CD3: cmp     ax, 4; switch with an invalid jump table
 * 0000000140080CD7: ja      short def_140080CEC; jumptable 0000000140080CEC default case
 * 0000000140080CD9: movzx   r10d, ax
 * 0000000140080CDD: lea     r11, RtlCompressBufferProcs
 * 0000000140080CE4: mov     eax, 0FF00h
 * 0000000140080CE9: and     cx, ax
 * 0000000140080CEC: jmp     ds:(RtlCompressBufferProcs - 14025B408h)[r11+r10*8]; switch jump
 * 0000000140080CF0: mov     eax, 0C000025Fh; jumptable 0000000140080CEC default case
 * 0000000140080CF5: retn
 * 0000000140080CF6: mov     eax, 0C000000Dh
 * 0000000140080CFB: retn
 */
