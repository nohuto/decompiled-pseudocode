/*
 * XREFs of KxDebugTrapOrFault @ 0x1401699C0
 * Callers:
 *     KiDebugTrapOrFault @ 0x140169900 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401699C0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401699C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401699C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401699C0: sub     rsp, 8
 * 00000001401699C4: push    rbp
 * 00000001401699C5: sub     rsp, 158h
 * 00000001401699CC: lea     rbp, [rsp+80h]
 * 00000001401699D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401699D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401699DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401699E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401699E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401699E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401699EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401699F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401699F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401699FB: jnz     short loc_140169A2C
 * 00000001401699FD: lfence
 * 0000000140169A00: test    word ptr gs:2EB8h, 1
 * 0000000140169A0B: jnz     short loc_140169A15
 * 0000000140169A0D: lfence
 * 0000000140169A10: jmp     loc_140169C51
 * 0000000140169A15: movzx   eax, word ptr gs:2EBCh
 * 0000000140169A1E: mov     ecx, 48h ; 'H'
 * 0000000140169A23: xor     edx, edx
 * 0000000140169A25: wrmsr
 * 0000000140169A27: jmp     loc_140169C51
 * 0000000140169A2C: test    cs:KiKvaShadow, 1
 * 0000000140169A33: jnz     short loc_140169A38
 * 0000000140169A35: swapgs
 * 0000000140169A38: lfence
 * 0000000140169A3B: mov     r10, gs:188h
 * 0000000140169A44: mov     rcx, gs:188h
 * 0000000140169A4D: mov     rcx, [rcx+220h]
 * 0000000140169A54: mov     rcx, [rcx+7B8h]
 * 0000000140169A5B: mov     gs:2EB0h, rcx
 * 0000000140169A64: movzx   eax, word ptr gs:2EBEh
 * 0000000140169A6D: cmp     gs:2EBCh, ax
 * 0000000140169A76: jz      short loc_140169A8A
 * 0000000140169A78: mov     gs:2EBCh, ax
 * 0000000140169A81: mov     ecx, 48h ; 'H'
 * 0000000140169A86: xor     edx, edx
 * 0000000140169A88: wrmsr
 * 0000000140169A8A: movzx   edx, word ptr gs:2EB8h
 * 0000000140169A93: test    edx, 8
 * 0000000140169A99: jz      short loc_140169AB2
 * 0000000140169A9B: mov     eax, 1
 * 0000000140169AA0: xor     edx, edx
 * 0000000140169AA2: mov     ecx, 49h ; 'I'
 * 0000000140169AA7: wrmsr
 * 0000000140169AA9: movzx   edx, word ptr gs:2EB8h
 * 0000000140169AB2: test    edx, 2
 * 0000000140169AB8: jz      loc_140169BE3
 * 0000000140169ABE: call    loc_140169BD1
 * 0000000140169AC3: add     rsp, 8
 * 0000000140169AC7: call    loc_140169BDA
 * 0000000140169ACC: add     rsp, 8
 * 0000000140169AD0: call    loc_140169AC3
 * 0000000140169AD5: add     rsp, 8
 * 0000000140169AD9: call    loc_140169ACC
 * 0000000140169ADE: add     rsp, 8
 * 0000000140169AE2: call    loc_140169AD5
 * 0000000140169AE7: add     rsp, 8
 * 0000000140169AEB: call    loc_140169ADE
 * 0000000140169AF0: add     rsp, 8
 * 0000000140169AF4: call    loc_140169AE7
 * 0000000140169AF9: add     rsp, 8
 * 0000000140169AFD: call    loc_140169AF0
 * 0000000140169B02: add     rsp, 8
 * 0000000140169B06: call    loc_140169AF9
 * 0000000140169B0B: add     rsp, 8
 * 0000000140169B0F: call    loc_140169B02
 * 0000000140169B14: add     rsp, 8
 * 0000000140169B18: call    loc_140169B0B
 * 0000000140169B1D: add     rsp, 8
 * 0000000140169B21: call    loc_140169B14
 * 0000000140169B26: add     rsp, 8
 * 0000000140169B2A: call    loc_140169B1D
 * 0000000140169B2F: add     rsp, 8
 * 0000000140169B33: call    loc_140169B26
 * 0000000140169B38: add     rsp, 8
 * 0000000140169B3C: call    loc_140169B2F
 * 0000000140169B41: add     rsp, 8
 * 0000000140169B45: call    loc_140169B38
 * 0000000140169B4A: add     rsp, 8
 * 0000000140169B4E: call    loc_140169B41
 * 0000000140169B53: add     rsp, 8
 * 0000000140169B57: call    loc_140169B4A
 * 0000000140169B5C: add     rsp, 8
 * 0000000140169B60: call    loc_140169B53
 * 0000000140169B65: add     rsp, 8
 * 0000000140169B69: call    loc_140169B5C
 * 0000000140169B6E: add     rsp, 8
 * 0000000140169B72: call    loc_140169B65
 * 0000000140169B77: add     rsp, 8
 * 0000000140169B7B: call    loc_140169B6E
 * 0000000140169B80: add     rsp, 8
 * 0000000140169B84: call    loc_140169B77
 * 0000000140169B89: add     rsp, 8
 * 0000000140169B8D: call    loc_140169B80
 * 0000000140169B92: add     rsp, 8
 * 0000000140169B96: call    loc_140169B89
 * 0000000140169B9B: add     rsp, 8
 * 0000000140169B9F: call    loc_140169B92
 * 0000000140169BA4: add     rsp, 8
 * 0000000140169BA8: call    loc_140169B9B
 * 0000000140169BAD: add     rsp, 8
 * 0000000140169BB1: call    loc_140169BA4
 * 0000000140169BB6: add     rsp, 8
 * 0000000140169BBA: call    loc_140169BAD
 * 0000000140169BBF: add     rsp, 8
 * 0000000140169BC3: call    loc_140169BB6
 * 0000000140169BC8: add     rsp, 8
 * 0000000140169BCC: call    loc_140169BBF
 * 0000000140169BD1: add     rsp, 8
 * 0000000140169BD5: call    loc_140169BC8
 * 0000000140169BDA: add     rsp, 8
 * 0000000140169BDE: mov     eax, 0DADAh
 * 0000000140169BE3: test    edx, 100h
 * 0000000140169BE9: jz      short loc_140169BF0
 * 0000000140169BEB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140169BF0: lfence
 * 0000000140169BF3: test    byte ptr [r10+3], 80h
 * 0000000140169BF8: jz      short loc_140169C3C
 * 0000000140169BFA: mov     ecx, 0C0000102h
 * 0000000140169BFF: rdmsr
 * 0000000140169C01: shl     rdx, 20h
 * 0000000140169C05: or      rax, rdx
 * 0000000140169C08: cmp     rax, cs:MmUserProbeAddress
 * 0000000140169C0F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140169C17: cmp     [r10+0F0h], rax
 * 0000000140169C1E: jz      short loc_140169C3C
 * 0000000140169C20: mov     rdx, [r10+1F0h]
 * 0000000140169C27: bts     dword ptr [r10+74h], 8
 * 0000000140169C2D: dec     word ptr [r10+1E6h]
 * 0000000140169C35: mov     [rdx+80h], rax
 * 0000000140169C3C: test    byte ptr [r10+3], 3
 * 0000000140169C41: mov     [rbp+0E8h+var_68], 0
 * 0000000140169C4A: jz      short loc_140169C51
 * 0000000140169C4C: call    KiSaveDebugRegisterState
 * 0000000140169C51: cld
 * 0000000140169C52: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140169C56: ldmxcsr dword ptr gs:180h
 * 0000000140169C5F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140169C63: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140169C67: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140169C6B: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140169C6F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140169C73: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140169C77: test    [rbp+0E8h+arg_8], 200h
 * 0000000140169C81: jz      short loc_140169C84
 * 0000000140169C83: sti
 * 0000000140169C84: xor     edx, edx
 * 0000000140169C86: test    [rbp+0E8h+arg_8], 100h
 * 0000000140169C90: jz      loc_140169D53
 * 0000000140169C96: test    byte ptr gs:646Ah, 2
 * 0000000140169C9F: jz      loc_140169D53
 * 0000000140169CA5: test    [rbp+0E8h+arg_0], 1
 * 0000000140169CAC: jnz     short loc_140169D05
 * 0000000140169CAE: mov     rax, dr7
 * 0000000140169CB1: test    ax, 200h
 * 0000000140169CB5: jz      loc_140169D53
 * 0000000140169CBB: test    ax, 100h
 * 0000000140169CBF: jz      loc_140169D53
 * 0000000140169CC5: mov     r8d, cs:KiLastBranchTOSMSR
 * 0000000140169CCC: or      r8d, r8d
 * 0000000140169CCF: jz      short loc_140169CD9
 * 0000000140169CD1: mov     ecx, r8d
 * 0000000140169CD4: rdmsr
 * 0000000140169CD6: mov     r8d, eax
 * 0000000140169CD9: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 0000000140169CDF: add     ecx, r8d
 * 0000000140169CE2: rdmsr
 * 0000000140169CE4: mov     r9d, eax
 * 0000000140169CE7: shl     rdx, 20h
 * 0000000140169CEB: mov     ecx, cs:KiLastBranchToBaseMSR
 * 0000000140169CF1: or      r9, rdx
 * 0000000140169CF4: add     ecx, r8d
 * 0000000140169CF7: rdmsr
 * 0000000140169CF9: mov     r10d, eax
 * 0000000140169CFC: shl     rdx, 20h
 * 0000000140169D00: or      r10, rdx
 * 0000000140169D03: jmp     short loc_140169D4E
 * 0000000140169D05: test    [rbp+0E8h+var_68], 200h
 * 0000000140169D0E: jz      short loc_140169D53
 * 0000000140169D10: test    [rbp+0E8h+var_68], 100h
 * 0000000140169D19: jz      short loc_140169D53
 * 0000000140169D1B: and     [rbp+0E8h+var_40], 0
 * 0000000140169D23: and     [rbp+0E8h+var_48], 0
 * 0000000140169D2B: mov     rcx, cs:MmUserProbeAddress
 * 0000000140169D32: mov     r9, [rbp+0E8h+var_50]
 * 0000000140169D39: cmp     r9, rcx
 * 0000000140169D3C: cmovnb  r9, rcx
 * 0000000140169D40: mov     r10, [rbp+0E8h+var_58]
 * 0000000140169D47: cmp     r10, rcx
 * 0000000140169D4A: cmovnb  r10, rcx
 * 0000000140169D4E: mov     edx, 2
 * 0000000140169D53: mov     ecx, 80000004h
 * 0000000140169D58: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 0000000140169D62: mov     r8, [rbp+0E8h]
 * 0000000140169D69: call    KiExceptionDispatch
 * 0000000140169D6E: nop
 * 0000000140169D6F: retn
 */
