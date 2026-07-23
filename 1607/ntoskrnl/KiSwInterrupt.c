/*
 * XREFs of KiSwInterrupt @ 0x1401632C0
 * Callers:
 *     KiSwInterruptShadow @ 0x14023FA80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiSwInterruptDispatch @ 0x1401578BC (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401632C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401632C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401632C0: sub     rsp, 8
 * 00000001401632C4: push    rbp
 * 00000001401632C5: push    rsi
 * 00000001401632C6: sub     rsp, 150h
 * 00000001401632CD: lea     rbp, [rsp+80h]
 * 00000001401632D5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401632D9: mov     [rbp+0E8h+var_138], rax
 * 00000001401632DD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401632E1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401632E5: mov     [rbp+0E8h+var_120], r8
 * 00000001401632E9: mov     [rbp+0E8h+var_118], r9
 * 00000001401632ED: mov     [rbp+0E8h+var_110], r10
 * 00000001401632F1: mov     [rbp+0E8h+var_108], r11
 * 00000001401632F5: test    [rbp+0E8h+arg_0], 1
 * 00000001401632FC: jnz     short loc_14016332D
 * 00000001401632FE: lfence
 * 0000000140163301: test    word ptr gs:2EB8h, 1
 * 000000014016330C: jnz     short loc_140163316
 * 000000014016330E: lfence
 * 0000000140163311: jmp     loc_140163509
 * 0000000140163316: movzx   eax, word ptr gs:2EBCh
 * 000000014016331F: mov     ecx, 48h ; 'H'
 * 0000000140163324: xor     edx, edx
 * 0000000140163326: wrmsr
 * 0000000140163328: jmp     loc_140163509
 * 000000014016332D: test    cs:KiKvaShadow, 1
 * 0000000140163334: jnz     short loc_140163339
 * 0000000140163336: swapgs
 * 0000000140163339: lfence
 * 000000014016333C: mov     r10, gs:188h
 * 0000000140163345: mov     rcx, gs:188h
 * 000000014016334E: mov     rcx, [rcx+220h]
 * 0000000140163355: mov     rcx, [rcx+7B8h]
 * 000000014016335C: mov     gs:2EB0h, rcx
 * 0000000140163365: movzx   eax, word ptr gs:2EBEh
 * 000000014016336E: cmp     gs:2EBCh, ax
 * 0000000140163377: jz      short loc_14016338B
 * 0000000140163379: mov     gs:2EBCh, ax
 * 0000000140163382: mov     ecx, 48h ; 'H'
 * 0000000140163387: xor     edx, edx
 * 0000000140163389: wrmsr
 * 000000014016338B: movzx   edx, word ptr gs:2EB8h
 * 0000000140163394: test    edx, 8
 * 000000014016339A: jz      short loc_1401633B3
 * 000000014016339C: mov     eax, 1
 * 00000001401633A1: xor     edx, edx
 * 00000001401633A3: mov     ecx, 49h ; 'I'
 * 00000001401633A8: wrmsr
 * 00000001401633AA: movzx   edx, word ptr gs:2EB8h
 * 00000001401633B3: test    edx, 2
 * 00000001401633B9: jz      loc_1401634E4
 * 00000001401633BF: call    loc_1401634D2
 * 00000001401633C4: add     rsp, 8
 * 00000001401633C8: call    loc_1401634DB
 * 00000001401633CD: add     rsp, 8
 * 00000001401633D1: call    loc_1401633C4
 * 00000001401633D6: add     rsp, 8
 * 00000001401633DA: call    loc_1401633CD
 * 00000001401633DF: add     rsp, 8
 * 00000001401633E3: call    loc_1401633D6
 * 00000001401633E8: add     rsp, 8
 * 00000001401633EC: call    loc_1401633DF
 * 00000001401633F1: add     rsp, 8
 * 00000001401633F5: call    loc_1401633E8
 * 00000001401633FA: add     rsp, 8
 * 00000001401633FE: call    loc_1401633F1
 * 0000000140163403: add     rsp, 8
 * 0000000140163407: call    loc_1401633FA
 * 000000014016340C: add     rsp, 8
 * 0000000140163410: call    loc_140163403
 * 0000000140163415: add     rsp, 8
 * 0000000140163419: call    loc_14016340C
 * 000000014016341E: add     rsp, 8
 * 0000000140163422: call    loc_140163415
 * 0000000140163427: add     rsp, 8
 * 000000014016342B: call    loc_14016341E
 * 0000000140163430: add     rsp, 8
 * 0000000140163434: call    loc_140163427
 * 0000000140163439: add     rsp, 8
 * 000000014016343D: call    loc_140163430
 * 0000000140163442: add     rsp, 8
 * 0000000140163446: call    loc_140163439
 * 000000014016344B: add     rsp, 8
 * 000000014016344F: call    loc_140163442
 * 0000000140163454: add     rsp, 8
 * 0000000140163458: call    loc_14016344B
 * 000000014016345D: add     rsp, 8
 * 0000000140163461: call    loc_140163454
 * 0000000140163466: add     rsp, 8
 * 000000014016346A: call    loc_14016345D
 * 000000014016346F: add     rsp, 8
 * 0000000140163473: call    loc_140163466
 * 0000000140163478: add     rsp, 8
 * 000000014016347C: call    loc_14016346F
 * 0000000140163481: add     rsp, 8
 * 0000000140163485: call    loc_140163478
 * 000000014016348A: add     rsp, 8
 * 000000014016348E: call    loc_140163481
 * 0000000140163493: add     rsp, 8
 * 0000000140163497: call    loc_14016348A
 * 000000014016349C: add     rsp, 8
 * 00000001401634A0: call    loc_140163493
 * 00000001401634A5: add     rsp, 8
 * 00000001401634A9: call    loc_14016349C
 * 00000001401634AE: add     rsp, 8
 * 00000001401634B2: call    loc_1401634A5
 * 00000001401634B7: add     rsp, 8
 * 00000001401634BB: call    loc_1401634AE
 * 00000001401634C0: add     rsp, 8
 * 00000001401634C4: call    loc_1401634B7
 * 00000001401634C9: add     rsp, 8
 * 00000001401634CD: call    loc_1401634C0
 * 00000001401634D2: add     rsp, 8
 * 00000001401634D6: call    loc_1401634C9
 * 00000001401634DB: add     rsp, 8
 * 00000001401634DF: mov     eax, 0DADAh
 * 00000001401634E4: test    edx, 100h
 * 00000001401634EA: jz      short loc_1401634F1
 * 00000001401634EC: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401634F1: lfence
 * 00000001401634F4: test    byte ptr [r10+3], 3
 * 00000001401634F9: mov     [rbp+0E8h+var_68], 0
 * 0000000140163502: jz      short loc_140163509
 * 0000000140163504: call    KiSaveDebugRegisterState
 * 0000000140163509: cld
 * 000000014016350A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016350E: ldmxcsr dword ptr gs:180h
 * 0000000140163517: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016351B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016351F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140163523: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140163527: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016352B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016352F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140163538: jz      short loc_14016353F
 * 000000014016353A: call    KeWakeProcessor
 * 000000014016353F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140163546: cmp     rax, [rbp+0E8h]
 * 000000014016354D: jnb     short loc_140163568
 * 000000014016354F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140163556: cmp     rax, [rbp+0E8h]
 * 000000014016355D: jb      short loc_140163568
 * 000000014016355F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140163563: call    KiCheckForSListAddress
 * 0000000140163568: xor     esi, esi
 * 000000014016356A: inc     dword ptr gs:5C80h
 * 0000000140163572: mov     ecx, 2
 * 0000000140163577: mov     rax, cr8
 * 000000014016357B: mov     cr8, rcx
 * 000000014016357F: mov     [rbp+0E8h+var_13F], al
 * 0000000140163582: mov     rcx, gs:20h
 * 000000014016358B: inc     byte ptr [rcx+20h]
 * 000000014016358E: cmp     byte ptr [rcx+20h], 1
 * 0000000140163592: jnz     short loc_1401635E4
 * 0000000140163594: rdtsc
 * 0000000140163596: shl     rdx, 20h
 * 000000014016359A: or      rax, rdx
 * 000000014016359D: mov     r8, [rcx+8]
 * 00000001401635A1: sub     rax, [rcx+5B38h]
 * 00000001401635A8: add     [r8+48h], rax
 * 00000001401635AC: mov     edx, [r8+50h]
 * 00000001401635B0: add     [rcx+5B38h], rax
 * 00000001401635B7: add     rdx, rax
 * 00000001401635BA: mov     ecx, edx
 * 00000001401635BC: shr     rdx, 20h
 * 00000001401635C0: jz      short loc_1401635C5
 * 00000001401635C2: or      ecx, 0FFFFFFFFh
 * 00000001401635C5: mov     [r8+50h], ecx
 * 00000001401635C9: test    byte ptr [r8+2], 3Eh
 * 00000001401635CE: jz      short loc_1401635E4
 * 00000001401635D0: mov     rdx, r8
 * 00000001401635D3: mov     r8, rax
 * 00000001401635D6: mov     rcx, gs:20h
 * 00000001401635DF: call    KiEndThreadAccountingPeriod
 * 00000001401635E4: sti
 * 00000001401635E5: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401635E9: call    KiSwInterruptDispatch
 * 00000001401635EE: cli
 * 00000001401635EF: mov     rcx, rsi
 * 00000001401635F2: call    HalPerformEndOfInterrupt_0
 * 00000001401635F7: mov     rcx, gs:20h
 * 0000000140163600: cmp     byte ptr [rcx+20h], 1
 * 0000000140163604: ja      short loc_14016367A
 * 0000000140163606: rdtsc
 * 0000000140163608: shl     rdx, 20h
 * 000000014016360C: or      rax, rdx
 * 000000014016360F: sub     rax, [rcx+5B38h]
 * 0000000140163616: add     [rcx+5BF8h], rax
 * 000000014016361D: add     [rcx+5B38h], rax
 * 0000000140163624: mov     r8, rax
 * 0000000140163627: mov     rax, [rcx+8]
 * 000000014016362B: test    byte ptr [rax+2], 32h
 * 000000014016362F: jz      short loc_140163644
 * 0000000140163631: xor     edx, edx
 * 0000000140163633: call    KiBeginThreadAccountingPeriod
 * 0000000140163638: mov     rcx, gs:20h
 * 0000000140163641: inc     byte ptr [rcx+20h]
 * 0000000140163644: mov     dl, [rcx+6]
 * 0000000140163647: and     byte ptr [rcx+6], 0
 * 000000014016364B: cmp     byte ptr [rcx+7], 0
 * 000000014016364F: jnz     short loc_14016367A
 * 0000000140163651: test    dl, dl
 * 0000000140163653: jz      short loc_14016367A
 * 0000000140163655: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140163659: jnb     short loc_140163666
 * 000000014016365B: and     byte ptr [rcx+20h], 0
 * 000000014016365F: call    KiDpcInterruptBypass
 * 0000000140163664: jmp     short loc_14016367D
 * 0000000140163666: mov     ecx, 2
 * 000000014016366B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140163671: mov     rcx, gs:20h
 * 000000014016367A: dec     byte ptr [rcx+20h]
 * 000000014016367D: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163681: mov     cr8, rcx
 * 0000000140163685: mov     rsi, [rbp+0E8h+var_18]
 * 000000014016368C: cli
 * 000000014016368D: test    [rbp+0E8h+arg_0], 1
 * 0000000140163694: jz      loc_14016390D
 * 000000014016369A: mov     rcx, gs:188h
 * 00000001401636A3: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401636AA: jz      short loc_1401636C5
 * 00000001401636AC: mov     ecx, 1
 * 00000001401636B1: mov     cr8, rcx
 * 00000001401636B5: sti
 * 00000001401636B6: call    KiInitiateUserApc
 * 00000001401636BB: cli
 * 00000001401636BC: mov     ecx, 0
 * 00000001401636C1: mov     cr8, rcx
 * 00000001401636C5: mov     rcx, gs:188h
 * 00000001401636CE: test    dword ptr [rcx], 8000000h
 * 00000001401636D4: jz      short loc_1401636DB
 * 00000001401636D6: call    KiRestoreSetContextState
 * 00000001401636DB: mov     rcx, gs:188h
 * 00000001401636E4: test    dword ptr [rcx], 40010000h
 * 00000001401636EA: jz      short loc_140163700
 * 00000001401636EC: test    byte ptr [rcx+2], 1
 * 00000001401636F0: jz      short loc_140163700
 * 00000001401636F2: call    KiCopyCounters
 * 00000001401636F7: mov     rcx, gs:188h
 * 0000000140163700: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163704: cmp     [rbp+0E8h+var_68], 0
 * 000000014016370C: jz      short loc_140163713
 * 000000014016370E: call    KiRestoreDebugRegisterState
 * 0000000140163713: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163717: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016371B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016371F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140163723: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163727: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016372B: mov     r11, [rbp+0E8h+var_108]
 * 000000014016372F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163733: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163737: mov     r8, [rbp+0E8h+var_120]
 * 000000014016373B: movzx   eax, word ptr gs:2EC2h
 * 0000000140163744: cmp     gs:2EBCh, ax
 * 000000014016374D: jz      short loc_140163761
 * 000000014016374F: mov     gs:2EBCh, ax
 * 0000000140163758: mov     ecx, 48h ; 'H'
 * 000000014016375D: xor     edx, edx
 * 000000014016375F: wrmsr
 * 0000000140163761: btr     word ptr gs:2EB8h, 2
 * 000000014016376C: jnb     short loc_14016377C
 * 000000014016376E: mov     eax, 1
 * 0000000140163773: xor     edx, edx
 * 0000000140163775: mov     ecx, 49h ; 'I'
 * 000000014016377A: wrmsr
 * 000000014016377C: btr     word ptr gs:2EB8h, 5
 * 0000000140163787: jnb     loc_1401638B2
 * 000000014016378D: call    loc_1401638A0
 * 0000000140163792: add     rsp, 8
 * 0000000140163796: call    loc_1401638A9
 * 000000014016379B: add     rsp, 8
 * 000000014016379F: call    loc_140163792
 * 00000001401637A4: add     rsp, 8
 * 00000001401637A8: call    loc_14016379B
 * 00000001401637AD: add     rsp, 8
 * 00000001401637B1: call    loc_1401637A4
 * 00000001401637B6: add     rsp, 8
 * 00000001401637BA: call    loc_1401637AD
 * 00000001401637BF: add     rsp, 8
 * 00000001401637C3: call    loc_1401637B6
 * 00000001401637C8: add     rsp, 8
 * 00000001401637CC: call    loc_1401637BF
 * 00000001401637D1: add     rsp, 8
 * 00000001401637D5: call    loc_1401637C8
 * 00000001401637DA: add     rsp, 8
 * 00000001401637DE: call    loc_1401637D1
 * 00000001401637E3: add     rsp, 8
 * 00000001401637E7: call    loc_1401637DA
 * 00000001401637EC: add     rsp, 8
 * 00000001401637F0: call    loc_1401637E3
 * 00000001401637F5: add     rsp, 8
 * 00000001401637F9: call    loc_1401637EC
 * 00000001401637FE: add     rsp, 8
 * 0000000140163802: call    loc_1401637F5
 * 0000000140163807: add     rsp, 8
 * 000000014016380B: call    loc_1401637FE
 * 0000000140163810: add     rsp, 8
 * 0000000140163814: call    loc_140163807
 * 0000000140163819: add     rsp, 8
 * 000000014016381D: call    loc_140163810
 * 0000000140163822: add     rsp, 8
 * 0000000140163826: call    loc_140163819
 * 000000014016382B: add     rsp, 8
 * 000000014016382F: call    loc_140163822
 * 0000000140163834: add     rsp, 8
 * 0000000140163838: call    loc_14016382B
 * 000000014016383D: add     rsp, 8
 * 0000000140163841: call    loc_140163834
 * 0000000140163846: add     rsp, 8
 * 000000014016384A: call    loc_14016383D
 * 000000014016384F: add     rsp, 8
 * 0000000140163853: call    loc_140163846
 * 0000000140163858: add     rsp, 8
 * 000000014016385C: call    loc_14016384F
 * 0000000140163861: add     rsp, 8
 * 0000000140163865: call    loc_140163858
 * 000000014016386A: add     rsp, 8
 * 000000014016386E: call    loc_140163861
 * 0000000140163873: add     rsp, 8
 * 0000000140163877: call    loc_14016386A
 * 000000014016387C: add     rsp, 8
 * 0000000140163880: call    loc_140163873
 * 0000000140163885: add     rsp, 8
 * 0000000140163889: call    loc_14016387C
 * 000000014016388E: add     rsp, 8
 * 0000000140163892: call    loc_140163885
 * 0000000140163897: add     rsp, 8
 * 000000014016389B: call    loc_14016388E
 * 00000001401638A0: add     rsp, 8
 * 00000001401638A4: call    loc_140163897
 * 00000001401638A9: add     rsp, 8
 * 00000001401638AD: mov     eax, 0DADAh
 * 00000001401638B2: test    word ptr gs:2EB8h, 40h
 * 00000001401638BD: jz      short loc_1401638CB
 * 00000001401638BF: xor     eax, eax
 * 00000001401638C1: xor     edx, edx
 * 00000001401638C3: mov     ecx, 1
 * 00000001401638C8: div     rcx
 * 00000001401638CB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401638CF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401638D3: mov     rax, [rbp+0E8h+var_138]
 * 00000001401638D7: mov     rsp, rbp
 * 00000001401638DA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401638E1: add     rsp, 0E8h
 * 00000001401638E8: test    cs:KiKvaShadow, 1
 * 00000001401638EF: jz      short loc_1401638F6
 * 00000001401638F1: jmp     KiKernelExit
 * 00000001401638F6: test    word ptr gs:2EB8h, 80h
 * 0000000140163901: jz      short loc_140163908
 * 0000000140163903: verw    [rsp+arg_18]
 * 0000000140163908: swapgs
 * 000000014016390B: iretq
 * 000000014016390D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163911: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140163915: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163919: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016391D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140163921: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140163925: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163929: mov     r11, [rbp+0E8h+var_108]
 * 000000014016392D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163931: mov     r9, [rbp+0E8h+var_118]
 * 0000000140163935: mov     r8, [rbp+0E8h+var_120]
 * 0000000140163939: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016393D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140163941: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163945: mov     rsp, rbp
 * 0000000140163948: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016394F: add     rsp, 0E8h
 * 0000000140163956: iretq
 */
