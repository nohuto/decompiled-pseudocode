/*
 * XREFs of KiDebugTrapOrFault @ 0x14015E6C0
 * Callers:
 *     KiDebugTrapOrFaultShadow @ 0x140224080 (KiDebugTrapOrFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiDebugTrapOrFault @ 0x14015E6C0 (KiDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugTrapOrFault @ 0x14015E6C0
 * Reason: Hex-Rays returned no pseudocode for 0x14015E6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015E6C0: sub     rsp, 8
 * 000000014015E6C4: push    rbp
 * 000000014015E6C5: sub     rsp, 158h
 * 000000014015E6CC: lea     rbp, [rsp+80h]
 * 000000014015E6D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014015E6D8: mov     [rbp+0E8h+var_138], rax
 * 000000014015E6DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014015E6E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014015E6E4: mov     [rbp+0E8h+var_120], r8
 * 000000014015E6E8: mov     [rbp+0E8h+var_118], r9
 * 000000014015E6EC: mov     [rbp+0E8h+var_110], r10
 * 000000014015E6F0: mov     [rbp+0E8h+var_108], r11
 * 000000014015E6F4: test    [rbp+0E8h+arg_0], 1
 * 000000014015E6FB: jnz     loc_14015E861
 * 000000014015E701: cmp     byte ptr gs:187h, 0
 * 000000014015E70A: jz      loc_14015EA31
 * 000000014015E710: test    byte ptr gs:2EB0h, 1
 * 000000014015E719: jz      loc_14015EA31
 * 000000014015E71F: mov     ecx, 48h ; 'H'
 * 000000014015E724: mov     eax, 1
 * 000000014015E729: xor     edx, edx
 * 000000014015E72B: wrmsr
 * 000000014015E72D: test    byte ptr gs:2EB0h, 4
 * 000000014015E736: jnz     loc_14015EA31
 * 000000014015E73C: call    loc_14015E84F
 * 000000014015E741: add     rsp, 8
 * 000000014015E745: call    loc_14015E858
 * 000000014015E74A: add     rsp, 8
 * 000000014015E74E: call    loc_14015E741
 * 000000014015E753: add     rsp, 8
 * 000000014015E757: call    loc_14015E74A
 * 000000014015E75C: add     rsp, 8
 * 000000014015E760: call    loc_14015E753
 * 000000014015E765: add     rsp, 8
 * 000000014015E769: call    loc_14015E75C
 * 000000014015E76E: add     rsp, 8
 * 000000014015E772: call    loc_14015E765
 * 000000014015E777: add     rsp, 8
 * 000000014015E77B: call    loc_14015E76E
 * 000000014015E780: add     rsp, 8
 * 000000014015E784: call    loc_14015E777
 * 000000014015E789: add     rsp, 8
 * 000000014015E78D: call    loc_14015E780
 * 000000014015E792: add     rsp, 8
 * 000000014015E796: call    loc_14015E789
 * 000000014015E79B: add     rsp, 8
 * 000000014015E79F: call    loc_14015E792
 * 000000014015E7A4: add     rsp, 8
 * 000000014015E7A8: call    loc_14015E79B
 * 000000014015E7AD: add     rsp, 8
 * 000000014015E7B1: call    loc_14015E7A4
 * 000000014015E7B6: add     rsp, 8
 * 000000014015E7BA: call    loc_14015E7AD
 * 000000014015E7BF: add     rsp, 8
 * 000000014015E7C3: call    loc_14015E7B6
 * 000000014015E7C8: add     rsp, 8
 * 000000014015E7CC: call    loc_14015E7BF
 * 000000014015E7D1: add     rsp, 8
 * 000000014015E7D5: call    loc_14015E7C8
 * 000000014015E7DA: add     rsp, 8
 * 000000014015E7DE: call    loc_14015E7D1
 * 000000014015E7E3: add     rsp, 8
 * 000000014015E7E7: call    loc_14015E7DA
 * 000000014015E7EC: add     rsp, 8
 * 000000014015E7F0: call    loc_14015E7E3
 * 000000014015E7F5: add     rsp, 8
 * 000000014015E7F9: call    loc_14015E7EC
 * 000000014015E7FE: add     rsp, 8
 * 000000014015E802: call    loc_14015E7F5
 * 000000014015E807: add     rsp, 8
 * 000000014015E80B: call    loc_14015E7FE
 * 000000014015E810: add     rsp, 8
 * 000000014015E814: call    loc_14015E807
 * 000000014015E819: add     rsp, 8
 * 000000014015E81D: call    loc_14015E810
 * 000000014015E822: add     rsp, 8
 * 000000014015E826: call    loc_14015E819
 * 000000014015E82B: add     rsp, 8
 * 000000014015E82F: call    loc_14015E822
 * 000000014015E834: add     rsp, 8
 * 000000014015E838: call    loc_14015E82B
 * 000000014015E83D: add     rsp, 8
 * 000000014015E841: call    loc_14015E834
 * 000000014015E846: add     rsp, 8
 * 000000014015E84A: call    loc_14015E83D
 * 000000014015E84F: add     rsp, 8
 * 000000014015E853: call    loc_14015E846
 * 000000014015E858: add     rsp, 8
 * 000000014015E85C: jmp     loc_14015EA31
 * 000000014015E861: test    cs:KiKvaShadow, 1
 * 000000014015E868: jnz     short loc_14015E86D
 * 000000014015E86A: swapgs
 * 000000014015E86D: mov     r10, gs:188h
 * 000000014015E876: test    byte ptr gs:2EB0h, 1
 * 000000014015E87F: jz      loc_14015E9E2
 * 000000014015E885: mov     rcx, gs:188h
 * 000000014015E88E: mov     rcx, [rcx+220h]
 * 000000014015E895: mov     rcx, [rcx+790h]
 * 000000014015E89C: mov     gs:2EA8h, rcx
 * 000000014015E8A5: mov     ecx, 48h ; 'H'
 * 000000014015E8AA: mov     eax, 1
 * 000000014015E8AF: xor     edx, edx
 * 000000014015E8B1: wrmsr
 * 000000014015E8B3: test    byte ptr gs:2EB0h, 4
 * 000000014015E8BC: jnz     loc_14015E9E2
 * 000000014015E8C2: call    loc_14015E9D5
 * 000000014015E8C7: add     rsp, 8
 * 000000014015E8CB: call    loc_14015E9DE
 * 000000014015E8D0: add     rsp, 8
 * 000000014015E8D4: call    loc_14015E8C7
 * 000000014015E8D9: add     rsp, 8
 * 000000014015E8DD: call    loc_14015E8D0
 * 000000014015E8E2: add     rsp, 8
 * 000000014015E8E6: call    loc_14015E8D9
 * 000000014015E8EB: add     rsp, 8
 * 000000014015E8EF: call    loc_14015E8E2
 * 000000014015E8F4: add     rsp, 8
 * 000000014015E8F8: call    loc_14015E8EB
 * 000000014015E8FD: add     rsp, 8
 * 000000014015E901: call    loc_14015E8F4
 * 000000014015E906: add     rsp, 8
 * 000000014015E90A: call    loc_14015E8FD
 * 000000014015E90F: add     rsp, 8
 * 000000014015E913: call    loc_14015E906
 * 000000014015E918: add     rsp, 8
 * 000000014015E91C: call    loc_14015E90F
 * 000000014015E921: add     rsp, 8
 * 000000014015E925: call    loc_14015E918
 * 000000014015E92A: add     rsp, 8
 * 000000014015E92E: call    loc_14015E921
 * 000000014015E933: add     rsp, 8
 * 000000014015E937: call    loc_14015E92A
 * 000000014015E93C: add     rsp, 8
 * 000000014015E940: call    loc_14015E933
 * 000000014015E945: add     rsp, 8
 * 000000014015E949: call    loc_14015E93C
 * 000000014015E94E: add     rsp, 8
 * 000000014015E952: call    loc_14015E945
 * 000000014015E957: add     rsp, 8
 * 000000014015E95B: call    loc_14015E94E
 * 000000014015E960: add     rsp, 8
 * 000000014015E964: call    loc_14015E957
 * 000000014015E969: add     rsp, 8
 * 000000014015E96D: call    loc_14015E960
 * 000000014015E972: add     rsp, 8
 * 000000014015E976: call    loc_14015E969
 * 000000014015E97B: add     rsp, 8
 * 000000014015E97F: call    loc_14015E972
 * 000000014015E984: add     rsp, 8
 * 000000014015E988: call    loc_14015E97B
 * 000000014015E98D: add     rsp, 8
 * 000000014015E991: call    loc_14015E984
 * 000000014015E996: add     rsp, 8
 * 000000014015E99A: call    loc_14015E98D
 * 000000014015E99F: add     rsp, 8
 * 000000014015E9A3: call    loc_14015E996
 * 000000014015E9A8: add     rsp, 8
 * 000000014015E9AC: call    loc_14015E99F
 * 000000014015E9B1: add     rsp, 8
 * 000000014015E9B5: call    loc_14015E9A8
 * 000000014015E9BA: add     rsp, 8
 * 000000014015E9BE: call    loc_14015E9B1
 * 000000014015E9C3: add     rsp, 8
 * 000000014015E9C7: call    loc_14015E9BA
 * 000000014015E9CC: add     rsp, 8
 * 000000014015E9D0: call    loc_14015E9C3
 * 000000014015E9D5: add     rsp, 8
 * 000000014015E9D9: call    loc_14015E9CC
 * 000000014015E9DE: add     rsp, 8
 * 000000014015E9E2: test    byte ptr [r10+3], 80h
 * 000000014015E9E7: jz      short loc_14015EA1C
 * 000000014015E9E9: mov     ecx, 0C0000102h
 * 000000014015E9EE: rdmsr
 * 000000014015E9F0: shl     rdx, 20h
 * 000000014015E9F4: or      rax, rdx
 * 000000014015E9F7: cmp     [r10+0F0h], rax
 * 000000014015E9FE: jz      short loc_14015EA1C
 * 000000014015EA00: mov     rdx, [r10+1F0h]
 * 000000014015EA07: bts     dword ptr [r10+74h], 8
 * 000000014015EA0D: dec     word ptr [r10+1E6h]
 * 000000014015EA15: mov     [rdx+80h], rax
 * 000000014015EA1C: test    byte ptr [r10+3], 3
 * 000000014015EA21: mov     [rbp+0E8h+var_68], 0
 * 000000014015EA2A: jz      short loc_14015EA31
 * 000000014015EA2C: call    KiSaveDebugRegisterState
 * 000000014015EA31: cld
 * 000000014015EA32: lfence
 * 000000014015EA35: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015EA39: ldmxcsr dword ptr gs:180h
 * 000000014015EA42: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015EA46: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015EA4A: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015EA4E: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015EA52: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015EA56: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015EA5A: test    [rbp+0E8h+arg_8], 200h
 * 000000014015EA64: jz      short loc_14015EA67
 * 000000014015EA66: sti
 * 000000014015EA67: xor     edx, edx
 * 000000014015EA69: test    [rbp+0E8h+arg_8], 100h
 * 000000014015EA73: jz      loc_14015EB19
 * 000000014015EA79: test    byte ptr gs:63EAh, 2
 * 000000014015EA82: jz      loc_14015EB19
 * 000000014015EA88: test    [rbp+0E8h+arg_0], 1
 * 000000014015EA8F: jnz     short loc_14015EAE0
 * 000000014015EA91: mov     rax, dr7
 * 000000014015EA94: test    ax, 200h
 * 000000014015EA98: jz      short loc_14015EB19
 * 000000014015EA9A: test    ax, 100h
 * 000000014015EA9E: jz      short loc_14015EB19
 * 000000014015EAA0: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014015EAA7: or      r8d, r8d
 * 000000014015EAAA: jz      short loc_14015EAB4
 * 000000014015EAAC: mov     ecx, r8d
 * 000000014015EAAF: rdmsr
 * 000000014015EAB1: mov     r8d, eax
 * 000000014015EAB4: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014015EABA: add     ecx, r8d
 * 000000014015EABD: rdmsr
 * 000000014015EABF: mov     r9d, eax
 * 000000014015EAC2: shl     rdx, 20h
 * 000000014015EAC6: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014015EACC: or      r9, rdx
 * 000000014015EACF: add     ecx, r8d
 * 000000014015EAD2: rdmsr
 * 000000014015EAD4: mov     r10d, eax
 * 000000014015EAD7: shl     rdx, 20h
 * 000000014015EADB: or      r10, rdx
 * 000000014015EADE: jmp     short loc_14015EB14
 * 000000014015EAE0: test    [rbp+0E8h+var_68], 200h
 * 000000014015EAE9: jz      short loc_14015EB19
 * 000000014015EAEB: test    [rbp+0E8h+var_68], 100h
 * 000000014015EAF4: jz      short loc_14015EB19
 * 000000014015EAF6: and     [rbp+0E8h+var_40], 0
 * 000000014015EAFE: and     [rbp+0E8h+var_48], 0
 * 000000014015EB06: mov     r9, [rbp+0E8h+var_50]
 * 000000014015EB0D: mov     r10, [rbp+0E8h+var_58]
 * 000000014015EB14: mov     edx, 2
 * 000000014015EB19: mov     ecx, 80000004h
 * 000000014015EB1E: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014015EB28: mov     r8, [rbp+0E8h]
 * 000000014015EB2F: call    KiExceptionDispatch
 * 000000014015EB34: nop
 * 000000014015EB35: retn
 */
