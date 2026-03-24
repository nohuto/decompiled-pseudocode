/*
 * XREFs of KiDpcInterrupt @ 0x1401873D0
 * Callers:
 *     KiDpcInterruptShadow @ 0x140274C80 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401873D0 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401873D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401873D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401873D0: sub     rsp, 8
 * 00000001401873D4: push    rbp
 * 00000001401873D5: push    rsi
 * 00000001401873D6: sub     rsp, 150h
 * 00000001401873DD: lea     rbp, [rsp+80h]
 * 00000001401873E5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401873E9: mov     [rbp+0E8h+var_138], rax
 * 00000001401873ED: mov     [rbp+0E8h+var_130], rcx
 * 00000001401873F1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401873F5: mov     [rbp+0E8h+var_120], r8
 * 00000001401873F9: mov     [rbp+0E8h+var_118], r9
 * 00000001401873FD: mov     [rbp+0E8h+var_110], r10
 * 0000000140187401: mov     [rbp+0E8h+var_108], r11
 * 0000000140187405: test    [rbp+0E8h+arg_0], 1
 * 000000014018740C: jnz     short loc_14018743D
 * 000000014018740E: lfence
 * 0000000140187411: test    word ptr gs:2EB0h, 1
 * 000000014018741C: jnz     short loc_140187426
 * 000000014018741E: lfence
 * 0000000140187421: jmp     loc_140187619
 * 0000000140187426: movzx   eax, word ptr gs:2EB4h
 * 000000014018742F: mov     ecx, 48h ; 'H'
 * 0000000140187434: xor     edx, edx
 * 0000000140187436: wrmsr
 * 0000000140187438: jmp     loc_140187619
 * 000000014018743D: test    cs:KiKvaShadow, 1
 * 0000000140187444: jnz     short loc_140187449
 * 0000000140187446: swapgs
 * 0000000140187449: lfence
 * 000000014018744C: mov     r10, gs:188h
 * 0000000140187455: mov     rcx, gs:188h
 * 000000014018745E: mov     rcx, [rcx+220h]
 * 0000000140187465: mov     rcx, [rcx+7A0h]
 * 000000014018746C: mov     gs:2EA8h, rcx
 * 0000000140187475: movzx   eax, word ptr gs:2EB6h
 * 000000014018747E: cmp     gs:2EB4h, ax
 * 0000000140187487: jz      short loc_14018749B
 * 0000000140187489: mov     gs:2EB4h, ax
 * 0000000140187492: mov     ecx, 48h ; 'H'
 * 0000000140187497: xor     edx, edx
 * 0000000140187499: wrmsr
 * 000000014018749B: movzx   edx, word ptr gs:2EB0h
 * 00000001401874A4: test    edx, 8
 * 00000001401874AA: jz      short loc_1401874C3
 * 00000001401874AC: mov     eax, 1
 * 00000001401874B1: xor     edx, edx
 * 00000001401874B3: mov     ecx, 49h ; 'I'
 * 00000001401874B8: wrmsr
 * 00000001401874BA: movzx   edx, word ptr gs:2EB0h
 * 00000001401874C3: test    edx, 2
 * 00000001401874C9: jz      loc_1401875F4
 * 00000001401874CF: call    loc_1401875E2
 * 00000001401874D4: add     rsp, 8
 * 00000001401874D8: call    loc_1401875EB
 * 00000001401874DD: add     rsp, 8
 * 00000001401874E1: call    loc_1401874D4
 * 00000001401874E6: add     rsp, 8
 * 00000001401874EA: call    loc_1401874DD
 * 00000001401874EF: add     rsp, 8
 * 00000001401874F3: call    loc_1401874E6
 * 00000001401874F8: add     rsp, 8
 * 00000001401874FC: call    loc_1401874EF
 * 0000000140187501: add     rsp, 8
 * 0000000140187505: call    loc_1401874F8
 * 000000014018750A: add     rsp, 8
 * 000000014018750E: call    loc_140187501
 * 0000000140187513: add     rsp, 8
 * 0000000140187517: call    loc_14018750A
 * 000000014018751C: add     rsp, 8
 * 0000000140187520: call    loc_140187513
 * 0000000140187525: add     rsp, 8
 * 0000000140187529: call    loc_14018751C
 * 000000014018752E: add     rsp, 8
 * 0000000140187532: call    loc_140187525
 * 0000000140187537: add     rsp, 8
 * 000000014018753B: call    loc_14018752E
 * 0000000140187540: add     rsp, 8
 * 0000000140187544: call    loc_140187537
 * 0000000140187549: add     rsp, 8
 * 000000014018754D: call    loc_140187540
 * 0000000140187552: add     rsp, 8
 * 0000000140187556: call    loc_140187549
 * 000000014018755B: add     rsp, 8
 * 000000014018755F: call    loc_140187552
 * 0000000140187564: add     rsp, 8
 * 0000000140187568: call    loc_14018755B
 * 000000014018756D: add     rsp, 8
 * 0000000140187571: call    loc_140187564
 * 0000000140187576: add     rsp, 8
 * 000000014018757A: call    loc_14018756D
 * 000000014018757F: add     rsp, 8
 * 0000000140187583: call    loc_140187576
 * 0000000140187588: add     rsp, 8
 * 000000014018758C: call    loc_14018757F
 * 0000000140187591: add     rsp, 8
 * 0000000140187595: call    loc_140187588
 * 000000014018759A: add     rsp, 8
 * 000000014018759E: call    loc_140187591
 * 00000001401875A3: add     rsp, 8
 * 00000001401875A7: call    loc_14018759A
 * 00000001401875AC: add     rsp, 8
 * 00000001401875B0: call    loc_1401875A3
 * 00000001401875B5: add     rsp, 8
 * 00000001401875B9: call    loc_1401875AC
 * 00000001401875BE: add     rsp, 8
 * 00000001401875C2: call    loc_1401875B5
 * 00000001401875C7: add     rsp, 8
 * 00000001401875CB: call    loc_1401875BE
 * 00000001401875D0: add     rsp, 8
 * 00000001401875D4: call    loc_1401875C7
 * 00000001401875D9: add     rsp, 8
 * 00000001401875DD: call    loc_1401875D0
 * 00000001401875E2: add     rsp, 8
 * 00000001401875E6: call    loc_1401875D9
 * 00000001401875EB: add     rsp, 8
 * 00000001401875EF: mov     eax, 0DADAh
 * 00000001401875F4: test    edx, 100h
 * 00000001401875FA: jz      short loc_140187601
 * 00000001401875FC: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140187601: lfence
 * 0000000140187604: test    byte ptr [r10+3], 3
 * 0000000140187609: mov     [rbp+0E8h+var_68], 0
 * 0000000140187612: jz      short loc_140187619
 * 0000000140187614: call    KiSaveDebugRegisterState
 * 0000000140187619: cld
 * 000000014018761A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018761E: ldmxcsr dword ptr gs:180h
 * 0000000140187627: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018762B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018762F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187633: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140187637: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018763B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018763F: xor     esi, esi
 * 0000000140187641: inc     dword ptr gs:5C80h
 * 0000000140187649: mov     ecx, 2
 * 000000014018764E: mov     rax, cr8
 * 0000000140187652: mov     cr8, rcx
 * 0000000140187656: mov     [rbp+0E8h+var_13F], al
 * 0000000140187659: mov     rcx, rsi
 * 000000014018765C: call    HalPerformEndOfInterrupt_0
 * 0000000140187661: sti
 * 0000000140187662: cmp     byte ptr gs:187h, 0
 * 000000014018766B: jnz     short loc_140187684
 * 000000014018766D: mov     al, [rbp+0E8h+var_13F]
 * 0000000140187670: mov     rcx, gs:188h
 * 0000000140187679: mov     [rcx+186h], al
 * 000000014018767F: call    KiDispatchInterrupt
 * 0000000140187684: cli
 * 0000000140187685: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140187689: mov     cr8, rcx
 * 000000014018768D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187694: cli
 * 0000000140187695: test    [rbp+0E8h+arg_0], 1
 * 000000014018769C: jz      loc_1401878FF
 * 00000001401876A2: mov     rcx, gs:188h
 * 00000001401876AB: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401876B2: jz      short loc_1401876CD
 * 00000001401876B4: mov     ecx, 1
 * 00000001401876B9: mov     cr8, rcx
 * 00000001401876BD: sti
 * 00000001401876BE: call    KiInitiateUserApc
 * 00000001401876C3: cli
 * 00000001401876C4: mov     ecx, 0
 * 00000001401876C9: mov     cr8, rcx
 * 00000001401876CD: mov     rcx, gs:188h
 * 00000001401876D6: test    dword ptr [rcx], 40010000h
 * 00000001401876DC: jz      short loc_1401876F2
 * 00000001401876DE: test    byte ptr [rcx+2], 1
 * 00000001401876E2: jz      short loc_1401876F2
 * 00000001401876E4: call    KiCopyCounters
 * 00000001401876E9: mov     rcx, gs:188h
 * 00000001401876F2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401876F6: cmp     [rbp+0E8h+var_68], 0
 * 00000001401876FE: jz      short loc_140187705
 * 0000000140187700: call    KiRestoreDebugRegisterState
 * 0000000140187705: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187709: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018770D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187711: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187715: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187719: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018771D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187721: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187725: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187729: mov     r8, [rbp+0E8h+var_120]
 * 000000014018772D: movzx   eax, word ptr gs:2EBAh
 * 0000000140187736: cmp     gs:2EB4h, ax
 * 000000014018773F: jz      short loc_140187753
 * 0000000140187741: mov     gs:2EB4h, ax
 * 000000014018774A: mov     ecx, 48h ; 'H'
 * 000000014018774F: xor     edx, edx
 * 0000000140187751: wrmsr
 * 0000000140187753: btr     word ptr gs:2EB0h, 2
 * 000000014018775E: jnb     short loc_14018776E
 * 0000000140187760: mov     eax, 1
 * 0000000140187765: xor     edx, edx
 * 0000000140187767: mov     ecx, 49h ; 'I'
 * 000000014018776C: wrmsr
 * 000000014018776E: btr     word ptr gs:2EB0h, 5
 * 0000000140187779: jnb     loc_1401878A4
 * 000000014018777F: call    loc_140187892
 * 0000000140187784: add     rsp, 8
 * 0000000140187788: call    loc_14018789B
 * 000000014018778D: add     rsp, 8
 * 0000000140187791: call    loc_140187784
 * 0000000140187796: add     rsp, 8
 * 000000014018779A: call    loc_14018778D
 * 000000014018779F: add     rsp, 8
 * 00000001401877A3: call    loc_140187796
 * 00000001401877A8: add     rsp, 8
 * 00000001401877AC: call    loc_14018779F
 * 00000001401877B1: add     rsp, 8
 * 00000001401877B5: call    loc_1401877A8
 * 00000001401877BA: add     rsp, 8
 * 00000001401877BE: call    loc_1401877B1
 * 00000001401877C3: add     rsp, 8
 * 00000001401877C7: call    loc_1401877BA
 * 00000001401877CC: add     rsp, 8
 * 00000001401877D0: call    loc_1401877C3
 * 00000001401877D5: add     rsp, 8
 * 00000001401877D9: call    loc_1401877CC
 * 00000001401877DE: add     rsp, 8
 * 00000001401877E2: call    loc_1401877D5
 * 00000001401877E7: add     rsp, 8
 * 00000001401877EB: call    loc_1401877DE
 * 00000001401877F0: add     rsp, 8
 * 00000001401877F4: call    loc_1401877E7
 * 00000001401877F9: add     rsp, 8
 * 00000001401877FD: call    loc_1401877F0
 * 0000000140187802: add     rsp, 8
 * 0000000140187806: call    loc_1401877F9
 * 000000014018780B: add     rsp, 8
 * 000000014018780F: call    loc_140187802
 * 0000000140187814: add     rsp, 8
 * 0000000140187818: call    loc_14018780B
 * 000000014018781D: add     rsp, 8
 * 0000000140187821: call    loc_140187814
 * 0000000140187826: add     rsp, 8
 * 000000014018782A: call    loc_14018781D
 * 000000014018782F: add     rsp, 8
 * 0000000140187833: call    loc_140187826
 * 0000000140187838: add     rsp, 8
 * 000000014018783C: call    loc_14018782F
 * 0000000140187841: add     rsp, 8
 * 0000000140187845: call    loc_140187838
 * 000000014018784A: add     rsp, 8
 * 000000014018784E: call    loc_140187841
 * 0000000140187853: add     rsp, 8
 * 0000000140187857: call    loc_14018784A
 * 000000014018785C: add     rsp, 8
 * 0000000140187860: call    loc_140187853
 * 0000000140187865: add     rsp, 8
 * 0000000140187869: call    loc_14018785C
 * 000000014018786E: add     rsp, 8
 * 0000000140187872: call    loc_140187865
 * 0000000140187877: add     rsp, 8
 * 000000014018787B: call    loc_14018786E
 * 0000000140187880: add     rsp, 8
 * 0000000140187884: call    loc_140187877
 * 0000000140187889: add     rsp, 8
 * 000000014018788D: call    loc_140187880
 * 0000000140187892: add     rsp, 8
 * 0000000140187896: call    loc_140187889
 * 000000014018789B: add     rsp, 8
 * 000000014018789F: mov     eax, 0DADAh
 * 00000001401878A4: test    word ptr gs:2EB0h, 40h
 * 00000001401878AF: jz      short loc_1401878BD
 * 00000001401878B1: xor     eax, eax
 * 00000001401878B3: xor     edx, edx
 * 00000001401878B5: mov     ecx, 1
 * 00000001401878BA: div     rcx
 * 00000001401878BD: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401878C1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401878C5: mov     rax, [rbp+0E8h+var_138]
 * 00000001401878C9: mov     rsp, rbp
 * 00000001401878CC: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401878D3: add     rsp, 0E8h
 * 00000001401878DA: test    cs:KiKvaShadow, 1
 * 00000001401878E1: jz      short loc_1401878E8
 * 00000001401878E3: jmp     KiKernelExit
 * 00000001401878E8: test    word ptr gs:2EB0h, 80h
 * 00000001401878F3: jz      short loc_1401878FA
 * 00000001401878F5: verw    [rsp+arg_18]
 * 00000001401878FA: swapgs
 * 00000001401878FD: iretq
 * 00000001401878FF: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187903: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187907: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018790B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018790F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187913: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187917: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018791B: mov     r11, [rbp+0E8h+var_108]
 * 000000014018791F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187923: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187927: mov     r8, [rbp+0E8h+var_120]
 * 000000014018792B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018792F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187933: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187937: mov     rsp, rbp
 * 000000014018793A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187941: add     rsp, 0E8h
 * 0000000140187948: iretq
 */
