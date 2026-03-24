/*
 * XREFs of KiBreakpointTrap @ 0x140169CC0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x14023F180 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140169CC0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140169CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140169CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140169CC0: sub     rsp, 8
 * 0000000140169CC4: push    rbp
 * 0000000140169CC5: sub     rsp, 158h
 * 0000000140169CCC: lea     rbp, [rsp+80h]
 * 0000000140169CD4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140169CD8: mov     [rbp+0E8h+var_138], rax
 * 0000000140169CDC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140169CE0: mov     [rbp+0E8h+var_128], rdx
 * 0000000140169CE4: mov     [rbp+0E8h+var_120], r8
 * 0000000140169CE8: mov     [rbp+0E8h+var_118], r9
 * 0000000140169CEC: mov     [rbp+0E8h+var_110], r10
 * 0000000140169CF0: mov     [rbp+0E8h+var_108], r11
 * 0000000140169CF4: test    [rbp+0E8h+arg_0], 1
 * 0000000140169CFB: jnz     short loc_140169D2C
 * 0000000140169CFD: lfence
 * 0000000140169D00: test    word ptr gs:2EB8h, 1
 * 0000000140169D0B: jnz     short loc_140169D15
 * 0000000140169D0D: lfence
 * 0000000140169D10: jmp     loc_140169F51
 * 0000000140169D15: movzx   eax, word ptr gs:2EBCh
 * 0000000140169D1E: mov     ecx, 48h ; 'H'
 * 0000000140169D23: xor     edx, edx
 * 0000000140169D25: wrmsr
 * 0000000140169D27: jmp     loc_140169F51
 * 0000000140169D2C: test    cs:KiKvaShadow, 1
 * 0000000140169D33: jnz     short loc_140169D38
 * 0000000140169D35: swapgs
 * 0000000140169D38: lfence
 * 0000000140169D3B: mov     r10, gs:188h
 * 0000000140169D44: mov     rcx, gs:188h
 * 0000000140169D4D: mov     rcx, [rcx+220h]
 * 0000000140169D54: mov     rcx, [rcx+7B8h]
 * 0000000140169D5B: mov     gs:2EB0h, rcx
 * 0000000140169D64: movzx   eax, word ptr gs:2EBEh
 * 0000000140169D6D: cmp     gs:2EBCh, ax
 * 0000000140169D76: jz      short loc_140169D8A
 * 0000000140169D78: mov     gs:2EBCh, ax
 * 0000000140169D81: mov     ecx, 48h ; 'H'
 * 0000000140169D86: xor     edx, edx
 * 0000000140169D88: wrmsr
 * 0000000140169D8A: movzx   edx, word ptr gs:2EB8h
 * 0000000140169D93: test    edx, 8
 * 0000000140169D99: jz      short loc_140169DB2
 * 0000000140169D9B: mov     eax, 1
 * 0000000140169DA0: xor     edx, edx
 * 0000000140169DA2: mov     ecx, 49h ; 'I'
 * 0000000140169DA7: wrmsr
 * 0000000140169DA9: movzx   edx, word ptr gs:2EB8h
 * 0000000140169DB2: test    edx, 2
 * 0000000140169DB8: jz      loc_140169EE3
 * 0000000140169DBE: call    loc_140169ED1
 * 0000000140169DC3: add     rsp, 8
 * 0000000140169DC7: call    loc_140169EDA
 * 0000000140169DCC: add     rsp, 8
 * 0000000140169DD0: call    loc_140169DC3
 * 0000000140169DD5: add     rsp, 8
 * 0000000140169DD9: call    loc_140169DCC
 * 0000000140169DDE: add     rsp, 8
 * 0000000140169DE2: call    loc_140169DD5
 * 0000000140169DE7: add     rsp, 8
 * 0000000140169DEB: call    loc_140169DDE
 * 0000000140169DF0: add     rsp, 8
 * 0000000140169DF4: call    loc_140169DE7
 * 0000000140169DF9: add     rsp, 8
 * 0000000140169DFD: call    loc_140169DF0
 * 0000000140169E02: add     rsp, 8
 * 0000000140169E06: call    loc_140169DF9
 * 0000000140169E0B: add     rsp, 8
 * 0000000140169E0F: call    loc_140169E02
 * 0000000140169E14: add     rsp, 8
 * 0000000140169E18: call    loc_140169E0B
 * 0000000140169E1D: add     rsp, 8
 * 0000000140169E21: call    loc_140169E14
 * 0000000140169E26: add     rsp, 8
 * 0000000140169E2A: call    loc_140169E1D
 * 0000000140169E2F: add     rsp, 8
 * 0000000140169E33: call    loc_140169E26
 * 0000000140169E38: add     rsp, 8
 * 0000000140169E3C: call    loc_140169E2F
 * 0000000140169E41: add     rsp, 8
 * 0000000140169E45: call    loc_140169E38
 * 0000000140169E4A: add     rsp, 8
 * 0000000140169E4E: call    loc_140169E41
 * 0000000140169E53: add     rsp, 8
 * 0000000140169E57: call    loc_140169E4A
 * 0000000140169E5C: add     rsp, 8
 * 0000000140169E60: call    loc_140169E53
 * 0000000140169E65: add     rsp, 8
 * 0000000140169E69: call    loc_140169E5C
 * 0000000140169E6E: add     rsp, 8
 * 0000000140169E72: call    loc_140169E65
 * 0000000140169E77: add     rsp, 8
 * 0000000140169E7B: call    loc_140169E6E
 * 0000000140169E80: add     rsp, 8
 * 0000000140169E84: call    loc_140169E77
 * 0000000140169E89: add     rsp, 8
 * 0000000140169E8D: call    loc_140169E80
 * 0000000140169E92: add     rsp, 8
 * 0000000140169E96: call    loc_140169E89
 * 0000000140169E9B: add     rsp, 8
 * 0000000140169E9F: call    loc_140169E92
 * 0000000140169EA4: add     rsp, 8
 * 0000000140169EA8: call    loc_140169E9B
 * 0000000140169EAD: add     rsp, 8
 * 0000000140169EB1: call    loc_140169EA4
 * 0000000140169EB6: add     rsp, 8
 * 0000000140169EBA: call    loc_140169EAD
 * 0000000140169EBF: add     rsp, 8
 * 0000000140169EC3: call    loc_140169EB6
 * 0000000140169EC8: add     rsp, 8
 * 0000000140169ECC: call    loc_140169EBF
 * 0000000140169ED1: add     rsp, 8
 * 0000000140169ED5: call    loc_140169EC8
 * 0000000140169EDA: add     rsp, 8
 * 0000000140169EDE: mov     eax, 0DADAh
 * 0000000140169EE3: test    edx, 100h
 * 0000000140169EE9: jz      short loc_140169EF0
 * 0000000140169EEB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140169EF0: lfence
 * 0000000140169EF3: test    byte ptr [r10+3], 80h
 * 0000000140169EF8: jz      short loc_140169F3C
 * 0000000140169EFA: mov     ecx, 0C0000102h
 * 0000000140169EFF: rdmsr
 * 0000000140169F01: shl     rdx, 20h
 * 0000000140169F05: or      rax, rdx
 * 0000000140169F08: cmp     rax, cs:MmUserProbeAddress
 * 0000000140169F0F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140169F17: cmp     [r10+0F0h], rax
 * 0000000140169F1E: jz      short loc_140169F3C
 * 0000000140169F20: mov     rdx, [r10+1F0h]
 * 0000000140169F27: bts     dword ptr [r10+74h], 8
 * 0000000140169F2D: dec     word ptr [r10+1E6h]
 * 0000000140169F35: mov     [rdx+80h], rax
 * 0000000140169F3C: test    byte ptr [r10+3], 3
 * 0000000140169F41: mov     [rbp+0E8h+var_68], 0
 * 0000000140169F4A: jz      short loc_140169F51
 * 0000000140169F4C: call    KiSaveDebugRegisterState
 * 0000000140169F51: cld
 * 0000000140169F52: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140169F56: ldmxcsr dword ptr gs:180h
 * 0000000140169F5F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140169F63: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140169F67: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140169F6B: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140169F6F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140169F73: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140169F77: test    [rbp+0E8h+arg_8], 200h
 * 0000000140169F81: jz      short loc_140169F84
 * 0000000140169F83: sti
 * 0000000140169F84: mov     ecx, 80000003h
 * 0000000140169F89: mov     edx, 1
 * 0000000140169F8E: mov     r8, [rbp+0E8h]
 * 0000000140169F95: dec     r8
 * 0000000140169F98: mov     r9d, 0
 * 0000000140169F9E: call    KiExceptionDispatch
 * 0000000140169FA3: nop
 * 0000000140169FA4: retn
 */
