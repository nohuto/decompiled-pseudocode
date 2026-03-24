/*
 * XREFs of KiDivideErrorFault @ 0x14018DC00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140274000 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14018DC00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14018DC00
 * Reason: Hex-Rays returned no pseudocode for 0x14018DC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018DC00: sub     rsp, 8
 * 000000014018DC04: push    rbp
 * 000000014018DC05: sub     rsp, 158h
 * 000000014018DC0C: lea     rbp, [rsp+80h]
 * 000000014018DC14: mov     [rbp+0E8h+var_13D], 1
 * 000000014018DC18: mov     [rbp+0E8h+var_138], rax
 * 000000014018DC1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018DC20: mov     [rbp+0E8h+var_128], rdx
 * 000000014018DC24: mov     [rbp+0E8h+var_120], r8
 * 000000014018DC28: mov     [rbp+0E8h+var_118], r9
 * 000000014018DC2C: mov     [rbp+0E8h+var_110], r10
 * 000000014018DC30: mov     [rbp+0E8h+var_108], r11
 * 000000014018DC34: test    [rbp+0E8h+arg_0], 1
 * 000000014018DC3B: jnz     short loc_14018DC6C
 * 000000014018DC3D: lfence
 * 000000014018DC40: test    word ptr gs:2EB0h, 1
 * 000000014018DC4B: jnz     short loc_14018DC55
 * 000000014018DC4D: lfence
 * 000000014018DC50: jmp     loc_14018DE91
 * 000000014018DC55: movzx   eax, word ptr gs:2EB4h
 * 000000014018DC5E: mov     ecx, 48h ; 'H'
 * 000000014018DC63: xor     edx, edx
 * 000000014018DC65: wrmsr
 * 000000014018DC67: jmp     loc_14018DE91
 * 000000014018DC6C: test    cs:KiKvaShadow, 1
 * 000000014018DC73: jnz     short loc_14018DC78
 * 000000014018DC75: swapgs
 * 000000014018DC78: lfence
 * 000000014018DC7B: mov     r10, gs:188h
 * 000000014018DC84: mov     rcx, gs:188h
 * 000000014018DC8D: mov     rcx, [rcx+220h]
 * 000000014018DC94: mov     rcx, [rcx+7A0h]
 * 000000014018DC9B: mov     gs:2EA8h, rcx
 * 000000014018DCA4: movzx   eax, word ptr gs:2EB6h
 * 000000014018DCAD: cmp     gs:2EB4h, ax
 * 000000014018DCB6: jz      short loc_14018DCCA
 * 000000014018DCB8: mov     gs:2EB4h, ax
 * 000000014018DCC1: mov     ecx, 48h ; 'H'
 * 000000014018DCC6: xor     edx, edx
 * 000000014018DCC8: wrmsr
 * 000000014018DCCA: movzx   edx, word ptr gs:2EB0h
 * 000000014018DCD3: test    edx, 8
 * 000000014018DCD9: jz      short loc_14018DCF2
 * 000000014018DCDB: mov     eax, 1
 * 000000014018DCE0: xor     edx, edx
 * 000000014018DCE2: mov     ecx, 49h ; 'I'
 * 000000014018DCE7: wrmsr
 * 000000014018DCE9: movzx   edx, word ptr gs:2EB0h
 * 000000014018DCF2: test    edx, 2
 * 000000014018DCF8: jz      loc_14018DE23
 * 000000014018DCFE: call    loc_14018DE11
 * 000000014018DD03: add     rsp, 8
 * 000000014018DD07: call    loc_14018DE1A
 * 000000014018DD0C: add     rsp, 8
 * 000000014018DD10: call    loc_14018DD03
 * 000000014018DD15: add     rsp, 8
 * 000000014018DD19: call    loc_14018DD0C
 * 000000014018DD1E: add     rsp, 8
 * 000000014018DD22: call    loc_14018DD15
 * 000000014018DD27: add     rsp, 8
 * 000000014018DD2B: call    loc_14018DD1E
 * 000000014018DD30: add     rsp, 8
 * 000000014018DD34: call    loc_14018DD27
 * 000000014018DD39: add     rsp, 8
 * 000000014018DD3D: call    loc_14018DD30
 * 000000014018DD42: add     rsp, 8
 * 000000014018DD46: call    loc_14018DD39
 * 000000014018DD4B: add     rsp, 8
 * 000000014018DD4F: call    loc_14018DD42
 * 000000014018DD54: add     rsp, 8
 * 000000014018DD58: call    loc_14018DD4B
 * 000000014018DD5D: add     rsp, 8
 * 000000014018DD61: call    loc_14018DD54
 * 000000014018DD66: add     rsp, 8
 * 000000014018DD6A: call    loc_14018DD5D
 * 000000014018DD6F: add     rsp, 8
 * 000000014018DD73: call    loc_14018DD66
 * 000000014018DD78: add     rsp, 8
 * 000000014018DD7C: call    loc_14018DD6F
 * 000000014018DD81: add     rsp, 8
 * 000000014018DD85: call    loc_14018DD78
 * 000000014018DD8A: add     rsp, 8
 * 000000014018DD8E: call    loc_14018DD81
 * 000000014018DD93: add     rsp, 8
 * 000000014018DD97: call    loc_14018DD8A
 * 000000014018DD9C: add     rsp, 8
 * 000000014018DDA0: call    loc_14018DD93
 * 000000014018DDA5: add     rsp, 8
 * 000000014018DDA9: call    loc_14018DD9C
 * 000000014018DDAE: add     rsp, 8
 * 000000014018DDB2: call    loc_14018DDA5
 * 000000014018DDB7: add     rsp, 8
 * 000000014018DDBB: call    loc_14018DDAE
 * 000000014018DDC0: add     rsp, 8
 * 000000014018DDC4: call    loc_14018DDB7
 * 000000014018DDC9: add     rsp, 8
 * 000000014018DDCD: call    loc_14018DDC0
 * 000000014018DDD2: add     rsp, 8
 * 000000014018DDD6: call    loc_14018DDC9
 * 000000014018DDDB: add     rsp, 8
 * 000000014018DDDF: call    loc_14018DDD2
 * 000000014018DDE4: add     rsp, 8
 * 000000014018DDE8: call    loc_14018DDDB
 * 000000014018DDED: add     rsp, 8
 * 000000014018DDF1: call    loc_14018DDE4
 * 000000014018DDF6: add     rsp, 8
 * 000000014018DDFA: call    loc_14018DDED
 * 000000014018DDFF: add     rsp, 8
 * 000000014018DE03: call    loc_14018DDF6
 * 000000014018DE08: add     rsp, 8
 * 000000014018DE0C: call    loc_14018DDFF
 * 000000014018DE11: add     rsp, 8
 * 000000014018DE15: call    loc_14018DE08
 * 000000014018DE1A: add     rsp, 8
 * 000000014018DE1E: mov     eax, 0DADAh
 * 000000014018DE23: test    edx, 100h
 * 000000014018DE29: jz      short loc_14018DE30
 * 000000014018DE2B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018DE30: lfence
 * 000000014018DE33: test    byte ptr [r10+3], 80h
 * 000000014018DE38: jz      short loc_14018DE7C
 * 000000014018DE3A: mov     ecx, 0C0000102h
 * 000000014018DE3F: rdmsr
 * 000000014018DE41: shl     rdx, 20h
 * 000000014018DE45: or      rax, rdx
 * 000000014018DE48: cmp     rax, cs:MmUserProbeAddress
 * 000000014018DE4F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018DE57: cmp     [r10+0F0h], rax
 * 000000014018DE5E: jz      short loc_14018DE7C
 * 000000014018DE60: mov     rdx, [r10+1F0h]
 * 000000014018DE67: bts     dword ptr [r10+74h], 8
 * 000000014018DE6D: dec     word ptr [r10+1E6h]
 * 000000014018DE75: mov     [rdx+80h], rax
 * 000000014018DE7C: test    byte ptr [r10+3], 3
 * 000000014018DE81: mov     [rbp+0E8h+var_68], 0
 * 000000014018DE8A: jz      short loc_14018DE91
 * 000000014018DE8C: call    KiSaveDebugRegisterState
 * 000000014018DE91: cld
 * 000000014018DE92: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018DE96: ldmxcsr dword ptr gs:180h
 * 000000014018DE9F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018DEA3: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018DEA7: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018DEAB: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018DEAF: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018DEB3: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018DEB7: test    [rbp+0E8h+arg_8], 200h
 * 000000014018DEC2: jz      short loc_14018DEC5
 * 000000014018DEC4: sti
 * 000000014018DEC5: mov     ecx, 10000003h
 * 000000014018DECA: xor     edx, edx
 * 000000014018DECC: mov     r8, [rbp+0E8h]
 * 000000014018DED3: call    KiExceptionDispatch
 * 000000014018DED8: nop
 * 000000014018DED9: retn
 */
