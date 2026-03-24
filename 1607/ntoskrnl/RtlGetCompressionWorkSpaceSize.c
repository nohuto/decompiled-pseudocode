/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x14000634C
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140004FE4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmDecompressBuffer @ 0x140005834 (SmDecompressBuffer.c)
 *     EtwpInitializeCompression @ 0x14022AC24 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x14000634C
 * Reason: Hex-Rays returned no pseudocode for 0x14000634C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000634C: movzx   eax, cx
 * 000000014000634F: mov     r9d, 0FFh
 * 0000000140006355: and     ax, r9w
 * 0000000140006359: cmp     ax, 2
 * 000000014000635D: jb      short loc_140006383
 * 000000014000635F: cmp     ax, 4; switch with an invalid jump table
 * 0000000140006363: ja      short def_140006379; jumptable 0000000140006379 default case
 * 0000000140006365: mov     r9d, 0FF00h
 * 000000014000636B: movzx   eax, ax
 * 000000014000636E: lea     r10, RtlWorkSpaceProcs
 * 0000000140006375: and     cx, r9w
 * 0000000140006379: jmp     ds:(RtlWorkSpaceProcs - 14025B3A8h)[r10+rax*8]; switch jump
 * 000000014000637D: mov     eax, 0C000025Fh; jumptable 0000000140006379 default case
 * 0000000140006382: retn
 * 0000000140006383: mov     eax, 0C000000Dh
 * 0000000140006388: retn
 */
