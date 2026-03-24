/*
 * XREFs of KiApcInterrupt @ 0x140186D60
 * Callers:
 *     KiApcInterruptShadow @ 0x140274A00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140186D60
 * Reason: Hex-Rays returned no pseudocode for 0x140186D60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140186D60: sub     rsp, 8
 * 0000000140186D64: push    rbp
 * 0000000140186D65: push    rsi
 * 0000000140186D66: sub     rsp, 150h
 * 0000000140186D6D: lea     rbp, [rsp+80h]
 * 0000000140186D75: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186D79: mov     [rbp+0E8h+var_138], rax
 * 0000000140186D7D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186D81: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186D85: mov     [rbp+0E8h+var_120], r8
 * 0000000140186D89: mov     [rbp+0E8h+var_118], r9
 * 0000000140186D8D: mov     [rbp+0E8h+var_110], r10
 * 0000000140186D91: mov     [rbp+0E8h+var_108], r11
 * 0000000140186D95: test    [rbp+0E8h+arg_0], 1
 * 0000000140186D9C: jnz     short loc_140186DCD
 * 0000000140186D9E: lfence
 * 0000000140186DA1: test    word ptr gs:2EB0h, 1
 * 0000000140186DAC: jnz     short loc_140186DB6
 * 0000000140186DAE: lfence
 * 0000000140186DB1: jmp     loc_140186FA9
 * 0000000140186DB6: movzx   eax, word ptr gs:2EB4h
 * 0000000140186DBF: mov     ecx, 48h ; 'H'
 * 0000000140186DC4: xor     edx, edx
 * 0000000140186DC6: wrmsr
 * 0000000140186DC8: jmp     loc_140186FA9
 * 0000000140186DCD: test    cs:KiKvaShadow, 1
 * 0000000140186DD4: jnz     short loc_140186DD9
 * 0000000140186DD6: swapgs
 * 0000000140186DD9: lfence
 * 0000000140186DDC: mov     r10, gs:188h
 * 0000000140186DE5: mov     rcx, gs:188h
 * 0000000140186DEE: mov     rcx, [rcx+220h]
 * 0000000140186DF5: mov     rcx, [rcx+7A0h]
 * 0000000140186DFC: mov     gs:2EA8h, rcx
 * 0000000140186E05: movzx   eax, word ptr gs:2EB6h
 * 0000000140186E0E: cmp     gs:2EB4h, ax
 * 0000000140186E17: jz      short loc_140186E2B
 * 0000000140186E19: mov     gs:2EB4h, ax
 * 0000000140186E22: mov     ecx, 48h ; 'H'
 * 0000000140186E27: xor     edx, edx
 * 0000000140186E29: wrmsr
 * 0000000140186E2B: movzx   edx, word ptr gs:2EB0h
 * 0000000140186E34: test    edx, 8
 * 0000000140186E3A: jz      short loc_140186E53
 * 0000000140186E3C: mov     eax, 1
 * 0000000140186E41: xor     edx, edx
 * 0000000140186E43: mov     ecx, 49h ; 'I'
 * 0000000140186E48: wrmsr
 * 0000000140186E4A: movzx   edx, word ptr gs:2EB0h
 * 0000000140186E53: test    edx, 2
 * 0000000140186E59: jz      loc_140186F84
 * 0000000140186E5F: call    loc_140186F72
 * 0000000140186E64: add     rsp, 8
 * 0000000140186E68: call    loc_140186F7B
 * 0000000140186E6D: add     rsp, 8
 * 0000000140186E71: call    loc_140186E64
 * 0000000140186E76: add     rsp, 8
 * 0000000140186E7A: call    loc_140186E6D
 * 0000000140186E7F: add     rsp, 8
 * 0000000140186E83: call    loc_140186E76
 * 0000000140186E88: add     rsp, 8
 * 0000000140186E8C: call    loc_140186E7F
 * 0000000140186E91: add     rsp, 8
 * 0000000140186E95: call    loc_140186E88
 * 0000000140186E9A: add     rsp, 8
 * 0000000140186E9E: call    loc_140186E91
 * 0000000140186EA3: add     rsp, 8
 * 0000000140186EA7: call    loc_140186E9A
 * 0000000140186EAC: add     rsp, 8
 * 0000000140186EB0: call    loc_140186EA3
 * 0000000140186EB5: add     rsp, 8
 * 0000000140186EB9: call    loc_140186EAC
 * 0000000140186EBE: add     rsp, 8
 * 0000000140186EC2: call    loc_140186EB5
 * 0000000140186EC7: add     rsp, 8
 * 0000000140186ECB: call    loc_140186EBE
 * 0000000140186ED0: add     rsp, 8
 * 0000000140186ED4: call    loc_140186EC7
 * 0000000140186ED9: add     rsp, 8
 * 0000000140186EDD: call    loc_140186ED0
 * 0000000140186EE2: add     rsp, 8
 * 0000000140186EE6: call    loc_140186ED9
 * 0000000140186EEB: add     rsp, 8
 * 0000000140186EEF: call    loc_140186EE2
 * 0000000140186EF4: add     rsp, 8
 * 0000000140186EF8: call    loc_140186EEB
 * 0000000140186EFD: add     rsp, 8
 * 0000000140186F01: call    loc_140186EF4
 * 0000000140186F06: add     rsp, 8
 * 0000000140186F0A: call    loc_140186EFD
 * 0000000140186F0F: add     rsp, 8
 * 0000000140186F13: call    loc_140186F06
 * 0000000140186F18: add     rsp, 8
 * 0000000140186F1C: call    loc_140186F0F
 * 0000000140186F21: add     rsp, 8
 * 0000000140186F25: call    loc_140186F18
 * 0000000140186F2A: add     rsp, 8
 * 0000000140186F2E: call    loc_140186F21
 * 0000000140186F33: add     rsp, 8
 * 0000000140186F37: call    loc_140186F2A
 * 0000000140186F3C: add     rsp, 8
 * 0000000140186F40: call    loc_140186F33
 * 0000000140186F45: add     rsp, 8
 * 0000000140186F49: call    loc_140186F3C
 * 0000000140186F4E: add     rsp, 8
 * 0000000140186F52: call    loc_140186F45
 * 0000000140186F57: add     rsp, 8
 * 0000000140186F5B: call    loc_140186F4E
 * 0000000140186F60: add     rsp, 8
 * 0000000140186F64: call    loc_140186F57
 * 0000000140186F69: add     rsp, 8
 * 0000000140186F6D: call    loc_140186F60
 * 0000000140186F72: add     rsp, 8
 * 0000000140186F76: call    loc_140186F69
 * 0000000140186F7B: add     rsp, 8
 * 0000000140186F7F: mov     eax, 0DADAh
 * 0000000140186F84: test    edx, 100h
 * 0000000140186F8A: jz      short loc_140186F91
 * 0000000140186F8C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140186F91: lfence
 * 0000000140186F94: test    byte ptr [r10+3], 3
 * 0000000140186F99: mov     [rbp+0E8h+var_68], 0
 * 0000000140186FA2: jz      short loc_140186FA9
 * 0000000140186FA4: call    KiSaveDebugRegisterState
 * 0000000140186FA9: cld
 * 0000000140186FAA: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186FAE: ldmxcsr dword ptr gs:180h
 * 0000000140186FB7: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186FBB: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186FBF: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186FC3: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140186FC7: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186FCB: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186FCF: xor     esi, esi
 * 0000000140186FD1: inc     dword ptr gs:5C80h
 * 0000000140186FD9: mov     ecx, 1
 * 0000000140186FDE: mov     rax, cr8
 * 0000000140186FE2: mov     cr8, rcx
 * 0000000140186FE6: mov     [rbp+0E8h+var_13F], al
 * 0000000140186FE9: mov     rcx, rsi
 * 0000000140186FEC: call    HalPerformEndOfInterrupt_0
 * 0000000140186FF1: sti
 * 0000000140186FF2: cmp     byte ptr gs:187h, 0
 * 0000000140186FFB: jnz     short loc_14018700D
 * 0000000140186FFD: mov     ecx, 0
 * 0000000140187002: xor     edx, edx
 * 0000000140187004: lea     r8, [rbp+0E8h+var_168]
 * 0000000140187008: call    KiDeliverApc
 * 000000014018700D: cli
 * 000000014018700E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140187012: mov     cr8, rcx
 * 0000000140187016: mov     rsi, [rbp+0E8h+var_18]
 * 000000014018701D: cli
 * 000000014018701E: test    [rbp+0E8h+arg_0], 1
 * 0000000140187025: jz      loc_140187299
 * 000000014018702B: mov     rcx, gs:188h
 * 0000000140187034: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018703B: jz      short loc_140187056
 * 000000014018703D: mov     ecx, 1
 * 0000000140187042: mov     cr8, rcx
 * 0000000140187046: sti
 * 0000000140187047: call    KiInitiateUserApc
 * 000000014018704C: cli
 * 000000014018704D: mov     ecx, 0
 * 0000000140187052: mov     cr8, rcx
 * 0000000140187056: mov     rcx, gs:188h
 * 000000014018705F: test    dword ptr [rcx], 40010000h
 * 0000000140187065: jz      short loc_14018708C
 * 0000000140187067: test    byte ptr [rcx+2], 1
 * 000000014018706B: jz      short loc_14018707B
 * 000000014018706D: call    KiCopyCounters
 * 0000000140187072: mov     rcx, gs:188h
 * 000000014018707B: test    byte ptr [rcx+3], 40h
 * 000000014018707F: jz      short loc_14018708C
 * 0000000140187081: lea     rsp, [rbp-80h]
 * 0000000140187085: mov     cl, 1
 * 0000000140187087: call    KiUmsExit
 * 000000014018708C: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187090: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187098: jz      short loc_14018709F
 * 000000014018709A: call    KiRestoreDebugRegisterState
 * 000000014018709F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401870A3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401870A7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401870AB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401870AF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401870B3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401870B7: mov     r11, [rbp+0E8h+var_108]
 * 00000001401870BB: mov     r10, [rbp+0E8h+var_110]
 * 00000001401870BF: mov     r9, [rbp+0E8h+var_118]
 * 00000001401870C3: mov     r8, [rbp+0E8h+var_120]
 * 00000001401870C7: movzx   eax, word ptr gs:2EBAh
 * 00000001401870D0: cmp     gs:2EB4h, ax
 * 00000001401870D9: jz      short loc_1401870ED
 * 00000001401870DB: mov     gs:2EB4h, ax
 * 00000001401870E4: mov     ecx, 48h ; 'H'
 * 00000001401870E9: xor     edx, edx
 * 00000001401870EB: wrmsr
 * 00000001401870ED: btr     word ptr gs:2EB0h, 2
 * 00000001401870F8: jnb     short loc_140187108
 * 00000001401870FA: mov     eax, 1
 * 00000001401870FF: xor     edx, edx
 * 0000000140187101: mov     ecx, 49h ; 'I'
 * 0000000140187106: wrmsr
 * 0000000140187108: btr     word ptr gs:2EB0h, 5
 * 0000000140187113: jnb     loc_14018723E
 * 0000000140187119: call    loc_14018722C
 * 000000014018711E: add     rsp, 8
 * 0000000140187122: call    loc_140187235
 * 0000000140187127: add     rsp, 8
 * 000000014018712B: call    loc_14018711E
 * 0000000140187130: add     rsp, 8
 * 0000000140187134: call    loc_140187127
 * 0000000140187139: add     rsp, 8
 * 000000014018713D: call    loc_140187130
 * 0000000140187142: add     rsp, 8
 * 0000000140187146: call    loc_140187139
 * 000000014018714B: add     rsp, 8
 * 000000014018714F: call    loc_140187142
 * 0000000140187154: add     rsp, 8
 * 0000000140187158: call    loc_14018714B
 * 000000014018715D: add     rsp, 8
 * 0000000140187161: call    loc_140187154
 * 0000000140187166: add     rsp, 8
 * 000000014018716A: call    loc_14018715D
 * 000000014018716F: add     rsp, 8
 * 0000000140187173: call    loc_140187166
 * 0000000140187178: add     rsp, 8
 * 000000014018717C: call    loc_14018716F
 * 0000000140187181: add     rsp, 8
 * 0000000140187185: call    loc_140187178
 * 000000014018718A: add     rsp, 8
 * 000000014018718E: call    loc_140187181
 * 0000000140187193: add     rsp, 8
 * 0000000140187197: call    loc_14018718A
 * 000000014018719C: add     rsp, 8
 * 00000001401871A0: call    loc_140187193
 * 00000001401871A5: add     rsp, 8
 * 00000001401871A9: call    loc_14018719C
 * 00000001401871AE: add     rsp, 8
 * 00000001401871B2: call    loc_1401871A5
 * 00000001401871B7: add     rsp, 8
 * 00000001401871BB: call    loc_1401871AE
 * 00000001401871C0: add     rsp, 8
 * 00000001401871C4: call    loc_1401871B7
 * 00000001401871C9: add     rsp, 8
 * 00000001401871CD: call    loc_1401871C0
 * 00000001401871D2: add     rsp, 8
 * 00000001401871D6: call    loc_1401871C9
 * 00000001401871DB: add     rsp, 8
 * 00000001401871DF: call    loc_1401871D2
 * 00000001401871E4: add     rsp, 8
 * 00000001401871E8: call    loc_1401871DB
 * 00000001401871ED: add     rsp, 8
 * 00000001401871F1: call    loc_1401871E4
 * 00000001401871F6: add     rsp, 8
 * 00000001401871FA: call    loc_1401871ED
 * 00000001401871FF: add     rsp, 8
 * 0000000140187203: call    loc_1401871F6
 * 0000000140187208: add     rsp, 8
 * 000000014018720C: call    loc_1401871FF
 * 0000000140187211: add     rsp, 8
 * 0000000140187215: call    loc_140187208
 * 000000014018721A: add     rsp, 8
 * 000000014018721E: call    loc_140187211
 * 0000000140187223: add     rsp, 8
 * 0000000140187227: call    loc_14018721A
 * 000000014018722C: add     rsp, 8
 * 0000000140187230: call    loc_140187223
 * 0000000140187235: add     rsp, 8
 * 0000000140187239: mov     eax, 0DADAh
 * 000000014018723E: test    word ptr gs:2EB0h, 40h
 * 0000000140187249: jz      short loc_140187257
 * 000000014018724B: xor     eax, eax
 * 000000014018724D: xor     edx, edx
 * 000000014018724F: mov     ecx, 1
 * 0000000140187254: div     rcx
 * 0000000140187257: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018725B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018725F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187263: mov     rsp, rbp
 * 0000000140187266: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018726D: add     rsp, 0E8h
 * 0000000140187274: test    cs:KiKvaShadow, 1
 * 000000014018727B: jz      short loc_140187282
 * 000000014018727D: jmp     KiKernelExit
 * 0000000140187282: test    word ptr gs:2EB0h, 80h
 * 000000014018728D: jz      short loc_140187294
 * 000000014018728F: verw    [rsp+arg_18]
 * 0000000140187294: swapgs
 * 0000000140187297: iretq
 * 0000000140187299: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018729D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401872A1: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401872A5: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401872A9: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401872AD: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401872B1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401872B5: mov     r11, [rbp+0E8h+var_108]
 * 00000001401872B9: mov     r10, [rbp+0E8h+var_110]
 * 00000001401872BD: mov     r9, [rbp+0E8h+var_118]
 * 00000001401872C1: mov     r8, [rbp+0E8h+var_120]
 * 00000001401872C5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401872C9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401872CD: mov     rax, [rbp+0E8h+var_138]
 * 00000001401872D1: mov     rsp, rbp
 * 00000001401872D4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401872DB: add     rsp, 0E8h
 * 00000001401872E2: iretq
 */
