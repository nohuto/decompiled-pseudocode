/*
 * XREFs of RtlCompressBuffer @ 0x140080D40
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     EtwpCompressBuffer @ 0x140229F34 (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x140685B0C (RtlCompressChunks.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlCompressBuffer @ 0x140080D40
 * Reason: Hex-Rays returned no pseudocode for 0x140080D40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140080D40: movzx   eax, cx
 * 0000000140080D43: mov     r10d, 0FFh
 * 0000000140080D49: and     ax, r10w
 * 0000000140080D4D: cmp     ax, 2
 * 0000000140080D51: jb      short loc_140080D76
 * 0000000140080D53: cmp     ax, 4; switch with an invalid jump table
 * 0000000140080D57: ja      short def_140080D6C; jumptable 0000000140080D6C default case
 * 0000000140080D59: movzx   r10d, ax
 * 0000000140080D5D: lea     r11, RtlCompressBufferProcs
 * 0000000140080D64: mov     eax, 0FF00h
 * 0000000140080D69: and     cx, ax
 * 0000000140080D6C: jmp     ds:(RtlCompressBufferProcs - 14025B408h)[r11+r10*8]; switch jump
 * 0000000140080D70: mov     eax, 0C000025Fh; jumptable 0000000140080D6C default case
 * 0000000140080D75: retn
 * 0000000140080D76: mov     eax, 0C000000Dh
 * 0000000140080D7B: retn
 */
