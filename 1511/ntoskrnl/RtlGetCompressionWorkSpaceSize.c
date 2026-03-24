/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1400FA8AC
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmDecompressBuffer @ 0x1400F9D94 (SmDecompressBuffer.c)
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1400FA8AC
 * Reason: Hex-Rays returned no pseudocode for 0x1400FA8AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400FA8AC: movzx   eax, cx
 * 00000001400FA8AF: mov     r9d, 0FFh
 * 00000001400FA8B5: and     ax, r9w
 * 00000001400FA8B9: cmp     ax, 2
 * 00000001400FA8BD: jb      short loc_1400FA8E3
 * 00000001400FA8BF: cmp     ax, 4; switch with an invalid jump table
 * 00000001400FA8C3: ja      short def_1400FA8D9; jumptable 00000001400FA8D9 default case
 * 00000001400FA8C5: mov     r9d, 0FF00h
 * 00000001400FA8CB: movzx   eax, ax
 * 00000001400FA8CE: lea     r10, RtlWorkSpaceProcs
 * 00000001400FA8D5: and     cx, r9w
 * 00000001400FA8D9: jmp     ds:(RtlWorkSpaceProcs - 1402456C0h)[r10+rax*8]; switch jump
 * 00000001400FA8DD: mov     eax, 0C000025Fh; jumptable 00000001400FA8D9 default case
 * 00000001400FA8E2: retn
 * 00000001400FA8E3: mov     eax, 0C000000Dh
 * 00000001400FA8E8: retn
 */
