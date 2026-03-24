/*
 * XREFs of KiStackFault @ 0x140161840
 * Callers:
 *     KiStackFaultShadow @ 0x140224600 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x140161840 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x140161840
 * Reason: Hex-Rays returned no pseudocode for 0x140161840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140161840: push    rbp
 * 0000000140161841: sub     rsp, 158h
 * 0000000140161848: lea     rbp, [rsp+80h]
 * 0000000140161850: mov     [rbp+0D8h+var_12D], 1
 * 0000000140161854: mov     [rbp+0D8h+var_128], rax
 * 0000000140161858: mov     [rbp+0D8h+var_120], rcx
 * 000000014016185C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140161860: mov     [rbp+0D8h+var_110], r8
 * 0000000140161864: mov     [rbp+0D8h+var_108], r9
 * 0000000140161868: mov     [rbp+0D8h+var_100], r10
 * 000000014016186C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140161870: test    [rbp+0D8h+arg_8], 1
 * 0000000140161877: jnz     loc_1401619DD
 * 000000014016187D: cmp     byte ptr gs:187h, 0
 * 0000000140161886: jz      loc_140161BAD
 * 000000014016188C: test    byte ptr gs:2EB0h, 1
 * 0000000140161895: jz      loc_140161BAD
 * 000000014016189B: mov     ecx, 48h ; 'H'
 * 00000001401618A0: mov     eax, 1
 * 00000001401618A5: xor     edx, edx
 * 00000001401618A7: wrmsr
 * 00000001401618A9: test    byte ptr gs:2EB0h, 4
 * 00000001401618B2: jnz     loc_140161BAD
 * 00000001401618B8: call    loc_1401619CB
 * 00000001401618BD: add     rsp, 8
 * 00000001401618C1: call    loc_1401619D4
 * 00000001401618C6: add     rsp, 8
 * 00000001401618CA: call    loc_1401618BD
 * 00000001401618CF: add     rsp, 8
 * 00000001401618D3: call    loc_1401618C6
 * 00000001401618D8: add     rsp, 8
 * 00000001401618DC: call    loc_1401618CF
 * 00000001401618E1: add     rsp, 8
 * 00000001401618E5: call    loc_1401618D8
 * 00000001401618EA: add     rsp, 8
 * 00000001401618EE: call    loc_1401618E1
 * 00000001401618F3: add     rsp, 8
 * 00000001401618F7: call    loc_1401618EA
 * 00000001401618FC: add     rsp, 8
 * 0000000140161900: call    loc_1401618F3
 * 0000000140161905: add     rsp, 8
 * 0000000140161909: call    loc_1401618FC
 * 000000014016190E: add     rsp, 8
 * 0000000140161912: call    loc_140161905
 * 0000000140161917: add     rsp, 8
 * 000000014016191B: call    loc_14016190E
 * 0000000140161920: add     rsp, 8
 * 0000000140161924: call    loc_140161917
 * 0000000140161929: add     rsp, 8
 * 000000014016192D: call    loc_140161920
 * 0000000140161932: add     rsp, 8
 * 0000000140161936: call    loc_140161929
 * 000000014016193B: add     rsp, 8
 * 000000014016193F: call    loc_140161932
 * 0000000140161944: add     rsp, 8
 * 0000000140161948: call    loc_14016193B
 * 000000014016194D: add     rsp, 8
 * 0000000140161951: call    loc_140161944
 * 0000000140161956: add     rsp, 8
 * 000000014016195A: call    loc_14016194D
 * 000000014016195F: add     rsp, 8
 * 0000000140161963: call    loc_140161956
 * 0000000140161968: add     rsp, 8
 * 000000014016196C: call    loc_14016195F
 * 0000000140161971: add     rsp, 8
 * 0000000140161975: call    loc_140161968
 * 000000014016197A: add     rsp, 8
 * 000000014016197E: call    loc_140161971
 * 0000000140161983: add     rsp, 8
 * 0000000140161987: call    loc_14016197A
 * 000000014016198C: add     rsp, 8
 * 0000000140161990: call    loc_140161983
 * 0000000140161995: add     rsp, 8
 * 0000000140161999: call    loc_14016198C
 * 000000014016199E: add     rsp, 8
 * 00000001401619A2: call    loc_140161995
 * 00000001401619A7: add     rsp, 8
 * 00000001401619AB: call    loc_14016199E
 * 00000001401619B0: add     rsp, 8
 * 00000001401619B4: call    loc_1401619A7
 * 00000001401619B9: add     rsp, 8
 * 00000001401619BD: call    loc_1401619B0
 * 00000001401619C2: add     rsp, 8
 * 00000001401619C6: call    loc_1401619B9
 * 00000001401619CB: add     rsp, 8
 * 00000001401619CF: call    loc_1401619C2
 * 00000001401619D4: add     rsp, 8
 * 00000001401619D8: jmp     loc_140161BAD
 * 00000001401619DD: test    cs:KiKvaShadow, 1
 * 00000001401619E4: jnz     short loc_1401619E9
 * 00000001401619E6: swapgs
 * 00000001401619E9: mov     r10, gs:188h
 * 00000001401619F2: test    byte ptr gs:2EB0h, 1
 * 00000001401619FB: jz      loc_140161B5E
 * 0000000140161A01: mov     rcx, gs:188h
 * 0000000140161A0A: mov     rcx, [rcx+220h]
 * 0000000140161A11: mov     rcx, [rcx+790h]
 * 0000000140161A18: mov     gs:2EA8h, rcx
 * 0000000140161A21: mov     ecx, 48h ; 'H'
 * 0000000140161A26: mov     eax, 1
 * 0000000140161A2B: xor     edx, edx
 * 0000000140161A2D: wrmsr
 * 0000000140161A2F: test    byte ptr gs:2EB0h, 4
 * 0000000140161A38: jnz     loc_140161B5E
 * 0000000140161A3E: call    loc_140161B51
 * 0000000140161A43: add     rsp, 8
 * 0000000140161A47: call    loc_140161B5A
 * 0000000140161A4C: add     rsp, 8
 * 0000000140161A50: call    loc_140161A43
 * 0000000140161A55: add     rsp, 8
 * 0000000140161A59: call    loc_140161A4C
 * 0000000140161A5E: add     rsp, 8
 * 0000000140161A62: call    loc_140161A55
 * 0000000140161A67: add     rsp, 8
 * 0000000140161A6B: call    loc_140161A5E
 * 0000000140161A70: add     rsp, 8
 * 0000000140161A74: call    loc_140161A67
 * 0000000140161A79: add     rsp, 8
 * 0000000140161A7D: call    loc_140161A70
 * 0000000140161A82: add     rsp, 8
 * 0000000140161A86: call    loc_140161A79
 * 0000000140161A8B: add     rsp, 8
 * 0000000140161A8F: call    loc_140161A82
 * 0000000140161A94: add     rsp, 8
 * 0000000140161A98: call    loc_140161A8B
 * 0000000140161A9D: add     rsp, 8
 * 0000000140161AA1: call    loc_140161A94
 * 0000000140161AA6: add     rsp, 8
 * 0000000140161AAA: call    loc_140161A9D
 * 0000000140161AAF: add     rsp, 8
 * 0000000140161AB3: call    loc_140161AA6
 * 0000000140161AB8: add     rsp, 8
 * 0000000140161ABC: call    loc_140161AAF
 * 0000000140161AC1: add     rsp, 8
 * 0000000140161AC5: call    loc_140161AB8
 * 0000000140161ACA: add     rsp, 8
 * 0000000140161ACE: call    loc_140161AC1
 * 0000000140161AD3: add     rsp, 8
 * 0000000140161AD7: call    loc_140161ACA
 * 0000000140161ADC: add     rsp, 8
 * 0000000140161AE0: call    loc_140161AD3
 * 0000000140161AE5: add     rsp, 8
 * 0000000140161AE9: call    loc_140161ADC
 * 0000000140161AEE: add     rsp, 8
 * 0000000140161AF2: call    loc_140161AE5
 * 0000000140161AF7: add     rsp, 8
 * 0000000140161AFB: call    loc_140161AEE
 * 0000000140161B00: add     rsp, 8
 * 0000000140161B04: call    loc_140161AF7
 * 0000000140161B09: add     rsp, 8
 * 0000000140161B0D: call    loc_140161B00
 * 0000000140161B12: add     rsp, 8
 * 0000000140161B16: call    loc_140161B09
 * 0000000140161B1B: add     rsp, 8
 * 0000000140161B1F: call    loc_140161B12
 * 0000000140161B24: add     rsp, 8
 * 0000000140161B28: call    loc_140161B1B
 * 0000000140161B2D: add     rsp, 8
 * 0000000140161B31: call    loc_140161B24
 * 0000000140161B36: add     rsp, 8
 * 0000000140161B3A: call    loc_140161B2D
 * 0000000140161B3F: add     rsp, 8
 * 0000000140161B43: call    loc_140161B36
 * 0000000140161B48: add     rsp, 8
 * 0000000140161B4C: call    loc_140161B3F
 * 0000000140161B51: add     rsp, 8
 * 0000000140161B55: call    loc_140161B48
 * 0000000140161B5A: add     rsp, 8
 * 0000000140161B5E: test    byte ptr [r10+3], 80h
 * 0000000140161B63: jz      short loc_140161B98
 * 0000000140161B65: mov     ecx, 0C0000102h
 * 0000000140161B6A: rdmsr
 * 0000000140161B6C: shl     rdx, 20h
 * 0000000140161B70: or      rax, rdx
 * 0000000140161B73: cmp     [r10+0F0h], rax
 * 0000000140161B7A: jz      short loc_140161B98
 * 0000000140161B7C: mov     rdx, [r10+1F0h]
 * 0000000140161B83: bts     dword ptr [r10+74h], 8
 * 0000000140161B89: dec     word ptr [r10+1E6h]
 * 0000000140161B91: mov     [rdx+80h], rax
 * 0000000140161B98: test    byte ptr [r10+3], 3
 * 0000000140161B9D: mov     [rbp+0D8h+var_58], 0
 * 0000000140161BA6: jz      short loc_140161BAD
 * 0000000140161BA8: call    KiSaveDebugRegisterState
 * 0000000140161BAD: cld
 * 0000000140161BAE: lfence
 * 0000000140161BB1: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140161BB5: ldmxcsr dword ptr gs:180h
 * 0000000140161BBE: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140161BC2: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140161BC6: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140161BCA: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140161BCE: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140161BD2: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140161BD6: mov     eax, [rbp+0E0h]
 * 0000000140161BDC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140161BE6: jz      short loc_140161BE9
 * 0000000140161BE8: sti
 * 0000000140161BE9: mov     ecx, 0C0000005h
 * 0000000140161BEE: mov     edx, 2
 * 0000000140161BF3: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140161BFA: mov     r9d, [rbp+0E0h]
 * 0000000140161C01: or      r9d, 3
 * 0000000140161C05: and     r9d, 0FFFFh
 * 0000000140161C0C: test    [rbp+0D8h+arg_8], 1
 * 0000000140161C13: jnz     short loc_140161C19
 * 0000000140161C15: or      r9, 0FFFFFFFFFFFFFFFFh
 * 0000000140161C19: xor     r10, r10
 * 0000000140161C1C: call    KiExceptionDispatch
 * 0000000140161C21: nop
 * 0000000140161C22: retn
 */
