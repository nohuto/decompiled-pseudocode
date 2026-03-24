/*
 * XREFs of KiAlignmentFault @ 0x1401918C0
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140274800 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401918C0 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401918C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401918C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401918C0: push    rbp
 * 00000001401918C1: sub     rsp, 158h
 * 00000001401918C8: lea     rbp, [rsp+80h]
 * 00000001401918D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401918D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401918D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401918DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401918E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401918E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401918E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401918EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401918F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401918F7: jnz     short loc_140191928
 * 00000001401918F9: lfence
 * 00000001401918FC: test    word ptr gs:2EB0h, 1
 * 0000000140191907: jnz     short loc_140191911
 * 0000000140191909: lfence
 * 000000014019190C: jmp     loc_140191B4D
 * 0000000140191911: movzx   eax, word ptr gs:2EB4h
 * 000000014019191A: mov     ecx, 48h ; 'H'
 * 000000014019191F: xor     edx, edx
 * 0000000140191921: wrmsr
 * 0000000140191923: jmp     loc_140191B4D
 * 0000000140191928: test    cs:KiKvaShadow, 1
 * 000000014019192F: jnz     short loc_140191934
 * 0000000140191931: swapgs
 * 0000000140191934: lfence
 * 0000000140191937: mov     r10, gs:188h
 * 0000000140191940: mov     rcx, gs:188h
 * 0000000140191949: mov     rcx, [rcx+220h]
 * 0000000140191950: mov     rcx, [rcx+7A0h]
 * 0000000140191957: mov     gs:2EA8h, rcx
 * 0000000140191960: movzx   eax, word ptr gs:2EB6h
 * 0000000140191969: cmp     gs:2EB4h, ax
 * 0000000140191972: jz      short loc_140191986
 * 0000000140191974: mov     gs:2EB4h, ax
 * 000000014019197D: mov     ecx, 48h ; 'H'
 * 0000000140191982: xor     edx, edx
 * 0000000140191984: wrmsr
 * 0000000140191986: movzx   edx, word ptr gs:2EB0h
 * 000000014019198F: test    edx, 8
 * 0000000140191995: jz      short loc_1401919AE
 * 0000000140191997: mov     eax, 1
 * 000000014019199C: xor     edx, edx
 * 000000014019199E: mov     ecx, 49h ; 'I'
 * 00000001401919A3: wrmsr
 * 00000001401919A5: movzx   edx, word ptr gs:2EB0h
 * 00000001401919AE: test    edx, 2
 * 00000001401919B4: jz      loc_140191ADF
 * 00000001401919BA: call    loc_140191ACD
 * 00000001401919BF: add     rsp, 8
 * 00000001401919C3: call    loc_140191AD6
 * 00000001401919C8: add     rsp, 8
 * 00000001401919CC: call    loc_1401919BF
 * 00000001401919D1: add     rsp, 8
 * 00000001401919D5: call    loc_1401919C8
 * 00000001401919DA: add     rsp, 8
 * 00000001401919DE: call    loc_1401919D1
 * 00000001401919E3: add     rsp, 8
 * 00000001401919E7: call    loc_1401919DA
 * 00000001401919EC: add     rsp, 8
 * 00000001401919F0: call    loc_1401919E3
 * 00000001401919F5: add     rsp, 8
 * 00000001401919F9: call    loc_1401919EC
 * 00000001401919FE: add     rsp, 8
 * 0000000140191A02: call    loc_1401919F5
 * 0000000140191A07: add     rsp, 8
 * 0000000140191A0B: call    loc_1401919FE
 * 0000000140191A10: add     rsp, 8
 * 0000000140191A14: call    loc_140191A07
 * 0000000140191A19: add     rsp, 8
 * 0000000140191A1D: call    loc_140191A10
 * 0000000140191A22: add     rsp, 8
 * 0000000140191A26: call    loc_140191A19
 * 0000000140191A2B: add     rsp, 8
 * 0000000140191A2F: call    loc_140191A22
 * 0000000140191A34: add     rsp, 8
 * 0000000140191A38: call    loc_140191A2B
 * 0000000140191A3D: add     rsp, 8
 * 0000000140191A41: call    loc_140191A34
 * 0000000140191A46: add     rsp, 8
 * 0000000140191A4A: call    loc_140191A3D
 * 0000000140191A4F: add     rsp, 8
 * 0000000140191A53: call    loc_140191A46
 * 0000000140191A58: add     rsp, 8
 * 0000000140191A5C: call    loc_140191A4F
 * 0000000140191A61: add     rsp, 8
 * 0000000140191A65: call    loc_140191A58
 * 0000000140191A6A: add     rsp, 8
 * 0000000140191A6E: call    loc_140191A61
 * 0000000140191A73: add     rsp, 8
 * 0000000140191A77: call    loc_140191A6A
 * 0000000140191A7C: add     rsp, 8
 * 0000000140191A80: call    loc_140191A73
 * 0000000140191A85: add     rsp, 8
 * 0000000140191A89: call    loc_140191A7C
 * 0000000140191A8E: add     rsp, 8
 * 0000000140191A92: call    loc_140191A85
 * 0000000140191A97: add     rsp, 8
 * 0000000140191A9B: call    loc_140191A8E
 * 0000000140191AA0: add     rsp, 8
 * 0000000140191AA4: call    loc_140191A97
 * 0000000140191AA9: add     rsp, 8
 * 0000000140191AAD: call    loc_140191AA0
 * 0000000140191AB2: add     rsp, 8
 * 0000000140191AB6: call    loc_140191AA9
 * 0000000140191ABB: add     rsp, 8
 * 0000000140191ABF: call    loc_140191AB2
 * 0000000140191AC4: add     rsp, 8
 * 0000000140191AC8: call    loc_140191ABB
 * 0000000140191ACD: add     rsp, 8
 * 0000000140191AD1: call    loc_140191AC4
 * 0000000140191AD6: add     rsp, 8
 * 0000000140191ADA: mov     eax, 0DADAh
 * 0000000140191ADF: test    edx, 100h
 * 0000000140191AE5: jz      short loc_140191AEC
 * 0000000140191AE7: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140191AEC: lfence
 * 0000000140191AEF: test    byte ptr [r10+3], 80h
 * 0000000140191AF4: jz      short loc_140191B38
 * 0000000140191AF6: mov     ecx, 0C0000102h
 * 0000000140191AFB: rdmsr
 * 0000000140191AFD: shl     rdx, 20h
 * 0000000140191B01: or      rax, rdx
 * 0000000140191B04: cmp     rax, cs:MmUserProbeAddress
 * 0000000140191B0B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140191B13: cmp     [r10+0F0h], rax
 * 0000000140191B1A: jz      short loc_140191B38
 * 0000000140191B1C: mov     rdx, [r10+1F0h]
 * 0000000140191B23: bts     dword ptr [r10+74h], 8
 * 0000000140191B29: dec     word ptr [r10+1E6h]
 * 0000000140191B31: mov     [rdx+80h], rax
 * 0000000140191B38: test    byte ptr [r10+3], 3
 * 0000000140191B3D: mov     [rbp+0D8h+var_58], 0
 * 0000000140191B46: jz      short loc_140191B4D
 * 0000000140191B48: call    KiSaveDebugRegisterState
 * 0000000140191B4D: cld
 * 0000000140191B4E: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140191B52: ldmxcsr dword ptr gs:180h
 * 0000000140191B5B: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140191B5F: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140191B63: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140191B67: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140191B6B: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140191B6F: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140191B73: mov     eax, [rbp+0E0h]
 * 0000000140191B79: test    [rbp+0D8h+arg_10], 200h
 * 0000000140191B84: jz      short loc_140191B87
 * 0000000140191B86: sti
 * 0000000140191B87: mov     ecx, 80000002h
 * 0000000140191B8C: xor     edx, edx
 * 0000000140191B8E: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140191B95: call    KiExceptionDispatch
 * 0000000140191B9A: nop
 * 0000000140191B9B: retn
 */
