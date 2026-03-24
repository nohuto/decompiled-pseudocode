/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401648F0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x14023FF80 (KiVmbusInterrupt3Shadow.c)
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
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BAD00 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401648F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401648F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401648F0: sub     rsp, 8
 * 00000001401648F4: push    rbp
 * 00000001401648F5: push    rsi
 * 00000001401648F6: sub     rsp, 150h
 * 00000001401648FD: lea     rbp, [rsp+80h]
 * 0000000140164905: mov     [rbp+0E8h+var_13D], 0
 * 0000000140164909: mov     [rbp+0E8h+var_138], rax
 * 000000014016490D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140164911: mov     [rbp+0E8h+var_128], rdx
 * 0000000140164915: mov     [rbp+0E8h+var_120], r8
 * 0000000140164919: mov     [rbp+0E8h+var_118], r9
 * 000000014016491D: mov     [rbp+0E8h+var_110], r10
 * 0000000140164921: mov     [rbp+0E8h+var_108], r11
 * 0000000140164925: test    [rbp+0E8h+arg_0], 1
 * 000000014016492C: jnz     short loc_14016495D
 * 000000014016492E: lfence
 * 0000000140164931: test    word ptr gs:2EB8h, 1
 * 000000014016493C: jnz     short loc_140164946
 * 000000014016493E: lfence
 * 0000000140164941: jmp     loc_140164B39
 * 0000000140164946: movzx   eax, word ptr gs:2EBCh
 * 000000014016494F: mov     ecx, 48h ; 'H'
 * 0000000140164954: xor     edx, edx
 * 0000000140164956: wrmsr
 * 0000000140164958: jmp     loc_140164B39
 * 000000014016495D: test    cs:KiKvaShadow, 1
 * 0000000140164964: jnz     short loc_140164969
 * 0000000140164966: swapgs
 * 0000000140164969: lfence
 * 000000014016496C: mov     r10, gs:188h
 * 0000000140164975: mov     rcx, gs:188h
 * 000000014016497E: mov     rcx, [rcx+220h]
 * 0000000140164985: mov     rcx, [rcx+7B8h]
 * 000000014016498C: mov     gs:2EB0h, rcx
 * 0000000140164995: movzx   eax, word ptr gs:2EBEh
 * 000000014016499E: cmp     gs:2EBCh, ax
 * 00000001401649A7: jz      short loc_1401649BB
 * 00000001401649A9: mov     gs:2EBCh, ax
 * 00000001401649B2: mov     ecx, 48h ; 'H'
 * 00000001401649B7: xor     edx, edx
 * 00000001401649B9: wrmsr
 * 00000001401649BB: movzx   edx, word ptr gs:2EB8h
 * 00000001401649C4: test    edx, 8
 * 00000001401649CA: jz      short loc_1401649E3
 * 00000001401649CC: mov     eax, 1
 * 00000001401649D1: xor     edx, edx
 * 00000001401649D3: mov     ecx, 49h ; 'I'
 * 00000001401649D8: wrmsr
 * 00000001401649DA: movzx   edx, word ptr gs:2EB8h
 * 00000001401649E3: test    edx, 2
 * 00000001401649E9: jz      loc_140164B14
 * 00000001401649EF: call    loc_140164B02
 * 00000001401649F4: add     rsp, 8
 * 00000001401649F8: call    loc_140164B0B
 * 00000001401649FD: add     rsp, 8
 * 0000000140164A01: call    loc_1401649F4
 * 0000000140164A06: add     rsp, 8
 * 0000000140164A0A: call    loc_1401649FD
 * 0000000140164A0F: add     rsp, 8
 * 0000000140164A13: call    loc_140164A06
 * 0000000140164A18: add     rsp, 8
 * 0000000140164A1C: call    loc_140164A0F
 * 0000000140164A21: add     rsp, 8
 * 0000000140164A25: call    loc_140164A18
 * 0000000140164A2A: add     rsp, 8
 * 0000000140164A2E: call    loc_140164A21
 * 0000000140164A33: add     rsp, 8
 * 0000000140164A37: call    loc_140164A2A
 * 0000000140164A3C: add     rsp, 8
 * 0000000140164A40: call    loc_140164A33
 * 0000000140164A45: add     rsp, 8
 * 0000000140164A49: call    loc_140164A3C
 * 0000000140164A4E: add     rsp, 8
 * 0000000140164A52: call    loc_140164A45
 * 0000000140164A57: add     rsp, 8
 * 0000000140164A5B: call    loc_140164A4E
 * 0000000140164A60: add     rsp, 8
 * 0000000140164A64: call    loc_140164A57
 * 0000000140164A69: add     rsp, 8
 * 0000000140164A6D: call    loc_140164A60
 * 0000000140164A72: add     rsp, 8
 * 0000000140164A76: call    loc_140164A69
 * 0000000140164A7B: add     rsp, 8
 * 0000000140164A7F: call    loc_140164A72
 * 0000000140164A84: add     rsp, 8
 * 0000000140164A88: call    loc_140164A7B
 * 0000000140164A8D: add     rsp, 8
 * 0000000140164A91: call    loc_140164A84
 * 0000000140164A96: add     rsp, 8
 * 0000000140164A9A: call    loc_140164A8D
 * 0000000140164A9F: add     rsp, 8
 * 0000000140164AA3: call    loc_140164A96
 * 0000000140164AA8: add     rsp, 8
 * 0000000140164AAC: call    loc_140164A9F
 * 0000000140164AB1: add     rsp, 8
 * 0000000140164AB5: call    loc_140164AA8
 * 0000000140164ABA: add     rsp, 8
 * 0000000140164ABE: call    loc_140164AB1
 * 0000000140164AC3: add     rsp, 8
 * 0000000140164AC7: call    loc_140164ABA
 * 0000000140164ACC: add     rsp, 8
 * 0000000140164AD0: call    loc_140164AC3
 * 0000000140164AD5: add     rsp, 8
 * 0000000140164AD9: call    loc_140164ACC
 * 0000000140164ADE: add     rsp, 8
 * 0000000140164AE2: call    loc_140164AD5
 * 0000000140164AE7: add     rsp, 8
 * 0000000140164AEB: call    loc_140164ADE
 * 0000000140164AF0: add     rsp, 8
 * 0000000140164AF4: call    loc_140164AE7
 * 0000000140164AF9: add     rsp, 8
 * 0000000140164AFD: call    loc_140164AF0
 * 0000000140164B02: add     rsp, 8
 * 0000000140164B06: call    loc_140164AF9
 * 0000000140164B0B: add     rsp, 8
 * 0000000140164B0F: mov     eax, 0DADAh
 * 0000000140164B14: test    edx, 100h
 * 0000000140164B1A: jz      short loc_140164B21
 * 0000000140164B1C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140164B21: lfence
 * 0000000140164B24: test    byte ptr [r10+3], 3
 * 0000000140164B29: mov     [rbp+0E8h+var_68], 0
 * 0000000140164B32: jz      short loc_140164B39
 * 0000000140164B34: call    KiSaveDebugRegisterState
 * 0000000140164B39: cld
 * 0000000140164B3A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140164B3E: ldmxcsr dword ptr gs:180h
 * 0000000140164B47: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140164B4B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140164B4F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140164B53: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140164B57: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140164B5B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140164B5F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140164B68: jz      short loc_140164B6F
 * 0000000140164B6A: call    KeWakeProcessor
 * 0000000140164B6F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140164B76: cmp     rax, [rbp+0E8h]
 * 0000000140164B7D: jnb     short loc_140164B98
 * 0000000140164B7F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140164B86: cmp     rax, [rbp+0E8h]
 * 0000000140164B8D: jb      short loc_140164B98
 * 0000000140164B8F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140164B93: call    KiCheckForSListAddress
 * 0000000140164B98: xor     esi, esi
 * 0000000140164B9A: inc     dword ptr gs:5C80h
 * 0000000140164BA2: mov     ecx, 3
 * 0000000140164BA7: mov     rax, cr8
 * 0000000140164BAB: mov     cr8, rcx
 * 0000000140164BAF: mov     [rbp+0E8h+var_13F], al
 * 0000000140164BB2: mov     [rbp+0E8h+var_148], 0
 * 0000000140164BB9: mov     rcx, gs:20h
 * 0000000140164BC2: inc     byte ptr [rcx+20h]
 * 0000000140164BC5: cmp     byte ptr [rcx+20h], 1
 * 0000000140164BC9: jnz     loc_140164C5F
 * 0000000140164BCF: rdtsc
 * 0000000140164BD1: shl     rdx, 20h
 * 0000000140164BD5: or      rax, rdx
 * 0000000140164BD8: mov     edx, [rcx+6320h]
 * 0000000140164BDE: mov     r11d, edx
 * 0000000140164BE1: and     edx, 7FFh
 * 0000000140164BE7: shr     edx, 5
 * 0000000140164BEA: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140164BF2: mov     edx, [r10]
 * 0000000140164BF5: ror     edx, 5
 * 0000000140164BF8: xor     edx, eax
 * 0000000140164BFA: mov     [r10], edx
 * 0000000140164BFD: add     r11d, 1
 * 0000000140164C01: mov     [rcx+6320h], r11d
 * 0000000140164C08: and     r11d, 3FFh
 * 0000000140164C0F: jnz     short loc_140164C18
 * 0000000140164C11: mov     [rbp+0E8h+var_148], 1
 * 0000000140164C18: mov     r8, [rcx+8]
 * 0000000140164C1C: sub     rax, [rcx+5B38h]
 * 0000000140164C23: add     [r8+48h], rax
 * 0000000140164C27: mov     edx, [r8+50h]
 * 0000000140164C2B: add     [rcx+5B38h], rax
 * 0000000140164C32: add     rdx, rax
 * 0000000140164C35: mov     ecx, edx
 * 0000000140164C37: shr     rdx, 20h
 * 0000000140164C3B: jz      short loc_140164C40
 * 0000000140164C3D: or      ecx, 0FFFFFFFFh
 * 0000000140164C40: mov     [r8+50h], ecx
 * 0000000140164C44: test    byte ptr [r8+2], 3Eh
 * 0000000140164C49: jz      short loc_140164C5F
 * 0000000140164C4B: mov     rdx, r8
 * 0000000140164C4E: mov     r8, rax
 * 0000000140164C51: mov     rcx, gs:20h
 * 0000000140164C5A: call    KiEndThreadAccountingPeriod
 * 0000000140164C5F: sti
 * 0000000140164C60: cmp     [rbp+0E8h+var_148], 0
 * 0000000140164C64: jz      short loc_140164C74
 * 0000000140164C66: mov     rcx, gs:20h
 * 0000000140164C6F: call    KiEntropyQueueDpc
 * 0000000140164C74: mov     ecx, 4
 * 0000000140164C79: call    HvlRouteInterrupt
 * 0000000140164C7E: cli
 * 0000000140164C7F: mov     rcx, gs:20h
 * 0000000140164C88: cmp     byte ptr [rcx+20h], 1
 * 0000000140164C8C: ja      short loc_140164D02
 * 0000000140164C8E: rdtsc
 * 0000000140164C90: shl     rdx, 20h
 * 0000000140164C94: or      rax, rdx
 * 0000000140164C97: sub     rax, [rcx+5B38h]
 * 0000000140164C9E: add     [rcx+5BF8h], rax
 * 0000000140164CA5: add     [rcx+5B38h], rax
 * 0000000140164CAC: mov     r8, rax
 * 0000000140164CAF: mov     rax, [rcx+8]
 * 0000000140164CB3: test    byte ptr [rax+2], 32h
 * 0000000140164CB7: jz      short loc_140164CCC
 * 0000000140164CB9: xor     edx, edx
 * 0000000140164CBB: call    KiBeginThreadAccountingPeriod
 * 0000000140164CC0: mov     rcx, gs:20h
 * 0000000140164CC9: inc     byte ptr [rcx+20h]
 * 0000000140164CCC: mov     dl, [rcx+6]
 * 0000000140164CCF: and     byte ptr [rcx+6], 0
 * 0000000140164CD3: cmp     byte ptr [rcx+7], 0
 * 0000000140164CD7: jnz     short loc_140164D02
 * 0000000140164CD9: test    dl, dl
 * 0000000140164CDB: jz      short loc_140164D02
 * 0000000140164CDD: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140164CE1: jnb     short loc_140164CEE
 * 0000000140164CE3: and     byte ptr [rcx+20h], 0
 * 0000000140164CE7: call    KiDpcInterruptBypass
 * 0000000140164CEC: jmp     short loc_140164D05
 * 0000000140164CEE: mov     ecx, 2
 * 0000000140164CF3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140164CF9: mov     rcx, gs:20h
 * 0000000140164D02: dec     byte ptr [rcx+20h]
 * 0000000140164D05: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140164D09: mov     cr8, rcx
 * 0000000140164D0D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140164D14: cli
 * 0000000140164D15: test    [rbp+0E8h+arg_0], 1
 * 0000000140164D1C: jz      loc_140164F95
 * 0000000140164D22: mov     rcx, gs:188h
 * 0000000140164D2B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140164D32: jz      short loc_140164D4D
 * 0000000140164D34: mov     ecx, 1
 * 0000000140164D39: mov     cr8, rcx
 * 0000000140164D3D: sti
 * 0000000140164D3E: call    KiInitiateUserApc
 * 0000000140164D43: cli
 * 0000000140164D44: mov     ecx, 0
 * 0000000140164D49: mov     cr8, rcx
 * 0000000140164D4D: mov     rcx, gs:188h
 * 0000000140164D56: test    dword ptr [rcx], 8000000h
 * 0000000140164D5C: jz      short loc_140164D63
 * 0000000140164D5E: call    KiRestoreSetContextState
 * 0000000140164D63: mov     rcx, gs:188h
 * 0000000140164D6C: test    dword ptr [rcx], 40010000h
 * 0000000140164D72: jz      short loc_140164D88
 * 0000000140164D74: test    byte ptr [rcx+2], 1
 * 0000000140164D78: jz      short loc_140164D88
 * 0000000140164D7A: call    KiCopyCounters
 * 0000000140164D7F: mov     rcx, gs:188h
 * 0000000140164D88: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164D8C: cmp     [rbp+0E8h+var_68], 0
 * 0000000140164D94: jz      short loc_140164D9B
 * 0000000140164D96: call    KiRestoreDebugRegisterState
 * 0000000140164D9B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140164D9F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164DA3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164DA7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164DAB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140164DAF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164DB3: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164DB7: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164DBB: mov     r9, [rbp+0E8h+var_118]
 * 0000000140164DBF: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164DC3: movzx   eax, word ptr gs:2EC2h
 * 0000000140164DCC: cmp     gs:2EBCh, ax
 * 0000000140164DD5: jz      short loc_140164DE9
 * 0000000140164DD7: mov     gs:2EBCh, ax
 * 0000000140164DE0: mov     ecx, 48h ; 'H'
 * 0000000140164DE5: xor     edx, edx
 * 0000000140164DE7: wrmsr
 * 0000000140164DE9: btr     word ptr gs:2EB8h, 2
 * 0000000140164DF4: jnb     short loc_140164E04
 * 0000000140164DF6: mov     eax, 1
 * 0000000140164DFB: xor     edx, edx
 * 0000000140164DFD: mov     ecx, 49h ; 'I'
 * 0000000140164E02: wrmsr
 * 0000000140164E04: btr     word ptr gs:2EB8h, 5
 * 0000000140164E0F: jnb     loc_140164F3A
 * 0000000140164E15: call    loc_140164F28
 * 0000000140164E1A: add     rsp, 8
 * 0000000140164E1E: call    loc_140164F31
 * 0000000140164E23: add     rsp, 8
 * 0000000140164E27: call    loc_140164E1A
 * 0000000140164E2C: add     rsp, 8
 * 0000000140164E30: call    loc_140164E23
 * 0000000140164E35: add     rsp, 8
 * 0000000140164E39: call    loc_140164E2C
 * 0000000140164E3E: add     rsp, 8
 * 0000000140164E42: call    loc_140164E35
 * 0000000140164E47: add     rsp, 8
 * 0000000140164E4B: call    loc_140164E3E
 * 0000000140164E50: add     rsp, 8
 * 0000000140164E54: call    loc_140164E47
 * 0000000140164E59: add     rsp, 8
 * 0000000140164E5D: call    loc_140164E50
 * 0000000140164E62: add     rsp, 8
 * 0000000140164E66: call    loc_140164E59
 * 0000000140164E6B: add     rsp, 8
 * 0000000140164E6F: call    loc_140164E62
 * 0000000140164E74: add     rsp, 8
 * 0000000140164E78: call    loc_140164E6B
 * 0000000140164E7D: add     rsp, 8
 * 0000000140164E81: call    loc_140164E74
 * 0000000140164E86: add     rsp, 8
 * 0000000140164E8A: call    loc_140164E7D
 * 0000000140164E8F: add     rsp, 8
 * 0000000140164E93: call    loc_140164E86
 * 0000000140164E98: add     rsp, 8
 * 0000000140164E9C: call    loc_140164E8F
 * 0000000140164EA1: add     rsp, 8
 * 0000000140164EA5: call    loc_140164E98
 * 0000000140164EAA: add     rsp, 8
 * 0000000140164EAE: call    loc_140164EA1
 * 0000000140164EB3: add     rsp, 8
 * 0000000140164EB7: call    loc_140164EAA
 * 0000000140164EBC: add     rsp, 8
 * 0000000140164EC0: call    loc_140164EB3
 * 0000000140164EC5: add     rsp, 8
 * 0000000140164EC9: call    loc_140164EBC
 * 0000000140164ECE: add     rsp, 8
 * 0000000140164ED2: call    loc_140164EC5
 * 0000000140164ED7: add     rsp, 8
 * 0000000140164EDB: call    loc_140164ECE
 * 0000000140164EE0: add     rsp, 8
 * 0000000140164EE4: call    loc_140164ED7
 * 0000000140164EE9: add     rsp, 8
 * 0000000140164EED: call    loc_140164EE0
 * 0000000140164EF2: add     rsp, 8
 * 0000000140164EF6: call    loc_140164EE9
 * 0000000140164EFB: add     rsp, 8
 * 0000000140164EFF: call    loc_140164EF2
 * 0000000140164F04: add     rsp, 8
 * 0000000140164F08: call    loc_140164EFB
 * 0000000140164F0D: add     rsp, 8
 * 0000000140164F11: call    loc_140164F04
 * 0000000140164F16: add     rsp, 8
 * 0000000140164F1A: call    loc_140164F0D
 * 0000000140164F1F: add     rsp, 8
 * 0000000140164F23: call    loc_140164F16
 * 0000000140164F28: add     rsp, 8
 * 0000000140164F2C: call    loc_140164F1F
 * 0000000140164F31: add     rsp, 8
 * 0000000140164F35: mov     eax, 0DADAh
 * 0000000140164F3A: test    word ptr gs:2EB8h, 40h
 * 0000000140164F45: jz      short loc_140164F53
 * 0000000140164F47: xor     eax, eax
 * 0000000140164F49: xor     edx, edx
 * 0000000140164F4B: mov     ecx, 1
 * 0000000140164F50: div     rcx
 * 0000000140164F53: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164F57: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164F5B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140164F5F: mov     rsp, rbp
 * 0000000140164F62: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164F69: add     rsp, 0E8h
 * 0000000140164F70: test    cs:KiKvaShadow, 1
 * 0000000140164F77: jz      short loc_140164F7E
 * 0000000140164F79: jmp     KiKernelExit
 * 0000000140164F7E: test    word ptr gs:2EB8h, 80h
 * 0000000140164F89: jz      short loc_140164F90
 * 0000000140164F8B: verw    [rsp+arg_18]
 * 0000000140164F90: swapgs
 * 0000000140164F93: iretq
 * 0000000140164F95: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164F99: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140164F9D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164FA1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164FA5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164FA9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140164FAD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164FB1: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164FB5: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164FB9: mov     r9, [rbp+0E8h+var_118]
 * 0000000140164FBD: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164FC1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164FC5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164FC9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140164FCD: mov     rsp, rbp
 * 0000000140164FD0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164FD7: add     rsp, 0E8h
 * 0000000140164FDE: iretq
 */
