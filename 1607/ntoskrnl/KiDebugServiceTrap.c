/*
 * XREFs of KiDebugServiceTrap @ 0x14016EB00
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x14023FC00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x14016EB00 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x14016EB00
 * Reason: Hex-Rays returned no pseudocode for 0x14016EB00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016EB00: inc     qword ptr [rsp+0]
 * 000000014016EB04: sub     rsp, 8
 * 000000014016EB08: push    rbp
 * 000000014016EB09: sub     rsp, 158h
 * 000000014016EB10: lea     rbp, [rsp+80h]
 * 000000014016EB18: mov     [rbp+0E8h+var_13D], 1
 * 000000014016EB1C: mov     [rbp+0E8h+var_138], rax
 * 000000014016EB20: mov     [rbp+0E8h+var_130], rcx
 * 000000014016EB24: mov     [rbp+0E8h+var_128], rdx
 * 000000014016EB28: mov     [rbp+0E8h+var_120], r8
 * 000000014016EB2C: mov     [rbp+0E8h+var_118], r9
 * 000000014016EB30: mov     [rbp+0E8h+var_110], r10
 * 000000014016EB34: mov     [rbp+0E8h+var_108], r11
 * 000000014016EB38: test    [rbp+0E8h+arg_0], 1
 * 000000014016EB3F: jnz     short loc_14016EB70
 * 000000014016EB41: lfence
 * 000000014016EB44: test    word ptr gs:2EB8h, 1
 * 000000014016EB4F: jnz     short loc_14016EB59
 * 000000014016EB51: lfence
 * 000000014016EB54: jmp     loc_14016ED95
 * 000000014016EB59: movzx   eax, word ptr gs:2EBCh
 * 000000014016EB62: mov     ecx, 48h ; 'H'
 * 000000014016EB67: xor     edx, edx
 * 000000014016EB69: wrmsr
 * 000000014016EB6B: jmp     loc_14016ED95
 * 000000014016EB70: test    cs:KiKvaShadow, 1
 * 000000014016EB77: jnz     short loc_14016EB7C
 * 000000014016EB79: swapgs
 * 000000014016EB7C: lfence
 * 000000014016EB7F: mov     r10, gs:188h
 * 000000014016EB88: mov     rcx, gs:188h
 * 000000014016EB91: mov     rcx, [rcx+220h]
 * 000000014016EB98: mov     rcx, [rcx+7B8h]
 * 000000014016EB9F: mov     gs:2EB0h, rcx
 * 000000014016EBA8: movzx   eax, word ptr gs:2EBEh
 * 000000014016EBB1: cmp     gs:2EBCh, ax
 * 000000014016EBBA: jz      short loc_14016EBCE
 * 000000014016EBBC: mov     gs:2EBCh, ax
 * 000000014016EBC5: mov     ecx, 48h ; 'H'
 * 000000014016EBCA: xor     edx, edx
 * 000000014016EBCC: wrmsr
 * 000000014016EBCE: movzx   edx, word ptr gs:2EB8h
 * 000000014016EBD7: test    edx, 8
 * 000000014016EBDD: jz      short loc_14016EBF6
 * 000000014016EBDF: mov     eax, 1
 * 000000014016EBE4: xor     edx, edx
 * 000000014016EBE6: mov     ecx, 49h ; 'I'
 * 000000014016EBEB: wrmsr
 * 000000014016EBED: movzx   edx, word ptr gs:2EB8h
 * 000000014016EBF6: test    edx, 2
 * 000000014016EBFC: jz      loc_14016ED27
 * 000000014016EC02: call    loc_14016ED15
 * 000000014016EC07: add     rsp, 8
 * 000000014016EC0B: call    loc_14016ED1E
 * 000000014016EC10: add     rsp, 8
 * 000000014016EC14: call    loc_14016EC07
 * 000000014016EC19: add     rsp, 8
 * 000000014016EC1D: call    loc_14016EC10
 * 000000014016EC22: add     rsp, 8
 * 000000014016EC26: call    loc_14016EC19
 * 000000014016EC2B: add     rsp, 8
 * 000000014016EC2F: call    loc_14016EC22
 * 000000014016EC34: add     rsp, 8
 * 000000014016EC38: call    loc_14016EC2B
 * 000000014016EC3D: add     rsp, 8
 * 000000014016EC41: call    loc_14016EC34
 * 000000014016EC46: add     rsp, 8
 * 000000014016EC4A: call    loc_14016EC3D
 * 000000014016EC4F: add     rsp, 8
 * 000000014016EC53: call    loc_14016EC46
 * 000000014016EC58: add     rsp, 8
 * 000000014016EC5C: call    loc_14016EC4F
 * 000000014016EC61: add     rsp, 8
 * 000000014016EC65: call    loc_14016EC58
 * 000000014016EC6A: add     rsp, 8
 * 000000014016EC6E: call    loc_14016EC61
 * 000000014016EC73: add     rsp, 8
 * 000000014016EC77: call    loc_14016EC6A
 * 000000014016EC7C: add     rsp, 8
 * 000000014016EC80: call    loc_14016EC73
 * 000000014016EC85: add     rsp, 8
 * 000000014016EC89: call    loc_14016EC7C
 * 000000014016EC8E: add     rsp, 8
 * 000000014016EC92: call    loc_14016EC85
 * 000000014016EC97: add     rsp, 8
 * 000000014016EC9B: call    loc_14016EC8E
 * 000000014016ECA0: add     rsp, 8
 * 000000014016ECA4: call    loc_14016EC97
 * 000000014016ECA9: add     rsp, 8
 * 000000014016ECAD: call    loc_14016ECA0
 * 000000014016ECB2: add     rsp, 8
 * 000000014016ECB6: call    loc_14016ECA9
 * 000000014016ECBB: add     rsp, 8
 * 000000014016ECBF: call    loc_14016ECB2
 * 000000014016ECC4: add     rsp, 8
 * 000000014016ECC8: call    loc_14016ECBB
 * 000000014016ECCD: add     rsp, 8
 * 000000014016ECD1: call    loc_14016ECC4
 * 000000014016ECD6: add     rsp, 8
 * 000000014016ECDA: call    loc_14016ECCD
 * 000000014016ECDF: add     rsp, 8
 * 000000014016ECE3: call    loc_14016ECD6
 * 000000014016ECE8: add     rsp, 8
 * 000000014016ECEC: call    loc_14016ECDF
 * 000000014016ECF1: add     rsp, 8
 * 000000014016ECF5: call    loc_14016ECE8
 * 000000014016ECFA: add     rsp, 8
 * 000000014016ECFE: call    loc_14016ECF1
 * 000000014016ED03: add     rsp, 8
 * 000000014016ED07: call    loc_14016ECFA
 * 000000014016ED0C: add     rsp, 8
 * 000000014016ED10: call    loc_14016ED03
 * 000000014016ED15: add     rsp, 8
 * 000000014016ED19: call    loc_14016ED0C
 * 000000014016ED1E: add     rsp, 8
 * 000000014016ED22: mov     eax, 0DADAh
 * 000000014016ED27: test    edx, 100h
 * 000000014016ED2D: jz      short loc_14016ED34
 * 000000014016ED2F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016ED34: lfence
 * 000000014016ED37: test    byte ptr [r10+3], 80h
 * 000000014016ED3C: jz      short loc_14016ED80
 * 000000014016ED3E: mov     ecx, 0C0000102h
 * 000000014016ED43: rdmsr
 * 000000014016ED45: shl     rdx, 20h
 * 000000014016ED49: or      rax, rdx
 * 000000014016ED4C: cmp     rax, cs:MmUserProbeAddress
 * 000000014016ED53: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016ED5B: cmp     [r10+0F0h], rax
 * 000000014016ED62: jz      short loc_14016ED80
 * 000000014016ED64: mov     rdx, [r10+1F0h]
 * 000000014016ED6B: bts     dword ptr [r10+74h], 8
 * 000000014016ED71: dec     word ptr [r10+1E6h]
 * 000000014016ED79: mov     [rdx+80h], rax
 * 000000014016ED80: test    byte ptr [r10+3], 3
 * 000000014016ED85: mov     [rbp+0E8h+var_68], 0
 * 000000014016ED8E: jz      short loc_14016ED95
 * 000000014016ED90: call    KiSaveDebugRegisterState
 * 000000014016ED95: cld
 * 000000014016ED96: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016ED9A: ldmxcsr dword ptr gs:180h
 * 000000014016EDA3: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016EDA7: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016EDAB: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016EDAF: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016EDB3: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016EDB7: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016EDBB: test    [rbp+0E8h+arg_8], 200h
 * 000000014016EDC5: jz      short loc_14016EDC8
 * 000000014016EDC7: sti
 * 000000014016EDC8: mov     ecx, 80000003h
 * 000000014016EDCD: mov     edx, 1
 * 000000014016EDD2: mov     r9, [rbp+0E8h+var_138]
 * 000000014016EDD6: mov     r8, [rbp+0E8h]
 * 000000014016EDDD: call    KiExceptionDispatch
 * 000000014016EDE2: nop
 * 000000014016EDE3: retn
 */
