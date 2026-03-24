/*
 * XREFs of KiGeneralProtectionFault @ 0x140161C40
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140224680 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x140161C40 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x140161C40
 * Reason: Hex-Rays returned no pseudocode for 0x140161C40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140161C40: push    rbp
 * 0000000140161C41: sub     rsp, 158h
 * 0000000140161C48: lea     rbp, [rsp+80h]
 * 0000000140161C50: mov     [rbp+0D8h+var_12D], 1
 * 0000000140161C54: mov     [rbp+0D8h+var_128], rax
 * 0000000140161C58: mov     [rbp+0D8h+var_120], rcx
 * 0000000140161C5C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140161C60: mov     [rbp+0D8h+var_110], r8
 * 0000000140161C64: mov     [rbp+0D8h+var_108], r9
 * 0000000140161C68: mov     [rbp+0D8h+var_100], r10
 * 0000000140161C6C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140161C70: test    [rbp+0D8h+arg_8], 1
 * 0000000140161C77: jnz     loc_140161DDD
 * 0000000140161C7D: cmp     byte ptr gs:187h, 0
 * 0000000140161C86: jz      loc_140161FAD
 * 0000000140161C8C: test    byte ptr gs:2EB0h, 1
 * 0000000140161C95: jz      loc_140161FAD
 * 0000000140161C9B: mov     ecx, 48h ; 'H'
 * 0000000140161CA0: mov     eax, 1
 * 0000000140161CA5: xor     edx, edx
 * 0000000140161CA7: wrmsr
 * 0000000140161CA9: test    byte ptr gs:2EB0h, 4
 * 0000000140161CB2: jnz     loc_140161FAD
 * 0000000140161CB8: call    loc_140161DCB
 * 0000000140161CBD: add     rsp, 8
 * 0000000140161CC1: call    loc_140161DD4
 * 0000000140161CC6: add     rsp, 8
 * 0000000140161CCA: call    loc_140161CBD
 * 0000000140161CCF: add     rsp, 8
 * 0000000140161CD3: call    loc_140161CC6
 * 0000000140161CD8: add     rsp, 8
 * 0000000140161CDC: call    loc_140161CCF
 * 0000000140161CE1: add     rsp, 8
 * 0000000140161CE5: call    loc_140161CD8
 * 0000000140161CEA: add     rsp, 8
 * 0000000140161CEE: call    loc_140161CE1
 * 0000000140161CF3: add     rsp, 8
 * 0000000140161CF7: call    loc_140161CEA
 * 0000000140161CFC: add     rsp, 8
 * 0000000140161D00: call    loc_140161CF3
 * 0000000140161D05: add     rsp, 8
 * 0000000140161D09: call    loc_140161CFC
 * 0000000140161D0E: add     rsp, 8
 * 0000000140161D12: call    loc_140161D05
 * 0000000140161D17: add     rsp, 8
 * 0000000140161D1B: call    loc_140161D0E
 * 0000000140161D20: add     rsp, 8
 * 0000000140161D24: call    loc_140161D17
 * 0000000140161D29: add     rsp, 8
 * 0000000140161D2D: call    loc_140161D20
 * 0000000140161D32: add     rsp, 8
 * 0000000140161D36: call    loc_140161D29
 * 0000000140161D3B: add     rsp, 8
 * 0000000140161D3F: call    loc_140161D32
 * 0000000140161D44: add     rsp, 8
 * 0000000140161D48: call    loc_140161D3B
 * 0000000140161D4D: add     rsp, 8
 * 0000000140161D51: call    loc_140161D44
 * 0000000140161D56: add     rsp, 8
 * 0000000140161D5A: call    loc_140161D4D
 * 0000000140161D5F: add     rsp, 8
 * 0000000140161D63: call    loc_140161D56
 * 0000000140161D68: add     rsp, 8
 * 0000000140161D6C: call    loc_140161D5F
 * 0000000140161D71: add     rsp, 8
 * 0000000140161D75: call    loc_140161D68
 * 0000000140161D7A: add     rsp, 8
 * 0000000140161D7E: call    loc_140161D71
 * 0000000140161D83: add     rsp, 8
 * 0000000140161D87: call    loc_140161D7A
 * 0000000140161D8C: add     rsp, 8
 * 0000000140161D90: call    loc_140161D83
 * 0000000140161D95: add     rsp, 8
 * 0000000140161D99: call    loc_140161D8C
 * 0000000140161D9E: add     rsp, 8
 * 0000000140161DA2: call    loc_140161D95
 * 0000000140161DA7: add     rsp, 8
 * 0000000140161DAB: call    loc_140161D9E
 * 0000000140161DB0: add     rsp, 8
 * 0000000140161DB4: call    loc_140161DA7
 * 0000000140161DB9: add     rsp, 8
 * 0000000140161DBD: call    loc_140161DB0
 * 0000000140161DC2: add     rsp, 8
 * 0000000140161DC6: call    loc_140161DB9
 * 0000000140161DCB: add     rsp, 8
 * 0000000140161DCF: call    loc_140161DC2
 * 0000000140161DD4: add     rsp, 8
 * 0000000140161DD8: jmp     loc_140161FAD
 * 0000000140161DDD: test    cs:KiKvaShadow, 1
 * 0000000140161DE4: jnz     short loc_140161DE9
 * 0000000140161DE6: swapgs
 * 0000000140161DE9: mov     r10, gs:188h
 * 0000000140161DF2: test    byte ptr gs:2EB0h, 1
 * 0000000140161DFB: jz      loc_140161F5E
 * 0000000140161E01: mov     rcx, gs:188h
 * 0000000140161E0A: mov     rcx, [rcx+220h]
 * 0000000140161E11: mov     rcx, [rcx+790h]
 * 0000000140161E18: mov     gs:2EA8h, rcx
 * 0000000140161E21: mov     ecx, 48h ; 'H'
 * 0000000140161E26: mov     eax, 1
 * 0000000140161E2B: xor     edx, edx
 * 0000000140161E2D: wrmsr
 * 0000000140161E2F: test    byte ptr gs:2EB0h, 4
 * 0000000140161E38: jnz     loc_140161F5E
 * 0000000140161E3E: call    loc_140161F51
 * 0000000140161E43: add     rsp, 8
 * 0000000140161E47: call    loc_140161F5A
 * 0000000140161E4C: add     rsp, 8
 * 0000000140161E50: call    loc_140161E43
 * 0000000140161E55: add     rsp, 8
 * 0000000140161E59: call    loc_140161E4C
 * 0000000140161E5E: add     rsp, 8
 * 0000000140161E62: call    loc_140161E55
 * 0000000140161E67: add     rsp, 8
 * 0000000140161E6B: call    loc_140161E5E
 * 0000000140161E70: add     rsp, 8
 * 0000000140161E74: call    loc_140161E67
 * 0000000140161E79: add     rsp, 8
 * 0000000140161E7D: call    loc_140161E70
 * 0000000140161E82: add     rsp, 8
 * 0000000140161E86: call    loc_140161E79
 * 0000000140161E8B: add     rsp, 8
 * 0000000140161E8F: call    loc_140161E82
 * 0000000140161E94: add     rsp, 8
 * 0000000140161E98: call    loc_140161E8B
 * 0000000140161E9D: add     rsp, 8
 * 0000000140161EA1: call    loc_140161E94
 * 0000000140161EA6: add     rsp, 8
 * 0000000140161EAA: call    loc_140161E9D
 * 0000000140161EAF: add     rsp, 8
 * 0000000140161EB3: call    loc_140161EA6
 * 0000000140161EB8: add     rsp, 8
 * 0000000140161EBC: call    loc_140161EAF
 * 0000000140161EC1: add     rsp, 8
 * 0000000140161EC5: call    loc_140161EB8
 * 0000000140161ECA: add     rsp, 8
 * 0000000140161ECE: call    loc_140161EC1
 * 0000000140161ED3: add     rsp, 8
 * 0000000140161ED7: call    loc_140161ECA
 * 0000000140161EDC: add     rsp, 8
 * 0000000140161EE0: call    loc_140161ED3
 * 0000000140161EE5: add     rsp, 8
 * 0000000140161EE9: call    loc_140161EDC
 * 0000000140161EEE: add     rsp, 8
 * 0000000140161EF2: call    loc_140161EE5
 * 0000000140161EF7: add     rsp, 8
 * 0000000140161EFB: call    loc_140161EEE
 * 0000000140161F00: add     rsp, 8
 * 0000000140161F04: call    loc_140161EF7
 * 0000000140161F09: add     rsp, 8
 * 0000000140161F0D: call    loc_140161F00
 * 0000000140161F12: add     rsp, 8
 * 0000000140161F16: call    loc_140161F09
 * 0000000140161F1B: add     rsp, 8
 * 0000000140161F1F: call    loc_140161F12
 * 0000000140161F24: add     rsp, 8
 * 0000000140161F28: call    loc_140161F1B
 * 0000000140161F2D: add     rsp, 8
 * 0000000140161F31: call    loc_140161F24
 * 0000000140161F36: add     rsp, 8
 * 0000000140161F3A: call    loc_140161F2D
 * 0000000140161F3F: add     rsp, 8
 * 0000000140161F43: call    loc_140161F36
 * 0000000140161F48: add     rsp, 8
 * 0000000140161F4C: call    loc_140161F3F
 * 0000000140161F51: add     rsp, 8
 * 0000000140161F55: call    loc_140161F48
 * 0000000140161F5A: add     rsp, 8
 * 0000000140161F5E: test    byte ptr [r10+3], 80h
 * 0000000140161F63: jz      short loc_140161F98
 * 0000000140161F65: mov     ecx, 0C0000102h
 * 0000000140161F6A: rdmsr
 * 0000000140161F6C: shl     rdx, 20h
 * 0000000140161F70: or      rax, rdx
 * 0000000140161F73: cmp     [r10+0F0h], rax
 * 0000000140161F7A: jz      short loc_140161F98
 * 0000000140161F7C: mov     rdx, [r10+1F0h]
 * 0000000140161F83: bts     dword ptr [r10+74h], 8
 * 0000000140161F89: dec     word ptr [r10+1E6h]
 * 0000000140161F91: mov     [rdx+80h], rax
 * 0000000140161F98: test    byte ptr [r10+3], 3
 * 0000000140161F9D: mov     [rbp+0D8h+var_58], 0
 * 0000000140161FA6: jz      short loc_140161FAD
 * 0000000140161FA8: call    KiSaveDebugRegisterState
 * 0000000140161FAD: cld
 * 0000000140161FAE: lfence
 * 0000000140161FB1: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140161FB5: ldmxcsr dword ptr gs:180h
 * 0000000140161FBE: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140161FC2: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140161FC6: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140161FCA: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140161FCE: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140161FD2: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140161FD6: mov     eax, [rbp+0E0h]
 * 0000000140161FDC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140161FE6: jz      short loc_140161FE9
 * 0000000140161FE8: sti
 * 0000000140161FE9: mov     ecx, 10000001h
 * 0000000140161FEE: mov     edx, 2
 * 0000000140161FF3: mov     r9d, [rbp+0E0h]
 * 0000000140161FFA: and     r9d, 0FFFFh
 * 0000000140162001: xor     r10, r10
 * 0000000140162004: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016200B: call    KiExceptionDispatch
 * 0000000140162010: nop
 * 0000000140162011: retn
 */
