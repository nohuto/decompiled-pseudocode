/*
 * XREFs of KiOverflowTrap @ 0x14016A4C0
 * Callers:
 *     KiOverflowTrapShadow @ 0x14023F200 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14016A4C0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14016A4C0
 * Reason: Hex-Rays returned no pseudocode for 0x14016A4C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016A4C0: sub     rsp, 8
 * 000000014016A4C4: push    rbp
 * 000000014016A4C5: sub     rsp, 158h
 * 000000014016A4CC: lea     rbp, [rsp+80h]
 * 000000014016A4D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014016A4D8: mov     [rbp+0E8h+var_138], rax
 * 000000014016A4DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014016A4E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014016A4E4: mov     [rbp+0E8h+var_120], r8
 * 000000014016A4E8: mov     [rbp+0E8h+var_118], r9
 * 000000014016A4EC: mov     [rbp+0E8h+var_110], r10
 * 000000014016A4F0: mov     [rbp+0E8h+var_108], r11
 * 000000014016A4F4: test    [rbp+0E8h+arg_0], 1
 * 000000014016A4FB: jnz     short loc_14016A52C
 * 000000014016A4FD: lfence
 * 000000014016A500: test    word ptr gs:2EB8h, 1
 * 000000014016A50B: jnz     short loc_14016A515
 * 000000014016A50D: lfence
 * 000000014016A510: jmp     loc_14016A751
 * 000000014016A515: movzx   eax, word ptr gs:2EBCh
 * 000000014016A51E: mov     ecx, 48h ; 'H'
 * 000000014016A523: xor     edx, edx
 * 000000014016A525: wrmsr
 * 000000014016A527: jmp     loc_14016A751
 * 000000014016A52C: test    cs:KiKvaShadow, 1
 * 000000014016A533: jnz     short loc_14016A538
 * 000000014016A535: swapgs
 * 000000014016A538: lfence
 * 000000014016A53B: mov     r10, gs:188h
 * 000000014016A544: mov     rcx, gs:188h
 * 000000014016A54D: mov     rcx, [rcx+220h]
 * 000000014016A554: mov     rcx, [rcx+7B8h]
 * 000000014016A55B: mov     gs:2EB0h, rcx
 * 000000014016A564: movzx   eax, word ptr gs:2EBEh
 * 000000014016A56D: cmp     gs:2EBCh, ax
 * 000000014016A576: jz      short loc_14016A58A
 * 000000014016A578: mov     gs:2EBCh, ax
 * 000000014016A581: mov     ecx, 48h ; 'H'
 * 000000014016A586: xor     edx, edx
 * 000000014016A588: wrmsr
 * 000000014016A58A: movzx   edx, word ptr gs:2EB8h
 * 000000014016A593: test    edx, 8
 * 000000014016A599: jz      short loc_14016A5B2
 * 000000014016A59B: mov     eax, 1
 * 000000014016A5A0: xor     edx, edx
 * 000000014016A5A2: mov     ecx, 49h ; 'I'
 * 000000014016A5A7: wrmsr
 * 000000014016A5A9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A5B2: test    edx, 2
 * 000000014016A5B8: jz      loc_14016A6E3
 * 000000014016A5BE: call    loc_14016A6D1
 * 000000014016A5C3: add     rsp, 8
 * 000000014016A5C7: call    loc_14016A6DA
 * 000000014016A5CC: add     rsp, 8
 * 000000014016A5D0: call    loc_14016A5C3
 * 000000014016A5D5: add     rsp, 8
 * 000000014016A5D9: call    loc_14016A5CC
 * 000000014016A5DE: add     rsp, 8
 * 000000014016A5E2: call    loc_14016A5D5
 * 000000014016A5E7: add     rsp, 8
 * 000000014016A5EB: call    loc_14016A5DE
 * 000000014016A5F0: add     rsp, 8
 * 000000014016A5F4: call    loc_14016A5E7
 * 000000014016A5F9: add     rsp, 8
 * 000000014016A5FD: call    loc_14016A5F0
 * 000000014016A602: add     rsp, 8
 * 000000014016A606: call    loc_14016A5F9
 * 000000014016A60B: add     rsp, 8
 * 000000014016A60F: call    loc_14016A602
 * 000000014016A614: add     rsp, 8
 * 000000014016A618: call    loc_14016A60B
 * 000000014016A61D: add     rsp, 8
 * 000000014016A621: call    loc_14016A614
 * 000000014016A626: add     rsp, 8
 * 000000014016A62A: call    loc_14016A61D
 * 000000014016A62F: add     rsp, 8
 * 000000014016A633: call    loc_14016A626
 * 000000014016A638: add     rsp, 8
 * 000000014016A63C: call    loc_14016A62F
 * 000000014016A641: add     rsp, 8
 * 000000014016A645: call    loc_14016A638
 * 000000014016A64A: add     rsp, 8
 * 000000014016A64E: call    loc_14016A641
 * 000000014016A653: add     rsp, 8
 * 000000014016A657: call    loc_14016A64A
 * 000000014016A65C: add     rsp, 8
 * 000000014016A660: call    loc_14016A653
 * 000000014016A665: add     rsp, 8
 * 000000014016A669: call    loc_14016A65C
 * 000000014016A66E: add     rsp, 8
 * 000000014016A672: call    loc_14016A665
 * 000000014016A677: add     rsp, 8
 * 000000014016A67B: call    loc_14016A66E
 * 000000014016A680: add     rsp, 8
 * 000000014016A684: call    loc_14016A677
 * 000000014016A689: add     rsp, 8
 * 000000014016A68D: call    loc_14016A680
 * 000000014016A692: add     rsp, 8
 * 000000014016A696: call    loc_14016A689
 * 000000014016A69B: add     rsp, 8
 * 000000014016A69F: call    loc_14016A692
 * 000000014016A6A4: add     rsp, 8
 * 000000014016A6A8: call    loc_14016A69B
 * 000000014016A6AD: add     rsp, 8
 * 000000014016A6B1: call    loc_14016A6A4
 * 000000014016A6B6: add     rsp, 8
 * 000000014016A6BA: call    loc_14016A6AD
 * 000000014016A6BF: add     rsp, 8
 * 000000014016A6C3: call    loc_14016A6B6
 * 000000014016A6C8: add     rsp, 8
 * 000000014016A6CC: call    loc_14016A6BF
 * 000000014016A6D1: add     rsp, 8
 * 000000014016A6D5: call    loc_14016A6C8
 * 000000014016A6DA: add     rsp, 8
 * 000000014016A6DE: mov     eax, 0DADAh
 * 000000014016A6E3: test    edx, 100h
 * 000000014016A6E9: jz      short loc_14016A6F0
 * 000000014016A6EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016A6F0: lfence
 * 000000014016A6F3: test    byte ptr [r10+3], 80h
 * 000000014016A6F8: jz      short loc_14016A73C
 * 000000014016A6FA: mov     ecx, 0C0000102h
 * 000000014016A6FF: rdmsr
 * 000000014016A701: shl     rdx, 20h
 * 000000014016A705: or      rax, rdx
 * 000000014016A708: cmp     rax, cs:MmUserProbeAddress
 * 000000014016A70F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016A717: cmp     [r10+0F0h], rax
 * 000000014016A71E: jz      short loc_14016A73C
 * 000000014016A720: mov     rdx, [r10+1F0h]
 * 000000014016A727: bts     dword ptr [r10+74h], 8
 * 000000014016A72D: dec     word ptr [r10+1E6h]
 * 000000014016A735: mov     [rdx+80h], rax
 * 000000014016A73C: test    byte ptr [r10+3], 3
 * 000000014016A741: mov     [rbp+0E8h+var_68], 0
 * 000000014016A74A: jz      short loc_14016A751
 * 000000014016A74C: call    KiSaveDebugRegisterState
 * 000000014016A751: cld
 * 000000014016A752: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016A756: ldmxcsr dword ptr gs:180h
 * 000000014016A75F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016A763: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016A767: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016A76B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016A76F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016A773: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016A777: test    [rbp+0E8h+arg_8], 200h
 * 000000014016A781: jz      short loc_14016A784
 * 000000014016A783: sti
 * 000000014016A784: mov     ecx, 0C0000095h
 * 000000014016A789: xor     edx, edx
 * 000000014016A78B: mov     r8, [rbp+0E8h]
 * 000000014016A792: dec     r8
 * 000000014016A795: call    KiExceptionDispatch
 * 000000014016A79A: nop
 * 000000014016A79B: retn
 */
