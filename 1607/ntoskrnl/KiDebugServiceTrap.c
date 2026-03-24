/*
 * XREFs of KiDebugServiceTrap @ 0x14016E600
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x14023FC00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x14016E600 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x14016E600
 * Reason: Hex-Rays returned no pseudocode for 0x14016E600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E600: inc     qword ptr [rsp+0]
 * 000000014016E604: sub     rsp, 8
 * 000000014016E608: push    rbp
 * 000000014016E609: sub     rsp, 158h
 * 000000014016E610: lea     rbp, [rsp+80h]
 * 000000014016E618: mov     [rbp+0E8h+var_13D], 1
 * 000000014016E61C: mov     [rbp+0E8h+var_138], rax
 * 000000014016E620: mov     [rbp+0E8h+var_130], rcx
 * 000000014016E624: mov     [rbp+0E8h+var_128], rdx
 * 000000014016E628: mov     [rbp+0E8h+var_120], r8
 * 000000014016E62C: mov     [rbp+0E8h+var_118], r9
 * 000000014016E630: mov     [rbp+0E8h+var_110], r10
 * 000000014016E634: mov     [rbp+0E8h+var_108], r11
 * 000000014016E638: test    [rbp+0E8h+arg_0], 1
 * 000000014016E63F: jnz     short loc_14016E670
 * 000000014016E641: lfence
 * 000000014016E644: test    word ptr gs:2EB8h, 1
 * 000000014016E64F: jnz     short loc_14016E659
 * 000000014016E651: lfence
 * 000000014016E654: jmp     loc_14016E895
 * 000000014016E659: movzx   eax, word ptr gs:2EBCh
 * 000000014016E662: mov     ecx, 48h ; 'H'
 * 000000014016E667: xor     edx, edx
 * 000000014016E669: wrmsr
 * 000000014016E66B: jmp     loc_14016E895
 * 000000014016E670: test    cs:KiKvaShadow, 1
 * 000000014016E677: jnz     short loc_14016E67C
 * 000000014016E679: swapgs
 * 000000014016E67C: lfence
 * 000000014016E67F: mov     r10, gs:188h
 * 000000014016E688: mov     rcx, gs:188h
 * 000000014016E691: mov     rcx, [rcx+220h]
 * 000000014016E698: mov     rcx, [rcx+7B8h]
 * 000000014016E69F: mov     gs:2EB0h, rcx
 * 000000014016E6A8: movzx   eax, word ptr gs:2EBEh
 * 000000014016E6B1: cmp     gs:2EBCh, ax
 * 000000014016E6BA: jz      short loc_14016E6CE
 * 000000014016E6BC: mov     gs:2EBCh, ax
 * 000000014016E6C5: mov     ecx, 48h ; 'H'
 * 000000014016E6CA: xor     edx, edx
 * 000000014016E6CC: wrmsr
 * 000000014016E6CE: movzx   edx, word ptr gs:2EB8h
 * 000000014016E6D7: test    edx, 8
 * 000000014016E6DD: jz      short loc_14016E6F6
 * 000000014016E6DF: mov     eax, 1
 * 000000014016E6E4: xor     edx, edx
 * 000000014016E6E6: mov     ecx, 49h ; 'I'
 * 000000014016E6EB: wrmsr
 * 000000014016E6ED: movzx   edx, word ptr gs:2EB8h
 * 000000014016E6F6: test    edx, 2
 * 000000014016E6FC: jz      loc_14016E827
 * 000000014016E702: call    loc_14016E815
 * 000000014016E707: add     rsp, 8
 * 000000014016E70B: call    loc_14016E81E
 * 000000014016E710: add     rsp, 8
 * 000000014016E714: call    loc_14016E707
 * 000000014016E719: add     rsp, 8
 * 000000014016E71D: call    loc_14016E710
 * 000000014016E722: add     rsp, 8
 * 000000014016E726: call    loc_14016E719
 * 000000014016E72B: add     rsp, 8
 * 000000014016E72F: call    loc_14016E722
 * 000000014016E734: add     rsp, 8
 * 000000014016E738: call    loc_14016E72B
 * 000000014016E73D: add     rsp, 8
 * 000000014016E741: call    loc_14016E734
 * 000000014016E746: add     rsp, 8
 * 000000014016E74A: call    loc_14016E73D
 * 000000014016E74F: add     rsp, 8
 * 000000014016E753: call    loc_14016E746
 * 000000014016E758: add     rsp, 8
 * 000000014016E75C: call    loc_14016E74F
 * 000000014016E761: add     rsp, 8
 * 000000014016E765: call    loc_14016E758
 * 000000014016E76A: add     rsp, 8
 * 000000014016E76E: call    loc_14016E761
 * 000000014016E773: add     rsp, 8
 * 000000014016E777: call    loc_14016E76A
 * 000000014016E77C: add     rsp, 8
 * 000000014016E780: call    loc_14016E773
 * 000000014016E785: add     rsp, 8
 * 000000014016E789: call    loc_14016E77C
 * 000000014016E78E: add     rsp, 8
 * 000000014016E792: call    loc_14016E785
 * 000000014016E797: add     rsp, 8
 * 000000014016E79B: call    loc_14016E78E
 * 000000014016E7A0: add     rsp, 8
 * 000000014016E7A4: call    loc_14016E797
 * 000000014016E7A9: add     rsp, 8
 * 000000014016E7AD: call    loc_14016E7A0
 * 000000014016E7B2: add     rsp, 8
 * 000000014016E7B6: call    loc_14016E7A9
 * 000000014016E7BB: add     rsp, 8
 * 000000014016E7BF: call    loc_14016E7B2
 * 000000014016E7C4: add     rsp, 8
 * 000000014016E7C8: call    loc_14016E7BB
 * 000000014016E7CD: add     rsp, 8
 * 000000014016E7D1: call    loc_14016E7C4
 * 000000014016E7D6: add     rsp, 8
 * 000000014016E7DA: call    loc_14016E7CD
 * 000000014016E7DF: add     rsp, 8
 * 000000014016E7E3: call    loc_14016E7D6
 * 000000014016E7E8: add     rsp, 8
 * 000000014016E7EC: call    loc_14016E7DF
 * 000000014016E7F1: add     rsp, 8
 * 000000014016E7F5: call    loc_14016E7E8
 * 000000014016E7FA: add     rsp, 8
 * 000000014016E7FE: call    loc_14016E7F1
 * 000000014016E803: add     rsp, 8
 * 000000014016E807: call    loc_14016E7FA
 * 000000014016E80C: add     rsp, 8
 * 000000014016E810: call    loc_14016E803
 * 000000014016E815: add     rsp, 8
 * 000000014016E819: call    loc_14016E80C
 * 000000014016E81E: add     rsp, 8
 * 000000014016E822: mov     eax, 0DADAh
 * 000000014016E827: test    edx, 100h
 * 000000014016E82D: jz      short loc_14016E834
 * 000000014016E82F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016E834: lfence
 * 000000014016E837: test    byte ptr [r10+3], 80h
 * 000000014016E83C: jz      short loc_14016E880
 * 000000014016E83E: mov     ecx, 0C0000102h
 * 000000014016E843: rdmsr
 * 000000014016E845: shl     rdx, 20h
 * 000000014016E849: or      rax, rdx
 * 000000014016E84C: cmp     rax, cs:MmUserProbeAddress
 * 000000014016E853: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016E85B: cmp     [r10+0F0h], rax
 * 000000014016E862: jz      short loc_14016E880
 * 000000014016E864: mov     rdx, [r10+1F0h]
 * 000000014016E86B: bts     dword ptr [r10+74h], 8
 * 000000014016E871: dec     word ptr [r10+1E6h]
 * 000000014016E879: mov     [rdx+80h], rax
 * 000000014016E880: test    byte ptr [r10+3], 3
 * 000000014016E885: mov     [rbp+0E8h+var_68], 0
 * 000000014016E88E: jz      short loc_14016E895
 * 000000014016E890: call    KiSaveDebugRegisterState
 * 000000014016E895: cld
 * 000000014016E896: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016E89A: ldmxcsr dword ptr gs:180h
 * 000000014016E8A3: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016E8A7: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016E8AB: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016E8AF: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016E8B3: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016E8B7: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016E8BB: test    [rbp+0E8h+arg_8], 200h
 * 000000014016E8C5: jz      short loc_14016E8C8
 * 000000014016E8C7: sti
 * 000000014016E8C8: mov     ecx, 80000003h
 * 000000014016E8CD: mov     edx, 1
 * 000000014016E8D2: mov     r9, [rbp+0E8h+var_138]
 * 000000014016E8D6: mov     r8, [rbp+0E8h]
 * 000000014016E8DD: call    KiExceptionDispatch
 * 000000014016E8E2: nop
 * 000000014016E8E3: retn
 */
