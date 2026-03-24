/*
 * XREFs of KiHvInterrupt @ 0x140187990
 * Callers:
 *     KiHvInterruptShadow @ 0x140274D00 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401E563C (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140187990
 * Reason: Hex-Rays returned no pseudocode for 0x140187990
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187990: sub     rsp, 8
 * 0000000140187994: push    rbp
 * 0000000140187995: push    rsi
 * 0000000140187996: sub     rsp, 150h
 * 000000014018799D: lea     rbp, [rsp+80h]
 * 00000001401879A5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401879A9: mov     [rbp+0E8h+var_138], rax
 * 00000001401879AD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401879B1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401879B5: mov     [rbp+0E8h+var_120], r8
 * 00000001401879B9: mov     [rbp+0E8h+var_118], r9
 * 00000001401879BD: mov     [rbp+0E8h+var_110], r10
 * 00000001401879C1: mov     [rbp+0E8h+var_108], r11
 * 00000001401879C5: test    [rbp+0E8h+arg_0], 1
 * 00000001401879CC: jnz     short loc_1401879FD
 * 00000001401879CE: lfence
 * 00000001401879D1: test    word ptr gs:2EB0h, 1
 * 00000001401879DC: jnz     short loc_1401879E6
 * 00000001401879DE: lfence
 * 00000001401879E1: jmp     loc_140187BD9
 * 00000001401879E6: movzx   eax, word ptr gs:2EB4h
 * 00000001401879EF: mov     ecx, 48h ; 'H'
 * 00000001401879F4: xor     edx, edx
 * 00000001401879F6: wrmsr
 * 00000001401879F8: jmp     loc_140187BD9
 * 00000001401879FD: test    cs:KiKvaShadow, 1
 * 0000000140187A04: jnz     short loc_140187A09
 * 0000000140187A06: swapgs
 * 0000000140187A09: lfence
 * 0000000140187A0C: mov     r10, gs:188h
 * 0000000140187A15: mov     rcx, gs:188h
 * 0000000140187A1E: mov     rcx, [rcx+220h]
 * 0000000140187A25: mov     rcx, [rcx+7A0h]
 * 0000000140187A2C: mov     gs:2EA8h, rcx
 * 0000000140187A35: movzx   eax, word ptr gs:2EB6h
 * 0000000140187A3E: cmp     gs:2EB4h, ax
 * 0000000140187A47: jz      short loc_140187A5B
 * 0000000140187A49: mov     gs:2EB4h, ax
 * 0000000140187A52: mov     ecx, 48h ; 'H'
 * 0000000140187A57: xor     edx, edx
 * 0000000140187A59: wrmsr
 * 0000000140187A5B: movzx   edx, word ptr gs:2EB0h
 * 0000000140187A64: test    edx, 8
 * 0000000140187A6A: jz      short loc_140187A83
 * 0000000140187A6C: mov     eax, 1
 * 0000000140187A71: xor     edx, edx
 * 0000000140187A73: mov     ecx, 49h ; 'I'
 * 0000000140187A78: wrmsr
 * 0000000140187A7A: movzx   edx, word ptr gs:2EB0h
 * 0000000140187A83: test    edx, 2
 * 0000000140187A89: jz      loc_140187BB4
 * 0000000140187A8F: call    loc_140187BA2
 * 0000000140187A94: add     rsp, 8
 * 0000000140187A98: call    loc_140187BAB
 * 0000000140187A9D: add     rsp, 8
 * 0000000140187AA1: call    loc_140187A94
 * 0000000140187AA6: add     rsp, 8
 * 0000000140187AAA: call    loc_140187A9D
 * 0000000140187AAF: add     rsp, 8
 * 0000000140187AB3: call    loc_140187AA6
 * 0000000140187AB8: add     rsp, 8
 * 0000000140187ABC: call    loc_140187AAF
 * 0000000140187AC1: add     rsp, 8
 * 0000000140187AC5: call    loc_140187AB8
 * 0000000140187ACA: add     rsp, 8
 * 0000000140187ACE: call    loc_140187AC1
 * 0000000140187AD3: add     rsp, 8
 * 0000000140187AD7: call    loc_140187ACA
 * 0000000140187ADC: add     rsp, 8
 * 0000000140187AE0: call    loc_140187AD3
 * 0000000140187AE5: add     rsp, 8
 * 0000000140187AE9: call    loc_140187ADC
 * 0000000140187AEE: add     rsp, 8
 * 0000000140187AF2: call    loc_140187AE5
 * 0000000140187AF7: add     rsp, 8
 * 0000000140187AFB: call    loc_140187AEE
 * 0000000140187B00: add     rsp, 8
 * 0000000140187B04: call    loc_140187AF7
 * 0000000140187B09: add     rsp, 8
 * 0000000140187B0D: call    loc_140187B00
 * 0000000140187B12: add     rsp, 8
 * 0000000140187B16: call    loc_140187B09
 * 0000000140187B1B: add     rsp, 8
 * 0000000140187B1F: call    loc_140187B12
 * 0000000140187B24: add     rsp, 8
 * 0000000140187B28: call    loc_140187B1B
 * 0000000140187B2D: add     rsp, 8
 * 0000000140187B31: call    loc_140187B24
 * 0000000140187B36: add     rsp, 8
 * 0000000140187B3A: call    loc_140187B2D
 * 0000000140187B3F: add     rsp, 8
 * 0000000140187B43: call    loc_140187B36
 * 0000000140187B48: add     rsp, 8
 * 0000000140187B4C: call    loc_140187B3F
 * 0000000140187B51: add     rsp, 8
 * 0000000140187B55: call    loc_140187B48
 * 0000000140187B5A: add     rsp, 8
 * 0000000140187B5E: call    loc_140187B51
 * 0000000140187B63: add     rsp, 8
 * 0000000140187B67: call    loc_140187B5A
 * 0000000140187B6C: add     rsp, 8
 * 0000000140187B70: call    loc_140187B63
 * 0000000140187B75: add     rsp, 8
 * 0000000140187B79: call    loc_140187B6C
 * 0000000140187B7E: add     rsp, 8
 * 0000000140187B82: call    loc_140187B75
 * 0000000140187B87: add     rsp, 8
 * 0000000140187B8B: call    loc_140187B7E
 * 0000000140187B90: add     rsp, 8
 * 0000000140187B94: call    loc_140187B87
 * 0000000140187B99: add     rsp, 8
 * 0000000140187B9D: call    loc_140187B90
 * 0000000140187BA2: add     rsp, 8
 * 0000000140187BA6: call    loc_140187B99
 * 0000000140187BAB: add     rsp, 8
 * 0000000140187BAF: mov     eax, 0DADAh
 * 0000000140187BB4: test    edx, 100h
 * 0000000140187BBA: jz      short loc_140187BC1
 * 0000000140187BBC: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140187BC1: lfence
 * 0000000140187BC4: test    byte ptr [r10+3], 3
 * 0000000140187BC9: mov     [rbp+0E8h+var_68], 0
 * 0000000140187BD2: jz      short loc_140187BD9
 * 0000000140187BD4: call    KiSaveDebugRegisterState
 * 0000000140187BD9: cld
 * 0000000140187BDA: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187BDE: ldmxcsr dword ptr gs:180h
 * 0000000140187BE7: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187BEB: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187BEF: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187BF3: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140187BF7: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140187BFB: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140187BFF: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140187C08: jz      short loc_140187C0F
 * 0000000140187C0A: call    KeWakeProcessor
 * 0000000140187C0F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140187C16: cmp     rax, [rbp+0E8h]
 * 0000000140187C1D: jnb     short loc_140187C38
 * 0000000140187C1F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140187C26: cmp     rax, [rbp+0E8h]
 * 0000000140187C2D: jb      short loc_140187C38
 * 0000000140187C2F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140187C33: call    KiCheckForSListAddress
 * 0000000140187C38: xor     esi, esi
 * 0000000140187C3A: inc     dword ptr gs:5C80h
 * 0000000140187C42: mov     ecx, 3
 * 0000000140187C47: mov     rax, cr8
 * 0000000140187C4B: mov     cr8, rcx
 * 0000000140187C4F: mov     [rbp+0E8h+var_13F], al
 * 0000000140187C52: mov     [rbp+0E8h+var_148], 0
 * 0000000140187C59: mov     rcx, gs:20h
 * 0000000140187C62: inc     byte ptr [rcx+20h]
 * 0000000140187C65: cmp     byte ptr [rcx+20h], 1
 * 0000000140187C69: jnz     loc_140187CFF
 * 0000000140187C6F: rdtsc
 * 0000000140187C71: shl     rdx, 20h
 * 0000000140187C75: or      rax, rdx
 * 0000000140187C78: mov     edx, [rcx+62A0h]
 * 0000000140187C7E: mov     r11d, edx
 * 0000000140187C81: and     edx, 7FFh
 * 0000000140187C87: shr     edx, 5
 * 0000000140187C8A: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140187C92: mov     edx, [r10]
 * 0000000140187C95: ror     edx, 5
 * 0000000140187C98: xor     edx, eax
 * 0000000140187C9A: mov     [r10], edx
 * 0000000140187C9D: add     r11d, 1
 * 0000000140187CA1: mov     [rcx+62A0h], r11d
 * 0000000140187CA8: and     r11d, 3FFh
 * 0000000140187CAF: jnz     short loc_140187CB8
 * 0000000140187CB1: mov     [rbp+0E8h+var_148], 1
 * 0000000140187CB8: mov     r8, [rcx+8]
 * 0000000140187CBC: sub     rax, [rcx+5B38h]
 * 0000000140187CC3: add     [r8+48h], rax
 * 0000000140187CC7: mov     edx, [r8+50h]
 * 0000000140187CCB: add     [rcx+5B38h], rax
 * 0000000140187CD2: add     rdx, rax
 * 0000000140187CD5: mov     ecx, edx
 * 0000000140187CD7: shr     rdx, 20h
 * 0000000140187CDB: jz      short loc_140187CE0
 * 0000000140187CDD: or      ecx, 0FFFFFFFFh
 * 0000000140187CE0: mov     [r8+50h], ecx
 * 0000000140187CE4: test    byte ptr [r8+2], 3Eh
 * 0000000140187CE9: jz      short loc_140187CFF
 * 0000000140187CEB: mov     rdx, r8
 * 0000000140187CEE: mov     r8, rax
 * 0000000140187CF1: mov     rcx, gs:20h
 * 0000000140187CFA: call    KiEndThreadAccountingPeriod
 * 0000000140187CFF: sti
 * 0000000140187D00: cmp     [rbp+0E8h+var_148], 0
 * 0000000140187D04: jz      short loc_140187D14
 * 0000000140187D06: mov     rcx, gs:20h
 * 0000000140187D0F: call    KiEntropyQueueDpc
 * 0000000140187D14: xor     ecx, ecx
 * 0000000140187D16: call    HvlRouteInterrupt
 * 0000000140187D1B: test    cs:HvlEnlightenments, 2000h
 * 0000000140187D25: jz      short loc_140187D31
 * 0000000140187D27: cli
 * 0000000140187D28: mov     rcx, rsi
 * 0000000140187D2B: call    HalPerformEndOfInterrupt_0
 * 0000000140187D30: sti
 * 0000000140187D31: cli
 * 0000000140187D32: mov     rcx, gs:20h
 * 0000000140187D3B: cmp     byte ptr [rcx+20h], 1
 * 0000000140187D3F: ja      short loc_140187DB5
 * 0000000140187D41: rdtsc
 * 0000000140187D43: shl     rdx, 20h
 * 0000000140187D47: or      rax, rdx
 * 0000000140187D4A: sub     rax, [rcx+5B38h]
 * 0000000140187D51: add     [rcx+5BF8h], rax
 * 0000000140187D58: add     [rcx+5B38h], rax
 * 0000000140187D5F: mov     r8, rax
 * 0000000140187D62: mov     rax, [rcx+8]
 * 0000000140187D66: test    byte ptr [rax+2], 32h
 * 0000000140187D6A: jz      short loc_140187D7F
 * 0000000140187D6C: xor     edx, edx
 * 0000000140187D6E: call    KiBeginThreadAccountingPeriod
 * 0000000140187D73: mov     rcx, gs:20h
 * 0000000140187D7C: inc     byte ptr [rcx+20h]
 * 0000000140187D7F: mov     dl, [rcx+6]
 * 0000000140187D82: and     byte ptr [rcx+6], 0
 * 0000000140187D86: cmp     byte ptr [rcx+7], 0
 * 0000000140187D8A: jnz     short loc_140187DB5
 * 0000000140187D8C: test    dl, dl
 * 0000000140187D8E: jz      short loc_140187DB5
 * 0000000140187D90: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140187D94: jnb     short loc_140187DA1
 * 0000000140187D96: and     byte ptr [rcx+20h], 0
 * 0000000140187D9A: call    KiDpcInterruptBypass
 * 0000000140187D9F: jmp     short loc_140187DB8
 * 0000000140187DA1: mov     ecx, 2
 * 0000000140187DA6: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140187DAC: mov     rcx, gs:20h
 * 0000000140187DB5: dec     byte ptr [rcx+20h]
 * 0000000140187DB8: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140187DBC: mov     cr8, rcx
 * 0000000140187DC0: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187DC7: cli
 * 0000000140187DC8: test    [rbp+0E8h+arg_0], 1
 * 0000000140187DCF: jz      loc_140188032
 * 0000000140187DD5: mov     rcx, gs:188h
 * 0000000140187DDE: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140187DE5: jz      short loc_140187E00
 * 0000000140187DE7: mov     ecx, 1
 * 0000000140187DEC: mov     cr8, rcx
 * 0000000140187DF0: sti
 * 0000000140187DF1: call    KiInitiateUserApc
 * 0000000140187DF6: cli
 * 0000000140187DF7: mov     ecx, 0
 * 0000000140187DFC: mov     cr8, rcx
 * 0000000140187E00: mov     rcx, gs:188h
 * 0000000140187E09: test    dword ptr [rcx], 40010000h
 * 0000000140187E0F: jz      short loc_140187E25
 * 0000000140187E11: test    byte ptr [rcx+2], 1
 * 0000000140187E15: jz      short loc_140187E25
 * 0000000140187E17: call    KiCopyCounters
 * 0000000140187E1C: mov     rcx, gs:188h
 * 0000000140187E25: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187E29: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187E31: jz      short loc_140187E38
 * 0000000140187E33: call    KiRestoreDebugRegisterState
 * 0000000140187E38: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187E3C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187E40: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187E44: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187E48: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187E4C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187E50: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187E54: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187E58: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187E5C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187E60: movzx   eax, word ptr gs:2EBAh
 * 0000000140187E69: cmp     gs:2EB4h, ax
 * 0000000140187E72: jz      short loc_140187E86
 * 0000000140187E74: mov     gs:2EB4h, ax
 * 0000000140187E7D: mov     ecx, 48h ; 'H'
 * 0000000140187E82: xor     edx, edx
 * 0000000140187E84: wrmsr
 * 0000000140187E86: btr     word ptr gs:2EB0h, 2
 * 0000000140187E91: jnb     short loc_140187EA1
 * 0000000140187E93: mov     eax, 1
 * 0000000140187E98: xor     edx, edx
 * 0000000140187E9A: mov     ecx, 49h ; 'I'
 * 0000000140187E9F: wrmsr
 * 0000000140187EA1: btr     word ptr gs:2EB0h, 5
 * 0000000140187EAC: jnb     loc_140187FD7
 * 0000000140187EB2: call    loc_140187FC5
 * 0000000140187EB7: add     rsp, 8
 * 0000000140187EBB: call    loc_140187FCE
 * 0000000140187EC0: add     rsp, 8
 * 0000000140187EC4: call    loc_140187EB7
 * 0000000140187EC9: add     rsp, 8
 * 0000000140187ECD: call    loc_140187EC0
 * 0000000140187ED2: add     rsp, 8
 * 0000000140187ED6: call    loc_140187EC9
 * 0000000140187EDB: add     rsp, 8
 * 0000000140187EDF: call    loc_140187ED2
 * 0000000140187EE4: add     rsp, 8
 * 0000000140187EE8: call    loc_140187EDB
 * 0000000140187EED: add     rsp, 8
 * 0000000140187EF1: call    loc_140187EE4
 * 0000000140187EF6: add     rsp, 8
 * 0000000140187EFA: call    loc_140187EED
 * 0000000140187EFF: add     rsp, 8
 * 0000000140187F03: call    loc_140187EF6
 * 0000000140187F08: add     rsp, 8
 * 0000000140187F0C: call    loc_140187EFF
 * 0000000140187F11: add     rsp, 8
 * 0000000140187F15: call    loc_140187F08
 * 0000000140187F1A: add     rsp, 8
 * 0000000140187F1E: call    loc_140187F11
 * 0000000140187F23: add     rsp, 8
 * 0000000140187F27: call    loc_140187F1A
 * 0000000140187F2C: add     rsp, 8
 * 0000000140187F30: call    loc_140187F23
 * 0000000140187F35: add     rsp, 8
 * 0000000140187F39: call    loc_140187F2C
 * 0000000140187F3E: add     rsp, 8
 * 0000000140187F42: call    loc_140187F35
 * 0000000140187F47: add     rsp, 8
 * 0000000140187F4B: call    loc_140187F3E
 * 0000000140187F50: add     rsp, 8
 * 0000000140187F54: call    loc_140187F47
 * 0000000140187F59: add     rsp, 8
 * 0000000140187F5D: call    loc_140187F50
 * 0000000140187F62: add     rsp, 8
 * 0000000140187F66: call    loc_140187F59
 * 0000000140187F6B: add     rsp, 8
 * 0000000140187F6F: call    loc_140187F62
 * 0000000140187F74: add     rsp, 8
 * 0000000140187F78: call    loc_140187F6B
 * 0000000140187F7D: add     rsp, 8
 * 0000000140187F81: call    loc_140187F74
 * 0000000140187F86: add     rsp, 8
 * 0000000140187F8A: call    loc_140187F7D
 * 0000000140187F8F: add     rsp, 8
 * 0000000140187F93: call    loc_140187F86
 * 0000000140187F98: add     rsp, 8
 * 0000000140187F9C: call    loc_140187F8F
 * 0000000140187FA1: add     rsp, 8
 * 0000000140187FA5: call    loc_140187F98
 * 0000000140187FAA: add     rsp, 8
 * 0000000140187FAE: call    loc_140187FA1
 * 0000000140187FB3: add     rsp, 8
 * 0000000140187FB7: call    loc_140187FAA
 * 0000000140187FBC: add     rsp, 8
 * 0000000140187FC0: call    loc_140187FB3
 * 0000000140187FC5: add     rsp, 8
 * 0000000140187FC9: call    loc_140187FBC
 * 0000000140187FCE: add     rsp, 8
 * 0000000140187FD2: mov     eax, 0DADAh
 * 0000000140187FD7: test    word ptr gs:2EB0h, 40h
 * 0000000140187FE2: jz      short loc_140187FF0
 * 0000000140187FE4: xor     eax, eax
 * 0000000140187FE6: xor     edx, edx
 * 0000000140187FE8: mov     ecx, 1
 * 0000000140187FED: div     rcx
 * 0000000140187FF0: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187FF4: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187FF8: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187FFC: mov     rsp, rbp
 * 0000000140187FFF: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188006: add     rsp, 0E8h
 * 000000014018800D: test    cs:KiKvaShadow, 1
 * 0000000140188014: jz      short loc_14018801B
 * 0000000140188016: jmp     KiKernelExit
 * 000000014018801B: test    word ptr gs:2EB0h, 80h
 * 0000000140188026: jz      short loc_14018802D
 * 0000000140188028: verw    [rsp+arg_18]
 * 000000014018802D: swapgs
 * 0000000140188030: iretq
 * 0000000140188032: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188036: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018803A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018803E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140188042: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188046: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018804A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018804E: mov     r11, [rbp+0E8h+var_108]
 * 0000000140188052: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188056: mov     r9, [rbp+0E8h+var_118]
 * 000000014018805A: mov     r8, [rbp+0E8h+var_120]
 * 000000014018805E: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140188062: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140188066: mov     rax, [rbp+0E8h+var_138]
 * 000000014018806A: mov     rsp, rbp
 * 000000014018806D: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188074: add     rsp, 0E8h
 * 000000014018807B: iretq
 */
