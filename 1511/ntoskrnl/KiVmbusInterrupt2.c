/*
 * XREFs of KiVmbusInterrupt2 @ 0x140159500
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140224F00 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     HvlRouteInterrupt @ 0x1401AE564 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140159500
 * Reason: Hex-Rays returned no pseudocode for 0x140159500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140159500: sub     rsp, 8
 * 0000000140159504: push    rbp
 * 0000000140159505: push    rsi
 * 0000000140159506: sub     rsp, 150h
 * 000000014015950D: lea     rbp, [rsp+80h]
 * 0000000140159515: mov     [rbp+0E8h+var_13D], 0
 * 0000000140159519: mov     [rbp+0E8h+var_138], rax
 * 000000014015951D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140159521: mov     [rbp+0E8h+var_128], rdx
 * 0000000140159525: mov     [rbp+0E8h+var_120], r8
 * 0000000140159529: mov     [rbp+0E8h+var_118], r9
 * 000000014015952D: mov     [rbp+0E8h+var_110], r10
 * 0000000140159531: mov     [rbp+0E8h+var_108], r11
 * 0000000140159535: test    [rbp+0E8h+arg_0], 1
 * 000000014015953C: jnz     loc_1401596A2
 * 0000000140159542: cmp     byte ptr gs:187h, 0
 * 000000014015954B: jz      loc_140159838
 * 0000000140159551: test    byte ptr gs:2EB0h, 1
 * 000000014015955A: jz      loc_140159838
 * 0000000140159560: mov     ecx, 48h ; 'H'
 * 0000000140159565: mov     eax, 1
 * 000000014015956A: xor     edx, edx
 * 000000014015956C: wrmsr
 * 000000014015956E: test    byte ptr gs:2EB0h, 4
 * 0000000140159577: jnz     loc_140159838
 * 000000014015957D: call    loc_140159690
 * 0000000140159582: add     rsp, 8
 * 0000000140159586: call    loc_140159699
 * 000000014015958B: add     rsp, 8
 * 000000014015958F: call    loc_140159582
 * 0000000140159594: add     rsp, 8
 * 0000000140159598: call    loc_14015958B
 * 000000014015959D: add     rsp, 8
 * 00000001401595A1: call    loc_140159594
 * 00000001401595A6: add     rsp, 8
 * 00000001401595AA: call    loc_14015959D
 * 00000001401595AF: add     rsp, 8
 * 00000001401595B3: call    loc_1401595A6
 * 00000001401595B8: add     rsp, 8
 * 00000001401595BC: call    loc_1401595AF
 * 00000001401595C1: add     rsp, 8
 * 00000001401595C5: call    loc_1401595B8
 * 00000001401595CA: add     rsp, 8
 * 00000001401595CE: call    loc_1401595C1
 * 00000001401595D3: add     rsp, 8
 * 00000001401595D7: call    loc_1401595CA
 * 00000001401595DC: add     rsp, 8
 * 00000001401595E0: call    loc_1401595D3
 * 00000001401595E5: add     rsp, 8
 * 00000001401595E9: call    loc_1401595DC
 * 00000001401595EE: add     rsp, 8
 * 00000001401595F2: call    loc_1401595E5
 * 00000001401595F7: add     rsp, 8
 * 00000001401595FB: call    loc_1401595EE
 * 0000000140159600: add     rsp, 8
 * 0000000140159604: call    loc_1401595F7
 * 0000000140159609: add     rsp, 8
 * 000000014015960D: call    loc_140159600
 * 0000000140159612: add     rsp, 8
 * 0000000140159616: call    loc_140159609
 * 000000014015961B: add     rsp, 8
 * 000000014015961F: call    loc_140159612
 * 0000000140159624: add     rsp, 8
 * 0000000140159628: call    loc_14015961B
 * 000000014015962D: add     rsp, 8
 * 0000000140159631: call    loc_140159624
 * 0000000140159636: add     rsp, 8
 * 000000014015963A: call    loc_14015962D
 * 000000014015963F: add     rsp, 8
 * 0000000140159643: call    loc_140159636
 * 0000000140159648: add     rsp, 8
 * 000000014015964C: call    loc_14015963F
 * 0000000140159651: add     rsp, 8
 * 0000000140159655: call    loc_140159648
 * 000000014015965A: add     rsp, 8
 * 000000014015965E: call    loc_140159651
 * 0000000140159663: add     rsp, 8
 * 0000000140159667: call    loc_14015965A
 * 000000014015966C: add     rsp, 8
 * 0000000140159670: call    loc_140159663
 * 0000000140159675: add     rsp, 8
 * 0000000140159679: call    loc_14015966C
 * 000000014015967E: add     rsp, 8
 * 0000000140159682: call    loc_140159675
 * 0000000140159687: add     rsp, 8
 * 000000014015968B: call    loc_14015967E
 * 0000000140159690: add     rsp, 8
 * 0000000140159694: call    loc_140159687
 * 0000000140159699: add     rsp, 8
 * 000000014015969D: jmp     loc_140159838
 * 00000001401596A2: test    cs:KiKvaShadow, 1
 * 00000001401596A9: jnz     short loc_1401596AE
 * 00000001401596AB: swapgs
 * 00000001401596AE: mov     r10, gs:188h
 * 00000001401596B7: test    byte ptr gs:2EB0h, 1
 * 00000001401596C0: jz      loc_140159823
 * 00000001401596C6: mov     rcx, gs:188h
 * 00000001401596CF: mov     rcx, [rcx+220h]
 * 00000001401596D6: mov     rcx, [rcx+790h]
 * 00000001401596DD: mov     gs:2EA8h, rcx
 * 00000001401596E6: mov     ecx, 48h ; 'H'
 * 00000001401596EB: mov     eax, 1
 * 00000001401596F0: xor     edx, edx
 * 00000001401596F2: wrmsr
 * 00000001401596F4: test    byte ptr gs:2EB0h, 4
 * 00000001401596FD: jnz     loc_140159823
 * 0000000140159703: call    loc_140159816
 * 0000000140159708: add     rsp, 8
 * 000000014015970C: call    loc_14015981F
 * 0000000140159711: add     rsp, 8
 * 0000000140159715: call    loc_140159708
 * 000000014015971A: add     rsp, 8
 * 000000014015971E: call    loc_140159711
 * 0000000140159723: add     rsp, 8
 * 0000000140159727: call    loc_14015971A
 * 000000014015972C: add     rsp, 8
 * 0000000140159730: call    loc_140159723
 * 0000000140159735: add     rsp, 8
 * 0000000140159739: call    loc_14015972C
 * 000000014015973E: add     rsp, 8
 * 0000000140159742: call    loc_140159735
 * 0000000140159747: add     rsp, 8
 * 000000014015974B: call    loc_14015973E
 * 0000000140159750: add     rsp, 8
 * 0000000140159754: call    loc_140159747
 * 0000000140159759: add     rsp, 8
 * 000000014015975D: call    loc_140159750
 * 0000000140159762: add     rsp, 8
 * 0000000140159766: call    loc_140159759
 * 000000014015976B: add     rsp, 8
 * 000000014015976F: call    loc_140159762
 * 0000000140159774: add     rsp, 8
 * 0000000140159778: call    loc_14015976B
 * 000000014015977D: add     rsp, 8
 * 0000000140159781: call    loc_140159774
 * 0000000140159786: add     rsp, 8
 * 000000014015978A: call    loc_14015977D
 * 000000014015978F: add     rsp, 8
 * 0000000140159793: call    loc_140159786
 * 0000000140159798: add     rsp, 8
 * 000000014015979C: call    loc_14015978F
 * 00000001401597A1: add     rsp, 8
 * 00000001401597A5: call    loc_140159798
 * 00000001401597AA: add     rsp, 8
 * 00000001401597AE: call    loc_1401597A1
 * 00000001401597B3: add     rsp, 8
 * 00000001401597B7: call    loc_1401597AA
 * 00000001401597BC: add     rsp, 8
 * 00000001401597C0: call    loc_1401597B3
 * 00000001401597C5: add     rsp, 8
 * 00000001401597C9: call    loc_1401597BC
 * 00000001401597CE: add     rsp, 8
 * 00000001401597D2: call    loc_1401597C5
 * 00000001401597D7: add     rsp, 8
 * 00000001401597DB: call    loc_1401597CE
 * 00000001401597E0: add     rsp, 8
 * 00000001401597E4: call    loc_1401597D7
 * 00000001401597E9: add     rsp, 8
 * 00000001401597ED: call    loc_1401597E0
 * 00000001401597F2: add     rsp, 8
 * 00000001401597F6: call    loc_1401597E9
 * 00000001401597FB: add     rsp, 8
 * 00000001401597FF: call    loc_1401597F2
 * 0000000140159804: add     rsp, 8
 * 0000000140159808: call    loc_1401597FB
 * 000000014015980D: add     rsp, 8
 * 0000000140159811: call    loc_140159804
 * 0000000140159816: add     rsp, 8
 * 000000014015981A: call    loc_14015980D
 * 000000014015981F: add     rsp, 8
 * 0000000140159823: test    byte ptr [r10+3], 3
 * 0000000140159828: mov     [rbp+0E8h+var_68], 0
 * 0000000140159831: jz      short loc_140159838
 * 0000000140159833: call    KiSaveDebugRegisterState
 * 0000000140159838: cld
 * 0000000140159839: lfence
 * 000000014015983C: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140159840: ldmxcsr dword ptr gs:180h
 * 0000000140159849: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015984D: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140159851: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140159855: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140159859: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015985D: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140159861: cmp     byte ptr gs:5C9Ah, 0
 * 000000014015986A: jz      short loc_140159871
 * 000000014015986C: call    KeWakeProcessor
 * 0000000140159871: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140159878: cmp     rax, [rbp+0E8h]
 * 000000014015987F: jnb     short loc_14015989A
 * 0000000140159881: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140159888: cmp     rax, [rbp+0E8h]
 * 000000014015988F: jb      short loc_14015989A
 * 0000000140159891: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140159895: call    KiCheckForSListAddress
 * 000000014015989A: xor     esi, esi
 * 000000014015989C: inc     dword ptr gs:5C80h
 * 00000001401598A4: mov     ecx, 3
 * 00000001401598A9: mov     rax, cr8
 * 00000001401598AD: mov     cr8, rcx
 * 00000001401598B1: mov     [rbp+0E8h+var_13F], al
 * 00000001401598B4: mov     [rbp+0E8h+var_148], 0
 * 00000001401598BB: mov     rcx, gs:20h
 * 00000001401598C4: inc     byte ptr [rcx+20h]
 * 00000001401598C7: cmp     byte ptr [rcx+20h], 1
 * 00000001401598CB: jnz     loc_140159961
 * 00000001401598D1: rdtsc
 * 00000001401598D3: shl     rdx, 20h
 * 00000001401598D7: or      rax, rdx
 * 00000001401598DA: mov     edx, [rcx+62A0h]
 * 00000001401598E0: mov     r11d, edx
 * 00000001401598E3: and     edx, 7FFh
 * 00000001401598E9: shr     edx, 5
 * 00000001401598EC: lea     r10, [rcx+rdx*4+62A4h]
 * 00000001401598F4: mov     edx, [r10]
 * 00000001401598F7: ror     edx, 5
 * 00000001401598FA: xor     edx, eax
 * 00000001401598FC: mov     [r10], edx
 * 00000001401598FF: add     r11d, 1
 * 0000000140159903: mov     [rcx+62A0h], r11d
 * 000000014015990A: and     r11d, 3FFh
 * 0000000140159911: jnz     short loc_14015991A
 * 0000000140159913: mov     [rbp+0E8h+var_148], 1
 * 000000014015991A: mov     r8, [rcx+8]
 * 000000014015991E: sub     rax, [rcx+5B38h]
 * 0000000140159925: add     [r8+48h], rax
 * 0000000140159929: mov     edx, [r8+50h]
 * 000000014015992D: add     [rcx+5B38h], rax
 * 0000000140159934: add     rdx, rax
 * 0000000140159937: mov     ecx, edx
 * 0000000140159939: shr     rdx, 20h
 * 000000014015993D: jz      short loc_140159942
 * 000000014015993F: or      ecx, 0FFFFFFFFh
 * 0000000140159942: mov     [r8+50h], ecx
 * 0000000140159946: test    byte ptr [r8+2], 3Eh
 * 000000014015994B: jz      short loc_140159961
 * 000000014015994D: mov     rdx, r8
 * 0000000140159950: mov     r8, rax
 * 0000000140159953: mov     rcx, gs:20h
 * 000000014015995C: call    KiEndThreadAccountingPeriod
 * 0000000140159961: sti
 * 0000000140159962: cmp     [rbp+0E8h+var_148], 0
 * 0000000140159966: jz      short loc_140159976
 * 0000000140159968: mov     rcx, gs:20h
 * 0000000140159971: call    KiEntropyQueueDpc
 * 0000000140159976: mov     ecx, 3
 * 000000014015997B: call    HvlRouteInterrupt
 * 0000000140159980: cli
 * 0000000140159981: mov     rcx, gs:20h
 * 000000014015998A: cmp     byte ptr [rcx+20h], 1
 * 000000014015998E: ja      short loc_140159A04
 * 0000000140159990: rdtsc
 * 0000000140159992: shl     rdx, 20h
 * 0000000140159996: or      rax, rdx
 * 0000000140159999: sub     rax, [rcx+5B38h]
 * 00000001401599A0: add     [rcx+5BF8h], rax
 * 00000001401599A7: add     [rcx+5B38h], rax
 * 00000001401599AE: mov     r8, rax
 * 00000001401599B1: mov     rax, [rcx+8]
 * 00000001401599B5: test    byte ptr [rax+2], 32h
 * 00000001401599B9: jz      short loc_1401599CE
 * 00000001401599BB: xor     edx, edx
 * 00000001401599BD: call    KiBeginThreadAccountingPeriod
 * 00000001401599C2: mov     rcx, gs:20h
 * 00000001401599CB: inc     byte ptr [rcx+20h]
 * 00000001401599CE: mov     dl, [rcx+6]
 * 00000001401599D1: and     byte ptr [rcx+6], 0
 * 00000001401599D5: cmp     byte ptr [rcx+7], 0
 * 00000001401599D9: jnz     short loc_140159A04
 * 00000001401599DB: test    dl, dl
 * 00000001401599DD: jz      short loc_140159A04
 * 00000001401599DF: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401599E3: jnb     short loc_1401599F0
 * 00000001401599E5: and     byte ptr [rcx+20h], 0
 * 00000001401599E9: call    KiDpcInterruptBypass
 * 00000001401599EE: jmp     short loc_140159A07
 * 00000001401599F0: mov     ecx, 2
 * 00000001401599F5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401599FB: mov     rcx, gs:20h
 * 0000000140159A04: dec     byte ptr [rcx+20h]
 * 0000000140159A07: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140159A0B: mov     cr8, rcx
 * 0000000140159A0F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140159A16: cli
 * 0000000140159A17: test    [rbp+0E8h+arg_0], 1
 * 0000000140159A1E: jz      loc_140159B2F
 * 0000000140159A24: mov     rcx, gs:188h
 * 0000000140159A2D: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140159A34: jz      short loc_140159A4F
 * 0000000140159A36: mov     ecx, 1
 * 0000000140159A3B: mov     cr8, rcx
 * 0000000140159A3F: sti
 * 0000000140159A40: call    KiInitiateUserApc
 * 0000000140159A45: cli
 * 0000000140159A46: mov     ecx, 0
 * 0000000140159A4B: mov     cr8, rcx
 * 0000000140159A4F: mov     rcx, gs:188h
 * 0000000140159A58: test    dword ptr [rcx], 40010000h
 * 0000000140159A5E: jz      short loc_140159A74
 * 0000000140159A60: test    byte ptr [rcx+2], 1
 * 0000000140159A64: jz      short loc_140159A74
 * 0000000140159A66: call    KiCopyCounters
 * 0000000140159A6B: mov     rcx, gs:188h
 * 0000000140159A74: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140159A78: cmp     [rbp+0E8h+var_68], 0
 * 0000000140159A80: jz      short loc_140159A87
 * 0000000140159A82: call    KiRestoreDebugRegisterState
 * 0000000140159A87: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140159A8B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140159A8F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140159A93: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140159A97: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140159A9B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140159A9F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140159AA3: mov     r10, [rbp+0E8h+var_110]
 * 0000000140159AA7: mov     r9, [rbp+0E8h+var_118]
 * 0000000140159AAB: mov     r8, [rbp+0E8h+var_120]
 * 0000000140159AAF: mov     rcx, gs:188h
 * 0000000140159AB8: movzx   eax, byte ptr [rcx+1]
 * 0000000140159ABC: test    eax, 1
 * 0000000140159AC1: jnz     short loc_140159AFF
 * 0000000140159AC3: xor     edx, edx
 * 0000000140159AC5: mov     ecx, 48h ; 'H'
 * 0000000140159ACA: wrmsr
 * 0000000140159ACC: mov     rax, gs:2EA8h
 * 0000000140159AD5: test    rax, rax
 * 0000000140159AD8: jz      short loc_140159AFF
 * 0000000140159ADA: mov     rcx, gs:188h
 * 0000000140159AE3: mov     rcx, [rcx+220h]
 * 0000000140159AEA: cmp     rax, [rcx+790h]
 * 0000000140159AF1: jz      short loc_140159AFF
 * 0000000140159AF3: mov     eax, 1
 * 0000000140159AF8: mov     ecx, 49h ; 'I'
 * 0000000140159AFD: wrmsr
 * 0000000140159AFF: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140159B03: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140159B07: mov     rax, [rbp+0E8h+var_138]
 * 0000000140159B0B: mov     rsp, rbp
 * 0000000140159B0E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140159B15: add     rsp, 0E8h
 * 0000000140159B1C: test    cs:KiKvaShadow, 1
 * 0000000140159B23: jz      short loc_140159B2A
 * 0000000140159B25: jmp     KiKernelExit
 * 0000000140159B2A: swapgs
 * 0000000140159B2D: iretq
 * 0000000140159B2F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140159B33: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140159B37: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140159B3B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140159B3F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140159B43: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140159B47: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140159B4B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140159B4F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140159B53: mov     r9, [rbp+0E8h+var_118]
 * 0000000140159B57: mov     r8, [rbp+0E8h+var_120]
 * 0000000140159B5B: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140159B5F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140159B63: mov     rax, [rbp+0E8h+var_138]
 * 0000000140159B67: mov     rsp, rbp
 * 0000000140159B6A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140159B71: add     rsp, 0E8h
 * 0000000140159B78: iretq
 */
