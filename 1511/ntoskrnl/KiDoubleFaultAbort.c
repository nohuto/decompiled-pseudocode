/*
 * XREFs of KiDoubleFaultAbort @ 0x140160900
 * Callers:
 *     KiDoubleFaultAbortShadow @ 0x140224400 (KiDoubleFaultAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiDoubleFaultAbort @ 0x140160900 (KiDoubleFaultAbort.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDoubleFaultAbort @ 0x140160900
 * Reason: Hex-Rays returned no pseudocode for 0x140160900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140160900: push    rbp
 * 0000000140160901: sub     rsp, 158h
 * 0000000140160908: lea     rbp, [rsp+80h]
 * 0000000140160910: mov     [rbp+0D8h+var_12D], 1
 * 0000000140160914: mov     [rbp+0D8h+var_128], rax
 * 0000000140160918: mov     [rbp+0D8h+var_120], rcx
 * 000000014016091C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140160920: mov     [rbp+0D8h+var_110], r8
 * 0000000140160924: mov     [rbp+0D8h+var_108], r9
 * 0000000140160928: mov     [rbp+0D8h+var_100], r10
 * 000000014016092C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140160930: test    [rbp+0D8h+arg_8], 1
 * 0000000140160937: jnz     loc_140160A9D
 * 000000014016093D: cmp     byte ptr gs:187h, 0
 * 0000000140160946: jz      loc_140160C33
 * 000000014016094C: test    byte ptr gs:2EB0h, 1
 * 0000000140160955: jz      loc_140160C33
 * 000000014016095B: mov     ecx, 48h ; 'H'
 * 0000000140160960: mov     eax, 1
 * 0000000140160965: xor     edx, edx
 * 0000000140160967: wrmsr
 * 0000000140160969: test    byte ptr gs:2EB0h, 4
 * 0000000140160972: jnz     loc_140160C33
 * 0000000140160978: call    loc_140160A8B
 * 000000014016097D: add     rsp, 8
 * 0000000140160981: call    loc_140160A94
 * 0000000140160986: add     rsp, 8
 * 000000014016098A: call    loc_14016097D
 * 000000014016098F: add     rsp, 8
 * 0000000140160993: call    loc_140160986
 * 0000000140160998: add     rsp, 8
 * 000000014016099C: call    loc_14016098F
 * 00000001401609A1: add     rsp, 8
 * 00000001401609A5: call    loc_140160998
 * 00000001401609AA: add     rsp, 8
 * 00000001401609AE: call    loc_1401609A1
 * 00000001401609B3: add     rsp, 8
 * 00000001401609B7: call    loc_1401609AA
 * 00000001401609BC: add     rsp, 8
 * 00000001401609C0: call    loc_1401609B3
 * 00000001401609C5: add     rsp, 8
 * 00000001401609C9: call    loc_1401609BC
 * 00000001401609CE: add     rsp, 8
 * 00000001401609D2: call    loc_1401609C5
 * 00000001401609D7: add     rsp, 8
 * 00000001401609DB: call    loc_1401609CE
 * 00000001401609E0: add     rsp, 8
 * 00000001401609E4: call    loc_1401609D7
 * 00000001401609E9: add     rsp, 8
 * 00000001401609ED: call    loc_1401609E0
 * 00000001401609F2: add     rsp, 8
 * 00000001401609F6: call    loc_1401609E9
 * 00000001401609FB: add     rsp, 8
 * 00000001401609FF: call    loc_1401609F2
 * 0000000140160A04: add     rsp, 8
 * 0000000140160A08: call    loc_1401609FB
 * 0000000140160A0D: add     rsp, 8
 * 0000000140160A11: call    loc_140160A04
 * 0000000140160A16: add     rsp, 8
 * 0000000140160A1A: call    loc_140160A0D
 * 0000000140160A1F: add     rsp, 8
 * 0000000140160A23: call    loc_140160A16
 * 0000000140160A28: add     rsp, 8
 * 0000000140160A2C: call    loc_140160A1F
 * 0000000140160A31: add     rsp, 8
 * 0000000140160A35: call    loc_140160A28
 * 0000000140160A3A: add     rsp, 8
 * 0000000140160A3E: call    loc_140160A31
 * 0000000140160A43: add     rsp, 8
 * 0000000140160A47: call    loc_140160A3A
 * 0000000140160A4C: add     rsp, 8
 * 0000000140160A50: call    loc_140160A43
 * 0000000140160A55: add     rsp, 8
 * 0000000140160A59: call    loc_140160A4C
 * 0000000140160A5E: add     rsp, 8
 * 0000000140160A62: call    loc_140160A55
 * 0000000140160A67: add     rsp, 8
 * 0000000140160A6B: call    loc_140160A5E
 * 0000000140160A70: add     rsp, 8
 * 0000000140160A74: call    loc_140160A67
 * 0000000140160A79: add     rsp, 8
 * 0000000140160A7D: call    loc_140160A70
 * 0000000140160A82: add     rsp, 8
 * 0000000140160A86: call    loc_140160A79
 * 0000000140160A8B: add     rsp, 8
 * 0000000140160A8F: call    loc_140160A82
 * 0000000140160A94: add     rsp, 8
 * 0000000140160A98: jmp     loc_140160C33
 * 0000000140160A9D: test    cs:KiKvaShadow, 1
 * 0000000140160AA4: jnz     short loc_140160AA9
 * 0000000140160AA6: swapgs
 * 0000000140160AA9: mov     r10, gs:188h
 * 0000000140160AB2: test    byte ptr gs:2EB0h, 1
 * 0000000140160ABB: jz      loc_140160C1E
 * 0000000140160AC1: mov     rcx, gs:188h
 * 0000000140160ACA: mov     rcx, [rcx+220h]
 * 0000000140160AD1: mov     rcx, [rcx+790h]
 * 0000000140160AD8: mov     gs:2EA8h, rcx
 * 0000000140160AE1: mov     ecx, 48h ; 'H'
 * 0000000140160AE6: mov     eax, 1
 * 0000000140160AEB: xor     edx, edx
 * 0000000140160AED: wrmsr
 * 0000000140160AEF: test    byte ptr gs:2EB0h, 4
 * 0000000140160AF8: jnz     loc_140160C1E
 * 0000000140160AFE: call    loc_140160C11
 * 0000000140160B03: add     rsp, 8
 * 0000000140160B07: call    loc_140160C1A
 * 0000000140160B0C: add     rsp, 8
 * 0000000140160B10: call    loc_140160B03
 * 0000000140160B15: add     rsp, 8
 * 0000000140160B19: call    loc_140160B0C
 * 0000000140160B1E: add     rsp, 8
 * 0000000140160B22: call    loc_140160B15
 * 0000000140160B27: add     rsp, 8
 * 0000000140160B2B: call    loc_140160B1E
 * 0000000140160B30: add     rsp, 8
 * 0000000140160B34: call    loc_140160B27
 * 0000000140160B39: add     rsp, 8
 * 0000000140160B3D: call    loc_140160B30
 * 0000000140160B42: add     rsp, 8
 * 0000000140160B46: call    loc_140160B39
 * 0000000140160B4B: add     rsp, 8
 * 0000000140160B4F: call    loc_140160B42
 * 0000000140160B54: add     rsp, 8
 * 0000000140160B58: call    loc_140160B4B
 * 0000000140160B5D: add     rsp, 8
 * 0000000140160B61: call    loc_140160B54
 * 0000000140160B66: add     rsp, 8
 * 0000000140160B6A: call    loc_140160B5D
 * 0000000140160B6F: add     rsp, 8
 * 0000000140160B73: call    loc_140160B66
 * 0000000140160B78: add     rsp, 8
 * 0000000140160B7C: call    loc_140160B6F
 * 0000000140160B81: add     rsp, 8
 * 0000000140160B85: call    loc_140160B78
 * 0000000140160B8A: add     rsp, 8
 * 0000000140160B8E: call    loc_140160B81
 * 0000000140160B93: add     rsp, 8
 * 0000000140160B97: call    loc_140160B8A
 * 0000000140160B9C: add     rsp, 8
 * 0000000140160BA0: call    loc_140160B93
 * 0000000140160BA5: add     rsp, 8
 * 0000000140160BA9: call    loc_140160B9C
 * 0000000140160BAE: add     rsp, 8
 * 0000000140160BB2: call    loc_140160BA5
 * 0000000140160BB7: add     rsp, 8
 * 0000000140160BBB: call    loc_140160BAE
 * 0000000140160BC0: add     rsp, 8
 * 0000000140160BC4: call    loc_140160BB7
 * 0000000140160BC9: add     rsp, 8
 * 0000000140160BCD: call    loc_140160BC0
 * 0000000140160BD2: add     rsp, 8
 * 0000000140160BD6: call    loc_140160BC9
 * 0000000140160BDB: add     rsp, 8
 * 0000000140160BDF: call    loc_140160BD2
 * 0000000140160BE4: add     rsp, 8
 * 0000000140160BE8: call    loc_140160BDB
 * 0000000140160BED: add     rsp, 8
 * 0000000140160BF1: call    loc_140160BE4
 * 0000000140160BF6: add     rsp, 8
 * 0000000140160BFA: call    loc_140160BED
 * 0000000140160BFF: add     rsp, 8
 * 0000000140160C03: call    loc_140160BF6
 * 0000000140160C08: add     rsp, 8
 * 0000000140160C0C: call    loc_140160BFF
 * 0000000140160C11: add     rsp, 8
 * 0000000140160C15: call    loc_140160C08
 * 0000000140160C1A: add     rsp, 8
 * 0000000140160C1E: test    byte ptr [r10+3], 3
 * 0000000140160C23: mov     [rbp+0D8h+var_58], 0
 * 0000000140160C2C: jz      short loc_140160C33
 * 0000000140160C2E: call    KiSaveDebugRegisterState
 * 0000000140160C33: cld
 * 0000000140160C34: lfence
 * 0000000140160C37: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140160C3B: ldmxcsr dword ptr gs:180h
 * 0000000140160C44: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140160C48: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140160C4C: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140160C50: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140160C54: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140160C58: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140160C5C: mov     eax, [rbp+0E0h]
 * 0000000140160C62: test    [rbp+0D8h+arg_10], 200h
 * 0000000140160C6C: jz      short loc_140160C6F
 * 0000000140160C6E: sti
 * 0000000140160C6F: mov     r10, [rbp+0D8h+arg_0]
 * 0000000140160C76: mov     r9, [rbp+0D8h+arg_18]
 * 0000000140160C7D: mov     r8, rsp
 * 0000000140160C80: mov     edx, 8
 * 0000000140160C85: mov     ecx, 7Fh
 * 0000000140160C8A: call    KiBugCheckDispatch
 */
