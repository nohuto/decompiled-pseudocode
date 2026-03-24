/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14016E000
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x14023FB00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14016E000 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14016E000
 * Reason: Hex-Rays returned no pseudocode for 0x14016E000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E000: sub     qword ptr [rsp+0], 2
 * 000000014016E005: sub     rsp, 8
 * 000000014016E009: push    rbp
 * 000000014016E00A: sub     rsp, 158h
 * 000000014016E011: lea     rbp, [rsp+80h]
 * 000000014016E019: mov     [rbp+0E8h+var_13D], 1
 * 000000014016E01D: mov     [rbp+0E8h+var_138], rax
 * 000000014016E021: mov     [rbp+0E8h+var_130], rcx
 * 000000014016E025: mov     [rbp+0E8h+var_128], rdx
 * 000000014016E029: mov     [rbp+0E8h+var_120], r8
 * 000000014016E02D: mov     [rbp+0E8h+var_118], r9
 * 000000014016E031: mov     [rbp+0E8h+var_110], r10
 * 000000014016E035: mov     [rbp+0E8h+var_108], r11
 * 000000014016E039: test    [rbp+0E8h+arg_0], 1
 * 000000014016E040: jnz     short loc_14016E071
 * 000000014016E042: lfence
 * 000000014016E045: test    word ptr gs:2EB8h, 1
 * 000000014016E050: jnz     short loc_14016E05A
 * 000000014016E052: lfence
 * 000000014016E055: jmp     loc_14016E296
 * 000000014016E05A: movzx   eax, word ptr gs:2EBCh
 * 000000014016E063: mov     ecx, 48h ; 'H'
 * 000000014016E068: xor     edx, edx
 * 000000014016E06A: wrmsr
 * 000000014016E06C: jmp     loc_14016E296
 * 000000014016E071: test    cs:KiKvaShadow, 1
 * 000000014016E078: jnz     short loc_14016E07D
 * 000000014016E07A: swapgs
 * 000000014016E07D: lfence
 * 000000014016E080: mov     r10, gs:188h
 * 000000014016E089: mov     rcx, gs:188h
 * 000000014016E092: mov     rcx, [rcx+220h]
 * 000000014016E099: mov     rcx, [rcx+7B8h]
 * 000000014016E0A0: mov     gs:2EB0h, rcx
 * 000000014016E0A9: movzx   eax, word ptr gs:2EBEh
 * 000000014016E0B2: cmp     gs:2EBCh, ax
 * 000000014016E0BB: jz      short loc_14016E0CF
 * 000000014016E0BD: mov     gs:2EBCh, ax
 * 000000014016E0C6: mov     ecx, 48h ; 'H'
 * 000000014016E0CB: xor     edx, edx
 * 000000014016E0CD: wrmsr
 * 000000014016E0CF: movzx   edx, word ptr gs:2EB8h
 * 000000014016E0D8: test    edx, 8
 * 000000014016E0DE: jz      short loc_14016E0F7
 * 000000014016E0E0: mov     eax, 1
 * 000000014016E0E5: xor     edx, edx
 * 000000014016E0E7: mov     ecx, 49h ; 'I'
 * 000000014016E0EC: wrmsr
 * 000000014016E0EE: movzx   edx, word ptr gs:2EB8h
 * 000000014016E0F7: test    edx, 2
 * 000000014016E0FD: jz      loc_14016E228
 * 000000014016E103: call    loc_14016E216
 * 000000014016E108: add     rsp, 8
 * 000000014016E10C: call    loc_14016E21F
 * 000000014016E111: add     rsp, 8
 * 000000014016E115: call    loc_14016E108
 * 000000014016E11A: add     rsp, 8
 * 000000014016E11E: call    loc_14016E111
 * 000000014016E123: add     rsp, 8
 * 000000014016E127: call    loc_14016E11A
 * 000000014016E12C: add     rsp, 8
 * 000000014016E130: call    loc_14016E123
 * 000000014016E135: add     rsp, 8
 * 000000014016E139: call    loc_14016E12C
 * 000000014016E13E: add     rsp, 8
 * 000000014016E142: call    loc_14016E135
 * 000000014016E147: add     rsp, 8
 * 000000014016E14B: call    loc_14016E13E
 * 000000014016E150: add     rsp, 8
 * 000000014016E154: call    loc_14016E147
 * 000000014016E159: add     rsp, 8
 * 000000014016E15D: call    loc_14016E150
 * 000000014016E162: add     rsp, 8
 * 000000014016E166: call    loc_14016E159
 * 000000014016E16B: add     rsp, 8
 * 000000014016E16F: call    loc_14016E162
 * 000000014016E174: add     rsp, 8
 * 000000014016E178: call    loc_14016E16B
 * 000000014016E17D: add     rsp, 8
 * 000000014016E181: call    loc_14016E174
 * 000000014016E186: add     rsp, 8
 * 000000014016E18A: call    loc_14016E17D
 * 000000014016E18F: add     rsp, 8
 * 000000014016E193: call    loc_14016E186
 * 000000014016E198: add     rsp, 8
 * 000000014016E19C: call    loc_14016E18F
 * 000000014016E1A1: add     rsp, 8
 * 000000014016E1A5: call    loc_14016E198
 * 000000014016E1AA: add     rsp, 8
 * 000000014016E1AE: call    loc_14016E1A1
 * 000000014016E1B3: add     rsp, 8
 * 000000014016E1B7: call    loc_14016E1AA
 * 000000014016E1BC: add     rsp, 8
 * 000000014016E1C0: call    loc_14016E1B3
 * 000000014016E1C5: add     rsp, 8
 * 000000014016E1C9: call    loc_14016E1BC
 * 000000014016E1CE: add     rsp, 8
 * 000000014016E1D2: call    loc_14016E1C5
 * 000000014016E1D7: add     rsp, 8
 * 000000014016E1DB: call    loc_14016E1CE
 * 000000014016E1E0: add     rsp, 8
 * 000000014016E1E4: call    loc_14016E1D7
 * 000000014016E1E9: add     rsp, 8
 * 000000014016E1ED: call    loc_14016E1E0
 * 000000014016E1F2: add     rsp, 8
 * 000000014016E1F6: call    loc_14016E1E9
 * 000000014016E1FB: add     rsp, 8
 * 000000014016E1FF: call    loc_14016E1F2
 * 000000014016E204: add     rsp, 8
 * 000000014016E208: call    loc_14016E1FB
 * 000000014016E20D: add     rsp, 8
 * 000000014016E211: call    loc_14016E204
 * 000000014016E216: add     rsp, 8
 * 000000014016E21A: call    loc_14016E20D
 * 000000014016E21F: add     rsp, 8
 * 000000014016E223: mov     eax, 0DADAh
 * 000000014016E228: test    edx, 100h
 * 000000014016E22E: jz      short loc_14016E235
 * 000000014016E230: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016E235: lfence
 * 000000014016E238: test    byte ptr [r10+3], 80h
 * 000000014016E23D: jz      short loc_14016E281
 * 000000014016E23F: mov     ecx, 0C0000102h
 * 000000014016E244: rdmsr
 * 000000014016E246: shl     rdx, 20h
 * 000000014016E24A: or      rax, rdx
 * 000000014016E24D: cmp     rax, cs:MmUserProbeAddress
 * 000000014016E254: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016E25C: cmp     [r10+0F0h], rax
 * 000000014016E263: jz      short loc_14016E281
 * 000000014016E265: mov     rdx, [r10+1F0h]
 * 000000014016E26C: bts     dword ptr [r10+74h], 8
 * 000000014016E272: dec     word ptr [r10+1E6h]
 * 000000014016E27A: mov     [rdx+80h], rax
 * 000000014016E281: test    byte ptr [r10+3], 3
 * 000000014016E286: mov     [rbp+0E8h+var_68], 0
 * 000000014016E28F: jz      short loc_14016E296
 * 000000014016E291: call    KiSaveDebugRegisterState
 * 000000014016E296: cld
 * 000000014016E297: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016E29B: ldmxcsr dword ptr gs:180h
 * 000000014016E2A4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016E2A8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016E2AC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016E2B0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016E2B4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016E2B8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016E2BC: test    [rbp+0E8h+arg_8], 200h
 * 000000014016E2C6: jz      short loc_14016E2C9
 * 000000014016E2C8: sti
 * 000000014016E2C9: mov     r9, [rbp+0E8h+var_130]
 * 000000014016E2CD: mov     ecx, 0C0000409h
 * 000000014016E2D2: mov     edx, 1
 * 000000014016E2D7: mov     r8, [rbp+0E8h]
 * 000000014016E2DE: call    KiFastFailDispatch
 * 000000014016E2E3: nop
 * 000000014016E2E4: retn
 */
