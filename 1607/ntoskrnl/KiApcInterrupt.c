/*
 * XREFs of KiApcInterrupt @ 0x140162530
 * Callers:
 *     KiApcInterruptShadow @ 0x14023FA00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140162530
 * Reason: Hex-Rays returned no pseudocode for 0x140162530
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162530: sub     rsp, 8
 * 0000000140162534: push    rbp
 * 0000000140162535: push    rsi
 * 0000000140162536: sub     rsp, 150h
 * 000000014016253D: lea     rbp, [rsp+80h]
 * 0000000140162545: mov     [rbp+0E8h+var_13D], 0
 * 0000000140162549: mov     [rbp+0E8h+var_138], rax
 * 000000014016254D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162551: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162555: mov     [rbp+0E8h+var_120], r8
 * 0000000140162559: mov     [rbp+0E8h+var_118], r9
 * 000000014016255D: mov     [rbp+0E8h+var_110], r10
 * 0000000140162561: mov     [rbp+0E8h+var_108], r11
 * 0000000140162565: test    [rbp+0E8h+arg_0], 1
 * 000000014016256C: jnz     short loc_14016259D
 * 000000014016256E: lfence
 * 0000000140162571: test    word ptr gs:2EB8h, 1
 * 000000014016257C: jnz     short loc_140162586
 * 000000014016257E: lfence
 * 0000000140162581: jmp     loc_140162779
 * 0000000140162586: movzx   eax, word ptr gs:2EBCh
 * 000000014016258F: mov     ecx, 48h ; 'H'
 * 0000000140162594: xor     edx, edx
 * 0000000140162596: wrmsr
 * 0000000140162598: jmp     loc_140162779
 * 000000014016259D: test    cs:KiKvaShadow, 1
 * 00000001401625A4: jnz     short loc_1401625A9
 * 00000001401625A6: swapgs
 * 00000001401625A9: lfence
 * 00000001401625AC: mov     r10, gs:188h
 * 00000001401625B5: mov     rcx, gs:188h
 * 00000001401625BE: mov     rcx, [rcx+220h]
 * 00000001401625C5: mov     rcx, [rcx+7B8h]
 * 00000001401625CC: mov     gs:2EB0h, rcx
 * 00000001401625D5: movzx   eax, word ptr gs:2EBEh
 * 00000001401625DE: cmp     gs:2EBCh, ax
 * 00000001401625E7: jz      short loc_1401625FB
 * 00000001401625E9: mov     gs:2EBCh, ax
 * 00000001401625F2: mov     ecx, 48h ; 'H'
 * 00000001401625F7: xor     edx, edx
 * 00000001401625F9: wrmsr
 * 00000001401625FB: movzx   edx, word ptr gs:2EB8h
 * 0000000140162604: test    edx, 8
 * 000000014016260A: jz      short loc_140162623
 * 000000014016260C: mov     eax, 1
 * 0000000140162611: xor     edx, edx
 * 0000000140162613: mov     ecx, 49h ; 'I'
 * 0000000140162618: wrmsr
 * 000000014016261A: movzx   edx, word ptr gs:2EB8h
 * 0000000140162623: test    edx, 2
 * 0000000140162629: jz      loc_140162754
 * 000000014016262F: call    loc_140162742
 * 0000000140162634: add     rsp, 8
 * 0000000140162638: call    loc_14016274B
 * 000000014016263D: add     rsp, 8
 * 0000000140162641: call    loc_140162634
 * 0000000140162646: add     rsp, 8
 * 000000014016264A: call    loc_14016263D
 * 000000014016264F: add     rsp, 8
 * 0000000140162653: call    loc_140162646
 * 0000000140162658: add     rsp, 8
 * 000000014016265C: call    loc_14016264F
 * 0000000140162661: add     rsp, 8
 * 0000000140162665: call    loc_140162658
 * 000000014016266A: add     rsp, 8
 * 000000014016266E: call    loc_140162661
 * 0000000140162673: add     rsp, 8
 * 0000000140162677: call    loc_14016266A
 * 000000014016267C: add     rsp, 8
 * 0000000140162680: call    loc_140162673
 * 0000000140162685: add     rsp, 8
 * 0000000140162689: call    loc_14016267C
 * 000000014016268E: add     rsp, 8
 * 0000000140162692: call    loc_140162685
 * 0000000140162697: add     rsp, 8
 * 000000014016269B: call    loc_14016268E
 * 00000001401626A0: add     rsp, 8
 * 00000001401626A4: call    loc_140162697
 * 00000001401626A9: add     rsp, 8
 * 00000001401626AD: call    loc_1401626A0
 * 00000001401626B2: add     rsp, 8
 * 00000001401626B6: call    loc_1401626A9
 * 00000001401626BB: add     rsp, 8
 * 00000001401626BF: call    loc_1401626B2
 * 00000001401626C4: add     rsp, 8
 * 00000001401626C8: call    loc_1401626BB
 * 00000001401626CD: add     rsp, 8
 * 00000001401626D1: call    loc_1401626C4
 * 00000001401626D6: add     rsp, 8
 * 00000001401626DA: call    loc_1401626CD
 * 00000001401626DF: add     rsp, 8
 * 00000001401626E3: call    loc_1401626D6
 * 00000001401626E8: add     rsp, 8
 * 00000001401626EC: call    loc_1401626DF
 * 00000001401626F1: add     rsp, 8
 * 00000001401626F5: call    loc_1401626E8
 * 00000001401626FA: add     rsp, 8
 * 00000001401626FE: call    loc_1401626F1
 * 0000000140162703: add     rsp, 8
 * 0000000140162707: call    loc_1401626FA
 * 000000014016270C: add     rsp, 8
 * 0000000140162710: call    loc_140162703
 * 0000000140162715: add     rsp, 8
 * 0000000140162719: call    loc_14016270C
 * 000000014016271E: add     rsp, 8
 * 0000000140162722: call    loc_140162715
 * 0000000140162727: add     rsp, 8
 * 000000014016272B: call    loc_14016271E
 * 0000000140162730: add     rsp, 8
 * 0000000140162734: call    loc_140162727
 * 0000000140162739: add     rsp, 8
 * 000000014016273D: call    loc_140162730
 * 0000000140162742: add     rsp, 8
 * 0000000140162746: call    loc_140162739
 * 000000014016274B: add     rsp, 8
 * 000000014016274F: mov     eax, 0DADAh
 * 0000000140162754: test    edx, 100h
 * 000000014016275A: jz      short loc_140162761
 * 000000014016275C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140162761: lfence
 * 0000000140162764: test    byte ptr [r10+3], 3
 * 0000000140162769: mov     [rbp+0E8h+var_68], 0
 * 0000000140162772: jz      short loc_140162779
 * 0000000140162774: call    KiSaveDebugRegisterState
 * 0000000140162779: cld
 * 000000014016277A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016277E: ldmxcsr dword ptr gs:180h
 * 0000000140162787: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016278B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016278F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140162793: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140162797: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016279B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016279F: xor     esi, esi
 * 00000001401627A1: inc     dword ptr gs:5C80h
 * 00000001401627A9: mov     ecx, 1
 * 00000001401627AE: mov     rax, cr8
 * 00000001401627B2: mov     cr8, rcx
 * 00000001401627B6: mov     [rbp+0E8h+var_13F], al
 * 00000001401627B9: mov     rcx, rsi
 * 00000001401627BC: call    HalPerformEndOfInterrupt_0
 * 00000001401627C1: sti
 * 00000001401627C2: cmp     byte ptr gs:187h, 0
 * 00000001401627CB: jnz     short loc_1401627DD
 * 00000001401627CD: mov     ecx, 0
 * 00000001401627D2: xor     edx, edx
 * 00000001401627D4: lea     r8, [rbp+0E8h+var_168]
 * 00000001401627D8: call    KiDeliverApc
 * 00000001401627DD: cli
 * 00000001401627DE: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401627E2: mov     cr8, rcx
 * 00000001401627E6: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401627ED: cli
 * 00000001401627EE: test    [rbp+0E8h+arg_0], 1
 * 00000001401627F5: jz      loc_140162A7F
 * 00000001401627FB: mov     rcx, gs:188h
 * 0000000140162804: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016280B: jz      short loc_140162826
 * 000000014016280D: mov     ecx, 1
 * 0000000140162812: mov     cr8, rcx
 * 0000000140162816: sti
 * 0000000140162817: call    KiInitiateUserApc
 * 000000014016281C: cli
 * 000000014016281D: mov     ecx, 0
 * 0000000140162822: mov     cr8, rcx
 * 0000000140162826: mov     rcx, gs:188h
 * 000000014016282F: test    dword ptr [rcx], 8000000h
 * 0000000140162835: jz      short loc_14016283C
 * 0000000140162837: call    KiRestoreSetContextState
 * 000000014016283C: mov     rcx, gs:188h
 * 0000000140162845: test    dword ptr [rcx], 40010000h
 * 000000014016284B: jz      short loc_140162872
 * 000000014016284D: test    byte ptr [rcx+2], 1
 * 0000000140162851: jz      short loc_140162861
 * 0000000140162853: call    KiCopyCounters
 * 0000000140162858: mov     rcx, gs:188h
 * 0000000140162861: test    byte ptr [rcx+3], 40h
 * 0000000140162865: jz      short loc_140162872
 * 0000000140162867: lea     rsp, [rbp-80h]
 * 000000014016286B: mov     cl, 1
 * 000000014016286D: call    KiUmsExit
 * 0000000140162872: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162876: cmp     [rbp+0E8h+var_68], 0
 * 000000014016287E: jz      short loc_140162885
 * 0000000140162880: call    KiRestoreDebugRegisterState
 * 0000000140162885: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162889: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016288D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140162891: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162895: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162899: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016289D: mov     r11, [rbp+0E8h+var_108]
 * 00000001401628A1: mov     r10, [rbp+0E8h+var_110]
 * 00000001401628A5: mov     r9, [rbp+0E8h+var_118]
 * 00000001401628A9: mov     r8, [rbp+0E8h+var_120]
 * 00000001401628AD: movzx   eax, word ptr gs:2EC2h
 * 00000001401628B6: cmp     gs:2EBCh, ax
 * 00000001401628BF: jz      short loc_1401628D3
 * 00000001401628C1: mov     gs:2EBCh, ax
 * 00000001401628CA: mov     ecx, 48h ; 'H'
 * 00000001401628CF: xor     edx, edx
 * 00000001401628D1: wrmsr
 * 00000001401628D3: btr     word ptr gs:2EB8h, 2
 * 00000001401628DE: jnb     short loc_1401628EE
 * 00000001401628E0: mov     eax, 1
 * 00000001401628E5: xor     edx, edx
 * 00000001401628E7: mov     ecx, 49h ; 'I'
 * 00000001401628EC: wrmsr
 * 00000001401628EE: btr     word ptr gs:2EB8h, 5
 * 00000001401628F9: jnb     loc_140162A24
 * 00000001401628FF: call    loc_140162A12
 * 0000000140162904: add     rsp, 8
 * 0000000140162908: call    loc_140162A1B
 * 000000014016290D: add     rsp, 8
 * 0000000140162911: call    loc_140162904
 * 0000000140162916: add     rsp, 8
 * 000000014016291A: call    loc_14016290D
 * 000000014016291F: add     rsp, 8
 * 0000000140162923: call    loc_140162916
 * 0000000140162928: add     rsp, 8
 * 000000014016292C: call    loc_14016291F
 * 0000000140162931: add     rsp, 8
 * 0000000140162935: call    loc_140162928
 * 000000014016293A: add     rsp, 8
 * 000000014016293E: call    loc_140162931
 * 0000000140162943: add     rsp, 8
 * 0000000140162947: call    loc_14016293A
 * 000000014016294C: add     rsp, 8
 * 0000000140162950: call    loc_140162943
 * 0000000140162955: add     rsp, 8
 * 0000000140162959: call    loc_14016294C
 * 000000014016295E: add     rsp, 8
 * 0000000140162962: call    loc_140162955
 * 0000000140162967: add     rsp, 8
 * 000000014016296B: call    loc_14016295E
 * 0000000140162970: add     rsp, 8
 * 0000000140162974: call    loc_140162967
 * 0000000140162979: add     rsp, 8
 * 000000014016297D: call    loc_140162970
 * 0000000140162982: add     rsp, 8
 * 0000000140162986: call    loc_140162979
 * 000000014016298B: add     rsp, 8
 * 000000014016298F: call    loc_140162982
 * 0000000140162994: add     rsp, 8
 * 0000000140162998: call    loc_14016298B
 * 000000014016299D: add     rsp, 8
 * 00000001401629A1: call    loc_140162994
 * 00000001401629A6: add     rsp, 8
 * 00000001401629AA: call    loc_14016299D
 * 00000001401629AF: add     rsp, 8
 * 00000001401629B3: call    loc_1401629A6
 * 00000001401629B8: add     rsp, 8
 * 00000001401629BC: call    loc_1401629AF
 * 00000001401629C1: add     rsp, 8
 * 00000001401629C5: call    loc_1401629B8
 * 00000001401629CA: add     rsp, 8
 * 00000001401629CE: call    loc_1401629C1
 * 00000001401629D3: add     rsp, 8
 * 00000001401629D7: call    loc_1401629CA
 * 00000001401629DC: add     rsp, 8
 * 00000001401629E0: call    loc_1401629D3
 * 00000001401629E5: add     rsp, 8
 * 00000001401629E9: call    loc_1401629DC
 * 00000001401629EE: add     rsp, 8
 * 00000001401629F2: call    loc_1401629E5
 * 00000001401629F7: add     rsp, 8
 * 00000001401629FB: call    loc_1401629EE
 * 0000000140162A00: add     rsp, 8
 * 0000000140162A04: call    loc_1401629F7
 * 0000000140162A09: add     rsp, 8
 * 0000000140162A0D: call    loc_140162A00
 * 0000000140162A12: add     rsp, 8
 * 0000000140162A16: call    loc_140162A09
 * 0000000140162A1B: add     rsp, 8
 * 0000000140162A1F: mov     eax, 0DADAh
 * 0000000140162A24: test    word ptr gs:2EB8h, 40h
 * 0000000140162A2F: jz      short loc_140162A3D
 * 0000000140162A31: xor     eax, eax
 * 0000000140162A33: xor     edx, edx
 * 0000000140162A35: mov     ecx, 1
 * 0000000140162A3A: div     rcx
 * 0000000140162A3D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140162A41: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140162A45: mov     rax, [rbp+0E8h+var_138]
 * 0000000140162A49: mov     rsp, rbp
 * 0000000140162A4C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140162A53: add     rsp, 0E8h
 * 0000000140162A5A: test    cs:KiKvaShadow, 1
 * 0000000140162A61: jz      short loc_140162A68
 * 0000000140162A63: jmp     KiKernelExit
 * 0000000140162A68: test    word ptr gs:2EB8h, 80h
 * 0000000140162A73: jz      short loc_140162A7A
 * 0000000140162A75: verw    [rsp+arg_18]
 * 0000000140162A7A: swapgs
 * 0000000140162A7D: iretq
 * 0000000140162A7F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162A83: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162A87: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140162A8B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140162A8F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162A93: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162A97: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140162A9B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140162A9F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140162AA3: mov     r9, [rbp+0E8h+var_118]
 * 0000000140162AA7: mov     r8, [rbp+0E8h+var_120]
 * 0000000140162AAB: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140162AAF: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140162AB3: mov     rax, [rbp+0E8h+var_138]
 * 0000000140162AB7: mov     rsp, rbp
 * 0000000140162ABA: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140162AC1: add     rsp, 0E8h
 * 0000000140162AC8: iretq
 */
