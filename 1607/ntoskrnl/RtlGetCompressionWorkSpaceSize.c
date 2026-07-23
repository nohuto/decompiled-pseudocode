/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1400064BC
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmDecompressBuffer @ 0x1400059A8 (SmDecompressBuffer.c)
 *     EtwpInitializeCompression @ 0x14022AA50 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1400064BC
 * Reason: Hex-Rays returned no pseudocode for 0x1400064BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400064BC: movzx   eax, cx
 * 00000001400064BF: mov     r9d, 0FFh
 * 00000001400064C5: and     ax, r9w
 * 00000001400064C9: cmp     ax, 2
 * 00000001400064CD: jb      short loc_1400064F3
 * 00000001400064CF: cmp     ax, 4; switch with an invalid jump table
 * 00000001400064D3: ja      short def_1400064E9; jumptable 00000001400064E9 default case
 * 00000001400064D5: mov     r9d, 0FF00h
 * 00000001400064DB: movzx   eax, ax
 * 00000001400064DE: lea     r10, RtlWorkSpaceProcs
 * 00000001400064E5: and     cx, r9w
 * 00000001400064E9: jmp     ds:(RtlWorkSpaceProcs - 14025B3A8h)[r10+rax*8]; switch jump
 * 00000001400064ED: mov     eax, 0C000025Fh; jumptable 00000001400064E9 default case
 * 00000001400064F2: retn
 * 00000001400064F3: mov     eax, 0C000000Dh
 * 00000001400064F8: retn
 */
