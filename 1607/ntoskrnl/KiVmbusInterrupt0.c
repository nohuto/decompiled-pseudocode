/*
 * XREFs of KiVmbusInterrupt0 @ 0x140163960
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x14023FE00 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400A8F04 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BABE4 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140163960
 * Reason: Hex-Rays returned no pseudocode for 0x140163960
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140163960: sub     rsp, 8
 * 0000000140163964: push    rbp
 * 0000000140163965: push    rsi
 * 0000000140163966: sub     rsp, 150h
 * 000000014016396D: lea     rbp, [rsp+80h]
 * 0000000140163975: mov     [rbp+0E8h+var_13D], 0
 * 0000000140163979: mov     [rbp+0E8h+var_138], rax
 * 000000014016397D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140163981: mov     [rbp+0E8h+var_128], rdx
 * 0000000140163985: mov     [rbp+0E8h+var_120], r8
 * 0000000140163989: mov     [rbp+0E8h+var_118], r9
 * 000000014016398D: mov     [rbp+0E8h+var_110], r10
 * 0000000140163991: mov     [rbp+0E8h+var_108], r11
 * 0000000140163995: test    [rbp+0E8h+arg_0], 1
 * 000000014016399C: jnz     short loc_1401639CD
 * 000000014016399E: lfence
 * 00000001401639A1: test    word ptr gs:2EB8h, 1
 * 00000001401639AC: jnz     short loc_1401639B6
 * 00000001401639AE: lfence
 * 00000001401639B1: jmp     loc_140163BA9
 * 00000001401639B6: movzx   eax, word ptr gs:2EBCh
 * 00000001401639BF: mov     ecx, 48h ; 'H'
 * 00000001401639C4: xor     edx, edx
 * 00000001401639C6: wrmsr
 * 00000001401639C8: jmp     loc_140163BA9
 * 00000001401639CD: test    cs:KiKvaShadow, 1
 * 00000001401639D4: jnz     short loc_1401639D9
 * 00000001401639D6: swapgs
 * 00000001401639D9: lfence
 * 00000001401639DC: mov     r10, gs:188h
 * 00000001401639E5: mov     rcx, gs:188h
 * 00000001401639EE: mov     rcx, [rcx+220h]
 * 00000001401639F5: mov     rcx, [rcx+7B8h]
 * 00000001401639FC: mov     gs:2EB0h, rcx
 * 0000000140163A05: movzx   eax, word ptr gs:2EBEh
 * 0000000140163A0E: cmp     gs:2EBCh, ax
 * 0000000140163A17: jz      short loc_140163A2B
 * 0000000140163A19: mov     gs:2EBCh, ax
 * 0000000140163A22: mov     ecx, 48h ; 'H'
 * 0000000140163A27: xor     edx, edx
 * 0000000140163A29: wrmsr
 * 0000000140163A2B: movzx   edx, word ptr gs:2EB8h
 * 0000000140163A34: test    edx, 8
 * 0000000140163A3A: jz      short loc_140163A53
 * 0000000140163A3C: mov     eax, 1
 * 0000000140163A41: xor     edx, edx
 * 0000000140163A43: mov     ecx, 49h ; 'I'
 * 0000000140163A48: wrmsr
 * 0000000140163A4A: movzx   edx, word ptr gs:2EB8h
 * 0000000140163A53: test    edx, 2
 * 0000000140163A59: jz      loc_140163B84
 * 0000000140163A5F: call    loc_140163B72
 * 0000000140163A64: add     rsp, 8
 * 0000000140163A68: call    loc_140163B7B
 * 0000000140163A6D: add     rsp, 8
 * 0000000140163A71: call    loc_140163A64
 * 0000000140163A76: add     rsp, 8
 * 0000000140163A7A: call    loc_140163A6D
 * 0000000140163A7F: add     rsp, 8
 * 0000000140163A83: call    loc_140163A76
 * 0000000140163A88: add     rsp, 8
 * 0000000140163A8C: call    loc_140163A7F
 * 0000000140163A91: add     rsp, 8
 * 0000000140163A95: call    loc_140163A88
 * 0000000140163A9A: add     rsp, 8
 * 0000000140163A9E: call    loc_140163A91
 * 0000000140163AA3: add     rsp, 8
 * 0000000140163AA7: call    loc_140163A9A
 * 0000000140163AAC: add     rsp, 8
 * 0000000140163AB0: call    loc_140163AA3
 * 0000000140163AB5: add     rsp, 8
 * 0000000140163AB9: call    loc_140163AAC
 * 0000000140163ABE: add     rsp, 8
 * 0000000140163AC2: call    loc_140163AB5
 * 0000000140163AC7: add     rsp, 8
 * 0000000140163ACB: call    loc_140163ABE
 * 0000000140163AD0: add     rsp, 8
 * 0000000140163AD4: call    loc_140163AC7
 * 0000000140163AD9: add     rsp, 8
 * 0000000140163ADD: call    loc_140163AD0
 * 0000000140163AE2: add     rsp, 8
 * 0000000140163AE6: call    loc_140163AD9
 * 0000000140163AEB: add     rsp, 8
 * 0000000140163AEF: call    loc_140163AE2
 * 0000000140163AF4: add     rsp, 8
 * 0000000140163AF8: call    loc_140163AEB
 * 0000000140163AFD: add     rsp, 8
 * 0000000140163B01: call    loc_140163AF4
 * 0000000140163B06: add     rsp, 8
 * 0000000140163B0A: call    loc_140163AFD
 * 0000000140163B0F: add     rsp, 8
 * 0000000140163B13: call    loc_140163B06
 * 0000000140163B18: add     rsp, 8
 * 0000000140163B1C: call    loc_140163B0F
 * 0000000140163B21: add     rsp, 8
 * 0000000140163B25: call    loc_140163B18
 * 0000000140163B2A: add     rsp, 8
 * 0000000140163B2E: call    loc_140163B21
 * 0000000140163B33: add     rsp, 8
 * 0000000140163B37: call    loc_140163B2A
 * 0000000140163B3C: add     rsp, 8
 * 0000000140163B40: call    loc_140163B33
 * 0000000140163B45: add     rsp, 8
 * 0000000140163B49: call    loc_140163B3C
 * 0000000140163B4E: add     rsp, 8
 * 0000000140163B52: call    loc_140163B45
 * 0000000140163B57: add     rsp, 8
 * 0000000140163B5B: call    loc_140163B4E
 * 0000000140163B60: add     rsp, 8
 * 0000000140163B64: call    loc_140163B57
 * 0000000140163B69: add     rsp, 8
 * 0000000140163B6D: call    loc_140163B60
 * 0000000140163B72: add     rsp, 8
 * 0000000140163B76: call    loc_140163B69
 * 0000000140163B7B: add     rsp, 8
 * 0000000140163B7F: mov     eax, 0DADAh
 * 0000000140163B84: test    edx, 100h
 * 0000000140163B8A: jz      short loc_140163B91
 * 0000000140163B8C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140163B91: lfence
 * 0000000140163B94: test    byte ptr [r10+3], 3
 * 0000000140163B99: mov     [rbp+0E8h+var_68], 0
 * 0000000140163BA2: jz      short loc_140163BA9
 * 0000000140163BA4: call    KiSaveDebugRegisterState
 * 0000000140163BA9: cld
 * 0000000140163BAA: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140163BAE: ldmxcsr dword ptr gs:180h
 * 0000000140163BB7: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140163BBB: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140163BBF: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140163BC3: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140163BC7: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140163BCB: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140163BCF: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140163BD8: jz      short loc_140163BDF
 * 0000000140163BDA: call    KeWakeProcessor
 * 0000000140163BDF: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140163BE6: cmp     rax, [rbp+0E8h]
 * 0000000140163BED: jnb     short loc_140163C08
 * 0000000140163BEF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140163BF6: cmp     rax, [rbp+0E8h]
 * 0000000140163BFD: jb      short loc_140163C08
 * 0000000140163BFF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140163C03: call    KiCheckForSListAddress
 * 0000000140163C08: xor     esi, esi
 * 0000000140163C0A: inc     dword ptr gs:5C80h
 * 0000000140163C12: mov     ecx, 3
 * 0000000140163C17: mov     rax, cr8
 * 0000000140163C1B: mov     cr8, rcx
 * 0000000140163C1F: mov     [rbp+0E8h+var_13F], al
 * 0000000140163C22: mov     [rbp+0E8h+var_148], 0
 * 0000000140163C29: mov     rcx, gs:20h
 * 0000000140163C32: inc     byte ptr [rcx+20h]
 * 0000000140163C35: cmp     byte ptr [rcx+20h], 1
 * 0000000140163C39: jnz     loc_140163CCF
 * 0000000140163C3F: rdtsc
 * 0000000140163C41: shl     rdx, 20h
 * 0000000140163C45: or      rax, rdx
 * 0000000140163C48: mov     edx, [rcx+6320h]
 * 0000000140163C4E: mov     r11d, edx
 * 0000000140163C51: and     edx, 7FFh
 * 0000000140163C57: shr     edx, 5
 * 0000000140163C5A: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140163C62: mov     edx, [r10]
 * 0000000140163C65: ror     edx, 5
 * 0000000140163C68: xor     edx, eax
 * 0000000140163C6A: mov     [r10], edx
 * 0000000140163C6D: add     r11d, 1
 * 0000000140163C71: mov     [rcx+6320h], r11d
 * 0000000140163C78: and     r11d, 3FFh
 * 0000000140163C7F: jnz     short loc_140163C88
 * 0000000140163C81: mov     [rbp+0E8h+var_148], 1
 * 0000000140163C88: mov     r8, [rcx+8]
 * 0000000140163C8C: sub     rax, [rcx+5B38h]
 * 0000000140163C93: add     [r8+48h], rax
 * 0000000140163C97: mov     edx, [r8+50h]
 * 0000000140163C9B: add     [rcx+5B38h], rax
 * 0000000140163CA2: add     rdx, rax
 * 0000000140163CA5: mov     ecx, edx
 * 0000000140163CA7: shr     rdx, 20h
 * 0000000140163CAB: jz      short loc_140163CB0
 * 0000000140163CAD: or      ecx, 0FFFFFFFFh
 * 0000000140163CB0: mov     [r8+50h], ecx
 * 0000000140163CB4: test    byte ptr [r8+2], 3Eh
 * 0000000140163CB9: jz      short loc_140163CCF
 * 0000000140163CBB: mov     rdx, r8
 * 0000000140163CBE: mov     r8, rax
 * 0000000140163CC1: mov     rcx, gs:20h
 * 0000000140163CCA: call    KiEndThreadAccountingPeriod
 * 0000000140163CCF: sti
 * 0000000140163CD0: cmp     [rbp+0E8h+var_148], 0
 * 0000000140163CD4: jz      short loc_140163CE4
 * 0000000140163CD6: mov     rcx, gs:20h
 * 0000000140163CDF: call    KiEntropyQueueDpc
 * 0000000140163CE4: mov     ecx, 1
 * 0000000140163CE9: call    HvlRouteInterrupt
 * 0000000140163CEE: cli
 * 0000000140163CEF: mov     rcx, gs:20h
 * 0000000140163CF8: cmp     byte ptr [rcx+20h], 1
 * 0000000140163CFC: ja      short loc_140163D72
 * 0000000140163CFE: rdtsc
 * 0000000140163D00: shl     rdx, 20h
 * 0000000140163D04: or      rax, rdx
 * 0000000140163D07: sub     rax, [rcx+5B38h]
 * 0000000140163D0E: add     [rcx+5BF8h], rax
 * 0000000140163D15: add     [rcx+5B38h], rax
 * 0000000140163D1C: mov     r8, rax
 * 0000000140163D1F: mov     rax, [rcx+8]
 * 0000000140163D23: test    byte ptr [rax+2], 32h
 * 0000000140163D27: jz      short loc_140163D3C
 * 0000000140163D29: xor     edx, edx
 * 0000000140163D2B: call    KiBeginThreadAccountingPeriod
 * 0000000140163D30: mov     rcx, gs:20h
 * 0000000140163D39: inc     byte ptr [rcx+20h]
 * 0000000140163D3C: mov     dl, [rcx+6]
 * 0000000140163D3F: and     byte ptr [rcx+6], 0
 * 0000000140163D43: cmp     byte ptr [rcx+7], 0
 * 0000000140163D47: jnz     short loc_140163D72
 * 0000000140163D49: test    dl, dl
 * 0000000140163D4B: jz      short loc_140163D72
 * 0000000140163D4D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140163D51: jnb     short loc_140163D5E
 * 0000000140163D53: and     byte ptr [rcx+20h], 0
 * 0000000140163D57: call    KiDpcInterruptBypass
 * 0000000140163D5C: jmp     short loc_140163D75
 * 0000000140163D5E: mov     ecx, 2
 * 0000000140163D63: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140163D69: mov     rcx, gs:20h
 * 0000000140163D72: dec     byte ptr [rcx+20h]
 * 0000000140163D75: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163D79: mov     cr8, rcx
 * 0000000140163D7D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140163D84: cli
 * 0000000140163D85: test    [rbp+0E8h+arg_0], 1
 * 0000000140163D8C: jz      loc_140164005
 * 0000000140163D92: mov     rcx, gs:188h
 * 0000000140163D9B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140163DA2: jz      short loc_140163DBD
 * 0000000140163DA4: mov     ecx, 1
 * 0000000140163DA9: mov     cr8, rcx
 * 0000000140163DAD: sti
 * 0000000140163DAE: call    KiInitiateUserApc
 * 0000000140163DB3: cli
 * 0000000140163DB4: mov     ecx, 0
 * 0000000140163DB9: mov     cr8, rcx
 * 0000000140163DBD: mov     rcx, gs:188h
 * 0000000140163DC6: test    dword ptr [rcx], 8000000h
 * 0000000140163DCC: jz      short loc_140163DD3
 * 0000000140163DCE: call    KiRestoreSetContextState
 * 0000000140163DD3: mov     rcx, gs:188h
 * 0000000140163DDC: test    dword ptr [rcx], 40010000h
 * 0000000140163DE2: jz      short loc_140163DF8
 * 0000000140163DE4: test    byte ptr [rcx+2], 1
 * 0000000140163DE8: jz      short loc_140163DF8
 * 0000000140163DEA: call    KiCopyCounters
 * 0000000140163DEF: mov     rcx, gs:188h
 * 0000000140163DF8: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163DFC: cmp     [rbp+0E8h+var_68], 0
 * 0000000140163E04: jz      short loc_140163E0B
 * 0000000140163E06: call    KiRestoreDebugRegisterState
 * 0000000140163E0B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163E0F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163E13: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140163E17: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140163E1B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163E1F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163E23: mov     r11, [rbp+0E8h+var_108]
 * 0000000140163E27: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163E2B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163E2F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163E33: movzx   eax, word ptr gs:2EC2h
 * 0000000140163E3C: cmp     gs:2EBCh, ax
 * 0000000140163E45: jz      short loc_140163E59
 * 0000000140163E47: mov     gs:2EBCh, ax
 * 0000000140163E50: mov     ecx, 48h ; 'H'
 * 0000000140163E55: xor     edx, edx
 * 0000000140163E57: wrmsr
 * 0000000140163E59: btr     word ptr gs:2EB8h, 2
 * 0000000140163E64: jnb     short loc_140163E74
 * 0000000140163E66: mov     eax, 1
 * 0000000140163E6B: xor     edx, edx
 * 0000000140163E6D: mov     ecx, 49h ; 'I'
 * 0000000140163E72: wrmsr
 * 0000000140163E74: btr     word ptr gs:2EB8h, 5
 * 0000000140163E7F: jnb     loc_140163FAA
 * 0000000140163E85: call    loc_140163F98
 * 0000000140163E8A: add     rsp, 8
 * 0000000140163E8E: call    loc_140163FA1
 * 0000000140163E93: add     rsp, 8
 * 0000000140163E97: call    loc_140163E8A
 * 0000000140163E9C: add     rsp, 8
 * 0000000140163EA0: call    loc_140163E93
 * 0000000140163EA5: add     rsp, 8
 * 0000000140163EA9: call    loc_140163E9C
 * 0000000140163EAE: add     rsp, 8
 * 0000000140163EB2: call    loc_140163EA5
 * 0000000140163EB7: add     rsp, 8
 * 0000000140163EBB: call    loc_140163EAE
 * 0000000140163EC0: add     rsp, 8
 * 0000000140163EC4: call    loc_140163EB7
 * 0000000140163EC9: add     rsp, 8
 * 0000000140163ECD: call    loc_140163EC0
 * 0000000140163ED2: add     rsp, 8
 * 0000000140163ED6: call    loc_140163EC9
 * 0000000140163EDB: add     rsp, 8
 * 0000000140163EDF: call    loc_140163ED2
 * 0000000140163EE4: add     rsp, 8
 * 0000000140163EE8: call    loc_140163EDB
 * 0000000140163EED: add     rsp, 8
 * 0000000140163EF1: call    loc_140163EE4
 * 0000000140163EF6: add     rsp, 8
 * 0000000140163EFA: call    loc_140163EED
 * 0000000140163EFF: add     rsp, 8
 * 0000000140163F03: call    loc_140163EF6
 * 0000000140163F08: add     rsp, 8
 * 0000000140163F0C: call    loc_140163EFF
 * 0000000140163F11: add     rsp, 8
 * 0000000140163F15: call    loc_140163F08
 * 0000000140163F1A: add     rsp, 8
 * 0000000140163F1E: call    loc_140163F11
 * 0000000140163F23: add     rsp, 8
 * 0000000140163F27: call    loc_140163F1A
 * 0000000140163F2C: add     rsp, 8
 * 0000000140163F30: call    loc_140163F23
 * 0000000140163F35: add     rsp, 8
 * 0000000140163F39: call    loc_140163F2C
 * 0000000140163F3E: add     rsp, 8
 * 0000000140163F42: call    loc_140163F35
 * 0000000140163F47: add     rsp, 8
 * 0000000140163F4B: call    loc_140163F3E
 * 0000000140163F50: add     rsp, 8
 * 0000000140163F54: call    loc_140163F47
 * 0000000140163F59: add     rsp, 8
 * 0000000140163F5D: call    loc_140163F50
 * 0000000140163F62: add     rsp, 8
 * 0000000140163F66: call    loc_140163F59
 * 0000000140163F6B: add     rsp, 8
 * 0000000140163F6F: call    loc_140163F62
 * 0000000140163F74: add     rsp, 8
 * 0000000140163F78: call    loc_140163F6B
 * 0000000140163F7D: add     rsp, 8
 * 0000000140163F81: call    loc_140163F74
 * 0000000140163F86: add     rsp, 8
 * 0000000140163F8A: call    loc_140163F7D
 * 0000000140163F8F: add     rsp, 8
 * 0000000140163F93: call    loc_140163F86
 * 0000000140163F98: add     rsp, 8
 * 0000000140163F9C: call    loc_140163F8F
 * 0000000140163FA1: add     rsp, 8
 * 0000000140163FA5: mov     eax, 0DADAh
 * 0000000140163FAA: test    word ptr gs:2EB8h, 40h
 * 0000000140163FB5: jz      short loc_140163FC3
 * 0000000140163FB7: xor     eax, eax
 * 0000000140163FB9: xor     edx, edx
 * 0000000140163FBB: mov     ecx, 1
 * 0000000140163FC0: div     rcx
 * 0000000140163FC3: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140163FC7: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140163FCB: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163FCF: mov     rsp, rbp
 * 0000000140163FD2: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140163FD9: add     rsp, 0E8h
 * 0000000140163FE0: test    cs:KiKvaShadow, 1
 * 0000000140163FE7: jz      short loc_140163FEE
 * 0000000140163FE9: jmp     KiKernelExit
 * 0000000140163FEE: test    word ptr gs:2EB8h, 80h
 * 0000000140163FF9: jz      short loc_140164000
 * 0000000140163FFB: verw    [rsp+arg_18]
 * 0000000140164000: swapgs
 * 0000000140164003: iretq
 * 0000000140164005: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164009: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016400D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164011: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164015: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164019: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016401D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164021: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164025: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164029: mov     r9, [rbp+0E8h+var_118]
 * 000000014016402D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164031: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164035: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164039: mov     rax, [rbp+0E8h+var_138]
 * 000000014016403D: mov     rsp, rbp
 * 0000000140164040: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164047: add     rsp, 0E8h
 * 000000014016404E: iretq
 */
