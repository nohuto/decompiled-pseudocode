/*
 * XREFs of MiLogRelocationFaults @ 0x1405086C0
 * Callers:
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
 */

/*
 * Hex-Rays decompilation failed for MiLogRelocationFaults @ 0x1405086C0
 * Reason: Hex-Rays returned no pseudocode for 0x1405086C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405086C0: mov     [rsp+arg_0], rbx
 * 00000001405086C5: mov     [rsp+arg_8], rbp
 * 00000001405086CA: mov     [rsp+arg_10], rsi
 * 00000001405086CF: push    rdi
 * 00000001405086D0: sub     rsp, 20h
 * 00000001405086D4: mov     rdi, r8
 * 00000001405086D7: mov     rbx, rdx
 * 00000001405086DA: mov     rsi, rcx
 * 00000001405086DD: call    MiReferenceControlAreaFile
 * 00000001405086E2: mov     edx, [rbx+4]
 * 00000001405086E5: mov     r9, rsi
 * 00000001405086E8: mov     ecx, [rbx]
 * 00000001405086EA: mov     r8, rax
 * 00000001405086ED: mov     rbp, rax
 * 00000001405086F0: call    MiLogRelocationRva
 * 00000001405086F5: mov     rbx, [rdi+10h]
 * 00000001405086F9: test    rbx, rbx
 * 00000001405086FC: jnz     short loc_14050871D
 * 00000001405086FE: mov     rdx, rbp
 * 0000000140508701: mov     rcx, rsi
 * 0000000140508704: mov     rbx, [rsp+28h+arg_0]
 * 0000000140508709: mov     rbp, [rsp+28h+arg_8]
 * 000000014050870E: mov     rsi, [rsp+28h+arg_10]
 * 0000000140508713: add     rsp, 20h
 * 0000000140508717: pop     rdi
 * 0000000140508718: jmp     MiDereferenceControlAreaFile
 * 000000014050871D: mov     ecx, [rbx+8]
 * 0000000140508720: test    ecx, 0FFFh
 * 0000000140508726: jnz     short loc_14050872D
 * 0000000140508728: mov     rbx, [rbx]
 * 000000014050872B: jmp     short loc_1405086F9
 * 000000014050872D: mov     r9, rsi
 * 0000000140508730: mov     r8, rbp
 * 0000000140508733: mov     edx, 2000h
 * 0000000140508738: call    MiLogRelocationRva
 * 000000014050873D: jmp     short loc_140508728
 */
