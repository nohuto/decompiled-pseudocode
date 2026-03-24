/*
 * XREFs of KiDpcInterrupt @ 0x140157C00
 * Callers:
 *     KiDpcInterruptShadow @ 0x140224D00 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140157C00 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x14015A980 (KiDispatchInterrupt.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140157C00
 * Reason: Hex-Rays returned no pseudocode for 0x140157C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140157C00: sub     rsp, 8
 * 0000000140157C04: push    rbp
 * 0000000140157C05: push    rsi
 * 0000000140157C06: sub     rsp, 150h
 * 0000000140157C0D: lea     rbp, [rsp+80h]
 * 0000000140157C15: mov     [rbp+0E8h+var_13D], 0
 * 0000000140157C19: mov     [rbp+0E8h+var_138], rax
 * 0000000140157C1D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140157C21: mov     [rbp+0E8h+var_128], rdx
 * 0000000140157C25: mov     [rbp+0E8h+var_120], r8
 * 0000000140157C29: mov     [rbp+0E8h+var_118], r9
 * 0000000140157C2D: mov     [rbp+0E8h+var_110], r10
 * 0000000140157C31: mov     [rbp+0E8h+var_108], r11
 * 0000000140157C35: test    [rbp+0E8h+arg_0], 1
 * 0000000140157C3C: jnz     loc_140157DA2
 * 0000000140157C42: cmp     byte ptr gs:187h, 0
 * 0000000140157C4B: jz      loc_140157F38
 * 0000000140157C51: test    byte ptr gs:2EB0h, 1
 * 0000000140157C5A: jz      loc_140157F38
 * 0000000140157C60: mov     ecx, 48h ; 'H'
 * 0000000140157C65: mov     eax, 1
 * 0000000140157C6A: xor     edx, edx
 * 0000000140157C6C: wrmsr
 * 0000000140157C6E: test    byte ptr gs:2EB0h, 4
 * 0000000140157C77: jnz     loc_140157F38
 * 0000000140157C7D: call    loc_140157D90
 * 0000000140157C82: add     rsp, 8
 * 0000000140157C86: call    loc_140157D99
 * 0000000140157C8B: add     rsp, 8
 * 0000000140157C8F: call    loc_140157C82
 * 0000000140157C94: add     rsp, 8
 * 0000000140157C98: call    loc_140157C8B
 * 0000000140157C9D: add     rsp, 8
 * 0000000140157CA1: call    loc_140157C94
 * 0000000140157CA6: add     rsp, 8
 * 0000000140157CAA: call    loc_140157C9D
 * 0000000140157CAF: add     rsp, 8
 * 0000000140157CB3: call    loc_140157CA6
 * 0000000140157CB8: add     rsp, 8
 * 0000000140157CBC: call    loc_140157CAF
 * 0000000140157CC1: add     rsp, 8
 * 0000000140157CC5: call    loc_140157CB8
 * 0000000140157CCA: add     rsp, 8
 * 0000000140157CCE: call    loc_140157CC1
 * 0000000140157CD3: add     rsp, 8
 * 0000000140157CD7: call    loc_140157CCA
 * 0000000140157CDC: add     rsp, 8
 * 0000000140157CE0: call    loc_140157CD3
 * 0000000140157CE5: add     rsp, 8
 * 0000000140157CE9: call    loc_140157CDC
 * 0000000140157CEE: add     rsp, 8
 * 0000000140157CF2: call    loc_140157CE5
 * 0000000140157CF7: add     rsp, 8
 * 0000000140157CFB: call    loc_140157CEE
 * 0000000140157D00: add     rsp, 8
 * 0000000140157D04: call    loc_140157CF7
 * 0000000140157D09: add     rsp, 8
 * 0000000140157D0D: call    loc_140157D00
 * 0000000140157D12: add     rsp, 8
 * 0000000140157D16: call    loc_140157D09
 * 0000000140157D1B: add     rsp, 8
 * 0000000140157D1F: call    loc_140157D12
 * 0000000140157D24: add     rsp, 8
 * 0000000140157D28: call    loc_140157D1B
 * 0000000140157D2D: add     rsp, 8
 * 0000000140157D31: call    loc_140157D24
 * 0000000140157D36: add     rsp, 8
 * 0000000140157D3A: call    loc_140157D2D
 * 0000000140157D3F: add     rsp, 8
 * 0000000140157D43: call    loc_140157D36
 * 0000000140157D48: add     rsp, 8
 * 0000000140157D4C: call    loc_140157D3F
 * 0000000140157D51: add     rsp, 8
 * 0000000140157D55: call    loc_140157D48
 * 0000000140157D5A: add     rsp, 8
 * 0000000140157D5E: call    loc_140157D51
 * 0000000140157D63: add     rsp, 8
 * 0000000140157D67: call    loc_140157D5A
 * 0000000140157D6C: add     rsp, 8
 * 0000000140157D70: call    loc_140157D63
 * 0000000140157D75: add     rsp, 8
 * 0000000140157D79: call    loc_140157D6C
 * 0000000140157D7E: add     rsp, 8
 * 0000000140157D82: call    loc_140157D75
 * 0000000140157D87: add     rsp, 8
 * 0000000140157D8B: call    loc_140157D7E
 * 0000000140157D90: add     rsp, 8
 * 0000000140157D94: call    loc_140157D87
 * 0000000140157D99: add     rsp, 8
 * 0000000140157D9D: jmp     loc_140157F38
 * 0000000140157DA2: test    cs:KiKvaShadow, 1
 * 0000000140157DA9: jnz     short loc_140157DAE
 * 0000000140157DAB: swapgs
 * 0000000140157DAE: mov     r10, gs:188h
 * 0000000140157DB7: test    byte ptr gs:2EB0h, 1
 * 0000000140157DC0: jz      loc_140157F23
 * 0000000140157DC6: mov     rcx, gs:188h
 * 0000000140157DCF: mov     rcx, [rcx+220h]
 * 0000000140157DD6: mov     rcx, [rcx+790h]
 * 0000000140157DDD: mov     gs:2EA8h, rcx
 * 0000000140157DE6: mov     ecx, 48h ; 'H'
 * 0000000140157DEB: mov     eax, 1
 * 0000000140157DF0: xor     edx, edx
 * 0000000140157DF2: wrmsr
 * 0000000140157DF4: test    byte ptr gs:2EB0h, 4
 * 0000000140157DFD: jnz     loc_140157F23
 * 0000000140157E03: call    loc_140157F16
 * 0000000140157E08: add     rsp, 8
 * 0000000140157E0C: call    loc_140157F1F
 * 0000000140157E11: add     rsp, 8
 * 0000000140157E15: call    loc_140157E08
 * 0000000140157E1A: add     rsp, 8
 * 0000000140157E1E: call    loc_140157E11
 * 0000000140157E23: add     rsp, 8
 * 0000000140157E27: call    loc_140157E1A
 * 0000000140157E2C: add     rsp, 8
 * 0000000140157E30: call    loc_140157E23
 * 0000000140157E35: add     rsp, 8
 * 0000000140157E39: call    loc_140157E2C
 * 0000000140157E3E: add     rsp, 8
 * 0000000140157E42: call    loc_140157E35
 * 0000000140157E47: add     rsp, 8
 * 0000000140157E4B: call    loc_140157E3E
 * 0000000140157E50: add     rsp, 8
 * 0000000140157E54: call    loc_140157E47
 * 0000000140157E59: add     rsp, 8
 * 0000000140157E5D: call    loc_140157E50
 * 0000000140157E62: add     rsp, 8
 * 0000000140157E66: call    loc_140157E59
 * 0000000140157E6B: add     rsp, 8
 * 0000000140157E6F: call    loc_140157E62
 * 0000000140157E74: add     rsp, 8
 * 0000000140157E78: call    loc_140157E6B
 * 0000000140157E7D: add     rsp, 8
 * 0000000140157E81: call    loc_140157E74
 * 0000000140157E86: add     rsp, 8
 * 0000000140157E8A: call    loc_140157E7D
 * 0000000140157E8F: add     rsp, 8
 * 0000000140157E93: call    loc_140157E86
 * 0000000140157E98: add     rsp, 8
 * 0000000140157E9C: call    loc_140157E8F
 * 0000000140157EA1: add     rsp, 8
 * 0000000140157EA5: call    loc_140157E98
 * 0000000140157EAA: add     rsp, 8
 * 0000000140157EAE: call    loc_140157EA1
 * 0000000140157EB3: add     rsp, 8
 * 0000000140157EB7: call    loc_140157EAA
 * 0000000140157EBC: add     rsp, 8
 * 0000000140157EC0: call    loc_140157EB3
 * 0000000140157EC5: add     rsp, 8
 * 0000000140157EC9: call    loc_140157EBC
 * 0000000140157ECE: add     rsp, 8
 * 0000000140157ED2: call    loc_140157EC5
 * 0000000140157ED7: add     rsp, 8
 * 0000000140157EDB: call    loc_140157ECE
 * 0000000140157EE0: add     rsp, 8
 * 0000000140157EE4: call    loc_140157ED7
 * 0000000140157EE9: add     rsp, 8
 * 0000000140157EED: call    loc_140157EE0
 * 0000000140157EF2: add     rsp, 8
 * 0000000140157EF6: call    loc_140157EE9
 * 0000000140157EFB: add     rsp, 8
 * 0000000140157EFF: call    loc_140157EF2
 * 0000000140157F04: add     rsp, 8
 * 0000000140157F08: call    loc_140157EFB
 * 0000000140157F0D: add     rsp, 8
 * 0000000140157F11: call    loc_140157F04
 * 0000000140157F16: add     rsp, 8
 * 0000000140157F1A: call    loc_140157F0D
 * 0000000140157F1F: add     rsp, 8
 * 0000000140157F23: test    byte ptr [r10+3], 3
 * 0000000140157F28: mov     [rbp+0E8h+var_68], 0
 * 0000000140157F31: jz      short loc_140157F38
 * 0000000140157F33: call    KiSaveDebugRegisterState
 * 0000000140157F38: cld
 * 0000000140157F39: lfence
 * 0000000140157F3C: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140157F40: ldmxcsr dword ptr gs:180h
 * 0000000140157F49: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140157F4D: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140157F51: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140157F55: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140157F59: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140157F5D: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140157F61: xor     esi, esi
 * 0000000140157F63: inc     dword ptr gs:5C80h
 * 0000000140157F6B: mov     ecx, 2
 * 0000000140157F70: mov     rax, cr8
 * 0000000140157F74: mov     cr8, rcx
 * 0000000140157F78: mov     [rbp+0E8h+var_13F], al
 * 0000000140157F7B: mov     rcx, rsi
 * 0000000140157F7E: call    HalPerformEndOfInterrupt_0
 * 0000000140157F83: sti
 * 0000000140157F84: cmp     byte ptr gs:187h, 0
 * 0000000140157F8D: jnz     short loc_140157FA6
 * 0000000140157F8F: mov     al, [rbp+0E8h+var_13F]
 * 0000000140157F92: mov     rcx, gs:188h
 * 0000000140157F9B: mov     [rcx+186h], al
 * 0000000140157FA1: call    KiDispatchInterrupt
 * 0000000140157FA6: cli
 * 0000000140157FA7: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140157FAB: mov     cr8, rcx
 * 0000000140157FAF: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140157FB6: cli
 * 0000000140157FB7: test    [rbp+0E8h+arg_0], 1
 * 0000000140157FBE: jz      loc_1401580CF
 * 0000000140157FC4: mov     rcx, gs:188h
 * 0000000140157FCD: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140157FD4: jz      short loc_140157FEF
 * 0000000140157FD6: mov     ecx, 1
 * 0000000140157FDB: mov     cr8, rcx
 * 0000000140157FDF: sti
 * 0000000140157FE0: call    KiInitiateUserApc
 * 0000000140157FE5: cli
 * 0000000140157FE6: mov     ecx, 0
 * 0000000140157FEB: mov     cr8, rcx
 * 0000000140157FEF: mov     rcx, gs:188h
 * 0000000140157FF8: test    dword ptr [rcx], 40010000h
 * 0000000140157FFE: jz      short loc_140158014
 * 0000000140158000: test    byte ptr [rcx+2], 1
 * 0000000140158004: jz      short loc_140158014
 * 0000000140158006: call    KiCopyCounters
 * 000000014015800B: mov     rcx, gs:188h
 * 0000000140158014: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140158018: cmp     [rbp+0E8h+var_68], 0
 * 0000000140158020: jz      short loc_140158027
 * 0000000140158022: call    KiRestoreDebugRegisterState
 * 0000000140158027: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015802B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015802F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140158033: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140158037: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015803B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015803F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140158043: mov     r10, [rbp+0E8h+var_110]
 * 0000000140158047: mov     r9, [rbp+0E8h+var_118]
 * 000000014015804B: mov     r8, [rbp+0E8h+var_120]
 * 000000014015804F: mov     rcx, gs:188h
 * 0000000140158058: movzx   eax, byte ptr [rcx+1]
 * 000000014015805C: test    eax, 1
 * 0000000140158061: jnz     short loc_14015809F
 * 0000000140158063: xor     edx, edx
 * 0000000140158065: mov     ecx, 48h ; 'H'
 * 000000014015806A: wrmsr
 * 000000014015806C: mov     rax, gs:2EA8h
 * 0000000140158075: test    rax, rax
 * 0000000140158078: jz      short loc_14015809F
 * 000000014015807A: mov     rcx, gs:188h
 * 0000000140158083: mov     rcx, [rcx+220h]
 * 000000014015808A: cmp     rax, [rcx+790h]
 * 0000000140158091: jz      short loc_14015809F
 * 0000000140158093: mov     eax, 1
 * 0000000140158098: mov     ecx, 49h ; 'I'
 * 000000014015809D: wrmsr
 * 000000014015809F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401580A3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401580A7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401580AB: mov     rsp, rbp
 * 00000001401580AE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401580B5: add     rsp, 0E8h
 * 00000001401580BC: test    cs:KiKvaShadow, 1
 * 00000001401580C3: jz      short loc_1401580CA
 * 00000001401580C5: jmp     KiKernelExit
 * 00000001401580CA: swapgs
 * 00000001401580CD: iretq
 * 00000001401580CF: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401580D3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401580D7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401580DB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401580DF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401580E3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401580E7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401580EB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401580EF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401580F3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401580F7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401580FB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401580FF: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140158103: mov     rax, [rbp+0E8h+var_138]
 * 0000000140158107: mov     rsp, rbp
 * 000000014015810A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140158111: add     rsp, 0E8h
 * 0000000140158118: iretq
 */
