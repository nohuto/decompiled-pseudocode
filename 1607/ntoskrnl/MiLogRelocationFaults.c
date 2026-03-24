/*
 * XREFs of MiLogRelocationFaults @ 0x140525660
 * Callers:
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x140525BF0 (MiLogRelocationRva.c)
 */

/*
 * Hex-Rays decompilation failed for MiLogRelocationFaults @ 0x140525660
 * Reason: Hex-Rays returned no pseudocode for 0x140525660
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140525660: mov     [rsp+arg_0], rbx
 * 0000000140525665: mov     [rsp+arg_8], rbp
 * 000000014052566A: mov     [rsp+arg_10], rsi
 * 000000014052566F: push    rdi
 * 0000000140525670: sub     rsp, 20h
 * 0000000140525674: mov     rdi, r8
 * 0000000140525677: mov     rbx, rdx
 * 000000014052567A: mov     rsi, rcx
 * 000000014052567D: call    MiReferenceControlAreaFile
 * 0000000140525682: mov     edx, [rbx+4]
 * 0000000140525685: mov     r9, rsi
 * 0000000140525688: mov     ecx, [rbx]
 * 000000014052568A: mov     r8, rax
 * 000000014052568D: mov     rbp, rax
 * 0000000140525690: call    MiLogRelocationRva
 * 0000000140525695: mov     rbx, [rdi+10h]
 * 0000000140525699: test    rbx, rbx
 * 000000014052569C: jnz     short loc_1405256BD
 * 000000014052569E: mov     rdx, rbp
 * 00000001405256A1: mov     rcx, rsi
 * 00000001405256A4: mov     rbx, [rsp+28h+arg_0]
 * 00000001405256A9: mov     rbp, [rsp+28h+arg_8]
 * 00000001405256AE: mov     rsi, [rsp+28h+arg_10]
 * 00000001405256B3: add     rsp, 20h
 * 00000001405256B7: pop     rdi
 * 00000001405256B8: jmp     MiDereferenceControlAreaFile
 * 00000001405256BD: mov     ecx, [rbx+8]
 * 00000001405256C0: test    ecx, 0FFFh
 * 00000001405256C6: jnz     short loc_1405256CD
 * 00000001405256C8: mov     rbx, [rbx]
 * 00000001405256CB: jmp     short loc_140525699
 * 00000001405256CD: mov     r9, rsi
 * 00000001405256D0: mov     r8, rbp
 * 00000001405256D3: mov     edx, 2000h
 * 00000001405256D8: call    MiLogRelocationRva
 * 00000001405256DD: jmp     short loc_1405256C8
 */
