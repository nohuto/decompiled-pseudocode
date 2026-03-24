/*
 * XREFs of KyStartUserThread @ 0x14018AA90
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x14018AA90 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x14018AD30 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x14018AA90
 * Reason: Hex-Rays returned no pseudocode for 0x14018AA90
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018AA90: sub     rsp, 8
 * 000000014018AA94: push    rbp
 * 000000014018AA95: sub     rsp, 158h
 * 000000014018AA9C: lea     rbp, [rsp+80h]
 * 000000014018AAA4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018AAA8: mov     [rbp+0E8h+var_138], rax
 * 000000014018AAAC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018AAB0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018AAB4: mov     [rbp+0E8h+var_120], r8
 * 000000014018AAB8: mov     [rbp+0E8h+var_118], r9
 * 000000014018AABC: mov     [rbp+0E8h+var_110], r10
 * 000000014018AAC0: mov     [rbp+0E8h+var_108], r11
 * 000000014018AAC4: test    [rbp+0E8h+arg_0], 1
 * 000000014018AACB: jnz     short loc_14018AAFC
 * 000000014018AACD: lfence
 * 000000014018AAD0: test    word ptr gs:2EB0h, 1
 * 000000014018AADB: jnz     short loc_14018AAE5
 * 000000014018AADD: lfence
 * 000000014018AAE0: jmp     loc_14018ACD8
 * 000000014018AAE5: movzx   eax, word ptr gs:2EB4h
 * 000000014018AAEE: mov     ecx, 48h ; 'H'
 * 000000014018AAF3: xor     edx, edx
 * 000000014018AAF5: wrmsr
 * 000000014018AAF7: jmp     loc_14018ACD8
 * 000000014018AAFC: test    cs:KiKvaShadow, 1
 * 000000014018AB03: jnz     short loc_14018AB08
 * 000000014018AB05: swapgs
 * 000000014018AB08: lfence
 * 000000014018AB0B: mov     r10, gs:188h
 * 000000014018AB14: mov     rcx, gs:188h
 * 000000014018AB1D: mov     rcx, [rcx+220h]
 * 000000014018AB24: mov     rcx, [rcx+7A0h]
 * 000000014018AB2B: mov     gs:2EA8h, rcx
 * 000000014018AB34: movzx   eax, word ptr gs:2EB6h
 * 000000014018AB3D: cmp     gs:2EB4h, ax
 * 000000014018AB46: jz      short loc_14018AB5A
 * 000000014018AB48: mov     gs:2EB4h, ax
 * 000000014018AB51: mov     ecx, 48h ; 'H'
 * 000000014018AB56: xor     edx, edx
 * 000000014018AB58: wrmsr
 * 000000014018AB5A: movzx   edx, word ptr gs:2EB0h
 * 000000014018AB63: test    edx, 8
 * 000000014018AB69: jz      short loc_14018AB82
 * 000000014018AB6B: mov     eax, 1
 * 000000014018AB70: xor     edx, edx
 * 000000014018AB72: mov     ecx, 49h ; 'I'
 * 000000014018AB77: wrmsr
 * 000000014018AB79: movzx   edx, word ptr gs:2EB0h
 * 000000014018AB82: test    edx, 2
 * 000000014018AB88: jz      loc_14018ACB3
 * 000000014018AB8E: call    loc_14018ACA1
 * 000000014018AB93: add     rsp, 8
 * 000000014018AB97: call    loc_14018ACAA
 * 000000014018AB9C: add     rsp, 8
 * 000000014018ABA0: call    loc_14018AB93
 * 000000014018ABA5: add     rsp, 8
 * 000000014018ABA9: call    loc_14018AB9C
 * 000000014018ABAE: add     rsp, 8
 * 000000014018ABB2: call    loc_14018ABA5
 * 000000014018ABB7: add     rsp, 8
 * 000000014018ABBB: call    loc_14018ABAE
 * 000000014018ABC0: add     rsp, 8
 * 000000014018ABC4: call    loc_14018ABB7
 * 000000014018ABC9: add     rsp, 8
 * 000000014018ABCD: call    loc_14018ABC0
 * 000000014018ABD2: add     rsp, 8
 * 000000014018ABD6: call    loc_14018ABC9
 * 000000014018ABDB: add     rsp, 8
 * 000000014018ABDF: call    loc_14018ABD2
 * 000000014018ABE4: add     rsp, 8
 * 000000014018ABE8: call    loc_14018ABDB
 * 000000014018ABED: add     rsp, 8
 * 000000014018ABF1: call    loc_14018ABE4
 * 000000014018ABF6: add     rsp, 8
 * 000000014018ABFA: call    loc_14018ABED
 * 000000014018ABFF: add     rsp, 8
 * 000000014018AC03: call    loc_14018ABF6
 * 000000014018AC08: add     rsp, 8
 * 000000014018AC0C: call    loc_14018ABFF
 * 000000014018AC11: add     rsp, 8
 * 000000014018AC15: call    loc_14018AC08
 * 000000014018AC1A: add     rsp, 8
 * 000000014018AC1E: call    loc_14018AC11
 * 000000014018AC23: add     rsp, 8
 * 000000014018AC27: call    loc_14018AC1A
 * 000000014018AC2C: add     rsp, 8
 * 000000014018AC30: call    loc_14018AC23
 * 000000014018AC35: add     rsp, 8
 * 000000014018AC39: call    loc_14018AC2C
 * 000000014018AC3E: add     rsp, 8
 * 000000014018AC42: call    loc_14018AC35
 * 000000014018AC47: add     rsp, 8
 * 000000014018AC4B: call    loc_14018AC3E
 * 000000014018AC50: add     rsp, 8
 * 000000014018AC54: call    loc_14018AC47
 * 000000014018AC59: add     rsp, 8
 * 000000014018AC5D: call    loc_14018AC50
 * 000000014018AC62: add     rsp, 8
 * 000000014018AC66: call    loc_14018AC59
 * 000000014018AC6B: add     rsp, 8
 * 000000014018AC6F: call    loc_14018AC62
 * 000000014018AC74: add     rsp, 8
 * 000000014018AC78: call    loc_14018AC6B
 * 000000014018AC7D: add     rsp, 8
 * 000000014018AC81: call    loc_14018AC74
 * 000000014018AC86: add     rsp, 8
 * 000000014018AC8A: call    loc_14018AC7D
 * 000000014018AC8F: add     rsp, 8
 * 000000014018AC93: call    loc_14018AC86
 * 000000014018AC98: add     rsp, 8
 * 000000014018AC9C: call    loc_14018AC8F
 * 000000014018ACA1: add     rsp, 8
 * 000000014018ACA5: call    loc_14018AC98
 * 000000014018ACAA: add     rsp, 8
 * 000000014018ACAE: mov     eax, 0DADAh
 * 000000014018ACB3: test    edx, 100h
 * 000000014018ACB9: jz      short loc_14018ACC0
 * 000000014018ACBB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018ACC0: lfence
 * 000000014018ACC3: test    byte ptr [r10+3], 3
 * 000000014018ACC8: mov     [rbp+0E8h+var_68], 0
 * 000000014018ACD1: jz      short loc_14018ACD8
 * 000000014018ACD3: call    KiSaveDebugRegisterState
 * 000000014018ACD8: cld
 * 000000014018ACD9: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018ACDD: ldmxcsr dword ptr gs:180h
 * 000000014018ACE6: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018ACEA: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018ACEE: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018ACF2: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018ACF6: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018ACFA: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018ACFE: test    [rbp+0E8h+arg_8], 200h
 * 000000014018AD09: jz      short loc_14018AD0C
 * 000000014018AD0B: sti
 * 000000014018AD0C: call    KxStartUserThread
 * 000000014018AD11: nop     word ptr [rax+rax+00000000h]
 * 000000014018AD20: nop
 * 000000014018AD21: retn
 */
