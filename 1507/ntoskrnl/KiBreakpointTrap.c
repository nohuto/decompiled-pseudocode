/*
 * XREFs of KiBreakpointTrap @ 0x14018E7C0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140274180 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14018E7C0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14018E7C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018E7C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018E7C0: sub     rsp, 8
 * 000000014018E7C4: push    rbp
 * 000000014018E7C5: sub     rsp, 158h
 * 000000014018E7CC: lea     rbp, [rsp+80h]
 * 000000014018E7D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018E7D8: mov     [rbp+0E8h+var_138], rax
 * 000000014018E7DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018E7E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018E7E4: mov     [rbp+0E8h+var_120], r8
 * 000000014018E7E8: mov     [rbp+0E8h+var_118], r9
 * 000000014018E7EC: mov     [rbp+0E8h+var_110], r10
 * 000000014018E7F0: mov     [rbp+0E8h+var_108], r11
 * 000000014018E7F4: test    [rbp+0E8h+arg_0], 1
 * 000000014018E7FB: jnz     short loc_14018E82C
 * 000000014018E7FD: lfence
 * 000000014018E800: test    word ptr gs:2EB0h, 1
 * 000000014018E80B: jnz     short loc_14018E815
 * 000000014018E80D: lfence
 * 000000014018E810: jmp     loc_14018EA51
 * 000000014018E815: movzx   eax, word ptr gs:2EB4h
 * 000000014018E81E: mov     ecx, 48h ; 'H'
 * 000000014018E823: xor     edx, edx
 * 000000014018E825: wrmsr
 * 000000014018E827: jmp     loc_14018EA51
 * 000000014018E82C: test    cs:KiKvaShadow, 1
 * 000000014018E833: jnz     short loc_14018E838
 * 000000014018E835: swapgs
 * 000000014018E838: lfence
 * 000000014018E83B: mov     r10, gs:188h
 * 000000014018E844: mov     rcx, gs:188h
 * 000000014018E84D: mov     rcx, [rcx+220h]
 * 000000014018E854: mov     rcx, [rcx+7A0h]
 * 000000014018E85B: mov     gs:2EA8h, rcx
 * 000000014018E864: movzx   eax, word ptr gs:2EB6h
 * 000000014018E86D: cmp     gs:2EB4h, ax
 * 000000014018E876: jz      short loc_14018E88A
 * 000000014018E878: mov     gs:2EB4h, ax
 * 000000014018E881: mov     ecx, 48h ; 'H'
 * 000000014018E886: xor     edx, edx
 * 000000014018E888: wrmsr
 * 000000014018E88A: movzx   edx, word ptr gs:2EB0h
 * 000000014018E893: test    edx, 8
 * 000000014018E899: jz      short loc_14018E8B2
 * 000000014018E89B: mov     eax, 1
 * 000000014018E8A0: xor     edx, edx
 * 000000014018E8A2: mov     ecx, 49h ; 'I'
 * 000000014018E8A7: wrmsr
 * 000000014018E8A9: movzx   edx, word ptr gs:2EB0h
 * 000000014018E8B2: test    edx, 2
 * 000000014018E8B8: jz      loc_14018E9E3
 * 000000014018E8BE: call    loc_14018E9D1
 * 000000014018E8C3: add     rsp, 8
 * 000000014018E8C7: call    loc_14018E9DA
 * 000000014018E8CC: add     rsp, 8
 * 000000014018E8D0: call    loc_14018E8C3
 * 000000014018E8D5: add     rsp, 8
 * 000000014018E8D9: call    loc_14018E8CC
 * 000000014018E8DE: add     rsp, 8
 * 000000014018E8E2: call    loc_14018E8D5
 * 000000014018E8E7: add     rsp, 8
 * 000000014018E8EB: call    loc_14018E8DE
 * 000000014018E8F0: add     rsp, 8
 * 000000014018E8F4: call    loc_14018E8E7
 * 000000014018E8F9: add     rsp, 8
 * 000000014018E8FD: call    loc_14018E8F0
 * 000000014018E902: add     rsp, 8
 * 000000014018E906: call    loc_14018E8F9
 * 000000014018E90B: add     rsp, 8
 * 000000014018E90F: call    loc_14018E902
 * 000000014018E914: add     rsp, 8
 * 000000014018E918: call    loc_14018E90B
 * 000000014018E91D: add     rsp, 8
 * 000000014018E921: call    loc_14018E914
 * 000000014018E926: add     rsp, 8
 * 000000014018E92A: call    loc_14018E91D
 * 000000014018E92F: add     rsp, 8
 * 000000014018E933: call    loc_14018E926
 * 000000014018E938: add     rsp, 8
 * 000000014018E93C: call    loc_14018E92F
 * 000000014018E941: add     rsp, 8
 * 000000014018E945: call    loc_14018E938
 * 000000014018E94A: add     rsp, 8
 * 000000014018E94E: call    loc_14018E941
 * 000000014018E953: add     rsp, 8
 * 000000014018E957: call    loc_14018E94A
 * 000000014018E95C: add     rsp, 8
 * 000000014018E960: call    loc_14018E953
 * 000000014018E965: add     rsp, 8
 * 000000014018E969: call    loc_14018E95C
 * 000000014018E96E: add     rsp, 8
 * 000000014018E972: call    loc_14018E965
 * 000000014018E977: add     rsp, 8
 * 000000014018E97B: call    loc_14018E96E
 * 000000014018E980: add     rsp, 8
 * 000000014018E984: call    loc_14018E977
 * 000000014018E989: add     rsp, 8
 * 000000014018E98D: call    loc_14018E980
 * 000000014018E992: add     rsp, 8
 * 000000014018E996: call    loc_14018E989
 * 000000014018E99B: add     rsp, 8
 * 000000014018E99F: call    loc_14018E992
 * 000000014018E9A4: add     rsp, 8
 * 000000014018E9A8: call    loc_14018E99B
 * 000000014018E9AD: add     rsp, 8
 * 000000014018E9B1: call    loc_14018E9A4
 * 000000014018E9B6: add     rsp, 8
 * 000000014018E9BA: call    loc_14018E9AD
 * 000000014018E9BF: add     rsp, 8
 * 000000014018E9C3: call    loc_14018E9B6
 * 000000014018E9C8: add     rsp, 8
 * 000000014018E9CC: call    loc_14018E9BF
 * 000000014018E9D1: add     rsp, 8
 * 000000014018E9D5: call    loc_14018E9C8
 * 000000014018E9DA: add     rsp, 8
 * 000000014018E9DE: mov     eax, 0DADAh
 * 000000014018E9E3: test    edx, 100h
 * 000000014018E9E9: jz      short loc_14018E9F0
 * 000000014018E9EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018E9F0: lfence
 * 000000014018E9F3: test    byte ptr [r10+3], 80h
 * 000000014018E9F8: jz      short loc_14018EA3C
 * 000000014018E9FA: mov     ecx, 0C0000102h
 * 000000014018E9FF: rdmsr
 * 000000014018EA01: shl     rdx, 20h
 * 000000014018EA05: or      rax, rdx
 * 000000014018EA08: cmp     rax, cs:MmUserProbeAddress
 * 000000014018EA0F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018EA17: cmp     [r10+0F0h], rax
 * 000000014018EA1E: jz      short loc_14018EA3C
 * 000000014018EA20: mov     rdx, [r10+1F0h]
 * 000000014018EA27: bts     dword ptr [r10+74h], 8
 * 000000014018EA2D: dec     word ptr [r10+1E6h]
 * 000000014018EA35: mov     [rdx+80h], rax
 * 000000014018EA3C: test    byte ptr [r10+3], 3
 * 000000014018EA41: mov     [rbp+0E8h+var_68], 0
 * 000000014018EA4A: jz      short loc_14018EA51
 * 000000014018EA4C: call    KiSaveDebugRegisterState
 * 000000014018EA51: cld
 * 000000014018EA52: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018EA56: ldmxcsr dword ptr gs:180h
 * 000000014018EA5F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018EA63: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018EA67: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018EA6B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018EA6F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018EA73: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018EA77: test    [rbp+0E8h+arg_8], 200h
 * 000000014018EA82: jz      short loc_14018EA85
 * 000000014018EA84: sti
 * 000000014018EA85: mov     ecx, 80000003h
 * 000000014018EA8A: mov     edx, 1
 * 000000014018EA8F: mov     r8, [rbp+0E8h]
 * 000000014018EA96: dec     r8
 * 000000014018EA99: mov     r9d, 0
 * 000000014018EA9F: call    KiExceptionDispatch
 * 000000014018EAA4: nop
 * 000000014018EAA5: retn
 */
