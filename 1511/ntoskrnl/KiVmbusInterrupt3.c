/*
 * XREFs of KiVmbusInterrupt3 @ 0x140159B80
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140224F80 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     HvlRouteInterrupt @ 0x1401AE564 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140159B80
 * Reason: Hex-Rays returned no pseudocode for 0x140159B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140159B80: sub     rsp, 8
 * 0000000140159B84: push    rbp
 * 0000000140159B85: push    rsi
 * 0000000140159B86: sub     rsp, 150h
 * 0000000140159B8D: lea     rbp, [rsp+80h]
 * 0000000140159B95: mov     [rbp+0E8h+var_13D], 0
 * 0000000140159B99: mov     [rbp+0E8h+var_138], rax
 * 0000000140159B9D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140159BA1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140159BA5: mov     [rbp+0E8h+var_120], r8
 * 0000000140159BA9: mov     [rbp+0E8h+var_118], r9
 * 0000000140159BAD: mov     [rbp+0E8h+var_110], r10
 * 0000000140159BB1: mov     [rbp+0E8h+var_108], r11
 * 0000000140159BB5: test    [rbp+0E8h+arg_0], 1
 * 0000000140159BBC: jnz     loc_140159D22
 * 0000000140159BC2: cmp     byte ptr gs:187h, 0
 * 0000000140159BCB: jz      loc_140159EB8
 * 0000000140159BD1: test    byte ptr gs:2EB0h, 1
 * 0000000140159BDA: jz      loc_140159EB8
 * 0000000140159BE0: mov     ecx, 48h ; 'H'
 * 0000000140159BE5: mov     eax, 1
 * 0000000140159BEA: xor     edx, edx
 * 0000000140159BEC: wrmsr
 * 0000000140159BEE: test    byte ptr gs:2EB0h, 4
 * 0000000140159BF7: jnz     loc_140159EB8
 * 0000000140159BFD: call    loc_140159D10
 * 0000000140159C02: add     rsp, 8
 * 0000000140159C06: call    loc_140159D19
 * 0000000140159C0B: add     rsp, 8
 * 0000000140159C0F: call    loc_140159C02
 * 0000000140159C14: add     rsp, 8
 * 0000000140159C18: call    loc_140159C0B
 * 0000000140159C1D: add     rsp, 8
 * 0000000140159C21: call    loc_140159C14
 * 0000000140159C26: add     rsp, 8
 * 0000000140159C2A: call    loc_140159C1D
 * 0000000140159C2F: add     rsp, 8
 * 0000000140159C33: call    loc_140159C26
 * 0000000140159C38: add     rsp, 8
 * 0000000140159C3C: call    loc_140159C2F
 * 0000000140159C41: add     rsp, 8
 * 0000000140159C45: call    loc_140159C38
 * 0000000140159C4A: add     rsp, 8
 * 0000000140159C4E: call    loc_140159C41
 * 0000000140159C53: add     rsp, 8
 * 0000000140159C57: call    loc_140159C4A
 * 0000000140159C5C: add     rsp, 8
 * 0000000140159C60: call    loc_140159C53
 * 0000000140159C65: add     rsp, 8
 * 0000000140159C69: call    loc_140159C5C
 * 0000000140159C6E: add     rsp, 8
 * 0000000140159C72: call    loc_140159C65
 * 0000000140159C77: add     rsp, 8
 * 0000000140159C7B: call    loc_140159C6E
 * 0000000140159C80: add     rsp, 8
 * 0000000140159C84: call    loc_140159C77
 * 0000000140159C89: add     rsp, 8
 * 0000000140159C8D: call    loc_140159C80
 * 0000000140159C92: add     rsp, 8
 * 0000000140159C96: call    loc_140159C89
 * 0000000140159C9B: add     rsp, 8
 * 0000000140159C9F: call    loc_140159C92
 * 0000000140159CA4: add     rsp, 8
 * 0000000140159CA8: call    loc_140159C9B
 * 0000000140159CAD: add     rsp, 8
 * 0000000140159CB1: call    loc_140159CA4
 * 0000000140159CB6: add     rsp, 8
 * 0000000140159CBA: call    loc_140159CAD
 * 0000000140159CBF: add     rsp, 8
 * 0000000140159CC3: call    loc_140159CB6
 * 0000000140159CC8: add     rsp, 8
 * 0000000140159CCC: call    loc_140159CBF
 * 0000000140159CD1: add     rsp, 8
 * 0000000140159CD5: call    loc_140159CC8
 * 0000000140159CDA: add     rsp, 8
 * 0000000140159CDE: call    loc_140159CD1
 * 0000000140159CE3: add     rsp, 8
 * 0000000140159CE7: call    loc_140159CDA
 * 0000000140159CEC: add     rsp, 8
 * 0000000140159CF0: call    loc_140159CE3
 * 0000000140159CF5: add     rsp, 8
 * 0000000140159CF9: call    loc_140159CEC
 * 0000000140159CFE: add     rsp, 8
 * 0000000140159D02: call    loc_140159CF5
 * 0000000140159D07: add     rsp, 8
 * 0000000140159D0B: call    loc_140159CFE
 * 0000000140159D10: add     rsp, 8
 * 0000000140159D14: call    loc_140159D07
 * 0000000140159D19: add     rsp, 8
 * 0000000140159D1D: jmp     loc_140159EB8
 * 0000000140159D22: test    cs:KiKvaShadow, 1
 * 0000000140159D29: jnz     short loc_140159D2E
 * 0000000140159D2B: swapgs
 * 0000000140159D2E: mov     r10, gs:188h
 * 0000000140159D37: test    byte ptr gs:2EB0h, 1
 * 0000000140159D40: jz      loc_140159EA3
 * 0000000140159D46: mov     rcx, gs:188h
 * 0000000140159D4F: mov     rcx, [rcx+220h]
 * 0000000140159D56: mov     rcx, [rcx+790h]
 * 0000000140159D5D: mov     gs:2EA8h, rcx
 * 0000000140159D66: mov     ecx, 48h ; 'H'
 * 0000000140159D6B: mov     eax, 1
 * 0000000140159D70: xor     edx, edx
 * 0000000140159D72: wrmsr
 * 0000000140159D74: test    byte ptr gs:2EB0h, 4
 * 0000000140159D7D: jnz     loc_140159EA3
 * 0000000140159D83: call    loc_140159E96
 * 0000000140159D88: add     rsp, 8
 * 0000000140159D8C: call    loc_140159E9F
 * 0000000140159D91: add     rsp, 8
 * 0000000140159D95: call    loc_140159D88
 * 0000000140159D9A: add     rsp, 8
 * 0000000140159D9E: call    loc_140159D91
 * 0000000140159DA3: add     rsp, 8
 * 0000000140159DA7: call    loc_140159D9A
 * 0000000140159DAC: add     rsp, 8
 * 0000000140159DB0: call    loc_140159DA3
 * 0000000140159DB5: add     rsp, 8
 * 0000000140159DB9: call    loc_140159DAC
 * 0000000140159DBE: add     rsp, 8
 * 0000000140159DC2: call    loc_140159DB5
 * 0000000140159DC7: add     rsp, 8
 * 0000000140159DCB: call    loc_140159DBE
 * 0000000140159DD0: add     rsp, 8
 * 0000000140159DD4: call    loc_140159DC7
 * 0000000140159DD9: add     rsp, 8
 * 0000000140159DDD: call    loc_140159DD0
 * 0000000140159DE2: add     rsp, 8
 * 0000000140159DE6: call    loc_140159DD9
 * 0000000140159DEB: add     rsp, 8
 * 0000000140159DEF: call    loc_140159DE2
 * 0000000140159DF4: add     rsp, 8
 * 0000000140159DF8: call    loc_140159DEB
 * 0000000140159DFD: add     rsp, 8
 * 0000000140159E01: call    loc_140159DF4
 * 0000000140159E06: add     rsp, 8
 * 0000000140159E0A: call    loc_140159DFD
 * 0000000140159E0F: add     rsp, 8
 * 0000000140159E13: call    loc_140159E06
 * 0000000140159E18: add     rsp, 8
 * 0000000140159E1C: call    loc_140159E0F
 * 0000000140159E21: add     rsp, 8
 * 0000000140159E25: call    loc_140159E18
 * 0000000140159E2A: add     rsp, 8
 * 0000000140159E2E: call    loc_140159E21
 * 0000000140159E33: add     rsp, 8
 * 0000000140159E37: call    loc_140159E2A
 * 0000000140159E3C: add     rsp, 8
 * 0000000140159E40: call    loc_140159E33
 * 0000000140159E45: add     rsp, 8
 * 0000000140159E49: call    loc_140159E3C
 * 0000000140159E4E: add     rsp, 8
 * 0000000140159E52: call    loc_140159E45
 * 0000000140159E57: add     rsp, 8
 * 0000000140159E5B: call    loc_140159E4E
 * 0000000140159E60: add     rsp, 8
 * 0000000140159E64: call    loc_140159E57
 * 0000000140159E69: add     rsp, 8
 * 0000000140159E6D: call    loc_140159E60
 * 0000000140159E72: add     rsp, 8
 * 0000000140159E76: call    loc_140159E69
 * 0000000140159E7B: add     rsp, 8
 * 0000000140159E7F: call    loc_140159E72
 * 0000000140159E84: add     rsp, 8
 * 0000000140159E88: call    loc_140159E7B
 * 0000000140159E8D: add     rsp, 8
 * 0000000140159E91: call    loc_140159E84
 * 0000000140159E96: add     rsp, 8
 * 0000000140159E9A: call    loc_140159E8D
 * 0000000140159E9F: add     rsp, 8
 * 0000000140159EA3: test    byte ptr [r10+3], 3
 * 0000000140159EA8: mov     [rbp+0E8h+var_68], 0
 * 0000000140159EB1: jz      short loc_140159EB8
 * 0000000140159EB3: call    KiSaveDebugRegisterState
 * 0000000140159EB8: cld
 * 0000000140159EB9: lfence
 * 0000000140159EBC: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140159EC0: ldmxcsr dword ptr gs:180h
 * 0000000140159EC9: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140159ECD: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140159ED1: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140159ED5: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140159ED9: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140159EDD: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140159EE1: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140159EEA: jz      short loc_140159EF1
 * 0000000140159EEC: call    KeWakeProcessor
 * 0000000140159EF1: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140159EF8: cmp     rax, [rbp+0E8h]
 * 0000000140159EFF: jnb     short loc_140159F1A
 * 0000000140159F01: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140159F08: cmp     rax, [rbp+0E8h]
 * 0000000140159F0F: jb      short loc_140159F1A
 * 0000000140159F11: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140159F15: call    KiCheckForSListAddress
 * 0000000140159F1A: xor     esi, esi
 * 0000000140159F1C: inc     dword ptr gs:5C80h
 * 0000000140159F24: mov     ecx, 3
 * 0000000140159F29: mov     rax, cr8
 * 0000000140159F2D: mov     cr8, rcx
 * 0000000140159F31: mov     [rbp+0E8h+var_13F], al
 * 0000000140159F34: mov     [rbp+0E8h+var_148], 0
 * 0000000140159F3B: mov     rcx, gs:20h
 * 0000000140159F44: inc     byte ptr [rcx+20h]
 * 0000000140159F47: cmp     byte ptr [rcx+20h], 1
 * 0000000140159F4B: jnz     loc_140159FE1
 * 0000000140159F51: rdtsc
 * 0000000140159F53: shl     rdx, 20h
 * 0000000140159F57: or      rax, rdx
 * 0000000140159F5A: mov     edx, [rcx+62A0h]
 * 0000000140159F60: mov     r11d, edx
 * 0000000140159F63: and     edx, 7FFh
 * 0000000140159F69: shr     edx, 5
 * 0000000140159F6C: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140159F74: mov     edx, [r10]
 * 0000000140159F77: ror     edx, 5
 * 0000000140159F7A: xor     edx, eax
 * 0000000140159F7C: mov     [r10], edx
 * 0000000140159F7F: add     r11d, 1
 * 0000000140159F83: mov     [rcx+62A0h], r11d
 * 0000000140159F8A: and     r11d, 3FFh
 * 0000000140159F91: jnz     short loc_140159F9A
 * 0000000140159F93: mov     [rbp+0E8h+var_148], 1
 * 0000000140159F9A: mov     r8, [rcx+8]
 * 0000000140159F9E: sub     rax, [rcx+5B38h]
 * 0000000140159FA5: add     [r8+48h], rax
 * 0000000140159FA9: mov     edx, [r8+50h]
 * 0000000140159FAD: add     [rcx+5B38h], rax
 * 0000000140159FB4: add     rdx, rax
 * 0000000140159FB7: mov     ecx, edx
 * 0000000140159FB9: shr     rdx, 20h
 * 0000000140159FBD: jz      short loc_140159FC2
 * 0000000140159FBF: or      ecx, 0FFFFFFFFh
 * 0000000140159FC2: mov     [r8+50h], ecx
 * 0000000140159FC6: test    byte ptr [r8+2], 3Eh
 * 0000000140159FCB: jz      short loc_140159FE1
 * 0000000140159FCD: mov     rdx, r8
 * 0000000140159FD0: mov     r8, rax
 * 0000000140159FD3: mov     rcx, gs:20h
 * 0000000140159FDC: call    KiEndThreadAccountingPeriod
 * 0000000140159FE1: sti
 * 0000000140159FE2: cmp     [rbp+0E8h+var_148], 0
 * 0000000140159FE6: jz      short loc_140159FF6
 * 0000000140159FE8: mov     rcx, gs:20h
 * 0000000140159FF1: call    KiEntropyQueueDpc
 * 0000000140159FF6: mov     ecx, 4
 * 0000000140159FFB: call    HvlRouteInterrupt
 * 000000014015A000: cli
 * 000000014015A001: mov     rcx, gs:20h
 * 000000014015A00A: cmp     byte ptr [rcx+20h], 1
 * 000000014015A00E: ja      short loc_14015A084
 * 000000014015A010: rdtsc
 * 000000014015A012: shl     rdx, 20h
 * 000000014015A016: or      rax, rdx
 * 000000014015A019: sub     rax, [rcx+5B38h]
 * 000000014015A020: add     [rcx+5BF8h], rax
 * 000000014015A027: add     [rcx+5B38h], rax
 * 000000014015A02E: mov     r8, rax
 * 000000014015A031: mov     rax, [rcx+8]
 * 000000014015A035: test    byte ptr [rax+2], 32h
 * 000000014015A039: jz      short loc_14015A04E
 * 000000014015A03B: xor     edx, edx
 * 000000014015A03D: call    KiBeginThreadAccountingPeriod
 * 000000014015A042: mov     rcx, gs:20h
 * 000000014015A04B: inc     byte ptr [rcx+20h]
 * 000000014015A04E: mov     dl, [rcx+6]
 * 000000014015A051: and     byte ptr [rcx+6], 0
 * 000000014015A055: cmp     byte ptr [rcx+7], 0
 * 000000014015A059: jnz     short loc_14015A084
 * 000000014015A05B: test    dl, dl
 * 000000014015A05D: jz      short loc_14015A084
 * 000000014015A05F: cmp     [rbp+0E8h+var_13F], 2
 * 000000014015A063: jnb     short loc_14015A070
 * 000000014015A065: and     byte ptr [rcx+20h], 0
 * 000000014015A069: call    KiDpcInterruptBypass
 * 000000014015A06E: jmp     short loc_14015A087
 * 000000014015A070: mov     ecx, 2
 * 000000014015A075: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015A07B: mov     rcx, gs:20h
 * 000000014015A084: dec     byte ptr [rcx+20h]
 * 000000014015A087: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015A08B: mov     cr8, rcx
 * 000000014015A08F: mov     rsi, [rbp+0E8h+var_18]
 * 000000014015A096: cli
 * 000000014015A097: test    [rbp+0E8h+arg_0], 1
 * 000000014015A09E: jz      loc_14015A1AF
 * 000000014015A0A4: mov     rcx, gs:188h
 * 000000014015A0AD: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015A0B4: jz      short loc_14015A0CF
 * 000000014015A0B6: mov     ecx, 1
 * 000000014015A0BB: mov     cr8, rcx
 * 000000014015A0BF: sti
 * 000000014015A0C0: call    KiInitiateUserApc
 * 000000014015A0C5: cli
 * 000000014015A0C6: mov     ecx, 0
 * 000000014015A0CB: mov     cr8, rcx
 * 000000014015A0CF: mov     rcx, gs:188h
 * 000000014015A0D8: test    dword ptr [rcx], 40010000h
 * 000000014015A0DE: jz      short loc_14015A0F4
 * 000000014015A0E0: test    byte ptr [rcx+2], 1
 * 000000014015A0E4: jz      short loc_14015A0F4
 * 000000014015A0E6: call    KiCopyCounters
 * 000000014015A0EB: mov     rcx, gs:188h
 * 000000014015A0F4: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015A0F8: cmp     [rbp+0E8h+var_68], 0
 * 000000014015A100: jz      short loc_14015A107
 * 000000014015A102: call    KiRestoreDebugRegisterState
 * 000000014015A107: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015A10B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015A10F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015A113: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015A117: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015A11B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015A11F: mov     r11, [rbp+0E8h+var_108]
 * 000000014015A123: mov     r10, [rbp+0E8h+var_110]
 * 000000014015A127: mov     r9, [rbp+0E8h+var_118]
 * 000000014015A12B: mov     r8, [rbp+0E8h+var_120]
 * 000000014015A12F: mov     rcx, gs:188h
 * 000000014015A138: movzx   eax, byte ptr [rcx+1]
 * 000000014015A13C: test    eax, 1
 * 000000014015A141: jnz     short loc_14015A17F
 * 000000014015A143: xor     edx, edx
 * 000000014015A145: mov     ecx, 48h ; 'H'
 * 000000014015A14A: wrmsr
 * 000000014015A14C: mov     rax, gs:2EA8h
 * 000000014015A155: test    rax, rax
 * 000000014015A158: jz      short loc_14015A17F
 * 000000014015A15A: mov     rcx, gs:188h
 * 000000014015A163: mov     rcx, [rcx+220h]
 * 000000014015A16A: cmp     rax, [rcx+790h]
 * 000000014015A171: jz      short loc_14015A17F
 * 000000014015A173: mov     eax, 1
 * 000000014015A178: mov     ecx, 49h ; 'I'
 * 000000014015A17D: wrmsr
 * 000000014015A17F: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015A183: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015A187: mov     rax, [rbp+0E8h+var_138]
 * 000000014015A18B: mov     rsp, rbp
 * 000000014015A18E: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015A195: add     rsp, 0E8h
 * 000000014015A19C: test    cs:KiKvaShadow, 1
 * 000000014015A1A3: jz      short loc_14015A1AA
 * 000000014015A1A5: jmp     KiKernelExit
 * 000000014015A1AA: swapgs
 * 000000014015A1AD: iretq
 * 000000014015A1AF: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015A1B3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015A1B7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015A1BB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015A1BF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015A1C3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015A1C7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015A1CB: mov     r11, [rbp+0E8h+var_108]
 * 000000014015A1CF: mov     r10, [rbp+0E8h+var_110]
 * 000000014015A1D3: mov     r9, [rbp+0E8h+var_118]
 * 000000014015A1D7: mov     r8, [rbp+0E8h+var_120]
 * 000000014015A1DB: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015A1DF: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015A1E3: mov     rax, [rbp+0E8h+var_138]
 * 000000014015A1E7: mov     rsp, rbp
 * 000000014015A1EA: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015A1F1: add     rsp, 0E8h
 * 000000014015A1F8: iretq
 */
