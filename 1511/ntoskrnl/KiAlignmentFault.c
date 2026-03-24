/*
 * XREFs of KiAlignmentFault @ 0x140162B40
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140224800 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140162B40 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140162B40
 * Reason: Hex-Rays returned no pseudocode for 0x140162B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162B40: push    rbp
 * 0000000140162B41: sub     rsp, 158h
 * 0000000140162B48: lea     rbp, [rsp+80h]
 * 0000000140162B50: mov     [rbp+0D8h+var_12D], 1
 * 0000000140162B54: mov     [rbp+0D8h+var_128], rax
 * 0000000140162B58: mov     [rbp+0D8h+var_120], rcx
 * 0000000140162B5C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140162B60: mov     [rbp+0D8h+var_110], r8
 * 0000000140162B64: mov     [rbp+0D8h+var_108], r9
 * 0000000140162B68: mov     [rbp+0D8h+var_100], r10
 * 0000000140162B6C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140162B70: test    [rbp+0D8h+arg_8], 1
 * 0000000140162B77: jnz     loc_140162CDD
 * 0000000140162B7D: cmp     byte ptr gs:187h, 0
 * 0000000140162B86: jz      loc_140162EAD
 * 0000000140162B8C: test    byte ptr gs:2EB0h, 1
 * 0000000140162B95: jz      loc_140162EAD
 * 0000000140162B9B: mov     ecx, 48h ; 'H'
 * 0000000140162BA0: mov     eax, 1
 * 0000000140162BA5: xor     edx, edx
 * 0000000140162BA7: wrmsr
 * 0000000140162BA9: test    byte ptr gs:2EB0h, 4
 * 0000000140162BB2: jnz     loc_140162EAD
 * 0000000140162BB8: call    loc_140162CCB
 * 0000000140162BBD: add     rsp, 8
 * 0000000140162BC1: call    loc_140162CD4
 * 0000000140162BC6: add     rsp, 8
 * 0000000140162BCA: call    loc_140162BBD
 * 0000000140162BCF: add     rsp, 8
 * 0000000140162BD3: call    loc_140162BC6
 * 0000000140162BD8: add     rsp, 8
 * 0000000140162BDC: call    loc_140162BCF
 * 0000000140162BE1: add     rsp, 8
 * 0000000140162BE5: call    loc_140162BD8
 * 0000000140162BEA: add     rsp, 8
 * 0000000140162BEE: call    loc_140162BE1
 * 0000000140162BF3: add     rsp, 8
 * 0000000140162BF7: call    loc_140162BEA
 * 0000000140162BFC: add     rsp, 8
 * 0000000140162C00: call    loc_140162BF3
 * 0000000140162C05: add     rsp, 8
 * 0000000140162C09: call    loc_140162BFC
 * 0000000140162C0E: add     rsp, 8
 * 0000000140162C12: call    loc_140162C05
 * 0000000140162C17: add     rsp, 8
 * 0000000140162C1B: call    loc_140162C0E
 * 0000000140162C20: add     rsp, 8
 * 0000000140162C24: call    loc_140162C17
 * 0000000140162C29: add     rsp, 8
 * 0000000140162C2D: call    loc_140162C20
 * 0000000140162C32: add     rsp, 8
 * 0000000140162C36: call    loc_140162C29
 * 0000000140162C3B: add     rsp, 8
 * 0000000140162C3F: call    loc_140162C32
 * 0000000140162C44: add     rsp, 8
 * 0000000140162C48: call    loc_140162C3B
 * 0000000140162C4D: add     rsp, 8
 * 0000000140162C51: call    loc_140162C44
 * 0000000140162C56: add     rsp, 8
 * 0000000140162C5A: call    loc_140162C4D
 * 0000000140162C5F: add     rsp, 8
 * 0000000140162C63: call    loc_140162C56
 * 0000000140162C68: add     rsp, 8
 * 0000000140162C6C: call    loc_140162C5F
 * 0000000140162C71: add     rsp, 8
 * 0000000140162C75: call    loc_140162C68
 * 0000000140162C7A: add     rsp, 8
 * 0000000140162C7E: call    loc_140162C71
 * 0000000140162C83: add     rsp, 8
 * 0000000140162C87: call    loc_140162C7A
 * 0000000140162C8C: add     rsp, 8
 * 0000000140162C90: call    loc_140162C83
 * 0000000140162C95: add     rsp, 8
 * 0000000140162C99: call    loc_140162C8C
 * 0000000140162C9E: add     rsp, 8
 * 0000000140162CA2: call    loc_140162C95
 * 0000000140162CA7: add     rsp, 8
 * 0000000140162CAB: call    loc_140162C9E
 * 0000000140162CB0: add     rsp, 8
 * 0000000140162CB4: call    loc_140162CA7
 * 0000000140162CB9: add     rsp, 8
 * 0000000140162CBD: call    loc_140162CB0
 * 0000000140162CC2: add     rsp, 8
 * 0000000140162CC6: call    loc_140162CB9
 * 0000000140162CCB: add     rsp, 8
 * 0000000140162CCF: call    loc_140162CC2
 * 0000000140162CD4: add     rsp, 8
 * 0000000140162CD8: jmp     loc_140162EAD
 * 0000000140162CDD: test    cs:KiKvaShadow, 1
 * 0000000140162CE4: jnz     short loc_140162CE9
 * 0000000140162CE6: swapgs
 * 0000000140162CE9: mov     r10, gs:188h
 * 0000000140162CF2: test    byte ptr gs:2EB0h, 1
 * 0000000140162CFB: jz      loc_140162E5E
 * 0000000140162D01: mov     rcx, gs:188h
 * 0000000140162D0A: mov     rcx, [rcx+220h]
 * 0000000140162D11: mov     rcx, [rcx+790h]
 * 0000000140162D18: mov     gs:2EA8h, rcx
 * 0000000140162D21: mov     ecx, 48h ; 'H'
 * 0000000140162D26: mov     eax, 1
 * 0000000140162D2B: xor     edx, edx
 * 0000000140162D2D: wrmsr
 * 0000000140162D2F: test    byte ptr gs:2EB0h, 4
 * 0000000140162D38: jnz     loc_140162E5E
 * 0000000140162D3E: call    loc_140162E51
 * 0000000140162D43: add     rsp, 8
 * 0000000140162D47: call    loc_140162E5A
 * 0000000140162D4C: add     rsp, 8
 * 0000000140162D50: call    loc_140162D43
 * 0000000140162D55: add     rsp, 8
 * 0000000140162D59: call    loc_140162D4C
 * 0000000140162D5E: add     rsp, 8
 * 0000000140162D62: call    loc_140162D55
 * 0000000140162D67: add     rsp, 8
 * 0000000140162D6B: call    loc_140162D5E
 * 0000000140162D70: add     rsp, 8
 * 0000000140162D74: call    loc_140162D67
 * 0000000140162D79: add     rsp, 8
 * 0000000140162D7D: call    loc_140162D70
 * 0000000140162D82: add     rsp, 8
 * 0000000140162D86: call    loc_140162D79
 * 0000000140162D8B: add     rsp, 8
 * 0000000140162D8F: call    loc_140162D82
 * 0000000140162D94: add     rsp, 8
 * 0000000140162D98: call    loc_140162D8B
 * 0000000140162D9D: add     rsp, 8
 * 0000000140162DA1: call    loc_140162D94
 * 0000000140162DA6: add     rsp, 8
 * 0000000140162DAA: call    loc_140162D9D
 * 0000000140162DAF: add     rsp, 8
 * 0000000140162DB3: call    loc_140162DA6
 * 0000000140162DB8: add     rsp, 8
 * 0000000140162DBC: call    loc_140162DAF
 * 0000000140162DC1: add     rsp, 8
 * 0000000140162DC5: call    loc_140162DB8
 * 0000000140162DCA: add     rsp, 8
 * 0000000140162DCE: call    loc_140162DC1
 * 0000000140162DD3: add     rsp, 8
 * 0000000140162DD7: call    loc_140162DCA
 * 0000000140162DDC: add     rsp, 8
 * 0000000140162DE0: call    loc_140162DD3
 * 0000000140162DE5: add     rsp, 8
 * 0000000140162DE9: call    loc_140162DDC
 * 0000000140162DEE: add     rsp, 8
 * 0000000140162DF2: call    loc_140162DE5
 * 0000000140162DF7: add     rsp, 8
 * 0000000140162DFB: call    loc_140162DEE
 * 0000000140162E00: add     rsp, 8
 * 0000000140162E04: call    loc_140162DF7
 * 0000000140162E09: add     rsp, 8
 * 0000000140162E0D: call    loc_140162E00
 * 0000000140162E12: add     rsp, 8
 * 0000000140162E16: call    loc_140162E09
 * 0000000140162E1B: add     rsp, 8
 * 0000000140162E1F: call    loc_140162E12
 * 0000000140162E24: add     rsp, 8
 * 0000000140162E28: call    loc_140162E1B
 * 0000000140162E2D: add     rsp, 8
 * 0000000140162E31: call    loc_140162E24
 * 0000000140162E36: add     rsp, 8
 * 0000000140162E3A: call    loc_140162E2D
 * 0000000140162E3F: add     rsp, 8
 * 0000000140162E43: call    loc_140162E36
 * 0000000140162E48: add     rsp, 8
 * 0000000140162E4C: call    loc_140162E3F
 * 0000000140162E51: add     rsp, 8
 * 0000000140162E55: call    loc_140162E48
 * 0000000140162E5A: add     rsp, 8
 * 0000000140162E5E: test    byte ptr [r10+3], 80h
 * 0000000140162E63: jz      short loc_140162E98
 * 0000000140162E65: mov     ecx, 0C0000102h
 * 0000000140162E6A: rdmsr
 * 0000000140162E6C: shl     rdx, 20h
 * 0000000140162E70: or      rax, rdx
 * 0000000140162E73: cmp     [r10+0F0h], rax
 * 0000000140162E7A: jz      short loc_140162E98
 * 0000000140162E7C: mov     rdx, [r10+1F0h]
 * 0000000140162E83: bts     dword ptr [r10+74h], 8
 * 0000000140162E89: dec     word ptr [r10+1E6h]
 * 0000000140162E91: mov     [rdx+80h], rax
 * 0000000140162E98: test    byte ptr [r10+3], 3
 * 0000000140162E9D: mov     [rbp+0D8h+var_58], 0
 * 0000000140162EA6: jz      short loc_140162EAD
 * 0000000140162EA8: call    KiSaveDebugRegisterState
 * 0000000140162EAD: cld
 * 0000000140162EAE: lfence
 * 0000000140162EB1: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140162EB5: ldmxcsr dword ptr gs:180h
 * 0000000140162EBE: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140162EC2: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140162EC6: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140162ECA: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140162ECE: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140162ED2: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140162ED6: mov     eax, [rbp+0E0h]
 * 0000000140162EDC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140162EE6: jz      short loc_140162EE9
 * 0000000140162EE8: sti
 * 0000000140162EE9: mov     ecx, 80000002h
 * 0000000140162EEE: xor     edx, edx
 * 0000000140162EF0: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140162EF7: call    KiExceptionDispatch
 * 0000000140162EFC: nop
 * 0000000140162EFD: retn
 */
