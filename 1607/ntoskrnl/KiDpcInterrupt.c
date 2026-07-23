/*
 * XREFs of KiDpcInterrupt @ 0x140165560
 * Callers:
 *     KiDpcInterruptShadow @ 0x14023FD00 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140165560 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140165560
 * Reason: Hex-Rays returned no pseudocode for 0x140165560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140165560: sub     rsp, 8
 * 0000000140165564: push    rbp
 * 0000000140165565: push    rsi
 * 0000000140165566: sub     rsp, 150h
 * 000000014016556D: lea     rbp, [rsp+80h]
 * 0000000140165575: mov     [rbp+0E8h+var_13D], 0
 * 0000000140165579: mov     [rbp+0E8h+var_138], rax
 * 000000014016557D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140165581: mov     [rbp+0E8h+var_128], rdx
 * 0000000140165585: mov     [rbp+0E8h+var_120], r8
 * 0000000140165589: mov     [rbp+0E8h+var_118], r9
 * 000000014016558D: mov     [rbp+0E8h+var_110], r10
 * 0000000140165591: mov     [rbp+0E8h+var_108], r11
 * 0000000140165595: test    [rbp+0E8h+arg_0], 1
 * 000000014016559C: jnz     short loc_1401655CD
 * 000000014016559E: lfence
 * 00000001401655A1: test    word ptr gs:2EB8h, 1
 * 00000001401655AC: jnz     short loc_1401655B6
 * 00000001401655AE: lfence
 * 00000001401655B1: jmp     loc_1401657A9
 * 00000001401655B6: movzx   eax, word ptr gs:2EBCh
 * 00000001401655BF: mov     ecx, 48h ; 'H'
 * 00000001401655C4: xor     edx, edx
 * 00000001401655C6: wrmsr
 * 00000001401655C8: jmp     loc_1401657A9
 * 00000001401655CD: test    cs:KiKvaShadow, 1
 * 00000001401655D4: jnz     short loc_1401655D9
 * 00000001401655D6: swapgs
 * 00000001401655D9: lfence
 * 00000001401655DC: mov     r10, gs:188h
 * 00000001401655E5: mov     rcx, gs:188h
 * 00000001401655EE: mov     rcx, [rcx+220h]
 * 00000001401655F5: mov     rcx, [rcx+7B8h]
 * 00000001401655FC: mov     gs:2EB0h, rcx
 * 0000000140165605: movzx   eax, word ptr gs:2EBEh
 * 000000014016560E: cmp     gs:2EBCh, ax
 * 0000000140165617: jz      short loc_14016562B
 * 0000000140165619: mov     gs:2EBCh, ax
 * 0000000140165622: mov     ecx, 48h ; 'H'
 * 0000000140165627: xor     edx, edx
 * 0000000140165629: wrmsr
 * 000000014016562B: movzx   edx, word ptr gs:2EB8h
 * 0000000140165634: test    edx, 8
 * 000000014016563A: jz      short loc_140165653
 * 000000014016563C: mov     eax, 1
 * 0000000140165641: xor     edx, edx
 * 0000000140165643: mov     ecx, 49h ; 'I'
 * 0000000140165648: wrmsr
 * 000000014016564A: movzx   edx, word ptr gs:2EB8h
 * 0000000140165653: test    edx, 2
 * 0000000140165659: jz      loc_140165784
 * 000000014016565F: call    loc_140165772
 * 0000000140165664: add     rsp, 8
 * 0000000140165668: call    loc_14016577B
 * 000000014016566D: add     rsp, 8
 * 0000000140165671: call    loc_140165664
 * 0000000140165676: add     rsp, 8
 * 000000014016567A: call    loc_14016566D
 * 000000014016567F: add     rsp, 8
 * 0000000140165683: call    loc_140165676
 * 0000000140165688: add     rsp, 8
 * 000000014016568C: call    loc_14016567F
 * 0000000140165691: add     rsp, 8
 * 0000000140165695: call    loc_140165688
 * 000000014016569A: add     rsp, 8
 * 000000014016569E: call    loc_140165691
 * 00000001401656A3: add     rsp, 8
 * 00000001401656A7: call    loc_14016569A
 * 00000001401656AC: add     rsp, 8
 * 00000001401656B0: call    loc_1401656A3
 * 00000001401656B5: add     rsp, 8
 * 00000001401656B9: call    loc_1401656AC
 * 00000001401656BE: add     rsp, 8
 * 00000001401656C2: call    loc_1401656B5
 * 00000001401656C7: add     rsp, 8
 * 00000001401656CB: call    loc_1401656BE
 * 00000001401656D0: add     rsp, 8
 * 00000001401656D4: call    loc_1401656C7
 * 00000001401656D9: add     rsp, 8
 * 00000001401656DD: call    loc_1401656D0
 * 00000001401656E2: add     rsp, 8
 * 00000001401656E6: call    loc_1401656D9
 * 00000001401656EB: add     rsp, 8
 * 00000001401656EF: call    loc_1401656E2
 * 00000001401656F4: add     rsp, 8
 * 00000001401656F8: call    loc_1401656EB
 * 00000001401656FD: add     rsp, 8
 * 0000000140165701: call    loc_1401656F4
 * 0000000140165706: add     rsp, 8
 * 000000014016570A: call    loc_1401656FD
 * 000000014016570F: add     rsp, 8
 * 0000000140165713: call    loc_140165706
 * 0000000140165718: add     rsp, 8
 * 000000014016571C: call    loc_14016570F
 * 0000000140165721: add     rsp, 8
 * 0000000140165725: call    loc_140165718
 * 000000014016572A: add     rsp, 8
 * 000000014016572E: call    loc_140165721
 * 0000000140165733: add     rsp, 8
 * 0000000140165737: call    loc_14016572A
 * 000000014016573C: add     rsp, 8
 * 0000000140165740: call    loc_140165733
 * 0000000140165745: add     rsp, 8
 * 0000000140165749: call    loc_14016573C
 * 000000014016574E: add     rsp, 8
 * 0000000140165752: call    loc_140165745
 * 0000000140165757: add     rsp, 8
 * 000000014016575B: call    loc_14016574E
 * 0000000140165760: add     rsp, 8
 * 0000000140165764: call    loc_140165757
 * 0000000140165769: add     rsp, 8
 * 000000014016576D: call    loc_140165760
 * 0000000140165772: add     rsp, 8
 * 0000000140165776: call    loc_140165769
 * 000000014016577B: add     rsp, 8
 * 000000014016577F: mov     eax, 0DADAh
 * 0000000140165784: test    edx, 100h
 * 000000014016578A: jz      short loc_140165791
 * 000000014016578C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140165791: lfence
 * 0000000140165794: test    byte ptr [r10+3], 3
 * 0000000140165799: mov     [rbp+0E8h+var_68], 0
 * 00000001401657A2: jz      short loc_1401657A9
 * 00000001401657A4: call    KiSaveDebugRegisterState
 * 00000001401657A9: cld
 * 00000001401657AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401657AE: ldmxcsr dword ptr gs:180h
 * 00000001401657B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401657BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401657BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401657C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401657C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401657CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401657CF: xor     esi, esi
 * 00000001401657D1: inc     dword ptr gs:5C80h
 * 00000001401657D9: mov     ecx, 2
 * 00000001401657DE: mov     rax, cr8
 * 00000001401657E2: mov     cr8, rcx
 * 00000001401657E6: mov     [rbp+0E8h+var_13F], al
 * 00000001401657E9: mov     rcx, rsi
 * 00000001401657EC: call    HalPerformEndOfInterrupt_0
 * 00000001401657F1: sti
 * 00000001401657F2: cmp     byte ptr gs:187h, 0
 * 00000001401657FB: jnz     short loc_140165814
 * 00000001401657FD: mov     al, [rbp+0E8h+var_13F]
 * 0000000140165800: mov     rcx, gs:188h
 * 0000000140165809: mov     [rcx+186h], al
 * 000000014016580F: call    KiDispatchInterrupt
 * 0000000140165814: cli
 * 0000000140165815: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140165819: mov     cr8, rcx
 * 000000014016581D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140165824: cli
 * 0000000140165825: test    [rbp+0E8h+arg_0], 1
 * 000000014016582C: jz      loc_140165AA5
 * 0000000140165832: mov     rcx, gs:188h
 * 000000014016583B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140165842: jz      short loc_14016585D
 * 0000000140165844: mov     ecx, 1
 * 0000000140165849: mov     cr8, rcx
 * 000000014016584D: sti
 * 000000014016584E: call    KiInitiateUserApc
 * 0000000140165853: cli
 * 0000000140165854: mov     ecx, 0
 * 0000000140165859: mov     cr8, rcx
 * 000000014016585D: mov     rcx, gs:188h
 * 0000000140165866: test    dword ptr [rcx], 8000000h
 * 000000014016586C: jz      short loc_140165873
 * 000000014016586E: call    KiRestoreSetContextState
 * 0000000140165873: mov     rcx, gs:188h
 * 000000014016587C: test    dword ptr [rcx], 40010000h
 * 0000000140165882: jz      short loc_140165898
 * 0000000140165884: test    byte ptr [rcx+2], 1
 * 0000000140165888: jz      short loc_140165898
 * 000000014016588A: call    KiCopyCounters
 * 000000014016588F: mov     rcx, gs:188h
 * 0000000140165898: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016589C: cmp     [rbp+0E8h+var_68], 0
 * 00000001401658A4: jz      short loc_1401658AB
 * 00000001401658A6: call    KiRestoreDebugRegisterState
 * 00000001401658AB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401658AF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401658B3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401658B7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401658BB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401658BF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401658C3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401658C7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401658CB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401658CF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401658D3: movzx   eax, word ptr gs:2EC2h
 * 00000001401658DC: cmp     gs:2EBCh, ax
 * 00000001401658E5: jz      short loc_1401658F9
 * 00000001401658E7: mov     gs:2EBCh, ax
 * 00000001401658F0: mov     ecx, 48h ; 'H'
 * 00000001401658F5: xor     edx, edx
 * 00000001401658F7: wrmsr
 * 00000001401658F9: btr     word ptr gs:2EB8h, 2
 * 0000000140165904: jnb     short loc_140165914
 * 0000000140165906: mov     eax, 1
 * 000000014016590B: xor     edx, edx
 * 000000014016590D: mov     ecx, 49h ; 'I'
 * 0000000140165912: wrmsr
 * 0000000140165914: btr     word ptr gs:2EB8h, 5
 * 000000014016591F: jnb     loc_140165A4A
 * 0000000140165925: call    loc_140165A38
 * 000000014016592A: add     rsp, 8
 * 000000014016592E: call    loc_140165A41
 * 0000000140165933: add     rsp, 8
 * 0000000140165937: call    loc_14016592A
 * 000000014016593C: add     rsp, 8
 * 0000000140165940: call    loc_140165933
 * 0000000140165945: add     rsp, 8
 * 0000000140165949: call    loc_14016593C
 * 000000014016594E: add     rsp, 8
 * 0000000140165952: call    loc_140165945
 * 0000000140165957: add     rsp, 8
 * 000000014016595B: call    loc_14016594E
 * 0000000140165960: add     rsp, 8
 * 0000000140165964: call    loc_140165957
 * 0000000140165969: add     rsp, 8
 * 000000014016596D: call    loc_140165960
 * 0000000140165972: add     rsp, 8
 * 0000000140165976: call    loc_140165969
 * 000000014016597B: add     rsp, 8
 * 000000014016597F: call    loc_140165972
 * 0000000140165984: add     rsp, 8
 * 0000000140165988: call    loc_14016597B
 * 000000014016598D: add     rsp, 8
 * 0000000140165991: call    loc_140165984
 * 0000000140165996: add     rsp, 8
 * 000000014016599A: call    loc_14016598D
 * 000000014016599F: add     rsp, 8
 * 00000001401659A3: call    loc_140165996
 * 00000001401659A8: add     rsp, 8
 * 00000001401659AC: call    loc_14016599F
 * 00000001401659B1: add     rsp, 8
 * 00000001401659B5: call    loc_1401659A8
 * 00000001401659BA: add     rsp, 8
 * 00000001401659BE: call    loc_1401659B1
 * 00000001401659C3: add     rsp, 8
 * 00000001401659C7: call    loc_1401659BA
 * 00000001401659CC: add     rsp, 8
 * 00000001401659D0: call    loc_1401659C3
 * 00000001401659D5: add     rsp, 8
 * 00000001401659D9: call    loc_1401659CC
 * 00000001401659DE: add     rsp, 8
 * 00000001401659E2: call    loc_1401659D5
 * 00000001401659E7: add     rsp, 8
 * 00000001401659EB: call    loc_1401659DE
 * 00000001401659F0: add     rsp, 8
 * 00000001401659F4: call    loc_1401659E7
 * 00000001401659F9: add     rsp, 8
 * 00000001401659FD: call    loc_1401659F0
 * 0000000140165A02: add     rsp, 8
 * 0000000140165A06: call    loc_1401659F9
 * 0000000140165A0B: add     rsp, 8
 * 0000000140165A0F: call    loc_140165A02
 * 0000000140165A14: add     rsp, 8
 * 0000000140165A18: call    loc_140165A0B
 * 0000000140165A1D: add     rsp, 8
 * 0000000140165A21: call    loc_140165A14
 * 0000000140165A26: add     rsp, 8
 * 0000000140165A2A: call    loc_140165A1D
 * 0000000140165A2F: add     rsp, 8
 * 0000000140165A33: call    loc_140165A26
 * 0000000140165A38: add     rsp, 8
 * 0000000140165A3C: call    loc_140165A2F
 * 0000000140165A41: add     rsp, 8
 * 0000000140165A45: mov     eax, 0DADAh
 * 0000000140165A4A: test    word ptr gs:2EB8h, 40h
 * 0000000140165A55: jz      short loc_140165A63
 * 0000000140165A57: xor     eax, eax
 * 0000000140165A59: xor     edx, edx
 * 0000000140165A5B: mov     ecx, 1
 * 0000000140165A60: div     rcx
 * 0000000140165A63: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165A67: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165A6B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140165A6F: mov     rsp, rbp
 * 0000000140165A72: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165A79: add     rsp, 0E8h
 * 0000000140165A80: test    cs:KiKvaShadow, 1
 * 0000000140165A87: jz      short loc_140165A8E
 * 0000000140165A89: jmp     KiKernelExit
 * 0000000140165A8E: test    word ptr gs:2EB8h, 80h
 * 0000000140165A99: jz      short loc_140165AA0
 * 0000000140165A9B: verw    [rsp+arg_18]
 * 0000000140165AA0: swapgs
 * 0000000140165AA3: iretq
 * 0000000140165AA5: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140165AA9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140165AAD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165AB1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165AB5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140165AB9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140165ABD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165AC1: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165AC5: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165AC9: mov     r9, [rbp+0E8h+var_118]
 * 0000000140165ACD: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165AD1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165AD5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165AD9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140165ADD: mov     rsp, rbp
 * 0000000140165AE0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165AE7: add     rsp, 0E8h
 * 0000000140165AEE: iretq
 */
