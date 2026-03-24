/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401633F0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x14023FE00 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400AA984 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BAD00 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401633F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401633F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401633F0: sub     rsp, 8
 * 00000001401633F4: push    rbp
 * 00000001401633F5: push    rsi
 * 00000001401633F6: sub     rsp, 150h
 * 00000001401633FD: lea     rbp, [rsp+80h]
 * 0000000140163405: mov     [rbp+0E8h+var_13D], 0
 * 0000000140163409: mov     [rbp+0E8h+var_138], rax
 * 000000014016340D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140163411: mov     [rbp+0E8h+var_128], rdx
 * 0000000140163415: mov     [rbp+0E8h+var_120], r8
 * 0000000140163419: mov     [rbp+0E8h+var_118], r9
 * 000000014016341D: mov     [rbp+0E8h+var_110], r10
 * 0000000140163421: mov     [rbp+0E8h+var_108], r11
 * 0000000140163425: test    [rbp+0E8h+arg_0], 1
 * 000000014016342C: jnz     short loc_14016345D
 * 000000014016342E: lfence
 * 0000000140163431: test    word ptr gs:2EB8h, 1
 * 000000014016343C: jnz     short loc_140163446
 * 000000014016343E: lfence
 * 0000000140163441: jmp     loc_140163639
 * 0000000140163446: movzx   eax, word ptr gs:2EBCh
 * 000000014016344F: mov     ecx, 48h ; 'H'
 * 0000000140163454: xor     edx, edx
 * 0000000140163456: wrmsr
 * 0000000140163458: jmp     loc_140163639
 * 000000014016345D: test    cs:KiKvaShadow, 1
 * 0000000140163464: jnz     short loc_140163469
 * 0000000140163466: swapgs
 * 0000000140163469: lfence
 * 000000014016346C: mov     r10, gs:188h
 * 0000000140163475: mov     rcx, gs:188h
 * 000000014016347E: mov     rcx, [rcx+220h]
 * 0000000140163485: mov     rcx, [rcx+7B8h]
 * 000000014016348C: mov     gs:2EB0h, rcx
 * 0000000140163495: movzx   eax, word ptr gs:2EBEh
 * 000000014016349E: cmp     gs:2EBCh, ax
 * 00000001401634A7: jz      short loc_1401634BB
 * 00000001401634A9: mov     gs:2EBCh, ax
 * 00000001401634B2: mov     ecx, 48h ; 'H'
 * 00000001401634B7: xor     edx, edx
 * 00000001401634B9: wrmsr
 * 00000001401634BB: movzx   edx, word ptr gs:2EB8h
 * 00000001401634C4: test    edx, 8
 * 00000001401634CA: jz      short loc_1401634E3
 * 00000001401634CC: mov     eax, 1
 * 00000001401634D1: xor     edx, edx
 * 00000001401634D3: mov     ecx, 49h ; 'I'
 * 00000001401634D8: wrmsr
 * 00000001401634DA: movzx   edx, word ptr gs:2EB8h
 * 00000001401634E3: test    edx, 2
 * 00000001401634E9: jz      loc_140163614
 * 00000001401634EF: call    loc_140163602
 * 00000001401634F4: add     rsp, 8
 * 00000001401634F8: call    loc_14016360B
 * 00000001401634FD: add     rsp, 8
 * 0000000140163501: call    loc_1401634F4
 * 0000000140163506: add     rsp, 8
 * 000000014016350A: call    loc_1401634FD
 * 000000014016350F: add     rsp, 8
 * 0000000140163513: call    loc_140163506
 * 0000000140163518: add     rsp, 8
 * 000000014016351C: call    loc_14016350F
 * 0000000140163521: add     rsp, 8
 * 0000000140163525: call    loc_140163518
 * 000000014016352A: add     rsp, 8
 * 000000014016352E: call    loc_140163521
 * 0000000140163533: add     rsp, 8
 * 0000000140163537: call    loc_14016352A
 * 000000014016353C: add     rsp, 8
 * 0000000140163540: call    loc_140163533
 * 0000000140163545: add     rsp, 8
 * 0000000140163549: call    loc_14016353C
 * 000000014016354E: add     rsp, 8
 * 0000000140163552: call    loc_140163545
 * 0000000140163557: add     rsp, 8
 * 000000014016355B: call    loc_14016354E
 * 0000000140163560: add     rsp, 8
 * 0000000140163564: call    loc_140163557
 * 0000000140163569: add     rsp, 8
 * 000000014016356D: call    loc_140163560
 * 0000000140163572: add     rsp, 8
 * 0000000140163576: call    loc_140163569
 * 000000014016357B: add     rsp, 8
 * 000000014016357F: call    loc_140163572
 * 0000000140163584: add     rsp, 8
 * 0000000140163588: call    loc_14016357B
 * 000000014016358D: add     rsp, 8
 * 0000000140163591: call    loc_140163584
 * 0000000140163596: add     rsp, 8
 * 000000014016359A: call    loc_14016358D
 * 000000014016359F: add     rsp, 8
 * 00000001401635A3: call    loc_140163596
 * 00000001401635A8: add     rsp, 8
 * 00000001401635AC: call    loc_14016359F
 * 00000001401635B1: add     rsp, 8
 * 00000001401635B5: call    loc_1401635A8
 * 00000001401635BA: add     rsp, 8
 * 00000001401635BE: call    loc_1401635B1
 * 00000001401635C3: add     rsp, 8
 * 00000001401635C7: call    loc_1401635BA
 * 00000001401635CC: add     rsp, 8
 * 00000001401635D0: call    loc_1401635C3
 * 00000001401635D5: add     rsp, 8
 * 00000001401635D9: call    loc_1401635CC
 * 00000001401635DE: add     rsp, 8
 * 00000001401635E2: call    loc_1401635D5
 * 00000001401635E7: add     rsp, 8
 * 00000001401635EB: call    loc_1401635DE
 * 00000001401635F0: add     rsp, 8
 * 00000001401635F4: call    loc_1401635E7
 * 00000001401635F9: add     rsp, 8
 * 00000001401635FD: call    loc_1401635F0
 * 0000000140163602: add     rsp, 8
 * 0000000140163606: call    loc_1401635F9
 * 000000014016360B: add     rsp, 8
 * 000000014016360F: mov     eax, 0DADAh
 * 0000000140163614: test    edx, 100h
 * 000000014016361A: jz      short loc_140163621
 * 000000014016361C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140163621: lfence
 * 0000000140163624: test    byte ptr [r10+3], 3
 * 0000000140163629: mov     [rbp+0E8h+var_68], 0
 * 0000000140163632: jz      short loc_140163639
 * 0000000140163634: call    KiSaveDebugRegisterState
 * 0000000140163639: cld
 * 000000014016363A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016363E: ldmxcsr dword ptr gs:180h
 * 0000000140163647: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016364B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016364F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140163653: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140163657: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016365B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016365F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140163668: jz      short loc_14016366F
 * 000000014016366A: call    KeWakeProcessor
 * 000000014016366F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140163676: cmp     rax, [rbp+0E8h]
 * 000000014016367D: jnb     short loc_140163698
 * 000000014016367F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140163686: cmp     rax, [rbp+0E8h]
 * 000000014016368D: jb      short loc_140163698
 * 000000014016368F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140163693: call    KiCheckForSListAddress
 * 0000000140163698: xor     esi, esi
 * 000000014016369A: inc     dword ptr gs:5C80h
 * 00000001401636A2: mov     ecx, 3
 * 00000001401636A7: mov     rax, cr8
 * 00000001401636AB: mov     cr8, rcx
 * 00000001401636AF: mov     [rbp+0E8h+var_13F], al
 * 00000001401636B2: mov     [rbp+0E8h+var_148], 0
 * 00000001401636B9: mov     rcx, gs:20h
 * 00000001401636C2: inc     byte ptr [rcx+20h]
 * 00000001401636C5: cmp     byte ptr [rcx+20h], 1
 * 00000001401636C9: jnz     loc_14016375F
 * 00000001401636CF: rdtsc
 * 00000001401636D1: shl     rdx, 20h
 * 00000001401636D5: or      rax, rdx
 * 00000001401636D8: mov     edx, [rcx+6320h]
 * 00000001401636DE: mov     r11d, edx
 * 00000001401636E1: and     edx, 7FFh
 * 00000001401636E7: shr     edx, 5
 * 00000001401636EA: lea     r10, [rcx+rdx*4+6324h]
 * 00000001401636F2: mov     edx, [r10]
 * 00000001401636F5: ror     edx, 5
 * 00000001401636F8: xor     edx, eax
 * 00000001401636FA: mov     [r10], edx
 * 00000001401636FD: add     r11d, 1
 * 0000000140163701: mov     [rcx+6320h], r11d
 * 0000000140163708: and     r11d, 3FFh
 * 000000014016370F: jnz     short loc_140163718
 * 0000000140163711: mov     [rbp+0E8h+var_148], 1
 * 0000000140163718: mov     r8, [rcx+8]
 * 000000014016371C: sub     rax, [rcx+5B38h]
 * 0000000140163723: add     [r8+48h], rax
 * 0000000140163727: mov     edx, [r8+50h]
 * 000000014016372B: add     [rcx+5B38h], rax
 * 0000000140163732: add     rdx, rax
 * 0000000140163735: mov     ecx, edx
 * 0000000140163737: shr     rdx, 20h
 * 000000014016373B: jz      short loc_140163740
 * 000000014016373D: or      ecx, 0FFFFFFFFh
 * 0000000140163740: mov     [r8+50h], ecx
 * 0000000140163744: test    byte ptr [r8+2], 3Eh
 * 0000000140163749: jz      short loc_14016375F
 * 000000014016374B: mov     rdx, r8
 * 000000014016374E: mov     r8, rax
 * 0000000140163751: mov     rcx, gs:20h
 * 000000014016375A: call    KiEndThreadAccountingPeriod
 * 000000014016375F: sti
 * 0000000140163760: cmp     [rbp+0E8h+var_148], 0
 * 0000000140163764: jz      short loc_140163774
 * 0000000140163766: mov     rcx, gs:20h
 * 000000014016376F: call    KiEntropyQueueDpc
 * 0000000140163774: mov     ecx, 1
 * 0000000140163779: call    HvlRouteInterrupt
 * 000000014016377E: cli
 * 000000014016377F: mov     rcx, gs:20h
 * 0000000140163788: cmp     byte ptr [rcx+20h], 1
 * 000000014016378C: ja      short loc_140163802
 * 000000014016378E: rdtsc
 * 0000000140163790: shl     rdx, 20h
 * 0000000140163794: or      rax, rdx
 * 0000000140163797: sub     rax, [rcx+5B38h]
 * 000000014016379E: add     [rcx+5BF8h], rax
 * 00000001401637A5: add     [rcx+5B38h], rax
 * 00000001401637AC: mov     r8, rax
 * 00000001401637AF: mov     rax, [rcx+8]
 * 00000001401637B3: test    byte ptr [rax+2], 32h
 * 00000001401637B7: jz      short loc_1401637CC
 * 00000001401637B9: xor     edx, edx
 * 00000001401637BB: call    KiBeginThreadAccountingPeriod
 * 00000001401637C0: mov     rcx, gs:20h
 * 00000001401637C9: inc     byte ptr [rcx+20h]
 * 00000001401637CC: mov     dl, [rcx+6]
 * 00000001401637CF: and     byte ptr [rcx+6], 0
 * 00000001401637D3: cmp     byte ptr [rcx+7], 0
 * 00000001401637D7: jnz     short loc_140163802
 * 00000001401637D9: test    dl, dl
 * 00000001401637DB: jz      short loc_140163802
 * 00000001401637DD: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401637E1: jnb     short loc_1401637EE
 * 00000001401637E3: and     byte ptr [rcx+20h], 0
 * 00000001401637E7: call    KiDpcInterruptBypass
 * 00000001401637EC: jmp     short loc_140163805
 * 00000001401637EE: mov     ecx, 2
 * 00000001401637F3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401637F9: mov     rcx, gs:20h
 * 0000000140163802: dec     byte ptr [rcx+20h]
 * 0000000140163805: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163809: mov     cr8, rcx
 * 000000014016380D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140163814: cli
 * 0000000140163815: test    [rbp+0E8h+arg_0], 1
 * 000000014016381C: jz      loc_140163A95
 * 0000000140163822: mov     rcx, gs:188h
 * 000000014016382B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140163832: jz      short loc_14016384D
 * 0000000140163834: mov     ecx, 1
 * 0000000140163839: mov     cr8, rcx
 * 000000014016383D: sti
 * 000000014016383E: call    KiInitiateUserApc
 * 0000000140163843: cli
 * 0000000140163844: mov     ecx, 0
 * 0000000140163849: mov     cr8, rcx
 * 000000014016384D: mov     rcx, gs:188h
 * 0000000140163856: test    dword ptr [rcx], 8000000h
 * 000000014016385C: jz      short loc_140163863
 * 000000014016385E: call    KiRestoreSetContextState
 * 0000000140163863: mov     rcx, gs:188h
 * 000000014016386C: test    dword ptr [rcx], 40010000h
 * 0000000140163872: jz      short loc_140163888
 * 0000000140163874: test    byte ptr [rcx+2], 1
 * 0000000140163878: jz      short loc_140163888
 * 000000014016387A: call    KiCopyCounters
 * 000000014016387F: mov     rcx, gs:188h
 * 0000000140163888: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016388C: cmp     [rbp+0E8h+var_68], 0
 * 0000000140163894: jz      short loc_14016389B
 * 0000000140163896: call    KiRestoreDebugRegisterState
 * 000000014016389B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016389F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401638A3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401638A7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401638AB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401638AF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401638B3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401638B7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401638BB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401638BF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401638C3: movzx   eax, word ptr gs:2EC2h
 * 00000001401638CC: cmp     gs:2EBCh, ax
 * 00000001401638D5: jz      short loc_1401638E9
 * 00000001401638D7: mov     gs:2EBCh, ax
 * 00000001401638E0: mov     ecx, 48h ; 'H'
 * 00000001401638E5: xor     edx, edx
 * 00000001401638E7: wrmsr
 * 00000001401638E9: btr     word ptr gs:2EB8h, 2
 * 00000001401638F4: jnb     short loc_140163904
 * 00000001401638F6: mov     eax, 1
 * 00000001401638FB: xor     edx, edx
 * 00000001401638FD: mov     ecx, 49h ; 'I'
 * 0000000140163902: wrmsr
 * 0000000140163904: btr     word ptr gs:2EB8h, 5
 * 000000014016390F: jnb     loc_140163A3A
 * 0000000140163915: call    loc_140163A28
 * 000000014016391A: add     rsp, 8
 * 000000014016391E: call    loc_140163A31
 * 0000000140163923: add     rsp, 8
 * 0000000140163927: call    loc_14016391A
 * 000000014016392C: add     rsp, 8
 * 0000000140163930: call    loc_140163923
 * 0000000140163935: add     rsp, 8
 * 0000000140163939: call    loc_14016392C
 * 000000014016393E: add     rsp, 8
 * 0000000140163942: call    loc_140163935
 * 0000000140163947: add     rsp, 8
 * 000000014016394B: call    loc_14016393E
 * 0000000140163950: add     rsp, 8
 * 0000000140163954: call    loc_140163947
 * 0000000140163959: add     rsp, 8
 * 000000014016395D: call    loc_140163950
 * 0000000140163962: add     rsp, 8
 * 0000000140163966: call    loc_140163959
 * 000000014016396B: add     rsp, 8
 * 000000014016396F: call    loc_140163962
 * 0000000140163974: add     rsp, 8
 * 0000000140163978: call    loc_14016396B
 * 000000014016397D: add     rsp, 8
 * 0000000140163981: call    loc_140163974
 * 0000000140163986: add     rsp, 8
 * 000000014016398A: call    loc_14016397D
 * 000000014016398F: add     rsp, 8
 * 0000000140163993: call    loc_140163986
 * 0000000140163998: add     rsp, 8
 * 000000014016399C: call    loc_14016398F
 * 00000001401639A1: add     rsp, 8
 * 00000001401639A5: call    loc_140163998
 * 00000001401639AA: add     rsp, 8
 * 00000001401639AE: call    loc_1401639A1
 * 00000001401639B3: add     rsp, 8
 * 00000001401639B7: call    loc_1401639AA
 * 00000001401639BC: add     rsp, 8
 * 00000001401639C0: call    loc_1401639B3
 * 00000001401639C5: add     rsp, 8
 * 00000001401639C9: call    loc_1401639BC
 * 00000001401639CE: add     rsp, 8
 * 00000001401639D2: call    loc_1401639C5
 * 00000001401639D7: add     rsp, 8
 * 00000001401639DB: call    loc_1401639CE
 * 00000001401639E0: add     rsp, 8
 * 00000001401639E4: call    loc_1401639D7
 * 00000001401639E9: add     rsp, 8
 * 00000001401639ED: call    loc_1401639E0
 * 00000001401639F2: add     rsp, 8
 * 00000001401639F6: call    loc_1401639E9
 * 00000001401639FB: add     rsp, 8
 * 00000001401639FF: call    loc_1401639F2
 * 0000000140163A04: add     rsp, 8
 * 0000000140163A08: call    loc_1401639FB
 * 0000000140163A0D: add     rsp, 8
 * 0000000140163A11: call    loc_140163A04
 * 0000000140163A16: add     rsp, 8
 * 0000000140163A1A: call    loc_140163A0D
 * 0000000140163A1F: add     rsp, 8
 * 0000000140163A23: call    loc_140163A16
 * 0000000140163A28: add     rsp, 8
 * 0000000140163A2C: call    loc_140163A1F
 * 0000000140163A31: add     rsp, 8
 * 0000000140163A35: mov     eax, 0DADAh
 * 0000000140163A3A: test    word ptr gs:2EB8h, 40h
 * 0000000140163A45: jz      short loc_140163A53
 * 0000000140163A47: xor     eax, eax
 * 0000000140163A49: xor     edx, edx
 * 0000000140163A4B: mov     ecx, 1
 * 0000000140163A50: div     rcx
 * 0000000140163A53: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140163A57: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140163A5B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163A5F: mov     rsp, rbp
 * 0000000140163A62: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140163A69: add     rsp, 0E8h
 * 0000000140163A70: test    cs:KiKvaShadow, 1
 * 0000000140163A77: jz      short loc_140163A7E
 * 0000000140163A79: jmp     KiKernelExit
 * 0000000140163A7E: test    word ptr gs:2EB8h, 80h
 * 0000000140163A89: jz      short loc_140163A90
 * 0000000140163A8B: verw    [rsp+arg_18]
 * 0000000140163A90: swapgs
 * 0000000140163A93: iretq
 * 0000000140163A95: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163A99: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163A9D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163AA1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140163AA5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140163AA9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163AAD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163AB1: mov     r11, [rbp+0E8h+var_108]
 * 0000000140163AB5: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163AB9: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163ABD: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163AC1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140163AC5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140163AC9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163ACD: mov     rsp, rbp
 * 0000000140163AD0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140163AD7: add     rsp, 0E8h
 * 0000000140163ADE: iretq
 */
