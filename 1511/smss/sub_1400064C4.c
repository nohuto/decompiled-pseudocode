/*
 * XREFs of sub_1400064C4 @ 0x1400064C4
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for sub_1400064C4 @ 0x1400064C4
 * Reason: Hex-Rays returned no pseudocode for 0x1400064C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400064C4: push    rbx
 * 00000001400064C6: sub     rsp, 20h
 * 00000001400064CA: mov     rbx, rcx
 * 00000001400064CD: mov     rcx, cs:RegHandle; RegHandle
 * 00000001400064D4: test    rcx, rcx
 * 00000001400064D7: jz      short loc_1400064EA
 * 00000001400064D9: mov     rdx, rbx; EventDescriptor
 * 00000001400064DC: call    cs:EtwEventEnabled
 * 00000001400064E2: test    al, al
 * 00000001400064E4: jnz     loc_14000DD02
 * 00000001400064EA: add     rsp, 20h
 * 00000001400064EE: pop     rbx
 * 00000001400064EF: retn
 * 000000014000DD02: mov     rcx, cs:RegHandle
 * 000000014000DD09: xor     r9d, r9d
 * 000000014000DD0C: xor     r8d, r8d
 * 000000014000DD0F: mov     rdx, rbx
 * 000000014000DD12: call    cs:EtwEventWrite
 * 000000014000DD18: nop
 * 000000014000DD19: jmp     loc_1400064EA
 */
