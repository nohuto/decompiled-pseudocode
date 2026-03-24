/*
 * XREFs of KiVmbusInterrupt1 @ 0x140188770
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140274E00 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401E563C (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140188770
 * Reason: Hex-Rays returned no pseudocode for 0x140188770
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140188770: sub     rsp, 8
 * 0000000140188774: push    rbp
 * 0000000140188775: push    rsi
 * 0000000140188776: sub     rsp, 150h
 * 000000014018877D: lea     rbp, [rsp+80h]
 * 0000000140188785: mov     [rbp+0E8h+var_13D], 0
 * 0000000140188789: mov     [rbp+0E8h+var_138], rax
 * 000000014018878D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140188791: mov     [rbp+0E8h+var_128], rdx
 * 0000000140188795: mov     [rbp+0E8h+var_120], r8
 * 0000000140188799: mov     [rbp+0E8h+var_118], r9
 * 000000014018879D: mov     [rbp+0E8h+var_110], r10
 * 00000001401887A1: mov     [rbp+0E8h+var_108], r11
 * 00000001401887A5: test    [rbp+0E8h+arg_0], 1
 * 00000001401887AC: jnz     short loc_1401887DD
 * 00000001401887AE: lfence
 * 00000001401887B1: test    word ptr gs:2EB0h, 1
 * 00000001401887BC: jnz     short loc_1401887C6
 * 00000001401887BE: lfence
 * 00000001401887C1: jmp     loc_1401889B9
 * 00000001401887C6: movzx   eax, word ptr gs:2EB4h
 * 00000001401887CF: mov     ecx, 48h ; 'H'
 * 00000001401887D4: xor     edx, edx
 * 00000001401887D6: wrmsr
 * 00000001401887D8: jmp     loc_1401889B9
 * 00000001401887DD: test    cs:KiKvaShadow, 1
 * 00000001401887E4: jnz     short loc_1401887E9
 * 00000001401887E6: swapgs
 * 00000001401887E9: lfence
 * 00000001401887EC: mov     r10, gs:188h
 * 00000001401887F5: mov     rcx, gs:188h
 * 00000001401887FE: mov     rcx, [rcx+220h]
 * 0000000140188805: mov     rcx, [rcx+7A0h]
 * 000000014018880C: mov     gs:2EA8h, rcx
 * 0000000140188815: movzx   eax, word ptr gs:2EB6h
 * 000000014018881E: cmp     gs:2EB4h, ax
 * 0000000140188827: jz      short loc_14018883B
 * 0000000140188829: mov     gs:2EB4h, ax
 * 0000000140188832: mov     ecx, 48h ; 'H'
 * 0000000140188837: xor     edx, edx
 * 0000000140188839: wrmsr
 * 000000014018883B: movzx   edx, word ptr gs:2EB0h
 * 0000000140188844: test    edx, 8
 * 000000014018884A: jz      short loc_140188863
 * 000000014018884C: mov     eax, 1
 * 0000000140188851: xor     edx, edx
 * 0000000140188853: mov     ecx, 49h ; 'I'
 * 0000000140188858: wrmsr
 * 000000014018885A: movzx   edx, word ptr gs:2EB0h
 * 0000000140188863: test    edx, 2
 * 0000000140188869: jz      loc_140188994
 * 000000014018886F: call    loc_140188982
 * 0000000140188874: add     rsp, 8
 * 0000000140188878: call    loc_14018898B
 * 000000014018887D: add     rsp, 8
 * 0000000140188881: call    loc_140188874
 * 0000000140188886: add     rsp, 8
 * 000000014018888A: call    loc_14018887D
 * 000000014018888F: add     rsp, 8
 * 0000000140188893: call    loc_140188886
 * 0000000140188898: add     rsp, 8
 * 000000014018889C: call    loc_14018888F
 * 00000001401888A1: add     rsp, 8
 * 00000001401888A5: call    loc_140188898
 * 00000001401888AA: add     rsp, 8
 * 00000001401888AE: call    loc_1401888A1
 * 00000001401888B3: add     rsp, 8
 * 00000001401888B7: call    loc_1401888AA
 * 00000001401888BC: add     rsp, 8
 * 00000001401888C0: call    loc_1401888B3
 * 00000001401888C5: add     rsp, 8
 * 00000001401888C9: call    loc_1401888BC
 * 00000001401888CE: add     rsp, 8
 * 00000001401888D2: call    loc_1401888C5
 * 00000001401888D7: add     rsp, 8
 * 00000001401888DB: call    loc_1401888CE
 * 00000001401888E0: add     rsp, 8
 * 00000001401888E4: call    loc_1401888D7
 * 00000001401888E9: add     rsp, 8
 * 00000001401888ED: call    loc_1401888E0
 * 00000001401888F2: add     rsp, 8
 * 00000001401888F6: call    loc_1401888E9
 * 00000001401888FB: add     rsp, 8
 * 00000001401888FF: call    loc_1401888F2
 * 0000000140188904: add     rsp, 8
 * 0000000140188908: call    loc_1401888FB
 * 000000014018890D: add     rsp, 8
 * 0000000140188911: call    loc_140188904
 * 0000000140188916: add     rsp, 8
 * 000000014018891A: call    loc_14018890D
 * 000000014018891F: add     rsp, 8
 * 0000000140188923: call    loc_140188916
 * 0000000140188928: add     rsp, 8
 * 000000014018892C: call    loc_14018891F
 * 0000000140188931: add     rsp, 8
 * 0000000140188935: call    loc_140188928
 * 000000014018893A: add     rsp, 8
 * 000000014018893E: call    loc_140188931
 * 0000000140188943: add     rsp, 8
 * 0000000140188947: call    loc_14018893A
 * 000000014018894C: add     rsp, 8
 * 0000000140188950: call    loc_140188943
 * 0000000140188955: add     rsp, 8
 * 0000000140188959: call    loc_14018894C
 * 000000014018895E: add     rsp, 8
 * 0000000140188962: call    loc_140188955
 * 0000000140188967: add     rsp, 8
 * 000000014018896B: call    loc_14018895E
 * 0000000140188970: add     rsp, 8
 * 0000000140188974: call    loc_140188967
 * 0000000140188979: add     rsp, 8
 * 000000014018897D: call    loc_140188970
 * 0000000140188982: add     rsp, 8
 * 0000000140188986: call    loc_140188979
 * 000000014018898B: add     rsp, 8
 * 000000014018898F: mov     eax, 0DADAh
 * 0000000140188994: test    edx, 100h
 * 000000014018899A: jz      short loc_1401889A1
 * 000000014018899C: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401889A1: lfence
 * 00000001401889A4: test    byte ptr [r10+3], 3
 * 00000001401889A9: mov     [rbp+0E8h+var_68], 0
 * 00000001401889B2: jz      short loc_1401889B9
 * 00000001401889B4: call    KiSaveDebugRegisterState
 * 00000001401889B9: cld
 * 00000001401889BA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401889BE: ldmxcsr dword ptr gs:180h
 * 00000001401889C7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401889CB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401889CF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401889D3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401889D7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401889DB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401889DF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401889E8: jz      short loc_1401889EF
 * 00000001401889EA: call    KeWakeProcessor
 * 00000001401889EF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401889F6: cmp     rax, [rbp+0E8h]
 * 00000001401889FD: jnb     short loc_140188A18
 * 00000001401889FF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140188A06: cmp     rax, [rbp+0E8h]
 * 0000000140188A0D: jb      short loc_140188A18
 * 0000000140188A0F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140188A13: call    KiCheckForSListAddress
 * 0000000140188A18: xor     esi, esi
 * 0000000140188A1A: inc     dword ptr gs:5C80h
 * 0000000140188A22: mov     ecx, 3
 * 0000000140188A27: mov     rax, cr8
 * 0000000140188A2B: mov     cr8, rcx
 * 0000000140188A2F: mov     [rbp+0E8h+var_13F], al
 * 0000000140188A32: mov     [rbp+0E8h+var_148], 0
 * 0000000140188A39: mov     rcx, gs:20h
 * 0000000140188A42: inc     byte ptr [rcx+20h]
 * 0000000140188A45: cmp     byte ptr [rcx+20h], 1
 * 0000000140188A49: jnz     loc_140188ADF
 * 0000000140188A4F: rdtsc
 * 0000000140188A51: shl     rdx, 20h
 * 0000000140188A55: or      rax, rdx
 * 0000000140188A58: mov     edx, [rcx+62A0h]
 * 0000000140188A5E: mov     r11d, edx
 * 0000000140188A61: and     edx, 7FFh
 * 0000000140188A67: shr     edx, 5
 * 0000000140188A6A: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140188A72: mov     edx, [r10]
 * 0000000140188A75: ror     edx, 5
 * 0000000140188A78: xor     edx, eax
 * 0000000140188A7A: mov     [r10], edx
 * 0000000140188A7D: add     r11d, 1
 * 0000000140188A81: mov     [rcx+62A0h], r11d
 * 0000000140188A88: and     r11d, 3FFh
 * 0000000140188A8F: jnz     short loc_140188A98
 * 0000000140188A91: mov     [rbp+0E8h+var_148], 1
 * 0000000140188A98: mov     r8, [rcx+8]
 * 0000000140188A9C: sub     rax, [rcx+5B38h]
 * 0000000140188AA3: add     [r8+48h], rax
 * 0000000140188AA7: mov     edx, [r8+50h]
 * 0000000140188AAB: add     [rcx+5B38h], rax
 * 0000000140188AB2: add     rdx, rax
 * 0000000140188AB5: mov     ecx, edx
 * 0000000140188AB7: shr     rdx, 20h
 * 0000000140188ABB: jz      short loc_140188AC0
 * 0000000140188ABD: or      ecx, 0FFFFFFFFh
 * 0000000140188AC0: mov     [r8+50h], ecx
 * 0000000140188AC4: test    byte ptr [r8+2], 3Eh
 * 0000000140188AC9: jz      short loc_140188ADF
 * 0000000140188ACB: mov     rdx, r8
 * 0000000140188ACE: mov     r8, rax
 * 0000000140188AD1: mov     rcx, gs:20h
 * 0000000140188ADA: call    KiEndThreadAccountingPeriod
 * 0000000140188ADF: sti
 * 0000000140188AE0: cmp     [rbp+0E8h+var_148], 0
 * 0000000140188AE4: jz      short loc_140188AF4
 * 0000000140188AE6: mov     rcx, gs:20h
 * 0000000140188AEF: call    KiEntropyQueueDpc
 * 0000000140188AF4: mov     ecx, 2
 * 0000000140188AF9: call    HvlRouteInterrupt
 * 0000000140188AFE: cli
 * 0000000140188AFF: mov     rcx, gs:20h
 * 0000000140188B08: cmp     byte ptr [rcx+20h], 1
 * 0000000140188B0C: ja      short loc_140188B82
 * 0000000140188B0E: rdtsc
 * 0000000140188B10: shl     rdx, 20h
 * 0000000140188B14: or      rax, rdx
 * 0000000140188B17: sub     rax, [rcx+5B38h]
 * 0000000140188B1E: add     [rcx+5BF8h], rax
 * 0000000140188B25: add     [rcx+5B38h], rax
 * 0000000140188B2C: mov     r8, rax
 * 0000000140188B2F: mov     rax, [rcx+8]
 * 0000000140188B33: test    byte ptr [rax+2], 32h
 * 0000000140188B37: jz      short loc_140188B4C
 * 0000000140188B39: xor     edx, edx
 * 0000000140188B3B: call    KiBeginThreadAccountingPeriod
 * 0000000140188B40: mov     rcx, gs:20h
 * 0000000140188B49: inc     byte ptr [rcx+20h]
 * 0000000140188B4C: mov     dl, [rcx+6]
 * 0000000140188B4F: and     byte ptr [rcx+6], 0
 * 0000000140188B53: cmp     byte ptr [rcx+7], 0
 * 0000000140188B57: jnz     short loc_140188B82
 * 0000000140188B59: test    dl, dl
 * 0000000140188B5B: jz      short loc_140188B82
 * 0000000140188B5D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140188B61: jnb     short loc_140188B6E
 * 0000000140188B63: and     byte ptr [rcx+20h], 0
 * 0000000140188B67: call    KiDpcInterruptBypass
 * 0000000140188B6C: jmp     short loc_140188B85
 * 0000000140188B6E: mov     ecx, 2
 * 0000000140188B73: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140188B79: mov     rcx, gs:20h
 * 0000000140188B82: dec     byte ptr [rcx+20h]
 * 0000000140188B85: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140188B89: mov     cr8, rcx
 * 0000000140188B8D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140188B94: cli
 * 0000000140188B95: test    [rbp+0E8h+arg_0], 1
 * 0000000140188B9C: jz      loc_140188DFF
 * 0000000140188BA2: mov     rcx, gs:188h
 * 0000000140188BAB: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140188BB2: jz      short loc_140188BCD
 * 0000000140188BB4: mov     ecx, 1
 * 0000000140188BB9: mov     cr8, rcx
 * 0000000140188BBD: sti
 * 0000000140188BBE: call    KiInitiateUserApc
 * 0000000140188BC3: cli
 * 0000000140188BC4: mov     ecx, 0
 * 0000000140188BC9: mov     cr8, rcx
 * 0000000140188BCD: mov     rcx, gs:188h
 * 0000000140188BD6: test    dword ptr [rcx], 40010000h
 * 0000000140188BDC: jz      short loc_140188BF2
 * 0000000140188BDE: test    byte ptr [rcx+2], 1
 * 0000000140188BE2: jz      short loc_140188BF2
 * 0000000140188BE4: call    KiCopyCounters
 * 0000000140188BE9: mov     rcx, gs:188h
 * 0000000140188BF2: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188BF6: cmp     [rbp+0E8h+var_68], 0
 * 0000000140188BFE: jz      short loc_140188C05
 * 0000000140188C00: call    KiRestoreDebugRegisterState
 * 0000000140188C05: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140188C09: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140188C0D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140188C11: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188C15: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140188C19: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140188C1D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140188C21: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188C25: mov     r9, [rbp+0E8h+var_118]
 * 0000000140188C29: mov     r8, [rbp+0E8h+var_120]
 * 0000000140188C2D: movzx   eax, word ptr gs:2EBAh
 * 0000000140188C36: cmp     gs:2EB4h, ax
 * 0000000140188C3F: jz      short loc_140188C53
 * 0000000140188C41: mov     gs:2EB4h, ax
 * 0000000140188C4A: mov     ecx, 48h ; 'H'
 * 0000000140188C4F: xor     edx, edx
 * 0000000140188C51: wrmsr
 * 0000000140188C53: btr     word ptr gs:2EB0h, 2
 * 0000000140188C5E: jnb     short loc_140188C6E
 * 0000000140188C60: mov     eax, 1
 * 0000000140188C65: xor     edx, edx
 * 0000000140188C67: mov     ecx, 49h ; 'I'
 * 0000000140188C6C: wrmsr
 * 0000000140188C6E: btr     word ptr gs:2EB0h, 5
 * 0000000140188C79: jnb     loc_140188DA4
 * 0000000140188C7F: call    loc_140188D92
 * 0000000140188C84: add     rsp, 8
 * 0000000140188C88: call    loc_140188D9B
 * 0000000140188C8D: add     rsp, 8
 * 0000000140188C91: call    loc_140188C84
 * 0000000140188C96: add     rsp, 8
 * 0000000140188C9A: call    loc_140188C8D
 * 0000000140188C9F: add     rsp, 8
 * 0000000140188CA3: call    loc_140188C96
 * 0000000140188CA8: add     rsp, 8
 * 0000000140188CAC: call    loc_140188C9F
 * 0000000140188CB1: add     rsp, 8
 * 0000000140188CB5: call    loc_140188CA8
 * 0000000140188CBA: add     rsp, 8
 * 0000000140188CBE: call    loc_140188CB1
 * 0000000140188CC3: add     rsp, 8
 * 0000000140188CC7: call    loc_140188CBA
 * 0000000140188CCC: add     rsp, 8
 * 0000000140188CD0: call    loc_140188CC3
 * 0000000140188CD5: add     rsp, 8
 * 0000000140188CD9: call    loc_140188CCC
 * 0000000140188CDE: add     rsp, 8
 * 0000000140188CE2: call    loc_140188CD5
 * 0000000140188CE7: add     rsp, 8
 * 0000000140188CEB: call    loc_140188CDE
 * 0000000140188CF0: add     rsp, 8
 * 0000000140188CF4: call    loc_140188CE7
 * 0000000140188CF9: add     rsp, 8
 * 0000000140188CFD: call    loc_140188CF0
 * 0000000140188D02: add     rsp, 8
 * 0000000140188D06: call    loc_140188CF9
 * 0000000140188D0B: add     rsp, 8
 * 0000000140188D0F: call    loc_140188D02
 * 0000000140188D14: add     rsp, 8
 * 0000000140188D18: call    loc_140188D0B
 * 0000000140188D1D: add     rsp, 8
 * 0000000140188D21: call    loc_140188D14
 * 0000000140188D26: add     rsp, 8
 * 0000000140188D2A: call    loc_140188D1D
 * 0000000140188D2F: add     rsp, 8
 * 0000000140188D33: call    loc_140188D26
 * 0000000140188D38: add     rsp, 8
 * 0000000140188D3C: call    loc_140188D2F
 * 0000000140188D41: add     rsp, 8
 * 0000000140188D45: call    loc_140188D38
 * 0000000140188D4A: add     rsp, 8
 * 0000000140188D4E: call    loc_140188D41
 * 0000000140188D53: add     rsp, 8
 * 0000000140188D57: call    loc_140188D4A
 * 0000000140188D5C: add     rsp, 8
 * 0000000140188D60: call    loc_140188D53
 * 0000000140188D65: add     rsp, 8
 * 0000000140188D69: call    loc_140188D5C
 * 0000000140188D6E: add     rsp, 8
 * 0000000140188D72: call    loc_140188D65
 * 0000000140188D77: add     rsp, 8
 * 0000000140188D7B: call    loc_140188D6E
 * 0000000140188D80: add     rsp, 8
 * 0000000140188D84: call    loc_140188D77
 * 0000000140188D89: add     rsp, 8
 * 0000000140188D8D: call    loc_140188D80
 * 0000000140188D92: add     rsp, 8
 * 0000000140188D96: call    loc_140188D89
 * 0000000140188D9B: add     rsp, 8
 * 0000000140188D9F: mov     eax, 0DADAh
 * 0000000140188DA4: test    word ptr gs:2EB0h, 40h
 * 0000000140188DAF: jz      short loc_140188DBD
 * 0000000140188DB1: xor     eax, eax
 * 0000000140188DB3: xor     edx, edx
 * 0000000140188DB5: mov     ecx, 1
 * 0000000140188DBA: div     rcx
 * 0000000140188DBD: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140188DC1: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140188DC5: mov     rax, [rbp+0E8h+var_138]
 * 0000000140188DC9: mov     rsp, rbp
 * 0000000140188DCC: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188DD3: add     rsp, 0E8h
 * 0000000140188DDA: test    cs:KiKvaShadow, 1
 * 0000000140188DE1: jz      short loc_140188DE8
 * 0000000140188DE3: jmp     KiKernelExit
 * 0000000140188DE8: test    word ptr gs:2EB0h, 80h
 * 0000000140188DF3: jz      short loc_140188DFA
 * 0000000140188DF5: verw    [rsp+arg_18]
 * 0000000140188DFA: swapgs
 * 0000000140188DFD: iretq
 * 0000000140188DFF: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188E03: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140188E07: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140188E0B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140188E0F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188E13: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140188E17: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140188E1B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140188E1F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188E23: mov     r9, [rbp+0E8h+var_118]
 * 0000000140188E27: mov     r8, [rbp+0E8h+var_120]
 * 0000000140188E2B: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140188E2F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140188E33: mov     rax, [rbp+0E8h+var_138]
 * 0000000140188E37: mov     rsp, rbp
 * 0000000140188E3A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188E41: add     rsp, 0E8h
 * 0000000140188E48: iretq
 */
