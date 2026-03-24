/*
 * XREFs of KiStackFault @ 0x14016BD40
 * Callers:
 *     KiStackFaultShadow @ 0x14023F600 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14016BD40 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14016BD40
 * Reason: Hex-Rays returned no pseudocode for 0x14016BD40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016BD40: push    rbp
 * 000000014016BD41: sub     rsp, 158h
 * 000000014016BD48: lea     rbp, [rsp+80h]
 * 000000014016BD50: mov     [rbp+0D8h+var_12D], 1
 * 000000014016BD54: mov     [rbp+0D8h+var_128], rax
 * 000000014016BD58: mov     [rbp+0D8h+var_120], rcx
 * 000000014016BD5C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016BD60: mov     [rbp+0D8h+var_110], r8
 * 000000014016BD64: mov     [rbp+0D8h+var_108], r9
 * 000000014016BD68: mov     [rbp+0D8h+var_100], r10
 * 000000014016BD6C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016BD70: test    [rbp+0D8h+arg_8], 1
 * 000000014016BD77: jnz     short loc_14016BDA8
 * 000000014016BD79: lfence
 * 000000014016BD7C: test    word ptr gs:2EB8h, 1
 * 000000014016BD87: jnz     short loc_14016BD91
 * 000000014016BD89: lfence
 * 000000014016BD8C: jmp     loc_14016BFCD
 * 000000014016BD91: movzx   eax, word ptr gs:2EBCh
 * 000000014016BD9A: mov     ecx, 48h ; 'H'
 * 000000014016BD9F: xor     edx, edx
 * 000000014016BDA1: wrmsr
 * 000000014016BDA3: jmp     loc_14016BFCD
 * 000000014016BDA8: test    cs:KiKvaShadow, 1
 * 000000014016BDAF: jnz     short loc_14016BDB4
 * 000000014016BDB1: swapgs
 * 000000014016BDB4: lfence
 * 000000014016BDB7: mov     r10, gs:188h
 * 000000014016BDC0: mov     rcx, gs:188h
 * 000000014016BDC9: mov     rcx, [rcx+220h]
 * 000000014016BDD0: mov     rcx, [rcx+7B8h]
 * 000000014016BDD7: mov     gs:2EB0h, rcx
 * 000000014016BDE0: movzx   eax, word ptr gs:2EBEh
 * 000000014016BDE9: cmp     gs:2EBCh, ax
 * 000000014016BDF2: jz      short loc_14016BE06
 * 000000014016BDF4: mov     gs:2EBCh, ax
 * 000000014016BDFD: mov     ecx, 48h ; 'H'
 * 000000014016BE02: xor     edx, edx
 * 000000014016BE04: wrmsr
 * 000000014016BE06: movzx   edx, word ptr gs:2EB8h
 * 000000014016BE0F: test    edx, 8
 * 000000014016BE15: jz      short loc_14016BE2E
 * 000000014016BE17: mov     eax, 1
 * 000000014016BE1C: xor     edx, edx
 * 000000014016BE1E: mov     ecx, 49h ; 'I'
 * 000000014016BE23: wrmsr
 * 000000014016BE25: movzx   edx, word ptr gs:2EB8h
 * 000000014016BE2E: test    edx, 2
 * 000000014016BE34: jz      loc_14016BF5F
 * 000000014016BE3A: call    loc_14016BF4D
 * 000000014016BE3F: add     rsp, 8
 * 000000014016BE43: call    loc_14016BF56
 * 000000014016BE48: add     rsp, 8
 * 000000014016BE4C: call    loc_14016BE3F
 * 000000014016BE51: add     rsp, 8
 * 000000014016BE55: call    loc_14016BE48
 * 000000014016BE5A: add     rsp, 8
 * 000000014016BE5E: call    loc_14016BE51
 * 000000014016BE63: add     rsp, 8
 * 000000014016BE67: call    loc_14016BE5A
 * 000000014016BE6C: add     rsp, 8
 * 000000014016BE70: call    loc_14016BE63
 * 000000014016BE75: add     rsp, 8
 * 000000014016BE79: call    loc_14016BE6C
 * 000000014016BE7E: add     rsp, 8
 * 000000014016BE82: call    loc_14016BE75
 * 000000014016BE87: add     rsp, 8
 * 000000014016BE8B: call    loc_14016BE7E
 * 000000014016BE90: add     rsp, 8
 * 000000014016BE94: call    loc_14016BE87
 * 000000014016BE99: add     rsp, 8
 * 000000014016BE9D: call    loc_14016BE90
 * 000000014016BEA2: add     rsp, 8
 * 000000014016BEA6: call    loc_14016BE99
 * 000000014016BEAB: add     rsp, 8
 * 000000014016BEAF: call    loc_14016BEA2
 * 000000014016BEB4: add     rsp, 8
 * 000000014016BEB8: call    loc_14016BEAB
 * 000000014016BEBD: add     rsp, 8
 * 000000014016BEC1: call    loc_14016BEB4
 * 000000014016BEC6: add     rsp, 8
 * 000000014016BECA: call    loc_14016BEBD
 * 000000014016BECF: add     rsp, 8
 * 000000014016BED3: call    loc_14016BEC6
 * 000000014016BED8: add     rsp, 8
 * 000000014016BEDC: call    loc_14016BECF
 * 000000014016BEE1: add     rsp, 8
 * 000000014016BEE5: call    loc_14016BED8
 * 000000014016BEEA: add     rsp, 8
 * 000000014016BEEE: call    loc_14016BEE1
 * 000000014016BEF3: add     rsp, 8
 * 000000014016BEF7: call    loc_14016BEEA
 * 000000014016BEFC: add     rsp, 8
 * 000000014016BF00: call    loc_14016BEF3
 * 000000014016BF05: add     rsp, 8
 * 000000014016BF09: call    loc_14016BEFC
 * 000000014016BF0E: add     rsp, 8
 * 000000014016BF12: call    loc_14016BF05
 * 000000014016BF17: add     rsp, 8
 * 000000014016BF1B: call    loc_14016BF0E
 * 000000014016BF20: add     rsp, 8
 * 000000014016BF24: call    loc_14016BF17
 * 000000014016BF29: add     rsp, 8
 * 000000014016BF2D: call    loc_14016BF20
 * 000000014016BF32: add     rsp, 8
 * 000000014016BF36: call    loc_14016BF29
 * 000000014016BF3B: add     rsp, 8
 * 000000014016BF3F: call    loc_14016BF32
 * 000000014016BF44: add     rsp, 8
 * 000000014016BF48: call    loc_14016BF3B
 * 000000014016BF4D: add     rsp, 8
 * 000000014016BF51: call    loc_14016BF44
 * 000000014016BF56: add     rsp, 8
 * 000000014016BF5A: mov     eax, 0DADAh
 * 000000014016BF5F: test    edx, 100h
 * 000000014016BF65: jz      short loc_14016BF6C
 * 000000014016BF67: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016BF6C: lfence
 * 000000014016BF6F: test    byte ptr [r10+3], 80h
 * 000000014016BF74: jz      short loc_14016BFB8
 * 000000014016BF76: mov     ecx, 0C0000102h
 * 000000014016BF7B: rdmsr
 * 000000014016BF7D: shl     rdx, 20h
 * 000000014016BF81: or      rax, rdx
 * 000000014016BF84: cmp     rax, cs:MmUserProbeAddress
 * 000000014016BF8B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016BF93: cmp     [r10+0F0h], rax
 * 000000014016BF9A: jz      short loc_14016BFB8
 * 000000014016BF9C: mov     rdx, [r10+1F0h]
 * 000000014016BFA3: bts     dword ptr [r10+74h], 8
 * 000000014016BFA9: dec     word ptr [r10+1E6h]
 * 000000014016BFB1: mov     [rdx+80h], rax
 * 000000014016BFB8: test    byte ptr [r10+3], 3
 * 000000014016BFBD: mov     [rbp+0D8h+var_58], 0
 * 000000014016BFC6: jz      short loc_14016BFCD
 * 000000014016BFC8: call    KiSaveDebugRegisterState
 * 000000014016BFCD: cld
 * 000000014016BFCE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016BFD2: ldmxcsr dword ptr gs:180h
 * 000000014016BFDB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016BFDF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016BFE3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016BFE7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016BFEB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016BFEF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016BFF3: mov     eax, [rbp+0E0h]
 * 000000014016BFF9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016C003: jz      short loc_14016C006
 * 000000014016C005: sti
 * 000000014016C006: mov     ecx, 0C0000005h
 * 000000014016C00B: mov     edx, 2
 * 000000014016C010: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016C017: mov     r9d, [rbp+0E0h]
 * 000000014016C01E: or      r9d, 3
 * 000000014016C022: and     r9d, 0FFFFh
 * 000000014016C029: test    [rbp+0D8h+arg_8], 1
 * 000000014016C030: jnz     short loc_14016C036
 * 000000014016C032: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014016C036: xor     r10, r10
 * 000000014016C039: call    KiExceptionDispatch
 * 000000014016C03E: nop
 * 000000014016C03F: retn
 */
