/*
 * XREFs of KiNpxSegmentOverrunAbort @ 0x140160CC0
 * Callers:
 *     KiNpxSegmentOverrunAbortShadow @ 0x140224480 (KiNpxSegmentOverrunAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiNpxSegmentOverrunAbort @ 0x140160CC0 (KiNpxSegmentOverrunAbort.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiNpxSegmentOverrunAbort @ 0x140160CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140160CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140160CC0: sub     rsp, 8
 * 0000000140160CC4: push    rbp
 * 0000000140160CC5: sub     rsp, 158h
 * 0000000140160CCC: lea     rbp, [rsp+80h]
 * 0000000140160CD4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140160CD8: mov     [rbp+0E8h+var_138], rax
 * 0000000140160CDC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140160CE0: mov     [rbp+0E8h+var_128], rdx
 * 0000000140160CE4: mov     [rbp+0E8h+var_120], r8
 * 0000000140160CE8: mov     [rbp+0E8h+var_118], r9
 * 0000000140160CEC: mov     [rbp+0E8h+var_110], r10
 * 0000000140160CF0: mov     [rbp+0E8h+var_108], r11
 * 0000000140160CF4: test    [rbp+0E8h+arg_0], 1
 * 0000000140160CFB: jnz     loc_140160E61
 * 0000000140160D01: cmp     byte ptr gs:187h, 0
 * 0000000140160D0A: jz      loc_140160FF7
 * 0000000140160D10: test    byte ptr gs:2EB0h, 1
 * 0000000140160D19: jz      loc_140160FF7
 * 0000000140160D1F: mov     ecx, 48h ; 'H'
 * 0000000140160D24: mov     eax, 1
 * 0000000140160D29: xor     edx, edx
 * 0000000140160D2B: wrmsr
 * 0000000140160D2D: test    byte ptr gs:2EB0h, 4
 * 0000000140160D36: jnz     loc_140160FF7
 * 0000000140160D3C: call    loc_140160E4F
 * 0000000140160D41: add     rsp, 8
 * 0000000140160D45: call    loc_140160E58
 * 0000000140160D4A: add     rsp, 8
 * 0000000140160D4E: call    loc_140160D41
 * 0000000140160D53: add     rsp, 8
 * 0000000140160D57: call    loc_140160D4A
 * 0000000140160D5C: add     rsp, 8
 * 0000000140160D60: call    loc_140160D53
 * 0000000140160D65: add     rsp, 8
 * 0000000140160D69: call    loc_140160D5C
 * 0000000140160D6E: add     rsp, 8
 * 0000000140160D72: call    loc_140160D65
 * 0000000140160D77: add     rsp, 8
 * 0000000140160D7B: call    loc_140160D6E
 * 0000000140160D80: add     rsp, 8
 * 0000000140160D84: call    loc_140160D77
 * 0000000140160D89: add     rsp, 8
 * 0000000140160D8D: call    loc_140160D80
 * 0000000140160D92: add     rsp, 8
 * 0000000140160D96: call    loc_140160D89
 * 0000000140160D9B: add     rsp, 8
 * 0000000140160D9F: call    loc_140160D92
 * 0000000140160DA4: add     rsp, 8
 * 0000000140160DA8: call    loc_140160D9B
 * 0000000140160DAD: add     rsp, 8
 * 0000000140160DB1: call    loc_140160DA4
 * 0000000140160DB6: add     rsp, 8
 * 0000000140160DBA: call    loc_140160DAD
 * 0000000140160DBF: add     rsp, 8
 * 0000000140160DC3: call    loc_140160DB6
 * 0000000140160DC8: add     rsp, 8
 * 0000000140160DCC: call    loc_140160DBF
 * 0000000140160DD1: add     rsp, 8
 * 0000000140160DD5: call    loc_140160DC8
 * 0000000140160DDA: add     rsp, 8
 * 0000000140160DDE: call    loc_140160DD1
 * 0000000140160DE3: add     rsp, 8
 * 0000000140160DE7: call    loc_140160DDA
 * 0000000140160DEC: add     rsp, 8
 * 0000000140160DF0: call    loc_140160DE3
 * 0000000140160DF5: add     rsp, 8
 * 0000000140160DF9: call    loc_140160DEC
 * 0000000140160DFE: add     rsp, 8
 * 0000000140160E02: call    loc_140160DF5
 * 0000000140160E07: add     rsp, 8
 * 0000000140160E0B: call    loc_140160DFE
 * 0000000140160E10: add     rsp, 8
 * 0000000140160E14: call    loc_140160E07
 * 0000000140160E19: add     rsp, 8
 * 0000000140160E1D: call    loc_140160E10
 * 0000000140160E22: add     rsp, 8
 * 0000000140160E26: call    loc_140160E19
 * 0000000140160E2B: add     rsp, 8
 * 0000000140160E2F: call    loc_140160E22
 * 0000000140160E34: add     rsp, 8
 * 0000000140160E38: call    loc_140160E2B
 * 0000000140160E3D: add     rsp, 8
 * 0000000140160E41: call    loc_140160E34
 * 0000000140160E46: add     rsp, 8
 * 0000000140160E4A: call    loc_140160E3D
 * 0000000140160E4F: add     rsp, 8
 * 0000000140160E53: call    loc_140160E46
 * 0000000140160E58: add     rsp, 8
 * 0000000140160E5C: jmp     loc_140160FF7
 * 0000000140160E61: test    cs:KiKvaShadow, 1
 * 0000000140160E68: jnz     short loc_140160E6D
 * 0000000140160E6A: swapgs
 * 0000000140160E6D: mov     r10, gs:188h
 * 0000000140160E76: test    byte ptr gs:2EB0h, 1
 * 0000000140160E7F: jz      loc_140160FE2
 * 0000000140160E85: mov     rcx, gs:188h
 * 0000000140160E8E: mov     rcx, [rcx+220h]
 * 0000000140160E95: mov     rcx, [rcx+790h]
 * 0000000140160E9C: mov     gs:2EA8h, rcx
 * 0000000140160EA5: mov     ecx, 48h ; 'H'
 * 0000000140160EAA: mov     eax, 1
 * 0000000140160EAF: xor     edx, edx
 * 0000000140160EB1: wrmsr
 * 0000000140160EB3: test    byte ptr gs:2EB0h, 4
 * 0000000140160EBC: jnz     loc_140160FE2
 * 0000000140160EC2: call    loc_140160FD5
 * 0000000140160EC7: add     rsp, 8
 * 0000000140160ECB: call    loc_140160FDE
 * 0000000140160ED0: add     rsp, 8
 * 0000000140160ED4: call    loc_140160EC7
 * 0000000140160ED9: add     rsp, 8
 * 0000000140160EDD: call    loc_140160ED0
 * 0000000140160EE2: add     rsp, 8
 * 0000000140160EE6: call    loc_140160ED9
 * 0000000140160EEB: add     rsp, 8
 * 0000000140160EEF: call    loc_140160EE2
 * 0000000140160EF4: add     rsp, 8
 * 0000000140160EF8: call    loc_140160EEB
 * 0000000140160EFD: add     rsp, 8
 * 0000000140160F01: call    loc_140160EF4
 * 0000000140160F06: add     rsp, 8
 * 0000000140160F0A: call    loc_140160EFD
 * 0000000140160F0F: add     rsp, 8
 * 0000000140160F13: call    loc_140160F06
 * 0000000140160F18: add     rsp, 8
 * 0000000140160F1C: call    loc_140160F0F
 * 0000000140160F21: add     rsp, 8
 * 0000000140160F25: call    loc_140160F18
 * 0000000140160F2A: add     rsp, 8
 * 0000000140160F2E: call    loc_140160F21
 * 0000000140160F33: add     rsp, 8
 * 0000000140160F37: call    loc_140160F2A
 * 0000000140160F3C: add     rsp, 8
 * 0000000140160F40: call    loc_140160F33
 * 0000000140160F45: add     rsp, 8
 * 0000000140160F49: call    loc_140160F3C
 * 0000000140160F4E: add     rsp, 8
 * 0000000140160F52: call    loc_140160F45
 * 0000000140160F57: add     rsp, 8
 * 0000000140160F5B: call    loc_140160F4E
 * 0000000140160F60: add     rsp, 8
 * 0000000140160F64: call    loc_140160F57
 * 0000000140160F69: add     rsp, 8
 * 0000000140160F6D: call    loc_140160F60
 * 0000000140160F72: add     rsp, 8
 * 0000000140160F76: call    loc_140160F69
 * 0000000140160F7B: add     rsp, 8
 * 0000000140160F7F: call    loc_140160F72
 * 0000000140160F84: add     rsp, 8
 * 0000000140160F88: call    loc_140160F7B
 * 0000000140160F8D: add     rsp, 8
 * 0000000140160F91: call    loc_140160F84
 * 0000000140160F96: add     rsp, 8
 * 0000000140160F9A: call    loc_140160F8D
 * 0000000140160F9F: add     rsp, 8
 * 0000000140160FA3: call    loc_140160F96
 * 0000000140160FA8: add     rsp, 8
 * 0000000140160FAC: call    loc_140160F9F
 * 0000000140160FB1: add     rsp, 8
 * 0000000140160FB5: call    loc_140160FA8
 * 0000000140160FBA: add     rsp, 8
 * 0000000140160FBE: call    loc_140160FB1
 * 0000000140160FC3: add     rsp, 8
 * 0000000140160FC7: call    loc_140160FBA
 * 0000000140160FCC: add     rsp, 8
 * 0000000140160FD0: call    loc_140160FC3
 * 0000000140160FD5: add     rsp, 8
 * 0000000140160FD9: call    loc_140160FCC
 * 0000000140160FDE: add     rsp, 8
 * 0000000140160FE2: test    byte ptr [r10+3], 3
 * 0000000140160FE7: mov     [rbp+0E8h+var_68], 0
 * 0000000140160FF0: jz      short loc_140160FF7
 * 0000000140160FF2: call    KiSaveDebugRegisterState
 * 0000000140160FF7: cld
 * 0000000140160FF8: lfence
 * 0000000140160FFB: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140160FFF: ldmxcsr dword ptr gs:180h
 * 0000000140161008: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016100C: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140161010: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140161014: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140161018: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016101C: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140161020: test    [rbp+0E8h+arg_8], 200h
 * 000000014016102A: jz      short loc_14016102D
 * 000000014016102C: sti
 * 000000014016102D: mov     r10, [rbp+0E8h]
 * 0000000140161034: mov     r9, cr4
 * 0000000140161038: mov     r8, cr0
 * 000000014016103C: mov     edx, 9
 * 0000000140161041: mov     ecx, 7Fh
 * 0000000140161046: call    KiBugCheckDispatch
 */
