/*
 * XREFs of KyStartUserThread @ 0x1401669C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401669C0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140166C50 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401669C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401669C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401669C0: sub     rsp, 8
 * 00000001401669C4: push    rbp
 * 00000001401669C5: sub     rsp, 158h
 * 00000001401669CC: lea     rbp, [rsp+80h]
 * 00000001401669D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401669D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401669DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401669E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401669E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401669E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401669EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401669F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401669F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401669FB: jnz     short loc_140166A2C
 * 00000001401669FD: lfence
 * 0000000140166A00: test    word ptr gs:2EB8h, 1
 * 0000000140166A0B: jnz     short loc_140166A15
 * 0000000140166A0D: lfence
 * 0000000140166A10: jmp     loc_140166C08
 * 0000000140166A15: movzx   eax, word ptr gs:2EBCh
 * 0000000140166A1E: mov     ecx, 48h ; 'H'
 * 0000000140166A23: xor     edx, edx
 * 0000000140166A25: wrmsr
 * 0000000140166A27: jmp     loc_140166C08
 * 0000000140166A2C: test    cs:KiKvaShadow, 1
 * 0000000140166A33: jnz     short loc_140166A38
 * 0000000140166A35: swapgs
 * 0000000140166A38: lfence
 * 0000000140166A3B: mov     r10, gs:188h
 * 0000000140166A44: mov     rcx, gs:188h
 * 0000000140166A4D: mov     rcx, [rcx+220h]
 * 0000000140166A54: mov     rcx, [rcx+7B8h]
 * 0000000140166A5B: mov     gs:2EB0h, rcx
 * 0000000140166A64: movzx   eax, word ptr gs:2EBEh
 * 0000000140166A6D: cmp     gs:2EBCh, ax
 * 0000000140166A76: jz      short loc_140166A8A
 * 0000000140166A78: mov     gs:2EBCh, ax
 * 0000000140166A81: mov     ecx, 48h ; 'H'
 * 0000000140166A86: xor     edx, edx
 * 0000000140166A88: wrmsr
 * 0000000140166A8A: movzx   edx, word ptr gs:2EB8h
 * 0000000140166A93: test    edx, 8
 * 0000000140166A99: jz      short loc_140166AB2
 * 0000000140166A9B: mov     eax, 1
 * 0000000140166AA0: xor     edx, edx
 * 0000000140166AA2: mov     ecx, 49h ; 'I'
 * 0000000140166AA7: wrmsr
 * 0000000140166AA9: movzx   edx, word ptr gs:2EB8h
 * 0000000140166AB2: test    edx, 2
 * 0000000140166AB8: jz      loc_140166BE3
 * 0000000140166ABE: call    loc_140166BD1
 * 0000000140166AC3: add     rsp, 8
 * 0000000140166AC7: call    loc_140166BDA
 * 0000000140166ACC: add     rsp, 8
 * 0000000140166AD0: call    loc_140166AC3
 * 0000000140166AD5: add     rsp, 8
 * 0000000140166AD9: call    loc_140166ACC
 * 0000000140166ADE: add     rsp, 8
 * 0000000140166AE2: call    loc_140166AD5
 * 0000000140166AE7: add     rsp, 8
 * 0000000140166AEB: call    loc_140166ADE
 * 0000000140166AF0: add     rsp, 8
 * 0000000140166AF4: call    loc_140166AE7
 * 0000000140166AF9: add     rsp, 8
 * 0000000140166AFD: call    loc_140166AF0
 * 0000000140166B02: add     rsp, 8
 * 0000000140166B06: call    loc_140166AF9
 * 0000000140166B0B: add     rsp, 8
 * 0000000140166B0F: call    loc_140166B02
 * 0000000140166B14: add     rsp, 8
 * 0000000140166B18: call    loc_140166B0B
 * 0000000140166B1D: add     rsp, 8
 * 0000000140166B21: call    loc_140166B14
 * 0000000140166B26: add     rsp, 8
 * 0000000140166B2A: call    loc_140166B1D
 * 0000000140166B2F: add     rsp, 8
 * 0000000140166B33: call    loc_140166B26
 * 0000000140166B38: add     rsp, 8
 * 0000000140166B3C: call    loc_140166B2F
 * 0000000140166B41: add     rsp, 8
 * 0000000140166B45: call    loc_140166B38
 * 0000000140166B4A: add     rsp, 8
 * 0000000140166B4E: call    loc_140166B41
 * 0000000140166B53: add     rsp, 8
 * 0000000140166B57: call    loc_140166B4A
 * 0000000140166B5C: add     rsp, 8
 * 0000000140166B60: call    loc_140166B53
 * 0000000140166B65: add     rsp, 8
 * 0000000140166B69: call    loc_140166B5C
 * 0000000140166B6E: add     rsp, 8
 * 0000000140166B72: call    loc_140166B65
 * 0000000140166B77: add     rsp, 8
 * 0000000140166B7B: call    loc_140166B6E
 * 0000000140166B80: add     rsp, 8
 * 0000000140166B84: call    loc_140166B77
 * 0000000140166B89: add     rsp, 8
 * 0000000140166B8D: call    loc_140166B80
 * 0000000140166B92: add     rsp, 8
 * 0000000140166B96: call    loc_140166B89
 * 0000000140166B9B: add     rsp, 8
 * 0000000140166B9F: call    loc_140166B92
 * 0000000140166BA4: add     rsp, 8
 * 0000000140166BA8: call    loc_140166B9B
 * 0000000140166BAD: add     rsp, 8
 * 0000000140166BB1: call    loc_140166BA4
 * 0000000140166BB6: add     rsp, 8
 * 0000000140166BBA: call    loc_140166BAD
 * 0000000140166BBF: add     rsp, 8
 * 0000000140166BC3: call    loc_140166BB6
 * 0000000140166BC8: add     rsp, 8
 * 0000000140166BCC: call    loc_140166BBF
 * 0000000140166BD1: add     rsp, 8
 * 0000000140166BD5: call    loc_140166BC8
 * 0000000140166BDA: add     rsp, 8
 * 0000000140166BDE: mov     eax, 0DADAh
 * 0000000140166BE3: test    edx, 100h
 * 0000000140166BE9: jz      short loc_140166BF0
 * 0000000140166BEB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140166BF0: lfence
 * 0000000140166BF3: test    byte ptr [r10+3], 3
 * 0000000140166BF8: mov     [rbp+0E8h+var_68], 0
 * 0000000140166C01: jz      short loc_140166C08
 * 0000000140166C03: call    KiSaveDebugRegisterState
 * 0000000140166C08: cld
 * 0000000140166C09: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140166C0D: ldmxcsr dword ptr gs:180h
 * 0000000140166C16: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140166C1A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140166C1E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140166C22: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140166C26: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140166C2A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140166C2E: test    [rbp+0E8h+arg_8], 200h
 * 0000000140166C38: jz      short loc_140166C3B
 * 0000000140166C3A: sti
 * 0000000140166C3B: call    KxStartUserThread
 * 0000000140166C40: nop
 * 0000000140166C41: retn
 */
