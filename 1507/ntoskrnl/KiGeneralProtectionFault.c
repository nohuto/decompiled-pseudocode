/*
 * XREFs of KiGeneralProtectionFault @ 0x140190B00
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140274680 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x140190B00 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x140190B00
 * Reason: Hex-Rays returned no pseudocode for 0x140190B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190B00: push    rbp
 * 0000000140190B01: sub     rsp, 158h
 * 0000000140190B08: lea     rbp, [rsp+80h]
 * 0000000140190B10: mov     [rbp+0D8h+var_12D], 1
 * 0000000140190B14: mov     [rbp+0D8h+var_128], rax
 * 0000000140190B18: mov     [rbp+0D8h+var_120], rcx
 * 0000000140190B1C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140190B20: mov     [rbp+0D8h+var_110], r8
 * 0000000140190B24: mov     [rbp+0D8h+var_108], r9
 * 0000000140190B28: mov     [rbp+0D8h+var_100], r10
 * 0000000140190B2C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140190B30: test    [rbp+0D8h+arg_8], 1
 * 0000000140190B37: jnz     short loc_140190B68
 * 0000000140190B39: lfence
 * 0000000140190B3C: test    word ptr gs:2EB0h, 1
 * 0000000140190B47: jnz     short loc_140190B51
 * 0000000140190B49: lfence
 * 0000000140190B4C: jmp     loc_140190D8D
 * 0000000140190B51: movzx   eax, word ptr gs:2EB4h
 * 0000000140190B5A: mov     ecx, 48h ; 'H'
 * 0000000140190B5F: xor     edx, edx
 * 0000000140190B61: wrmsr
 * 0000000140190B63: jmp     loc_140190D8D
 * 0000000140190B68: test    cs:KiKvaShadow, 1
 * 0000000140190B6F: jnz     short loc_140190B74
 * 0000000140190B71: swapgs
 * 0000000140190B74: lfence
 * 0000000140190B77: mov     r10, gs:188h
 * 0000000140190B80: mov     rcx, gs:188h
 * 0000000140190B89: mov     rcx, [rcx+220h]
 * 0000000140190B90: mov     rcx, [rcx+7A0h]
 * 0000000140190B97: mov     gs:2EA8h, rcx
 * 0000000140190BA0: movzx   eax, word ptr gs:2EB6h
 * 0000000140190BA9: cmp     gs:2EB4h, ax
 * 0000000140190BB2: jz      short loc_140190BC6
 * 0000000140190BB4: mov     gs:2EB4h, ax
 * 0000000140190BBD: mov     ecx, 48h ; 'H'
 * 0000000140190BC2: xor     edx, edx
 * 0000000140190BC4: wrmsr
 * 0000000140190BC6: movzx   edx, word ptr gs:2EB0h
 * 0000000140190BCF: test    edx, 8
 * 0000000140190BD5: jz      short loc_140190BEE
 * 0000000140190BD7: mov     eax, 1
 * 0000000140190BDC: xor     edx, edx
 * 0000000140190BDE: mov     ecx, 49h ; 'I'
 * 0000000140190BE3: wrmsr
 * 0000000140190BE5: movzx   edx, word ptr gs:2EB0h
 * 0000000140190BEE: test    edx, 2
 * 0000000140190BF4: jz      loc_140190D1F
 * 0000000140190BFA: call    loc_140190D0D
 * 0000000140190BFF: add     rsp, 8
 * 0000000140190C03: call    loc_140190D16
 * 0000000140190C08: add     rsp, 8
 * 0000000140190C0C: call    loc_140190BFF
 * 0000000140190C11: add     rsp, 8
 * 0000000140190C15: call    loc_140190C08
 * 0000000140190C1A: add     rsp, 8
 * 0000000140190C1E: call    loc_140190C11
 * 0000000140190C23: add     rsp, 8
 * 0000000140190C27: call    loc_140190C1A
 * 0000000140190C2C: add     rsp, 8
 * 0000000140190C30: call    loc_140190C23
 * 0000000140190C35: add     rsp, 8
 * 0000000140190C39: call    loc_140190C2C
 * 0000000140190C3E: add     rsp, 8
 * 0000000140190C42: call    loc_140190C35
 * 0000000140190C47: add     rsp, 8
 * 0000000140190C4B: call    loc_140190C3E
 * 0000000140190C50: add     rsp, 8
 * 0000000140190C54: call    loc_140190C47
 * 0000000140190C59: add     rsp, 8
 * 0000000140190C5D: call    loc_140190C50
 * 0000000140190C62: add     rsp, 8
 * 0000000140190C66: call    loc_140190C59
 * 0000000140190C6B: add     rsp, 8
 * 0000000140190C6F: call    loc_140190C62
 * 0000000140190C74: add     rsp, 8
 * 0000000140190C78: call    loc_140190C6B
 * 0000000140190C7D: add     rsp, 8
 * 0000000140190C81: call    loc_140190C74
 * 0000000140190C86: add     rsp, 8
 * 0000000140190C8A: call    loc_140190C7D
 * 0000000140190C8F: add     rsp, 8
 * 0000000140190C93: call    loc_140190C86
 * 0000000140190C98: add     rsp, 8
 * 0000000140190C9C: call    loc_140190C8F
 * 0000000140190CA1: add     rsp, 8
 * 0000000140190CA5: call    loc_140190C98
 * 0000000140190CAA: add     rsp, 8
 * 0000000140190CAE: call    loc_140190CA1
 * 0000000140190CB3: add     rsp, 8
 * 0000000140190CB7: call    loc_140190CAA
 * 0000000140190CBC: add     rsp, 8
 * 0000000140190CC0: call    loc_140190CB3
 * 0000000140190CC5: add     rsp, 8
 * 0000000140190CC9: call    loc_140190CBC
 * 0000000140190CCE: add     rsp, 8
 * 0000000140190CD2: call    loc_140190CC5
 * 0000000140190CD7: add     rsp, 8
 * 0000000140190CDB: call    loc_140190CCE
 * 0000000140190CE0: add     rsp, 8
 * 0000000140190CE4: call    loc_140190CD7
 * 0000000140190CE9: add     rsp, 8
 * 0000000140190CED: call    loc_140190CE0
 * 0000000140190CF2: add     rsp, 8
 * 0000000140190CF6: call    loc_140190CE9
 * 0000000140190CFB: add     rsp, 8
 * 0000000140190CFF: call    loc_140190CF2
 * 0000000140190D04: add     rsp, 8
 * 0000000140190D08: call    loc_140190CFB
 * 0000000140190D0D: add     rsp, 8
 * 0000000140190D11: call    loc_140190D04
 * 0000000140190D16: add     rsp, 8
 * 0000000140190D1A: mov     eax, 0DADAh
 * 0000000140190D1F: test    edx, 100h
 * 0000000140190D25: jz      short loc_140190D2C
 * 0000000140190D27: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140190D2C: lfence
 * 0000000140190D2F: test    byte ptr [r10+3], 80h
 * 0000000140190D34: jz      short loc_140190D78
 * 0000000140190D36: mov     ecx, 0C0000102h
 * 0000000140190D3B: rdmsr
 * 0000000140190D3D: shl     rdx, 20h
 * 0000000140190D41: or      rax, rdx
 * 0000000140190D44: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190D4B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140190D53: cmp     [r10+0F0h], rax
 * 0000000140190D5A: jz      short loc_140190D78
 * 0000000140190D5C: mov     rdx, [r10+1F0h]
 * 0000000140190D63: bts     dword ptr [r10+74h], 8
 * 0000000140190D69: dec     word ptr [r10+1E6h]
 * 0000000140190D71: mov     [rdx+80h], rax
 * 0000000140190D78: test    byte ptr [r10+3], 3
 * 0000000140190D7D: mov     [rbp+0D8h+var_58], 0
 * 0000000140190D86: jz      short loc_140190D8D
 * 0000000140190D88: call    KiSaveDebugRegisterState
 * 0000000140190D8D: cld
 * 0000000140190D8E: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140190D92: ldmxcsr dword ptr gs:180h
 * 0000000140190D9B: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140190D9F: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140190DA3: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140190DA7: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140190DAB: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140190DAF: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140190DB3: mov     eax, [rbp+0E0h]
 * 0000000140190DB9: test    [rbp+0D8h+arg_10], 200h
 * 0000000140190DC4: jz      short loc_140190DC7
 * 0000000140190DC6: sti
 * 0000000140190DC7: mov     ecx, 10000001h
 * 0000000140190DCC: mov     edx, 2
 * 0000000140190DD1: mov     r9d, [rbp+0E0h]
 * 0000000140190DD8: and     r9d, 0FFFFh
 * 0000000140190DDF: xor     r10, r10
 * 0000000140190DE2: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140190DE9: call    KiExceptionDispatch
 * 0000000140190DEE: nop
 * 0000000140190DEF: retn
 */
