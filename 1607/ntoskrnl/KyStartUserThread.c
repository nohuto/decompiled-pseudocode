/*
 * XREFs of KyStartUserThread @ 0x140166450
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140166450 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401666E0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140166450
 * Reason: Hex-Rays returned no pseudocode for 0x140166450
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140166450: sub     rsp, 8
 * 0000000140166454: push    rbp
 * 0000000140166455: sub     rsp, 158h
 * 000000014016645C: lea     rbp, [rsp+80h]
 * 0000000140166464: mov     [rbp+0E8h+var_13D], 1
 * 0000000140166468: mov     [rbp+0E8h+var_138], rax
 * 000000014016646C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140166470: mov     [rbp+0E8h+var_128], rdx
 * 0000000140166474: mov     [rbp+0E8h+var_120], r8
 * 0000000140166478: mov     [rbp+0E8h+var_118], r9
 * 000000014016647C: mov     [rbp+0E8h+var_110], r10
 * 0000000140166480: mov     [rbp+0E8h+var_108], r11
 * 0000000140166484: test    [rbp+0E8h+arg_0], 1
 * 000000014016648B: jnz     short loc_1401664BC
 * 000000014016648D: lfence
 * 0000000140166490: test    word ptr gs:2EB8h, 1
 * 000000014016649B: jnz     short loc_1401664A5
 * 000000014016649D: lfence
 * 00000001401664A0: jmp     loc_140166698
 * 00000001401664A5: movzx   eax, word ptr gs:2EBCh
 * 00000001401664AE: mov     ecx, 48h ; 'H'
 * 00000001401664B3: xor     edx, edx
 * 00000001401664B5: wrmsr
 * 00000001401664B7: jmp     loc_140166698
 * 00000001401664BC: test    cs:KiKvaShadow, 1
 * 00000001401664C3: jnz     short loc_1401664C8
 * 00000001401664C5: swapgs
 * 00000001401664C8: lfence
 * 00000001401664CB: mov     r10, gs:188h
 * 00000001401664D4: mov     rcx, gs:188h
 * 00000001401664DD: mov     rcx, [rcx+220h]
 * 00000001401664E4: mov     rcx, [rcx+7B8h]
 * 00000001401664EB: mov     gs:2EB0h, rcx
 * 00000001401664F4: movzx   eax, word ptr gs:2EBEh
 * 00000001401664FD: cmp     gs:2EBCh, ax
 * 0000000140166506: jz      short loc_14016651A
 * 0000000140166508: mov     gs:2EBCh, ax
 * 0000000140166511: mov     ecx, 48h ; 'H'
 * 0000000140166516: xor     edx, edx
 * 0000000140166518: wrmsr
 * 000000014016651A: movzx   edx, word ptr gs:2EB8h
 * 0000000140166523: test    edx, 8
 * 0000000140166529: jz      short loc_140166542
 * 000000014016652B: mov     eax, 1
 * 0000000140166530: xor     edx, edx
 * 0000000140166532: mov     ecx, 49h ; 'I'
 * 0000000140166537: wrmsr
 * 0000000140166539: movzx   edx, word ptr gs:2EB8h
 * 0000000140166542: test    edx, 2
 * 0000000140166548: jz      loc_140166673
 * 000000014016654E: call    loc_140166661
 * 0000000140166553: add     rsp, 8
 * 0000000140166557: call    loc_14016666A
 * 000000014016655C: add     rsp, 8
 * 0000000140166560: call    loc_140166553
 * 0000000140166565: add     rsp, 8
 * 0000000140166569: call    loc_14016655C
 * 000000014016656E: add     rsp, 8
 * 0000000140166572: call    loc_140166565
 * 0000000140166577: add     rsp, 8
 * 000000014016657B: call    loc_14016656E
 * 0000000140166580: add     rsp, 8
 * 0000000140166584: call    loc_140166577
 * 0000000140166589: add     rsp, 8
 * 000000014016658D: call    loc_140166580
 * 0000000140166592: add     rsp, 8
 * 0000000140166596: call    loc_140166589
 * 000000014016659B: add     rsp, 8
 * 000000014016659F: call    loc_140166592
 * 00000001401665A4: add     rsp, 8
 * 00000001401665A8: call    loc_14016659B
 * 00000001401665AD: add     rsp, 8
 * 00000001401665B1: call    loc_1401665A4
 * 00000001401665B6: add     rsp, 8
 * 00000001401665BA: call    loc_1401665AD
 * 00000001401665BF: add     rsp, 8
 * 00000001401665C3: call    loc_1401665B6
 * 00000001401665C8: add     rsp, 8
 * 00000001401665CC: call    loc_1401665BF
 * 00000001401665D1: add     rsp, 8
 * 00000001401665D5: call    loc_1401665C8
 * 00000001401665DA: add     rsp, 8
 * 00000001401665DE: call    loc_1401665D1
 * 00000001401665E3: add     rsp, 8
 * 00000001401665E7: call    loc_1401665DA
 * 00000001401665EC: add     rsp, 8
 * 00000001401665F0: call    loc_1401665E3
 * 00000001401665F5: add     rsp, 8
 * 00000001401665F9: call    loc_1401665EC
 * 00000001401665FE: add     rsp, 8
 * 0000000140166602: call    loc_1401665F5
 * 0000000140166607: add     rsp, 8
 * 000000014016660B: call    loc_1401665FE
 * 0000000140166610: add     rsp, 8
 * 0000000140166614: call    loc_140166607
 * 0000000140166619: add     rsp, 8
 * 000000014016661D: call    loc_140166610
 * 0000000140166622: add     rsp, 8
 * 0000000140166626: call    loc_140166619
 * 000000014016662B: add     rsp, 8
 * 000000014016662F: call    loc_140166622
 * 0000000140166634: add     rsp, 8
 * 0000000140166638: call    loc_14016662B
 * 000000014016663D: add     rsp, 8
 * 0000000140166641: call    loc_140166634
 * 0000000140166646: add     rsp, 8
 * 000000014016664A: call    loc_14016663D
 * 000000014016664F: add     rsp, 8
 * 0000000140166653: call    loc_140166646
 * 0000000140166658: add     rsp, 8
 * 000000014016665C: call    loc_14016664F
 * 0000000140166661: add     rsp, 8
 * 0000000140166665: call    loc_140166658
 * 000000014016666A: add     rsp, 8
 * 000000014016666E: mov     eax, 0DADAh
 * 0000000140166673: test    edx, 100h
 * 0000000140166679: jz      short loc_140166680
 * 000000014016667B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140166680: lfence
 * 0000000140166683: test    byte ptr [r10+3], 3
 * 0000000140166688: mov     [rbp+0E8h+var_68], 0
 * 0000000140166691: jz      short loc_140166698
 * 0000000140166693: call    KiSaveDebugRegisterState
 * 0000000140166698: cld
 * 0000000140166699: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016669D: ldmxcsr dword ptr gs:180h
 * 00000001401666A6: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401666AA: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401666AE: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401666B2: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401666B6: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401666BA: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401666BE: test    [rbp+0E8h+arg_8], 200h
 * 00000001401666C8: jz      short loc_1401666CB
 * 00000001401666CA: sti
 * 00000001401666CB: call    KxStartUserThread
 * 00000001401666D0: nop
 * 00000001401666D1: retn
 */
