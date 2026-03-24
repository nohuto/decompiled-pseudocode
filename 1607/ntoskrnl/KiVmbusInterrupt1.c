/*
 * XREFs of KiVmbusInterrupt1 @ 0x140163AF0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x14023FE80 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400AA984 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BAD00 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140163AF0
 * Reason: Hex-Rays returned no pseudocode for 0x140163AF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140163AF0: sub     rsp, 8
 * 0000000140163AF4: push    rbp
 * 0000000140163AF5: push    rsi
 * 0000000140163AF6: sub     rsp, 150h
 * 0000000140163AFD: lea     rbp, [rsp+80h]
 * 0000000140163B05: mov     [rbp+0E8h+var_13D], 0
 * 0000000140163B09: mov     [rbp+0E8h+var_138], rax
 * 0000000140163B0D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140163B11: mov     [rbp+0E8h+var_128], rdx
 * 0000000140163B15: mov     [rbp+0E8h+var_120], r8
 * 0000000140163B19: mov     [rbp+0E8h+var_118], r9
 * 0000000140163B1D: mov     [rbp+0E8h+var_110], r10
 * 0000000140163B21: mov     [rbp+0E8h+var_108], r11
 * 0000000140163B25: test    [rbp+0E8h+arg_0], 1
 * 0000000140163B2C: jnz     short loc_140163B5D
 * 0000000140163B2E: lfence
 * 0000000140163B31: test    word ptr gs:2EB8h, 1
 * 0000000140163B3C: jnz     short loc_140163B46
 * 0000000140163B3E: lfence
 * 0000000140163B41: jmp     loc_140163D39
 * 0000000140163B46: movzx   eax, word ptr gs:2EBCh
 * 0000000140163B4F: mov     ecx, 48h ; 'H'
 * 0000000140163B54: xor     edx, edx
 * 0000000140163B56: wrmsr
 * 0000000140163B58: jmp     loc_140163D39
 * 0000000140163B5D: test    cs:KiKvaShadow, 1
 * 0000000140163B64: jnz     short loc_140163B69
 * 0000000140163B66: swapgs
 * 0000000140163B69: lfence
 * 0000000140163B6C: mov     r10, gs:188h
 * 0000000140163B75: mov     rcx, gs:188h
 * 0000000140163B7E: mov     rcx, [rcx+220h]
 * 0000000140163B85: mov     rcx, [rcx+7B8h]
 * 0000000140163B8C: mov     gs:2EB0h, rcx
 * 0000000140163B95: movzx   eax, word ptr gs:2EBEh
 * 0000000140163B9E: cmp     gs:2EBCh, ax
 * 0000000140163BA7: jz      short loc_140163BBB
 * 0000000140163BA9: mov     gs:2EBCh, ax
 * 0000000140163BB2: mov     ecx, 48h ; 'H'
 * 0000000140163BB7: xor     edx, edx
 * 0000000140163BB9: wrmsr
 * 0000000140163BBB: movzx   edx, word ptr gs:2EB8h
 * 0000000140163BC4: test    edx, 8
 * 0000000140163BCA: jz      short loc_140163BE3
 * 0000000140163BCC: mov     eax, 1
 * 0000000140163BD1: xor     edx, edx
 * 0000000140163BD3: mov     ecx, 49h ; 'I'
 * 0000000140163BD8: wrmsr
 * 0000000140163BDA: movzx   edx, word ptr gs:2EB8h
 * 0000000140163BE3: test    edx, 2
 * 0000000140163BE9: jz      loc_140163D14
 * 0000000140163BEF: call    loc_140163D02
 * 0000000140163BF4: add     rsp, 8
 * 0000000140163BF8: call    loc_140163D0B
 * 0000000140163BFD: add     rsp, 8
 * 0000000140163C01: call    loc_140163BF4
 * 0000000140163C06: add     rsp, 8
 * 0000000140163C0A: call    loc_140163BFD
 * 0000000140163C0F: add     rsp, 8
 * 0000000140163C13: call    loc_140163C06
 * 0000000140163C18: add     rsp, 8
 * 0000000140163C1C: call    loc_140163C0F
 * 0000000140163C21: add     rsp, 8
 * 0000000140163C25: call    loc_140163C18
 * 0000000140163C2A: add     rsp, 8
 * 0000000140163C2E: call    loc_140163C21
 * 0000000140163C33: add     rsp, 8
 * 0000000140163C37: call    loc_140163C2A
 * 0000000140163C3C: add     rsp, 8
 * 0000000140163C40: call    loc_140163C33
 * 0000000140163C45: add     rsp, 8
 * 0000000140163C49: call    loc_140163C3C
 * 0000000140163C4E: add     rsp, 8
 * 0000000140163C52: call    loc_140163C45
 * 0000000140163C57: add     rsp, 8
 * 0000000140163C5B: call    loc_140163C4E
 * 0000000140163C60: add     rsp, 8
 * 0000000140163C64: call    loc_140163C57
 * 0000000140163C69: add     rsp, 8
 * 0000000140163C6D: call    loc_140163C60
 * 0000000140163C72: add     rsp, 8
 * 0000000140163C76: call    loc_140163C69
 * 0000000140163C7B: add     rsp, 8
 * 0000000140163C7F: call    loc_140163C72
 * 0000000140163C84: add     rsp, 8
 * 0000000140163C88: call    loc_140163C7B
 * 0000000140163C8D: add     rsp, 8
 * 0000000140163C91: call    loc_140163C84
 * 0000000140163C96: add     rsp, 8
 * 0000000140163C9A: call    loc_140163C8D
 * 0000000140163C9F: add     rsp, 8
 * 0000000140163CA3: call    loc_140163C96
 * 0000000140163CA8: add     rsp, 8
 * 0000000140163CAC: call    loc_140163C9F
 * 0000000140163CB1: add     rsp, 8
 * 0000000140163CB5: call    loc_140163CA8
 * 0000000140163CBA: add     rsp, 8
 * 0000000140163CBE: call    loc_140163CB1
 * 0000000140163CC3: add     rsp, 8
 * 0000000140163CC7: call    loc_140163CBA
 * 0000000140163CCC: add     rsp, 8
 * 0000000140163CD0: call    loc_140163CC3
 * 0000000140163CD5: add     rsp, 8
 * 0000000140163CD9: call    loc_140163CCC
 * 0000000140163CDE: add     rsp, 8
 * 0000000140163CE2: call    loc_140163CD5
 * 0000000140163CE7: add     rsp, 8
 * 0000000140163CEB: call    loc_140163CDE
 * 0000000140163CF0: add     rsp, 8
 * 0000000140163CF4: call    loc_140163CE7
 * 0000000140163CF9: add     rsp, 8
 * 0000000140163CFD: call    loc_140163CF0
 * 0000000140163D02: add     rsp, 8
 * 0000000140163D06: call    loc_140163CF9
 * 0000000140163D0B: add     rsp, 8
 * 0000000140163D0F: mov     eax, 0DADAh
 * 0000000140163D14: test    edx, 100h
 * 0000000140163D1A: jz      short loc_140163D21
 * 0000000140163D1C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140163D21: lfence
 * 0000000140163D24: test    byte ptr [r10+3], 3
 * 0000000140163D29: mov     [rbp+0E8h+var_68], 0
 * 0000000140163D32: jz      short loc_140163D39
 * 0000000140163D34: call    KiSaveDebugRegisterState
 * 0000000140163D39: cld
 * 0000000140163D3A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140163D3E: ldmxcsr dword ptr gs:180h
 * 0000000140163D47: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140163D4B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140163D4F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140163D53: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140163D57: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140163D5B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140163D5F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140163D68: jz      short loc_140163D6F
 * 0000000140163D6A: call    KeWakeProcessor
 * 0000000140163D6F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140163D76: cmp     rax, [rbp+0E8h]
 * 0000000140163D7D: jnb     short loc_140163D98
 * 0000000140163D7F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140163D86: cmp     rax, [rbp+0E8h]
 * 0000000140163D8D: jb      short loc_140163D98
 * 0000000140163D8F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140163D93: call    KiCheckForSListAddress
 * 0000000140163D98: xor     esi, esi
 * 0000000140163D9A: inc     dword ptr gs:5C80h
 * 0000000140163DA2: mov     ecx, 3
 * 0000000140163DA7: mov     rax, cr8
 * 0000000140163DAB: mov     cr8, rcx
 * 0000000140163DAF: mov     [rbp+0E8h+var_13F], al
 * 0000000140163DB2: mov     [rbp+0E8h+var_148], 0
 * 0000000140163DB9: mov     rcx, gs:20h
 * 0000000140163DC2: inc     byte ptr [rcx+20h]
 * 0000000140163DC5: cmp     byte ptr [rcx+20h], 1
 * 0000000140163DC9: jnz     loc_140163E5F
 * 0000000140163DCF: rdtsc
 * 0000000140163DD1: shl     rdx, 20h
 * 0000000140163DD5: or      rax, rdx
 * 0000000140163DD8: mov     edx, [rcx+6320h]
 * 0000000140163DDE: mov     r11d, edx
 * 0000000140163DE1: and     edx, 7FFh
 * 0000000140163DE7: shr     edx, 5
 * 0000000140163DEA: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140163DF2: mov     edx, [r10]
 * 0000000140163DF5: ror     edx, 5
 * 0000000140163DF8: xor     edx, eax
 * 0000000140163DFA: mov     [r10], edx
 * 0000000140163DFD: add     r11d, 1
 * 0000000140163E01: mov     [rcx+6320h], r11d
 * 0000000140163E08: and     r11d, 3FFh
 * 0000000140163E0F: jnz     short loc_140163E18
 * 0000000140163E11: mov     [rbp+0E8h+var_148], 1
 * 0000000140163E18: mov     r8, [rcx+8]
 * 0000000140163E1C: sub     rax, [rcx+5B38h]
 * 0000000140163E23: add     [r8+48h], rax
 * 0000000140163E27: mov     edx, [r8+50h]
 * 0000000140163E2B: add     [rcx+5B38h], rax
 * 0000000140163E32: add     rdx, rax
 * 0000000140163E35: mov     ecx, edx
 * 0000000140163E37: shr     rdx, 20h
 * 0000000140163E3B: jz      short loc_140163E40
 * 0000000140163E3D: or      ecx, 0FFFFFFFFh
 * 0000000140163E40: mov     [r8+50h], ecx
 * 0000000140163E44: test    byte ptr [r8+2], 3Eh
 * 0000000140163E49: jz      short loc_140163E5F
 * 0000000140163E4B: mov     rdx, r8
 * 0000000140163E4E: mov     r8, rax
 * 0000000140163E51: mov     rcx, gs:20h
 * 0000000140163E5A: call    KiEndThreadAccountingPeriod
 * 0000000140163E5F: sti
 * 0000000140163E60: cmp     [rbp+0E8h+var_148], 0
 * 0000000140163E64: jz      short loc_140163E74
 * 0000000140163E66: mov     rcx, gs:20h
 * 0000000140163E6F: call    KiEntropyQueueDpc
 * 0000000140163E74: mov     ecx, 2
 * 0000000140163E79: call    HvlRouteInterrupt
 * 0000000140163E7E: cli
 * 0000000140163E7F: mov     rcx, gs:20h
 * 0000000140163E88: cmp     byte ptr [rcx+20h], 1
 * 0000000140163E8C: ja      short loc_140163F02
 * 0000000140163E8E: rdtsc
 * 0000000140163E90: shl     rdx, 20h
 * 0000000140163E94: or      rax, rdx
 * 0000000140163E97: sub     rax, [rcx+5B38h]
 * 0000000140163E9E: add     [rcx+5BF8h], rax
 * 0000000140163EA5: add     [rcx+5B38h], rax
 * 0000000140163EAC: mov     r8, rax
 * 0000000140163EAF: mov     rax, [rcx+8]
 * 0000000140163EB3: test    byte ptr [rax+2], 32h
 * 0000000140163EB7: jz      short loc_140163ECC
 * 0000000140163EB9: xor     edx, edx
 * 0000000140163EBB: call    KiBeginThreadAccountingPeriod
 * 0000000140163EC0: mov     rcx, gs:20h
 * 0000000140163EC9: inc     byte ptr [rcx+20h]
 * 0000000140163ECC: mov     dl, [rcx+6]
 * 0000000140163ECF: and     byte ptr [rcx+6], 0
 * 0000000140163ED3: cmp     byte ptr [rcx+7], 0
 * 0000000140163ED7: jnz     short loc_140163F02
 * 0000000140163ED9: test    dl, dl
 * 0000000140163EDB: jz      short loc_140163F02
 * 0000000140163EDD: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140163EE1: jnb     short loc_140163EEE
 * 0000000140163EE3: and     byte ptr [rcx+20h], 0
 * 0000000140163EE7: call    KiDpcInterruptBypass
 * 0000000140163EEC: jmp     short loc_140163F05
 * 0000000140163EEE: mov     ecx, 2
 * 0000000140163EF3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140163EF9: mov     rcx, gs:20h
 * 0000000140163F02: dec     byte ptr [rcx+20h]
 * 0000000140163F05: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163F09: mov     cr8, rcx
 * 0000000140163F0D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140163F14: cli
 * 0000000140163F15: test    [rbp+0E8h+arg_0], 1
 * 0000000140163F1C: jz      loc_140164195
 * 0000000140163F22: mov     rcx, gs:188h
 * 0000000140163F2B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140163F32: jz      short loc_140163F4D
 * 0000000140163F34: mov     ecx, 1
 * 0000000140163F39: mov     cr8, rcx
 * 0000000140163F3D: sti
 * 0000000140163F3E: call    KiInitiateUserApc
 * 0000000140163F43: cli
 * 0000000140163F44: mov     ecx, 0
 * 0000000140163F49: mov     cr8, rcx
 * 0000000140163F4D: mov     rcx, gs:188h
 * 0000000140163F56: test    dword ptr [rcx], 8000000h
 * 0000000140163F5C: jz      short loc_140163F63
 * 0000000140163F5E: call    KiRestoreSetContextState
 * 0000000140163F63: mov     rcx, gs:188h
 * 0000000140163F6C: test    dword ptr [rcx], 40010000h
 * 0000000140163F72: jz      short loc_140163F88
 * 0000000140163F74: test    byte ptr [rcx+2], 1
 * 0000000140163F78: jz      short loc_140163F88
 * 0000000140163F7A: call    KiCopyCounters
 * 0000000140163F7F: mov     rcx, gs:188h
 * 0000000140163F88: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163F8C: cmp     [rbp+0E8h+var_68], 0
 * 0000000140163F94: jz      short loc_140163F9B
 * 0000000140163F96: call    KiRestoreDebugRegisterState
 * 0000000140163F9B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163F9F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163FA3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140163FA7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140163FAB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163FAF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163FB3: mov     r11, [rbp+0E8h+var_108]
 * 0000000140163FB7: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163FBB: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163FBF: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163FC3: movzx   eax, word ptr gs:2EC2h
 * 0000000140163FCC: cmp     gs:2EBCh, ax
 * 0000000140163FD5: jz      short loc_140163FE9
 * 0000000140163FD7: mov     gs:2EBCh, ax
 * 0000000140163FE0: mov     ecx, 48h ; 'H'
 * 0000000140163FE5: xor     edx, edx
 * 0000000140163FE7: wrmsr
 * 0000000140163FE9: btr     word ptr gs:2EB8h, 2
 * 0000000140163FF4: jnb     short loc_140164004
 * 0000000140163FF6: mov     eax, 1
 * 0000000140163FFB: xor     edx, edx
 * 0000000140163FFD: mov     ecx, 49h ; 'I'
 * 0000000140164002: wrmsr
 * 0000000140164004: btr     word ptr gs:2EB8h, 5
 * 000000014016400F: jnb     loc_14016413A
 * 0000000140164015: call    loc_140164128
 * 000000014016401A: add     rsp, 8
 * 000000014016401E: call    loc_140164131
 * 0000000140164023: add     rsp, 8
 * 0000000140164027: call    loc_14016401A
 * 000000014016402C: add     rsp, 8
 * 0000000140164030: call    loc_140164023
 * 0000000140164035: add     rsp, 8
 * 0000000140164039: call    loc_14016402C
 * 000000014016403E: add     rsp, 8
 * 0000000140164042: call    loc_140164035
 * 0000000140164047: add     rsp, 8
 * 000000014016404B: call    loc_14016403E
 * 0000000140164050: add     rsp, 8
 * 0000000140164054: call    loc_140164047
 * 0000000140164059: add     rsp, 8
 * 000000014016405D: call    loc_140164050
 * 0000000140164062: add     rsp, 8
 * 0000000140164066: call    loc_140164059
 * 000000014016406B: add     rsp, 8
 * 000000014016406F: call    loc_140164062
 * 0000000140164074: add     rsp, 8
 * 0000000140164078: call    loc_14016406B
 * 000000014016407D: add     rsp, 8
 * 0000000140164081: call    loc_140164074
 * 0000000140164086: add     rsp, 8
 * 000000014016408A: call    loc_14016407D
 * 000000014016408F: add     rsp, 8
 * 0000000140164093: call    loc_140164086
 * 0000000140164098: add     rsp, 8
 * 000000014016409C: call    loc_14016408F
 * 00000001401640A1: add     rsp, 8
 * 00000001401640A5: call    loc_140164098
 * 00000001401640AA: add     rsp, 8
 * 00000001401640AE: call    loc_1401640A1
 * 00000001401640B3: add     rsp, 8
 * 00000001401640B7: call    loc_1401640AA
 * 00000001401640BC: add     rsp, 8
 * 00000001401640C0: call    loc_1401640B3
 * 00000001401640C5: add     rsp, 8
 * 00000001401640C9: call    loc_1401640BC
 * 00000001401640CE: add     rsp, 8
 * 00000001401640D2: call    loc_1401640C5
 * 00000001401640D7: add     rsp, 8
 * 00000001401640DB: call    loc_1401640CE
 * 00000001401640E0: add     rsp, 8
 * 00000001401640E4: call    loc_1401640D7
 * 00000001401640E9: add     rsp, 8
 * 00000001401640ED: call    loc_1401640E0
 * 00000001401640F2: add     rsp, 8
 * 00000001401640F6: call    loc_1401640E9
 * 00000001401640FB: add     rsp, 8
 * 00000001401640FF: call    loc_1401640F2
 * 0000000140164104: add     rsp, 8
 * 0000000140164108: call    loc_1401640FB
 * 000000014016410D: add     rsp, 8
 * 0000000140164111: call    loc_140164104
 * 0000000140164116: add     rsp, 8
 * 000000014016411A: call    loc_14016410D
 * 000000014016411F: add     rsp, 8
 * 0000000140164123: call    loc_140164116
 * 0000000140164128: add     rsp, 8
 * 000000014016412C: call    loc_14016411F
 * 0000000140164131: add     rsp, 8
 * 0000000140164135: mov     eax, 0DADAh
 * 000000014016413A: test    word ptr gs:2EB8h, 40h
 * 0000000140164145: jz      short loc_140164153
 * 0000000140164147: xor     eax, eax
 * 0000000140164149: xor     edx, edx
 * 000000014016414B: mov     ecx, 1
 * 0000000140164150: div     rcx
 * 0000000140164153: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164157: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016415B: mov     rax, [rbp+0E8h+var_138]
 * 000000014016415F: mov     rsp, rbp
 * 0000000140164162: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164169: add     rsp, 0E8h
 * 0000000140164170: test    cs:KiKvaShadow, 1
 * 0000000140164177: jz      short loc_14016417E
 * 0000000140164179: jmp     KiKernelExit
 * 000000014016417E: test    word ptr gs:2EB8h, 80h
 * 0000000140164189: jz      short loc_140164190
 * 000000014016418B: verw    [rsp+arg_18]
 * 0000000140164190: swapgs
 * 0000000140164193: iretq
 * 0000000140164195: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164199: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016419D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401641A1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401641A5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401641A9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401641AD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401641B1: mov     r11, [rbp+0E8h+var_108]
 * 00000001401641B5: mov     r10, [rbp+0E8h+var_110]
 * 00000001401641B9: mov     r9, [rbp+0E8h+var_118]
 * 00000001401641BD: mov     r8, [rbp+0E8h+var_120]
 * 00000001401641C1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401641C5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401641C9: mov     rax, [rbp+0E8h+var_138]
 * 00000001401641CD: mov     rsp, rbp
 * 00000001401641D0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401641D7: add     rsp, 0E8h
 * 00000001401641DE: iretq
 */
