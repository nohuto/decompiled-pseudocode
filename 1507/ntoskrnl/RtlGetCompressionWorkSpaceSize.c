/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1400D87A0
 * Callers:
 *     SmDecompressBuffer @ 0x1400D7CB4 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D8828 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1400D87A0
 * Reason: Hex-Rays returned no pseudocode for 0x1400D87A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400D87A0: movzx   eax, cx
 * 00000001400D87A3: mov     r9d, 0FFh
 * 00000001400D87A9: and     ax, r9w
 * 00000001400D87AD: cmp     ax, 2
 * 00000001400D87B1: jb      short loc_1400D87D7
 * 00000001400D87B3: cmp     ax, 4; switch with an invalid jump table
 * 00000001400D87B7: ja      short def_1400D87CD; jumptable 00000001400D87CD default case
 * 00000001400D87B9: mov     r9d, 0FF00h
 * 00000001400D87BF: movzx   eax, ax
 * 00000001400D87C2: lea     r10, RtlWorkSpaceProcs
 * 00000001400D87C9: and     cx, r9w
 * 00000001400D87CD: jmp     ds:(RtlWorkSpaceProcs - 140295310h)[r10+rax*8]; switch jump
 * 00000001400D87D1: mov     eax, 0C000025Fh; jumptable 00000001400D87CD default case
 * 00000001400D87D6: retn
 * 00000001400D87D7: mov     eax, 0C000000Dh
 * 00000001400D87DC: retn
 */
