/*
 * XREFs of KiHvInterrupt @ 0x140162BB0
 * Callers:
 *     KiHvInterruptShadow @ 0x14023FD80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400A8F04 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BABE4 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140162BB0
 * Reason: Hex-Rays returned no pseudocode for 0x140162BB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162BB0: sub     rsp, 8
 * 0000000140162BB4: push    rbp
 * 0000000140162BB5: push    rsi
 * 0000000140162BB6: sub     rsp, 150h
 * 0000000140162BBD: lea     rbp, [rsp+80h]
 * 0000000140162BC5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140162BC9: mov     [rbp+0E8h+var_138], rax
 * 0000000140162BCD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162BD1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162BD5: mov     [rbp+0E8h+var_120], r8
 * 0000000140162BD9: mov     [rbp+0E8h+var_118], r9
 * 0000000140162BDD: mov     [rbp+0E8h+var_110], r10
 * 0000000140162BE1: mov     [rbp+0E8h+var_108], r11
 * 0000000140162BE5: test    [rbp+0E8h+arg_0], 1
 * 0000000140162BEC: jnz     short loc_140162C1D
 * 0000000140162BEE: lfence
 * 0000000140162BF1: test    word ptr gs:2EB8h, 1
 * 0000000140162BFC: jnz     short loc_140162C06
 * 0000000140162BFE: lfence
 * 0000000140162C01: jmp     loc_140162DF9
 * 0000000140162C06: movzx   eax, word ptr gs:2EBCh
 * 0000000140162C0F: mov     ecx, 48h ; 'H'
 * 0000000140162C14: xor     edx, edx
 * 0000000140162C16: wrmsr
 * 0000000140162C18: jmp     loc_140162DF9
 * 0000000140162C1D: test    cs:KiKvaShadow, 1
 * 0000000140162C24: jnz     short loc_140162C29
 * 0000000140162C26: swapgs
 * 0000000140162C29: lfence
 * 0000000140162C2C: mov     r10, gs:188h
 * 0000000140162C35: mov     rcx, gs:188h
 * 0000000140162C3E: mov     rcx, [rcx+220h]
 * 0000000140162C45: mov     rcx, [rcx+7B8h]
 * 0000000140162C4C: mov     gs:2EB0h, rcx
 * 0000000140162C55: movzx   eax, word ptr gs:2EBEh
 * 0000000140162C5E: cmp     gs:2EBCh, ax
 * 0000000140162C67: jz      short loc_140162C7B
 * 0000000140162C69: mov     gs:2EBCh, ax
 * 0000000140162C72: mov     ecx, 48h ; 'H'
 * 0000000140162C77: xor     edx, edx
 * 0000000140162C79: wrmsr
 * 0000000140162C7B: movzx   edx, word ptr gs:2EB8h
 * 0000000140162C84: test    edx, 8
 * 0000000140162C8A: jz      short loc_140162CA3
 * 0000000140162C8C: mov     eax, 1
 * 0000000140162C91: xor     edx, edx
 * 0000000140162C93: mov     ecx, 49h ; 'I'
 * 0000000140162C98: wrmsr
 * 0000000140162C9A: movzx   edx, word ptr gs:2EB8h
 * 0000000140162CA3: test    edx, 2
 * 0000000140162CA9: jz      loc_140162DD4
 * 0000000140162CAF: call    loc_140162DC2
 * 0000000140162CB4: add     rsp, 8
 * 0000000140162CB8: call    loc_140162DCB
 * 0000000140162CBD: add     rsp, 8
 * 0000000140162CC1: call    loc_140162CB4
 * 0000000140162CC6: add     rsp, 8
 * 0000000140162CCA: call    loc_140162CBD
 * 0000000140162CCF: add     rsp, 8
 * 0000000140162CD3: call    loc_140162CC6
 * 0000000140162CD8: add     rsp, 8
 * 0000000140162CDC: call    loc_140162CCF
 * 0000000140162CE1: add     rsp, 8
 * 0000000140162CE5: call    loc_140162CD8
 * 0000000140162CEA: add     rsp, 8
 * 0000000140162CEE: call    loc_140162CE1
 * 0000000140162CF3: add     rsp, 8
 * 0000000140162CF7: call    loc_140162CEA
 * 0000000140162CFC: add     rsp, 8
 * 0000000140162D00: call    loc_140162CF3
 * 0000000140162D05: add     rsp, 8
 * 0000000140162D09: call    loc_140162CFC
 * 0000000140162D0E: add     rsp, 8
 * 0000000140162D12: call    loc_140162D05
 * 0000000140162D17: add     rsp, 8
 * 0000000140162D1B: call    loc_140162D0E
 * 0000000140162D20: add     rsp, 8
 * 0000000140162D24: call    loc_140162D17
 * 0000000140162D29: add     rsp, 8
 * 0000000140162D2D: call    loc_140162D20
 * 0000000140162D32: add     rsp, 8
 * 0000000140162D36: call    loc_140162D29
 * 0000000140162D3B: add     rsp, 8
 * 0000000140162D3F: call    loc_140162D32
 * 0000000140162D44: add     rsp, 8
 * 0000000140162D48: call    loc_140162D3B
 * 0000000140162D4D: add     rsp, 8
 * 0000000140162D51: call    loc_140162D44
 * 0000000140162D56: add     rsp, 8
 * 0000000140162D5A: call    loc_140162D4D
 * 0000000140162D5F: add     rsp, 8
 * 0000000140162D63: call    loc_140162D56
 * 0000000140162D68: add     rsp, 8
 * 0000000140162D6C: call    loc_140162D5F
 * 0000000140162D71: add     rsp, 8
 * 0000000140162D75: call    loc_140162D68
 * 0000000140162D7A: add     rsp, 8
 * 0000000140162D7E: call    loc_140162D71
 * 0000000140162D83: add     rsp, 8
 * 0000000140162D87: call    loc_140162D7A
 * 0000000140162D8C: add     rsp, 8
 * 0000000140162D90: call    loc_140162D83
 * 0000000140162D95: add     rsp, 8
 * 0000000140162D99: call    loc_140162D8C
 * 0000000140162D9E: add     rsp, 8
 * 0000000140162DA2: call    loc_140162D95
 * 0000000140162DA7: add     rsp, 8
 * 0000000140162DAB: call    loc_140162D9E
 * 0000000140162DB0: add     rsp, 8
 * 0000000140162DB4: call    loc_140162DA7
 * 0000000140162DB9: add     rsp, 8
 * 0000000140162DBD: call    loc_140162DB0
 * 0000000140162DC2: add     rsp, 8
 * 0000000140162DC6: call    loc_140162DB9
 * 0000000140162DCB: add     rsp, 8
 * 0000000140162DCF: mov     eax, 0DADAh
 * 0000000140162DD4: test    edx, 100h
 * 0000000140162DDA: jz      short loc_140162DE1
 * 0000000140162DDC: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140162DE1: lfence
 * 0000000140162DE4: test    byte ptr [r10+3], 3
 * 0000000140162DE9: mov     [rbp+0E8h+var_68], 0
 * 0000000140162DF2: jz      short loc_140162DF9
 * 0000000140162DF4: call    KiSaveDebugRegisterState
 * 0000000140162DF9: cld
 * 0000000140162DFA: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140162DFE: ldmxcsr dword ptr gs:180h
 * 0000000140162E07: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140162E0B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140162E0F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140162E13: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140162E17: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140162E1B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140162E1F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140162E28: jz      short loc_140162E2F
 * 0000000140162E2A: call    KeWakeProcessor
 * 0000000140162E2F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140162E36: cmp     rax, [rbp+0E8h]
 * 0000000140162E3D: jnb     short loc_140162E58
 * 0000000140162E3F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140162E46: cmp     rax, [rbp+0E8h]
 * 0000000140162E4D: jb      short loc_140162E58
 * 0000000140162E4F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140162E53: call    KiCheckForSListAddress
 * 0000000140162E58: xor     esi, esi
 * 0000000140162E5A: inc     dword ptr gs:5C80h
 * 0000000140162E62: mov     ecx, 3
 * 0000000140162E67: mov     rax, cr8
 * 0000000140162E6B: mov     cr8, rcx
 * 0000000140162E6F: mov     [rbp+0E8h+var_13F], al
 * 0000000140162E72: mov     [rbp+0E8h+var_148], 0
 * 0000000140162E79: mov     rcx, gs:20h
 * 0000000140162E82: inc     byte ptr [rcx+20h]
 * 0000000140162E85: cmp     byte ptr [rcx+20h], 1
 * 0000000140162E89: jnz     loc_140162F1F
 * 0000000140162E8F: rdtsc
 * 0000000140162E91: shl     rdx, 20h
 * 0000000140162E95: or      rax, rdx
 * 0000000140162E98: mov     edx, [rcx+6320h]
 * 0000000140162E9E: mov     r11d, edx
 * 0000000140162EA1: and     edx, 7FFh
 * 0000000140162EA7: shr     edx, 5
 * 0000000140162EAA: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140162EB2: mov     edx, [r10]
 * 0000000140162EB5: ror     edx, 5
 * 0000000140162EB8: xor     edx, eax
 * 0000000140162EBA: mov     [r10], edx
 * 0000000140162EBD: add     r11d, 1
 * 0000000140162EC1: mov     [rcx+6320h], r11d
 * 0000000140162EC8: and     r11d, 3FFh
 * 0000000140162ECF: jnz     short loc_140162ED8
 * 0000000140162ED1: mov     [rbp+0E8h+var_148], 1
 * 0000000140162ED8: mov     r8, [rcx+8]
 * 0000000140162EDC: sub     rax, [rcx+5B38h]
 * 0000000140162EE3: add     [r8+48h], rax
 * 0000000140162EE7: mov     edx, [r8+50h]
 * 0000000140162EEB: add     [rcx+5B38h], rax
 * 0000000140162EF2: add     rdx, rax
 * 0000000140162EF5: mov     ecx, edx
 * 0000000140162EF7: shr     rdx, 20h
 * 0000000140162EFB: jz      short loc_140162F00
 * 0000000140162EFD: or      ecx, 0FFFFFFFFh
 * 0000000140162F00: mov     [r8+50h], ecx
 * 0000000140162F04: test    byte ptr [r8+2], 3Eh
 * 0000000140162F09: jz      short loc_140162F1F
 * 0000000140162F0B: mov     rdx, r8
 * 0000000140162F0E: mov     r8, rax
 * 0000000140162F11: mov     rcx, gs:20h
 * 0000000140162F1A: call    KiEndThreadAccountingPeriod
 * 0000000140162F1F: sti
 * 0000000140162F20: cmp     [rbp+0E8h+var_148], 0
 * 0000000140162F24: jz      short loc_140162F34
 * 0000000140162F26: mov     rcx, gs:20h
 * 0000000140162F2F: call    KiEntropyQueueDpc
 * 0000000140162F34: xor     ecx, ecx
 * 0000000140162F36: call    HvlRouteInterrupt
 * 0000000140162F3B: test    cs:HvlEnlightenments, 1000h
 * 0000000140162F45: jz      short loc_140162F51
 * 0000000140162F47: cli
 * 0000000140162F48: mov     rcx, rsi
 * 0000000140162F4B: call    HalPerformEndOfInterrupt_0
 * 0000000140162F50: sti
 * 0000000140162F51: cli
 * 0000000140162F52: mov     rcx, gs:20h
 * 0000000140162F5B: cmp     byte ptr [rcx+20h], 1
 * 0000000140162F5F: ja      short loc_140162FD5
 * 0000000140162F61: rdtsc
 * 0000000140162F63: shl     rdx, 20h
 * 0000000140162F67: or      rax, rdx
 * 0000000140162F6A: sub     rax, [rcx+5B38h]
 * 0000000140162F71: add     [rcx+5BF8h], rax
 * 0000000140162F78: add     [rcx+5B38h], rax
 * 0000000140162F7F: mov     r8, rax
 * 0000000140162F82: mov     rax, [rcx+8]
 * 0000000140162F86: test    byte ptr [rax+2], 32h
 * 0000000140162F8A: jz      short loc_140162F9F
 * 0000000140162F8C: xor     edx, edx
 * 0000000140162F8E: call    KiBeginThreadAccountingPeriod
 * 0000000140162F93: mov     rcx, gs:20h
 * 0000000140162F9C: inc     byte ptr [rcx+20h]
 * 0000000140162F9F: mov     dl, [rcx+6]
 * 0000000140162FA2: and     byte ptr [rcx+6], 0
 * 0000000140162FA6: cmp     byte ptr [rcx+7], 0
 * 0000000140162FAA: jnz     short loc_140162FD5
 * 0000000140162FAC: test    dl, dl
 * 0000000140162FAE: jz      short loc_140162FD5
 * 0000000140162FB0: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140162FB4: jnb     short loc_140162FC1
 * 0000000140162FB6: and     byte ptr [rcx+20h], 0
 * 0000000140162FBA: call    KiDpcInterruptBypass
 * 0000000140162FBF: jmp     short loc_140162FD8
 * 0000000140162FC1: mov     ecx, 2
 * 0000000140162FC6: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140162FCC: mov     rcx, gs:20h
 * 0000000140162FD5: dec     byte ptr [rcx+20h]
 * 0000000140162FD8: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140162FDC: mov     cr8, rcx
 * 0000000140162FE0: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140162FE7: cli
 * 0000000140162FE8: test    [rbp+0E8h+arg_0], 1
 * 0000000140162FEF: jz      loc_140163268
 * 0000000140162FF5: mov     rcx, gs:188h
 * 0000000140162FFE: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140163005: jz      short loc_140163020
 * 0000000140163007: mov     ecx, 1
 * 000000014016300C: mov     cr8, rcx
 * 0000000140163010: sti
 * 0000000140163011: call    KiInitiateUserApc
 * 0000000140163016: cli
 * 0000000140163017: mov     ecx, 0
 * 000000014016301C: mov     cr8, rcx
 * 0000000140163020: mov     rcx, gs:188h
 * 0000000140163029: test    dword ptr [rcx], 8000000h
 * 000000014016302F: jz      short loc_140163036
 * 0000000140163031: call    KiRestoreSetContextState
 * 0000000140163036: mov     rcx, gs:188h
 * 000000014016303F: test    dword ptr [rcx], 40010000h
 * 0000000140163045: jz      short loc_14016305B
 * 0000000140163047: test    byte ptr [rcx+2], 1
 * 000000014016304B: jz      short loc_14016305B
 * 000000014016304D: call    KiCopyCounters
 * 0000000140163052: mov     rcx, gs:188h
 * 000000014016305B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016305F: cmp     [rbp+0E8h+var_68], 0
 * 0000000140163067: jz      short loc_14016306E
 * 0000000140163069: call    KiRestoreDebugRegisterState
 * 000000014016306E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163072: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163076: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016307A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016307E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163082: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163086: mov     r11, [rbp+0E8h+var_108]
 * 000000014016308A: mov     r10, [rbp+0E8h+var_110]
 * 000000014016308E: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163092: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163096: movzx   eax, word ptr gs:2EC2h
 * 000000014016309F: cmp     gs:2EBCh, ax
 * 00000001401630A8: jz      short loc_1401630BC
 * 00000001401630AA: mov     gs:2EBCh, ax
 * 00000001401630B3: mov     ecx, 48h ; 'H'
 * 00000001401630B8: xor     edx, edx
 * 00000001401630BA: wrmsr
 * 00000001401630BC: btr     word ptr gs:2EB8h, 2
 * 00000001401630C7: jnb     short loc_1401630D7
 * 00000001401630C9: mov     eax, 1
 * 00000001401630CE: xor     edx, edx
 * 00000001401630D0: mov     ecx, 49h ; 'I'
 * 00000001401630D5: wrmsr
 * 00000001401630D7: btr     word ptr gs:2EB8h, 5
 * 00000001401630E2: jnb     loc_14016320D
 * 00000001401630E8: call    loc_1401631FB
 * 00000001401630ED: add     rsp, 8
 * 00000001401630F1: call    loc_140163204
 * 00000001401630F6: add     rsp, 8
 * 00000001401630FA: call    loc_1401630ED
 * 00000001401630FF: add     rsp, 8
 * 0000000140163103: call    loc_1401630F6
 * 0000000140163108: add     rsp, 8
 * 000000014016310C: call    loc_1401630FF
 * 0000000140163111: add     rsp, 8
 * 0000000140163115: call    loc_140163108
 * 000000014016311A: add     rsp, 8
 * 000000014016311E: call    loc_140163111
 * 0000000140163123: add     rsp, 8
 * 0000000140163127: call    loc_14016311A
 * 000000014016312C: add     rsp, 8
 * 0000000140163130: call    loc_140163123
 * 0000000140163135: add     rsp, 8
 * 0000000140163139: call    loc_14016312C
 * 000000014016313E: add     rsp, 8
 * 0000000140163142: call    loc_140163135
 * 0000000140163147: add     rsp, 8
 * 000000014016314B: call    loc_14016313E
 * 0000000140163150: add     rsp, 8
 * 0000000140163154: call    loc_140163147
 * 0000000140163159: add     rsp, 8
 * 000000014016315D: call    loc_140163150
 * 0000000140163162: add     rsp, 8
 * 0000000140163166: call    loc_140163159
 * 000000014016316B: add     rsp, 8
 * 000000014016316F: call    loc_140163162
 * 0000000140163174: add     rsp, 8
 * 0000000140163178: call    loc_14016316B
 * 000000014016317D: add     rsp, 8
 * 0000000140163181: call    loc_140163174
 * 0000000140163186: add     rsp, 8
 * 000000014016318A: call    loc_14016317D
 * 000000014016318F: add     rsp, 8
 * 0000000140163193: call    loc_140163186
 * 0000000140163198: add     rsp, 8
 * 000000014016319C: call    loc_14016318F
 * 00000001401631A1: add     rsp, 8
 * 00000001401631A5: call    loc_140163198
 * 00000001401631AA: add     rsp, 8
 * 00000001401631AE: call    loc_1401631A1
 * 00000001401631B3: add     rsp, 8
 * 00000001401631B7: call    loc_1401631AA
 * 00000001401631BC: add     rsp, 8
 * 00000001401631C0: call    loc_1401631B3
 * 00000001401631C5: add     rsp, 8
 * 00000001401631C9: call    loc_1401631BC
 * 00000001401631CE: add     rsp, 8
 * 00000001401631D2: call    loc_1401631C5
 * 00000001401631D7: add     rsp, 8
 * 00000001401631DB: call    loc_1401631CE
 * 00000001401631E0: add     rsp, 8
 * 00000001401631E4: call    loc_1401631D7
 * 00000001401631E9: add     rsp, 8
 * 00000001401631ED: call    loc_1401631E0
 * 00000001401631F2: add     rsp, 8
 * 00000001401631F6: call    loc_1401631E9
 * 00000001401631FB: add     rsp, 8
 * 00000001401631FF: call    loc_1401631F2
 * 0000000140163204: add     rsp, 8
 * 0000000140163208: mov     eax, 0DADAh
 * 000000014016320D: test    word ptr gs:2EB8h, 40h
 * 0000000140163218: jz      short loc_140163226
 * 000000014016321A: xor     eax, eax
 * 000000014016321C: xor     edx, edx
 * 000000014016321E: mov     ecx, 1
 * 0000000140163223: div     rcx
 * 0000000140163226: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016322A: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016322E: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163232: mov     rsp, rbp
 * 0000000140163235: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016323C: add     rsp, 0E8h
 * 0000000140163243: test    cs:KiKvaShadow, 1
 * 000000014016324A: jz      short loc_140163251
 * 000000014016324C: jmp     KiKernelExit
 * 0000000140163251: test    word ptr gs:2EB8h, 80h
 * 000000014016325C: jz      short loc_140163263
 * 000000014016325E: verw    [rsp+arg_18]
 * 0000000140163263: swapgs
 * 0000000140163266: iretq
 * 0000000140163268: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016326C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163270: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163274: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140163278: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016327C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163280: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163284: mov     r11, [rbp+0E8h+var_108]
 * 0000000140163288: mov     r10, [rbp+0E8h+var_110]
 * 000000014016328C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163290: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163294: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140163298: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016329C: mov     rax, [rbp+0E8h+var_138]
 * 00000001401632A0: mov     rsp, rbp
 * 00000001401632A3: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401632AA: add     rsp, 0E8h
 * 00000001401632B1: iretq
 */
