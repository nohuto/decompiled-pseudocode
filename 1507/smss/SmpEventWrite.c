/*
 * XREFs of SmpEventWrite @ 0x140005B68
 * Callers:
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x140005B68
 * Reason: Hex-Rays returned no pseudocode for 0x140005B68
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005B68: push    rbx
 * 0000000140005B6A: sub     rsp, 20h
 * 0000000140005B6E: mov     rbx, rcx
 * 0000000140005B71: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 0000000140005B78: test    rcx, rcx
 * 0000000140005B7B: jz      short loc_140005B8E
 * 0000000140005B7D: mov     rdx, rbx; EventDescriptor
 * 0000000140005B80: call    cs:__imp_EtwEventEnabled
 * 0000000140005B86: test    al, al
 * 0000000140005B88: jnz     loc_14000DD6A
 * 0000000140005B8E: add     rsp, 20h
 * 0000000140005B92: pop     rbx
 * 0000000140005B93: retn
 * 000000014000DD6A: mov     rcx, cs:SmpTraceHandle
 * 000000014000DD71: xor     r9d, r9d
 * 000000014000DD74: xor     r8d, r8d
 * 000000014000DD77: mov     rdx, rbx
 * 000000014000DD7A: call    cs:__imp_EtwEventWrite
 * 000000014000DD80: nop
 * 000000014000DD81: jmp     loc_140005B8E
 */
