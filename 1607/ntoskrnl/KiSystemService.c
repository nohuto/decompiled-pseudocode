/*
 * XREFs of KiSystemService @ 0x14016EE00
 * Callers:
 *     KiSystemServiceShadow @ 0x14023FC80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x14016EE00 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x14016EE00
 * Reason: Hex-Rays returned no pseudocode for 0x14016EE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016EE00: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014016EE06: jz      KiSystemService32User
 * 000000014016EE0C: test    cs:KiKvaShadow, 1
 * 000000014016EE13: jnz     short loc_14016EE18
 * 000000014016EE15: swapgs
 * 000000014016EE18: lfence
 * 000000014016EE1B: mov     rcx, r10
 * 000000014016EE1E: sub     rsp, 8
 * 000000014016EE22: push    rbp
 * 000000014016EE23: sub     rsp, 158h
 * 000000014016EE2A: lea     rbp, [rsp+168h+var_E8]
 * 000000014016EE32: mov     [rbp+0C0h], rbx
 * 000000014016EE39: mov     [rbp+0C8h], rdi
 * 000000014016EE40: mov     [rbp+0D0h], rsi
 * 000000014016EE47: cld
 * 000000014016EE48: mov     [rbp-50h], rax
 * 000000014016EE4C: mov     [rbp-48h], rcx
 * 000000014016EE50: mov     [rbp-40h], rdx
 * 000000014016EE54: mov     rcx, gs:188h
 * 000000014016EE5D: mov     rcx, [rcx+220h]
 * 000000014016EE64: mov     rcx, [rcx+7B8h]
 * 000000014016EE6B: mov     gs:2EB0h, rcx
 * 000000014016EE74: movzx   eax, word ptr gs:2EBEh
 * 000000014016EE7D: cmp     gs:2EBCh, ax
 * 000000014016EE86: jz      short loc_14016EE9A
 * 000000014016EE88: mov     gs:2EBCh, ax
 * 000000014016EE91: mov     ecx, 48h ; 'H'
 * 000000014016EE96: xor     edx, edx
 * 000000014016EE98: wrmsr
 * 000000014016EE9A: movzx   edx, word ptr gs:2EB8h
 * 000000014016EEA3: test    edx, 8
 * 000000014016EEA9: jz      short loc_14016EEC2
 * 000000014016EEAB: mov     eax, 1
 * 000000014016EEB0: xor     edx, edx
 * 000000014016EEB2: mov     ecx, 49h ; 'I'
 * 000000014016EEB7: wrmsr
 * 000000014016EEB9: movzx   edx, word ptr gs:2EB8h
 * 000000014016EEC2: test    edx, 2
 * 000000014016EEC8: jz      loc_14016EFF3
 * 000000014016EECE: call    loc_14016EFE1
 * 000000014016EED3: add     rsp, 8
 * 000000014016EED7: call    loc_14016EFEA
 * 000000014016EEDC: add     rsp, 8
 * 000000014016EEE0: call    loc_14016EED3
 * 000000014016EEE5: add     rsp, 8
 * 000000014016EEE9: call    loc_14016EEDC
 * 000000014016EEEE: add     rsp, 8
 * 000000014016EEF2: call    loc_14016EEE5
 * 000000014016EEF7: add     rsp, 8
 * 000000014016EEFB: call    loc_14016EEEE
 * 000000014016EF00: add     rsp, 8
 * 000000014016EF04: call    loc_14016EEF7
 * 000000014016EF09: add     rsp, 8
 * 000000014016EF0D: call    loc_14016EF00
 * 000000014016EF12: add     rsp, 8
 * 000000014016EF16: call    loc_14016EF09
 * 000000014016EF1B: add     rsp, 8
 * 000000014016EF1F: call    loc_14016EF12
 * 000000014016EF24: add     rsp, 8
 * 000000014016EF28: call    loc_14016EF1B
 * 000000014016EF2D: add     rsp, 8
 * 000000014016EF31: call    loc_14016EF24
 * 000000014016EF36: add     rsp, 8
 * 000000014016EF3A: call    loc_14016EF2D
 * 000000014016EF3F: add     rsp, 8
 * 000000014016EF43: call    loc_14016EF36
 * 000000014016EF48: add     rsp, 8
 * 000000014016EF4C: call    loc_14016EF3F
 * 000000014016EF51: add     rsp, 8
 * 000000014016EF55: call    loc_14016EF48
 * 000000014016EF5A: add     rsp, 8
 * 000000014016EF5E: call    loc_14016EF51
 * 000000014016EF63: add     rsp, 8
 * 000000014016EF67: call    loc_14016EF5A
 * 000000014016EF6C: add     rsp, 8
 * 000000014016EF70: call    loc_14016EF63
 * 000000014016EF75: add     rsp, 8
 * 000000014016EF79: call    loc_14016EF6C
 * 000000014016EF7E: add     rsp, 8
 * 000000014016EF82: call    loc_14016EF75
 * 000000014016EF87: add     rsp, 8
 * 000000014016EF8B: call    loc_14016EF7E
 * 000000014016EF90: add     rsp, 8
 * 000000014016EF94: call    loc_14016EF87
 * 000000014016EF99: add     rsp, 8
 * 000000014016EF9D: call    loc_14016EF90
 * 000000014016EFA2: add     rsp, 8
 * 000000014016EFA6: call    loc_14016EF99
 * 000000014016EFAB: add     rsp, 8
 * 000000014016EFAF: call    loc_14016EFA2
 * 000000014016EFB4: add     rsp, 8
 * 000000014016EFB8: call    loc_14016EFAB
 * 000000014016EFBD: add     rsp, 8
 * 000000014016EFC1: call    loc_14016EFB4
 * 000000014016EFC6: add     rsp, 8
 * 000000014016EFCA: call    loc_14016EFBD
 * 000000014016EFCF: add     rsp, 8
 * 000000014016EFD3: call    loc_14016EFC6
 * 000000014016EFD8: add     rsp, 8
 * 000000014016EFDC: call    loc_14016EFCF
 * 000000014016EFE1: add     rsp, 8
 * 000000014016EFE5: call    loc_14016EFD8
 * 000000014016EFEA: add     rsp, 8
 * 000000014016EFEE: mov     eax, 0DADAh
 * 000000014016EFF3: test    edx, 100h
 * 000000014016EFF9: jz      short loc_14016F000
 * 000000014016EFFB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016F000: lfence
 * 000000014016F003: jmp     KiSystemServiceUser
 * 000000014016F008: retn
 */
