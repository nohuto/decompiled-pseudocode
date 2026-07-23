/*
 * XREFs of KiIpiInterrupt @ 0x140165B40
 * Callers:
 *     KiIpiInterruptShadow @ 0x140240000 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401661A0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140165B40
 * Reason: Hex-Rays returned no pseudocode for 0x140165B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140165B40: sub     rsp, 8
 * 0000000140165B44: push    rbp
 * 0000000140165B45: push    rsi
 * 0000000140165B46: sub     rsp, 150h
 * 0000000140165B4D: lea     rbp, [rsp+80h]
 * 0000000140165B55: mov     [rbp+0E8h+var_13D], 0
 * 0000000140165B59: mov     [rbp+0E8h+var_138], rax
 * 0000000140165B5D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140165B61: mov     [rbp+0E8h+var_128], rdx
 * 0000000140165B65: mov     [rbp+0E8h+var_120], r8
 * 0000000140165B69: mov     [rbp+0E8h+var_118], r9
 * 0000000140165B6D: mov     [rbp+0E8h+var_110], r10
 * 0000000140165B71: mov     [rbp+0E8h+var_108], r11
 * 0000000140165B75: test    [rbp+0E8h+arg_0], 1
 * 0000000140165B7C: jnz     short loc_140165BAD
 * 0000000140165B7E: lfence
 * 0000000140165B81: test    word ptr gs:2EB8h, 1
 * 0000000140165B8C: jnz     short loc_140165B96
 * 0000000140165B8E: lfence
 * 0000000140165B91: jmp     loc_140165D89
 * 0000000140165B96: movzx   eax, word ptr gs:2EBCh
 * 0000000140165B9F: mov     ecx, 48h ; 'H'
 * 0000000140165BA4: xor     edx, edx
 * 0000000140165BA6: wrmsr
 * 0000000140165BA8: jmp     loc_140165D89
 * 0000000140165BAD: test    cs:KiKvaShadow, 1
 * 0000000140165BB4: jnz     short loc_140165BB9
 * 0000000140165BB6: swapgs
 * 0000000140165BB9: lfence
 * 0000000140165BBC: mov     r10, gs:188h
 * 0000000140165BC5: mov     rcx, gs:188h
 * 0000000140165BCE: mov     rcx, [rcx+220h]
 * 0000000140165BD5: mov     rcx, [rcx+7B8h]
 * 0000000140165BDC: mov     gs:2EB0h, rcx
 * 0000000140165BE5: movzx   eax, word ptr gs:2EBEh
 * 0000000140165BEE: cmp     gs:2EBCh, ax
 * 0000000140165BF7: jz      short loc_140165C0B
 * 0000000140165BF9: mov     gs:2EBCh, ax
 * 0000000140165C02: mov     ecx, 48h ; 'H'
 * 0000000140165C07: xor     edx, edx
 * 0000000140165C09: wrmsr
 * 0000000140165C0B: movzx   edx, word ptr gs:2EB8h
 * 0000000140165C14: test    edx, 8
 * 0000000140165C1A: jz      short loc_140165C33
 * 0000000140165C1C: mov     eax, 1
 * 0000000140165C21: xor     edx, edx
 * 0000000140165C23: mov     ecx, 49h ; 'I'
 * 0000000140165C28: wrmsr
 * 0000000140165C2A: movzx   edx, word ptr gs:2EB8h
 * 0000000140165C33: test    edx, 2
 * 0000000140165C39: jz      loc_140165D64
 * 0000000140165C3F: call    loc_140165D52
 * 0000000140165C44: add     rsp, 8
 * 0000000140165C48: call    loc_140165D5B
 * 0000000140165C4D: add     rsp, 8
 * 0000000140165C51: call    loc_140165C44
 * 0000000140165C56: add     rsp, 8
 * 0000000140165C5A: call    loc_140165C4D
 * 0000000140165C5F: add     rsp, 8
 * 0000000140165C63: call    loc_140165C56
 * 0000000140165C68: add     rsp, 8
 * 0000000140165C6C: call    loc_140165C5F
 * 0000000140165C71: add     rsp, 8
 * 0000000140165C75: call    loc_140165C68
 * 0000000140165C7A: add     rsp, 8
 * 0000000140165C7E: call    loc_140165C71
 * 0000000140165C83: add     rsp, 8
 * 0000000140165C87: call    loc_140165C7A
 * 0000000140165C8C: add     rsp, 8
 * 0000000140165C90: call    loc_140165C83
 * 0000000140165C95: add     rsp, 8
 * 0000000140165C99: call    loc_140165C8C
 * 0000000140165C9E: add     rsp, 8
 * 0000000140165CA2: call    loc_140165C95
 * 0000000140165CA7: add     rsp, 8
 * 0000000140165CAB: call    loc_140165C9E
 * 0000000140165CB0: add     rsp, 8
 * 0000000140165CB4: call    loc_140165CA7
 * 0000000140165CB9: add     rsp, 8
 * 0000000140165CBD: call    loc_140165CB0
 * 0000000140165CC2: add     rsp, 8
 * 0000000140165CC6: call    loc_140165CB9
 * 0000000140165CCB: add     rsp, 8
 * 0000000140165CCF: call    loc_140165CC2
 * 0000000140165CD4: add     rsp, 8
 * 0000000140165CD8: call    loc_140165CCB
 * 0000000140165CDD: add     rsp, 8
 * 0000000140165CE1: call    loc_140165CD4
 * 0000000140165CE6: add     rsp, 8
 * 0000000140165CEA: call    loc_140165CDD
 * 0000000140165CEF: add     rsp, 8
 * 0000000140165CF3: call    loc_140165CE6
 * 0000000140165CF8: add     rsp, 8
 * 0000000140165CFC: call    loc_140165CEF
 * 0000000140165D01: add     rsp, 8
 * 0000000140165D05: call    loc_140165CF8
 * 0000000140165D0A: add     rsp, 8
 * 0000000140165D0E: call    loc_140165D01
 * 0000000140165D13: add     rsp, 8
 * 0000000140165D17: call    loc_140165D0A
 * 0000000140165D1C: add     rsp, 8
 * 0000000140165D20: call    loc_140165D13
 * 0000000140165D25: add     rsp, 8
 * 0000000140165D29: call    loc_140165D1C
 * 0000000140165D2E: add     rsp, 8
 * 0000000140165D32: call    loc_140165D25
 * 0000000140165D37: add     rsp, 8
 * 0000000140165D3B: call    loc_140165D2E
 * 0000000140165D40: add     rsp, 8
 * 0000000140165D44: call    loc_140165D37
 * 0000000140165D49: add     rsp, 8
 * 0000000140165D4D: call    loc_140165D40
 * 0000000140165D52: add     rsp, 8
 * 0000000140165D56: call    loc_140165D49
 * 0000000140165D5B: add     rsp, 8
 * 0000000140165D5F: mov     eax, 0DADAh
 * 0000000140165D64: test    edx, 100h
 * 0000000140165D6A: jz      short loc_140165D71
 * 0000000140165D6C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140165D71: lfence
 * 0000000140165D74: test    byte ptr [r10+3], 3
 * 0000000140165D79: mov     [rbp+0E8h+var_68], 0
 * 0000000140165D82: jz      short loc_140165D89
 * 0000000140165D84: call    KiSaveDebugRegisterState
 * 0000000140165D89: cld
 * 0000000140165D8A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140165D8E: ldmxcsr dword ptr gs:180h
 * 0000000140165D97: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140165D9B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140165D9F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140165DA3: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140165DA7: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140165DAB: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140165DAF: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140165DB8: jz      short loc_140165DBF
 * 0000000140165DBA: call    KeWakeProcessor
 * 0000000140165DBF: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140165DC6: cmp     rax, [rbp+0E8h]
 * 0000000140165DCD: jnb     short loc_140165DE8
 * 0000000140165DCF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140165DD6: cmp     rax, [rbp+0E8h]
 * 0000000140165DDD: jb      short loc_140165DE8
 * 0000000140165DDF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140165DE3: call    KiCheckForSListAddress
 * 0000000140165DE8: xor     esi, esi
 * 0000000140165DEA: inc     dword ptr gs:5C80h
 * 0000000140165DF2: mov     rdx, rsp
 * 0000000140165DF5: mov     rcx, gs:6498h
 * 0000000140165DFE: lea     rax, [rcx-6000h]
 * 0000000140165E05: cmp     rax, rsp
 * 0000000140165E08: ja      short loc_140165E0F
 * 0000000140165E0A: cmp     rsp, rcx
 * 0000000140165E0D: jb      short loc_140165E1B
 * 0000000140165E0F: cmp     cs:KiBugCheckActive, 0
 * 0000000140165E16: jnz     short loc_140165E1B
 * 0000000140165E18: mov     rsp, rcx
 * 0000000140165E1B: sub     rsp, 20h
 * 0000000140165E1F: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140165E24: call    KiIpiInterruptSubDispatch
 * 0000000140165E29: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140165E2E: mov     rcx, rsi
 * 0000000140165E31: call    HalPerformEndOfInterrupt_0
 * 0000000140165E36: mov     rcx, gs:20h
 * 0000000140165E3F: cmp     byte ptr [rcx+20h], 1
 * 0000000140165E43: ja      short loc_140165EB9
 * 0000000140165E45: rdtsc
 * 0000000140165E47: shl     rdx, 20h
 * 0000000140165E4B: or      rax, rdx
 * 0000000140165E4E: sub     rax, [rcx+5B38h]
 * 0000000140165E55: add     [rcx+5BF8h], rax
 * 0000000140165E5C: add     [rcx+5B38h], rax
 * 0000000140165E63: mov     r8, rax
 * 0000000140165E66: mov     rax, [rcx+8]
 * 0000000140165E6A: test    byte ptr [rax+2], 32h
 * 0000000140165E6E: jz      short loc_140165E83
 * 0000000140165E70: xor     edx, edx
 * 0000000140165E72: call    KiBeginThreadAccountingPeriod
 * 0000000140165E77: mov     rcx, gs:20h
 * 0000000140165E80: inc     byte ptr [rcx+20h]
 * 0000000140165E83: mov     dl, [rcx+6]
 * 0000000140165E86: and     byte ptr [rcx+6], 0
 * 0000000140165E8A: cmp     byte ptr [rcx+7], 0
 * 0000000140165E8E: jnz     short loc_140165EB9
 * 0000000140165E90: test    dl, dl
 * 0000000140165E92: jz      short loc_140165EB9
 * 0000000140165E94: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140165E98: jnb     short loc_140165EA5
 * 0000000140165E9A: and     byte ptr [rcx+20h], 0
 * 0000000140165E9E: call    KiDpcInterruptBypass
 * 0000000140165EA3: jmp     short loc_140165EBC
 * 0000000140165EA5: mov     ecx, 2
 * 0000000140165EAA: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140165EB0: mov     rcx, gs:20h
 * 0000000140165EB9: dec     byte ptr [rcx+20h]
 * 0000000140165EBC: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140165EC0: mov     cr8, rcx
 * 0000000140165EC4: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140165ECB: test    [rbp+0E8h+arg_0], 1
 * 0000000140165ED2: jz      loc_14016614B
 * 0000000140165ED8: mov     rcx, gs:188h
 * 0000000140165EE1: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140165EE8: jz      short loc_140165F03
 * 0000000140165EEA: mov     ecx, 1
 * 0000000140165EEF: mov     cr8, rcx
 * 0000000140165EF3: sti
 * 0000000140165EF4: call    KiInitiateUserApc
 * 0000000140165EF9: cli
 * 0000000140165EFA: mov     ecx, 0
 * 0000000140165EFF: mov     cr8, rcx
 * 0000000140165F03: mov     rcx, gs:188h
 * 0000000140165F0C: test    dword ptr [rcx], 8000000h
 * 0000000140165F12: jz      short loc_140165F19
 * 0000000140165F14: call    KiRestoreSetContextState
 * 0000000140165F19: mov     rcx, gs:188h
 * 0000000140165F22: test    dword ptr [rcx], 40010000h
 * 0000000140165F28: jz      short loc_140165F3E
 * 0000000140165F2A: test    byte ptr [rcx+2], 1
 * 0000000140165F2E: jz      short loc_140165F3E
 * 0000000140165F30: call    KiCopyCounters
 * 0000000140165F35: mov     rcx, gs:188h
 * 0000000140165F3E: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140165F42: cmp     [rbp+0E8h+var_68], 0
 * 0000000140165F4A: jz      short loc_140165F51
 * 0000000140165F4C: call    KiRestoreDebugRegisterState
 * 0000000140165F51: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140165F55: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165F59: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165F5D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140165F61: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140165F65: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165F69: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165F6D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165F71: mov     r9, [rbp+0E8h+var_118]
 * 0000000140165F75: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165F79: movzx   eax, word ptr gs:2EC2h
 * 0000000140165F82: cmp     gs:2EBCh, ax
 * 0000000140165F8B: jz      short loc_140165F9F
 * 0000000140165F8D: mov     gs:2EBCh, ax
 * 0000000140165F96: mov     ecx, 48h ; 'H'
 * 0000000140165F9B: xor     edx, edx
 * 0000000140165F9D: wrmsr
 * 0000000140165F9F: btr     word ptr gs:2EB8h, 2
 * 0000000140165FAA: jnb     short loc_140165FBA
 * 0000000140165FAC: mov     eax, 1
 * 0000000140165FB1: xor     edx, edx
 * 0000000140165FB3: mov     ecx, 49h ; 'I'
 * 0000000140165FB8: wrmsr
 * 0000000140165FBA: btr     word ptr gs:2EB8h, 5
 * 0000000140165FC5: jnb     loc_1401660F0
 * 0000000140165FCB: call    loc_1401660DE
 * 0000000140165FD0: add     rsp, 8
 * 0000000140165FD4: call    loc_1401660E7
 * 0000000140165FD9: add     rsp, 8
 * 0000000140165FDD: call    loc_140165FD0
 * 0000000140165FE2: add     rsp, 8
 * 0000000140165FE6: call    loc_140165FD9
 * 0000000140165FEB: add     rsp, 8
 * 0000000140165FEF: call    loc_140165FE2
 * 0000000140165FF4: add     rsp, 8
 * 0000000140165FF8: call    loc_140165FEB
 * 0000000140165FFD: add     rsp, 8
 * 0000000140166001: call    loc_140165FF4
 * 0000000140166006: add     rsp, 8
 * 000000014016600A: call    loc_140165FFD
 * 000000014016600F: add     rsp, 8
 * 0000000140166013: call    loc_140166006
 * 0000000140166018: add     rsp, 8
 * 000000014016601C: call    loc_14016600F
 * 0000000140166021: add     rsp, 8
 * 0000000140166025: call    loc_140166018
 * 000000014016602A: add     rsp, 8
 * 000000014016602E: call    loc_140166021
 * 0000000140166033: add     rsp, 8
 * 0000000140166037: call    loc_14016602A
 * 000000014016603C: add     rsp, 8
 * 0000000140166040: call    loc_140166033
 * 0000000140166045: add     rsp, 8
 * 0000000140166049: call    loc_14016603C
 * 000000014016604E: add     rsp, 8
 * 0000000140166052: call    loc_140166045
 * 0000000140166057: add     rsp, 8
 * 000000014016605B: call    loc_14016604E
 * 0000000140166060: add     rsp, 8
 * 0000000140166064: call    loc_140166057
 * 0000000140166069: add     rsp, 8
 * 000000014016606D: call    loc_140166060
 * 0000000140166072: add     rsp, 8
 * 0000000140166076: call    loc_140166069
 * 000000014016607B: add     rsp, 8
 * 000000014016607F: call    loc_140166072
 * 0000000140166084: add     rsp, 8
 * 0000000140166088: call    loc_14016607B
 * 000000014016608D: add     rsp, 8
 * 0000000140166091: call    loc_140166084
 * 0000000140166096: add     rsp, 8
 * 000000014016609A: call    loc_14016608D
 * 000000014016609F: add     rsp, 8
 * 00000001401660A3: call    loc_140166096
 * 00000001401660A8: add     rsp, 8
 * 00000001401660AC: call    loc_14016609F
 * 00000001401660B1: add     rsp, 8
 * 00000001401660B5: call    loc_1401660A8
 * 00000001401660BA: add     rsp, 8
 * 00000001401660BE: call    loc_1401660B1
 * 00000001401660C3: add     rsp, 8
 * 00000001401660C7: call    loc_1401660BA
 * 00000001401660CC: add     rsp, 8
 * 00000001401660D0: call    loc_1401660C3
 * 00000001401660D5: add     rsp, 8
 * 00000001401660D9: call    loc_1401660CC
 * 00000001401660DE: add     rsp, 8
 * 00000001401660E2: call    loc_1401660D5
 * 00000001401660E7: add     rsp, 8
 * 00000001401660EB: mov     eax, 0DADAh
 * 00000001401660F0: test    word ptr gs:2EB8h, 40h
 * 00000001401660FB: jz      short loc_140166109
 * 00000001401660FD: xor     eax, eax
 * 00000001401660FF: xor     edx, edx
 * 0000000140166101: mov     ecx, 1
 * 0000000140166106: div     rcx
 * 0000000140166109: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016610D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140166111: mov     rax, [rbp+0E8h+var_138]
 * 0000000140166115: mov     rsp, rbp
 * 0000000140166118: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016611F: add     rsp, 0E8h
 * 0000000140166126: test    cs:KiKvaShadow, 1
 * 000000014016612D: jz      short loc_140166134
 * 000000014016612F: jmp     KiKernelExit
 * 0000000140166134: test    word ptr gs:2EB8h, 80h
 * 000000014016613F: jz      short loc_140166146
 * 0000000140166141: verw    [rsp+arg_18]
 * 0000000140166146: swapgs
 * 0000000140166149: iretq
 * 000000014016614B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016614F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140166153: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140166157: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016615B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016615F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140166163: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140166167: mov     r11, [rbp+0E8h+var_108]
 * 000000014016616B: mov     r10, [rbp+0E8h+var_110]
 * 000000014016616F: mov     r9, [rbp+0E8h+var_118]
 * 0000000140166173: mov     r8, [rbp+0E8h+var_120]
 * 0000000140166177: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016617B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016617F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140166183: mov     rsp, rbp
 * 0000000140166186: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016618D: add     rsp, 0E8h
 * 0000000140166194: iretq
 */
