/*
 * XREFs of KiRaiseAssertion @ 0x14016E800
 * Callers:
 *     KiRaiseAssertionShadow @ 0x14023FB80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x14016E800 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x14016E800
 * Reason: Hex-Rays returned no pseudocode for 0x14016E800
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E800: sub     qword ptr [rsp+0], 2
 * 000000014016E805: sub     rsp, 8
 * 000000014016E809: push    rbp
 * 000000014016E80A: sub     rsp, 158h
 * 000000014016E811: lea     rbp, [rsp+80h]
 * 000000014016E819: mov     [rbp+0E8h+var_13D], 1
 * 000000014016E81D: mov     [rbp+0E8h+var_138], rax
 * 000000014016E821: mov     [rbp+0E8h+var_130], rcx
 * 000000014016E825: mov     [rbp+0E8h+var_128], rdx
 * 000000014016E829: mov     [rbp+0E8h+var_120], r8
 * 000000014016E82D: mov     [rbp+0E8h+var_118], r9
 * 000000014016E831: mov     [rbp+0E8h+var_110], r10
 * 000000014016E835: mov     [rbp+0E8h+var_108], r11
 * 000000014016E839: test    [rbp+0E8h+arg_0], 1
 * 000000014016E840: jnz     short loc_14016E871
 * 000000014016E842: lfence
 * 000000014016E845: test    word ptr gs:2EB8h, 1
 * 000000014016E850: jnz     short loc_14016E85A
 * 000000014016E852: lfence
 * 000000014016E855: jmp     loc_14016EA96
 * 000000014016E85A: movzx   eax, word ptr gs:2EBCh
 * 000000014016E863: mov     ecx, 48h ; 'H'
 * 000000014016E868: xor     edx, edx
 * 000000014016E86A: wrmsr
 * 000000014016E86C: jmp     loc_14016EA96
 * 000000014016E871: test    cs:KiKvaShadow, 1
 * 000000014016E878: jnz     short loc_14016E87D
 * 000000014016E87A: swapgs
 * 000000014016E87D: lfence
 * 000000014016E880: mov     r10, gs:188h
 * 000000014016E889: mov     rcx, gs:188h
 * 000000014016E892: mov     rcx, [rcx+220h]
 * 000000014016E899: mov     rcx, [rcx+7B8h]
 * 000000014016E8A0: mov     gs:2EB0h, rcx
 * 000000014016E8A9: movzx   eax, word ptr gs:2EBEh
 * 000000014016E8B2: cmp     gs:2EBCh, ax
 * 000000014016E8BB: jz      short loc_14016E8CF
 * 000000014016E8BD: mov     gs:2EBCh, ax
 * 000000014016E8C6: mov     ecx, 48h ; 'H'
 * 000000014016E8CB: xor     edx, edx
 * 000000014016E8CD: wrmsr
 * 000000014016E8CF: movzx   edx, word ptr gs:2EB8h
 * 000000014016E8D8: test    edx, 8
 * 000000014016E8DE: jz      short loc_14016E8F7
 * 000000014016E8E0: mov     eax, 1
 * 000000014016E8E5: xor     edx, edx
 * 000000014016E8E7: mov     ecx, 49h ; 'I'
 * 000000014016E8EC: wrmsr
 * 000000014016E8EE: movzx   edx, word ptr gs:2EB8h
 * 000000014016E8F7: test    edx, 2
 * 000000014016E8FD: jz      loc_14016EA28
 * 000000014016E903: call    loc_14016EA16
 * 000000014016E908: add     rsp, 8
 * 000000014016E90C: call    loc_14016EA1F
 * 000000014016E911: add     rsp, 8
 * 000000014016E915: call    loc_14016E908
 * 000000014016E91A: add     rsp, 8
 * 000000014016E91E: call    loc_14016E911
 * 000000014016E923: add     rsp, 8
 * 000000014016E927: call    loc_14016E91A
 * 000000014016E92C: add     rsp, 8
 * 000000014016E930: call    loc_14016E923
 * 000000014016E935: add     rsp, 8
 * 000000014016E939: call    loc_14016E92C
 * 000000014016E93E: add     rsp, 8
 * 000000014016E942: call    loc_14016E935
 * 000000014016E947: add     rsp, 8
 * 000000014016E94B: call    loc_14016E93E
 * 000000014016E950: add     rsp, 8
 * 000000014016E954: call    loc_14016E947
 * 000000014016E959: add     rsp, 8
 * 000000014016E95D: call    loc_14016E950
 * 000000014016E962: add     rsp, 8
 * 000000014016E966: call    loc_14016E959
 * 000000014016E96B: add     rsp, 8
 * 000000014016E96F: call    loc_14016E962
 * 000000014016E974: add     rsp, 8
 * 000000014016E978: call    loc_14016E96B
 * 000000014016E97D: add     rsp, 8
 * 000000014016E981: call    loc_14016E974
 * 000000014016E986: add     rsp, 8
 * 000000014016E98A: call    loc_14016E97D
 * 000000014016E98F: add     rsp, 8
 * 000000014016E993: call    loc_14016E986
 * 000000014016E998: add     rsp, 8
 * 000000014016E99C: call    loc_14016E98F
 * 000000014016E9A1: add     rsp, 8
 * 000000014016E9A5: call    loc_14016E998
 * 000000014016E9AA: add     rsp, 8
 * 000000014016E9AE: call    loc_14016E9A1
 * 000000014016E9B3: add     rsp, 8
 * 000000014016E9B7: call    loc_14016E9AA
 * 000000014016E9BC: add     rsp, 8
 * 000000014016E9C0: call    loc_14016E9B3
 * 000000014016E9C5: add     rsp, 8
 * 000000014016E9C9: call    loc_14016E9BC
 * 000000014016E9CE: add     rsp, 8
 * 000000014016E9D2: call    loc_14016E9C5
 * 000000014016E9D7: add     rsp, 8
 * 000000014016E9DB: call    loc_14016E9CE
 * 000000014016E9E0: add     rsp, 8
 * 000000014016E9E4: call    loc_14016E9D7
 * 000000014016E9E9: add     rsp, 8
 * 000000014016E9ED: call    loc_14016E9E0
 * 000000014016E9F2: add     rsp, 8
 * 000000014016E9F6: call    loc_14016E9E9
 * 000000014016E9FB: add     rsp, 8
 * 000000014016E9FF: call    loc_14016E9F2
 * 000000014016EA04: add     rsp, 8
 * 000000014016EA08: call    loc_14016E9FB
 * 000000014016EA0D: add     rsp, 8
 * 000000014016EA11: call    loc_14016EA04
 * 000000014016EA16: add     rsp, 8
 * 000000014016EA1A: call    loc_14016EA0D
 * 000000014016EA1F: add     rsp, 8
 * 000000014016EA23: mov     eax, 0DADAh
 * 000000014016EA28: test    edx, 100h
 * 000000014016EA2E: jz      short loc_14016EA35
 * 000000014016EA30: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016EA35: lfence
 * 000000014016EA38: test    byte ptr [r10+3], 80h
 * 000000014016EA3D: jz      short loc_14016EA81
 * 000000014016EA3F: mov     ecx, 0C0000102h
 * 000000014016EA44: rdmsr
 * 000000014016EA46: shl     rdx, 20h
 * 000000014016EA4A: or      rax, rdx
 * 000000014016EA4D: cmp     rax, cs:MmUserProbeAddress
 * 000000014016EA54: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016EA5C: cmp     [r10+0F0h], rax
 * 000000014016EA63: jz      short loc_14016EA81
 * 000000014016EA65: mov     rdx, [r10+1F0h]
 * 000000014016EA6C: bts     dword ptr [r10+74h], 8
 * 000000014016EA72: dec     word ptr [r10+1E6h]
 * 000000014016EA7A: mov     [rdx+80h], rax
 * 000000014016EA81: test    byte ptr [r10+3], 3
 * 000000014016EA86: mov     [rbp+0E8h+var_68], 0
 * 000000014016EA8F: jz      short loc_14016EA96
 * 000000014016EA91: call    KiSaveDebugRegisterState
 * 000000014016EA96: cld
 * 000000014016EA97: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016EA9B: ldmxcsr dword ptr gs:180h
 * 000000014016EAA4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016EAA8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016EAAC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016EAB0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016EAB4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016EAB8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016EABC: test    [rbp+0E8h+arg_8], 200h
 * 000000014016EAC6: jz      short loc_14016EAC9
 * 000000014016EAC8: sti
 * 000000014016EAC9: mov     ecx, 0C0000420h
 * 000000014016EACE: xor     edx, edx
 * 000000014016EAD0: mov     r8, [rbp+0E8h]
 * 000000014016EAD7: call    KiExceptionDispatch
 * 000000014016EADC: nop
 * 000000014016EADD: retn
 */
