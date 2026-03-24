/*
 * XREFs of KiStackFault @ 0x1401907C0
 * Callers:
 *     KiStackFaultShadow @ 0x140274600 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401907C0 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401907C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401907C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401907C0: push    rbp
 * 00000001401907C1: sub     rsp, 158h
 * 00000001401907C8: lea     rbp, [rsp+80h]
 * 00000001401907D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401907D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401907D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401907DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401907E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401907E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401907E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401907EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401907F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401907F7: jnz     short loc_140190828
 * 00000001401907F9: lfence
 * 00000001401907FC: test    word ptr gs:2EB0h, 1
 * 0000000140190807: jnz     short loc_140190811
 * 0000000140190809: lfence
 * 000000014019080C: jmp     loc_140190A4D
 * 0000000140190811: movzx   eax, word ptr gs:2EB4h
 * 000000014019081A: mov     ecx, 48h ; 'H'
 * 000000014019081F: xor     edx, edx
 * 0000000140190821: wrmsr
 * 0000000140190823: jmp     loc_140190A4D
 * 0000000140190828: test    cs:KiKvaShadow, 1
 * 000000014019082F: jnz     short loc_140190834
 * 0000000140190831: swapgs
 * 0000000140190834: lfence
 * 0000000140190837: mov     r10, gs:188h
 * 0000000140190840: mov     rcx, gs:188h
 * 0000000140190849: mov     rcx, [rcx+220h]
 * 0000000140190850: mov     rcx, [rcx+7A0h]
 * 0000000140190857: mov     gs:2EA8h, rcx
 * 0000000140190860: movzx   eax, word ptr gs:2EB6h
 * 0000000140190869: cmp     gs:2EB4h, ax
 * 0000000140190872: jz      short loc_140190886
 * 0000000140190874: mov     gs:2EB4h, ax
 * 000000014019087D: mov     ecx, 48h ; 'H'
 * 0000000140190882: xor     edx, edx
 * 0000000140190884: wrmsr
 * 0000000140190886: movzx   edx, word ptr gs:2EB0h
 * 000000014019088F: test    edx, 8
 * 0000000140190895: jz      short loc_1401908AE
 * 0000000140190897: mov     eax, 1
 * 000000014019089C: xor     edx, edx
 * 000000014019089E: mov     ecx, 49h ; 'I'
 * 00000001401908A3: wrmsr
 * 00000001401908A5: movzx   edx, word ptr gs:2EB0h
 * 00000001401908AE: test    edx, 2
 * 00000001401908B4: jz      loc_1401909DF
 * 00000001401908BA: call    loc_1401909CD
 * 00000001401908BF: add     rsp, 8
 * 00000001401908C3: call    loc_1401909D6
 * 00000001401908C8: add     rsp, 8
 * 00000001401908CC: call    loc_1401908BF
 * 00000001401908D1: add     rsp, 8
 * 00000001401908D5: call    loc_1401908C8
 * 00000001401908DA: add     rsp, 8
 * 00000001401908DE: call    loc_1401908D1
 * 00000001401908E3: add     rsp, 8
 * 00000001401908E7: call    loc_1401908DA
 * 00000001401908EC: add     rsp, 8
 * 00000001401908F0: call    loc_1401908E3
 * 00000001401908F5: add     rsp, 8
 * 00000001401908F9: call    loc_1401908EC
 * 00000001401908FE: add     rsp, 8
 * 0000000140190902: call    loc_1401908F5
 * 0000000140190907: add     rsp, 8
 * 000000014019090B: call    loc_1401908FE
 * 0000000140190910: add     rsp, 8
 * 0000000140190914: call    loc_140190907
 * 0000000140190919: add     rsp, 8
 * 000000014019091D: call    loc_140190910
 * 0000000140190922: add     rsp, 8
 * 0000000140190926: call    loc_140190919
 * 000000014019092B: add     rsp, 8
 * 000000014019092F: call    loc_140190922
 * 0000000140190934: add     rsp, 8
 * 0000000140190938: call    loc_14019092B
 * 000000014019093D: add     rsp, 8
 * 0000000140190941: call    loc_140190934
 * 0000000140190946: add     rsp, 8
 * 000000014019094A: call    loc_14019093D
 * 000000014019094F: add     rsp, 8
 * 0000000140190953: call    loc_140190946
 * 0000000140190958: add     rsp, 8
 * 000000014019095C: call    loc_14019094F
 * 0000000140190961: add     rsp, 8
 * 0000000140190965: call    loc_140190958
 * 000000014019096A: add     rsp, 8
 * 000000014019096E: call    loc_140190961
 * 0000000140190973: add     rsp, 8
 * 0000000140190977: call    loc_14019096A
 * 000000014019097C: add     rsp, 8
 * 0000000140190980: call    loc_140190973
 * 0000000140190985: add     rsp, 8
 * 0000000140190989: call    loc_14019097C
 * 000000014019098E: add     rsp, 8
 * 0000000140190992: call    loc_140190985
 * 0000000140190997: add     rsp, 8
 * 000000014019099B: call    loc_14019098E
 * 00000001401909A0: add     rsp, 8
 * 00000001401909A4: call    loc_140190997
 * 00000001401909A9: add     rsp, 8
 * 00000001401909AD: call    loc_1401909A0
 * 00000001401909B2: add     rsp, 8
 * 00000001401909B6: call    loc_1401909A9
 * 00000001401909BB: add     rsp, 8
 * 00000001401909BF: call    loc_1401909B2
 * 00000001401909C4: add     rsp, 8
 * 00000001401909C8: call    loc_1401909BB
 * 00000001401909CD: add     rsp, 8
 * 00000001401909D1: call    loc_1401909C4
 * 00000001401909D6: add     rsp, 8
 * 00000001401909DA: mov     eax, 0DADAh
 * 00000001401909DF: test    edx, 100h
 * 00000001401909E5: jz      short loc_1401909EC
 * 00000001401909E7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401909EC: lfence
 * 00000001401909EF: test    byte ptr [r10+3], 80h
 * 00000001401909F4: jz      short loc_140190A38
 * 00000001401909F6: mov     ecx, 0C0000102h
 * 00000001401909FB: rdmsr
 * 00000001401909FD: shl     rdx, 20h
 * 0000000140190A01: or      rax, rdx
 * 0000000140190A04: cmp     rax, cs:MmUserProbeAddress
 * 0000000140190A0B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140190A13: cmp     [r10+0F0h], rax
 * 0000000140190A1A: jz      short loc_140190A38
 * 0000000140190A1C: mov     rdx, [r10+1F0h]
 * 0000000140190A23: bts     dword ptr [r10+74h], 8
 * 0000000140190A29: dec     word ptr [r10+1E6h]
 * 0000000140190A31: mov     [rdx+80h], rax
 * 0000000140190A38: test    byte ptr [r10+3], 3
 * 0000000140190A3D: mov     [rbp+0D8h+var_58], 0
 * 0000000140190A46: jz      short loc_140190A4D
 * 0000000140190A48: call    KiSaveDebugRegisterState
 * 0000000140190A4D: cld
 * 0000000140190A4E: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140190A52: ldmxcsr dword ptr gs:180h
 * 0000000140190A5B: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140190A5F: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140190A63: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140190A67: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140190A6B: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140190A6F: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140190A73: mov     eax, [rbp+0E0h]
 * 0000000140190A79: test    [rbp+0D8h+arg_10], 200h
 * 0000000140190A84: jz      short loc_140190A87
 * 0000000140190A86: sti
 * 0000000140190A87: mov     ecx, 0C0000005h
 * 0000000140190A8C: mov     edx, 2
 * 0000000140190A91: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140190A98: mov     r9d, [rbp+0E0h]
 * 0000000140190A9F: or      r9d, 3
 * 0000000140190AA3: and     r9d, 0FFFFh
 * 0000000140190AAA: test    [rbp+0D8h+arg_8], 1
 * 0000000140190AB1: jnz     short loc_140190AB7
 * 0000000140190AB3: or      r9, 0FFFFFFFFFFFFFFFFh
 * 0000000140190AB7: xor     r10, r10
 * 0000000140190ABA: call    KiExceptionDispatch
 * 0000000140190ABF: nop
 * 0000000140190AC0: retn
 */
