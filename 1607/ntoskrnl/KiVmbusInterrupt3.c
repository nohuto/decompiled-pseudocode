/*
 * XREFs of KiVmbusInterrupt3 @ 0x140164E60
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x14023FF80 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400A8F04 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BABE4 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140164E60
 * Reason: Hex-Rays returned no pseudocode for 0x140164E60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164E60: sub     rsp, 8
 * 0000000140164E64: push    rbp
 * 0000000140164E65: push    rsi
 * 0000000140164E66: sub     rsp, 150h
 * 0000000140164E6D: lea     rbp, [rsp+80h]
 * 0000000140164E75: mov     [rbp+0E8h+var_13D], 0
 * 0000000140164E79: mov     [rbp+0E8h+var_138], rax
 * 0000000140164E7D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140164E81: mov     [rbp+0E8h+var_128], rdx
 * 0000000140164E85: mov     [rbp+0E8h+var_120], r8
 * 0000000140164E89: mov     [rbp+0E8h+var_118], r9
 * 0000000140164E8D: mov     [rbp+0E8h+var_110], r10
 * 0000000140164E91: mov     [rbp+0E8h+var_108], r11
 * 0000000140164E95: test    [rbp+0E8h+arg_0], 1
 * 0000000140164E9C: jnz     short loc_140164ECD
 * 0000000140164E9E: lfence
 * 0000000140164EA1: test    word ptr gs:2EB8h, 1
 * 0000000140164EAC: jnz     short loc_140164EB6
 * 0000000140164EAE: lfence
 * 0000000140164EB1: jmp     loc_1401650A9
 * 0000000140164EB6: movzx   eax, word ptr gs:2EBCh
 * 0000000140164EBF: mov     ecx, 48h ; 'H'
 * 0000000140164EC4: xor     edx, edx
 * 0000000140164EC6: wrmsr
 * 0000000140164EC8: jmp     loc_1401650A9
 * 0000000140164ECD: test    cs:KiKvaShadow, 1
 * 0000000140164ED4: jnz     short loc_140164ED9
 * 0000000140164ED6: swapgs
 * 0000000140164ED9: lfence
 * 0000000140164EDC: mov     r10, gs:188h
 * 0000000140164EE5: mov     rcx, gs:188h
 * 0000000140164EEE: mov     rcx, [rcx+220h]
 * 0000000140164EF5: mov     rcx, [rcx+7B8h]
 * 0000000140164EFC: mov     gs:2EB0h, rcx
 * 0000000140164F05: movzx   eax, word ptr gs:2EBEh
 * 0000000140164F0E: cmp     gs:2EBCh, ax
 * 0000000140164F17: jz      short loc_140164F2B
 * 0000000140164F19: mov     gs:2EBCh, ax
 * 0000000140164F22: mov     ecx, 48h ; 'H'
 * 0000000140164F27: xor     edx, edx
 * 0000000140164F29: wrmsr
 * 0000000140164F2B: movzx   edx, word ptr gs:2EB8h
 * 0000000140164F34: test    edx, 8
 * 0000000140164F3A: jz      short loc_140164F53
 * 0000000140164F3C: mov     eax, 1
 * 0000000140164F41: xor     edx, edx
 * 0000000140164F43: mov     ecx, 49h ; 'I'
 * 0000000140164F48: wrmsr
 * 0000000140164F4A: movzx   edx, word ptr gs:2EB8h
 * 0000000140164F53: test    edx, 2
 * 0000000140164F59: jz      loc_140165084
 * 0000000140164F5F: call    loc_140165072
 * 0000000140164F64: add     rsp, 8
 * 0000000140164F68: call    loc_14016507B
 * 0000000140164F6D: add     rsp, 8
 * 0000000140164F71: call    loc_140164F64
 * 0000000140164F76: add     rsp, 8
 * 0000000140164F7A: call    loc_140164F6D
 * 0000000140164F7F: add     rsp, 8
 * 0000000140164F83: call    loc_140164F76
 * 0000000140164F88: add     rsp, 8
 * 0000000140164F8C: call    loc_140164F7F
 * 0000000140164F91: add     rsp, 8
 * 0000000140164F95: call    loc_140164F88
 * 0000000140164F9A: add     rsp, 8
 * 0000000140164F9E: call    loc_140164F91
 * 0000000140164FA3: add     rsp, 8
 * 0000000140164FA7: call    loc_140164F9A
 * 0000000140164FAC: add     rsp, 8
 * 0000000140164FB0: call    loc_140164FA3
 * 0000000140164FB5: add     rsp, 8
 * 0000000140164FB9: call    loc_140164FAC
 * 0000000140164FBE: add     rsp, 8
 * 0000000140164FC2: call    loc_140164FB5
 * 0000000140164FC7: add     rsp, 8
 * 0000000140164FCB: call    loc_140164FBE
 * 0000000140164FD0: add     rsp, 8
 * 0000000140164FD4: call    loc_140164FC7
 * 0000000140164FD9: add     rsp, 8
 * 0000000140164FDD: call    loc_140164FD0
 * 0000000140164FE2: add     rsp, 8
 * 0000000140164FE6: call    loc_140164FD9
 * 0000000140164FEB: add     rsp, 8
 * 0000000140164FEF: call    loc_140164FE2
 * 0000000140164FF4: add     rsp, 8
 * 0000000140164FF8: call    loc_140164FEB
 * 0000000140164FFD: add     rsp, 8
 * 0000000140165001: call    loc_140164FF4
 * 0000000140165006: add     rsp, 8
 * 000000014016500A: call    loc_140164FFD
 * 000000014016500F: add     rsp, 8
 * 0000000140165013: call    loc_140165006
 * 0000000140165018: add     rsp, 8
 * 000000014016501C: call    loc_14016500F
 * 0000000140165021: add     rsp, 8
 * 0000000140165025: call    loc_140165018
 * 000000014016502A: add     rsp, 8
 * 000000014016502E: call    loc_140165021
 * 0000000140165033: add     rsp, 8
 * 0000000140165037: call    loc_14016502A
 * 000000014016503C: add     rsp, 8
 * 0000000140165040: call    loc_140165033
 * 0000000140165045: add     rsp, 8
 * 0000000140165049: call    loc_14016503C
 * 000000014016504E: add     rsp, 8
 * 0000000140165052: call    loc_140165045
 * 0000000140165057: add     rsp, 8
 * 000000014016505B: call    loc_14016504E
 * 0000000140165060: add     rsp, 8
 * 0000000140165064: call    loc_140165057
 * 0000000140165069: add     rsp, 8
 * 000000014016506D: call    loc_140165060
 * 0000000140165072: add     rsp, 8
 * 0000000140165076: call    loc_140165069
 * 000000014016507B: add     rsp, 8
 * 000000014016507F: mov     eax, 0DADAh
 * 0000000140165084: test    edx, 100h
 * 000000014016508A: jz      short loc_140165091
 * 000000014016508C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140165091: lfence
 * 0000000140165094: test    byte ptr [r10+3], 3
 * 0000000140165099: mov     [rbp+0E8h+var_68], 0
 * 00000001401650A2: jz      short loc_1401650A9
 * 00000001401650A4: call    KiSaveDebugRegisterState
 * 00000001401650A9: cld
 * 00000001401650AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401650AE: ldmxcsr dword ptr gs:180h
 * 00000001401650B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401650BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401650BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401650C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401650C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401650CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401650CF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401650D8: jz      short loc_1401650DF
 * 00000001401650DA: call    KeWakeProcessor
 * 00000001401650DF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401650E6: cmp     rax, [rbp+0E8h]
 * 00000001401650ED: jnb     short loc_140165108
 * 00000001401650EF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401650F6: cmp     rax, [rbp+0E8h]
 * 00000001401650FD: jb      short loc_140165108
 * 00000001401650FF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140165103: call    KiCheckForSListAddress
 * 0000000140165108: xor     esi, esi
 * 000000014016510A: inc     dword ptr gs:5C80h
 * 0000000140165112: mov     ecx, 3
 * 0000000140165117: mov     rax, cr8
 * 000000014016511B: mov     cr8, rcx
 * 000000014016511F: mov     [rbp+0E8h+var_13F], al
 * 0000000140165122: mov     [rbp+0E8h+var_148], 0
 * 0000000140165129: mov     rcx, gs:20h
 * 0000000140165132: inc     byte ptr [rcx+20h]
 * 0000000140165135: cmp     byte ptr [rcx+20h], 1
 * 0000000140165139: jnz     loc_1401651CF
 * 000000014016513F: rdtsc
 * 0000000140165141: shl     rdx, 20h
 * 0000000140165145: or      rax, rdx
 * 0000000140165148: mov     edx, [rcx+6320h]
 * 000000014016514E: mov     r11d, edx
 * 0000000140165151: and     edx, 7FFh
 * 0000000140165157: shr     edx, 5
 * 000000014016515A: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140165162: mov     edx, [r10]
 * 0000000140165165: ror     edx, 5
 * 0000000140165168: xor     edx, eax
 * 000000014016516A: mov     [r10], edx
 * 000000014016516D: add     r11d, 1
 * 0000000140165171: mov     [rcx+6320h], r11d
 * 0000000140165178: and     r11d, 3FFh
 * 000000014016517F: jnz     short loc_140165188
 * 0000000140165181: mov     [rbp+0E8h+var_148], 1
 * 0000000140165188: mov     r8, [rcx+8]
 * 000000014016518C: sub     rax, [rcx+5B38h]
 * 0000000140165193: add     [r8+48h], rax
 * 0000000140165197: mov     edx, [r8+50h]
 * 000000014016519B: add     [rcx+5B38h], rax
 * 00000001401651A2: add     rdx, rax
 * 00000001401651A5: mov     ecx, edx
 * 00000001401651A7: shr     rdx, 20h
 * 00000001401651AB: jz      short loc_1401651B0
 * 00000001401651AD: or      ecx, 0FFFFFFFFh
 * 00000001401651B0: mov     [r8+50h], ecx
 * 00000001401651B4: test    byte ptr [r8+2], 3Eh
 * 00000001401651B9: jz      short loc_1401651CF
 * 00000001401651BB: mov     rdx, r8
 * 00000001401651BE: mov     r8, rax
 * 00000001401651C1: mov     rcx, gs:20h
 * 00000001401651CA: call    KiEndThreadAccountingPeriod
 * 00000001401651CF: sti
 * 00000001401651D0: cmp     [rbp+0E8h+var_148], 0
 * 00000001401651D4: jz      short loc_1401651E4
 * 00000001401651D6: mov     rcx, gs:20h
 * 00000001401651DF: call    KiEntropyQueueDpc
 * 00000001401651E4: mov     ecx, 4
 * 00000001401651E9: call    HvlRouteInterrupt
 * 00000001401651EE: cli
 * 00000001401651EF: mov     rcx, gs:20h
 * 00000001401651F8: cmp     byte ptr [rcx+20h], 1
 * 00000001401651FC: ja      short loc_140165272
 * 00000001401651FE: rdtsc
 * 0000000140165200: shl     rdx, 20h
 * 0000000140165204: or      rax, rdx
 * 0000000140165207: sub     rax, [rcx+5B38h]
 * 000000014016520E: add     [rcx+5BF8h], rax
 * 0000000140165215: add     [rcx+5B38h], rax
 * 000000014016521C: mov     r8, rax
 * 000000014016521F: mov     rax, [rcx+8]
 * 0000000140165223: test    byte ptr [rax+2], 32h
 * 0000000140165227: jz      short loc_14016523C
 * 0000000140165229: xor     edx, edx
 * 000000014016522B: call    KiBeginThreadAccountingPeriod
 * 0000000140165230: mov     rcx, gs:20h
 * 0000000140165239: inc     byte ptr [rcx+20h]
 * 000000014016523C: mov     dl, [rcx+6]
 * 000000014016523F: and     byte ptr [rcx+6], 0
 * 0000000140165243: cmp     byte ptr [rcx+7], 0
 * 0000000140165247: jnz     short loc_140165272
 * 0000000140165249: test    dl, dl
 * 000000014016524B: jz      short loc_140165272
 * 000000014016524D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140165251: jnb     short loc_14016525E
 * 0000000140165253: and     byte ptr [rcx+20h], 0
 * 0000000140165257: call    KiDpcInterruptBypass
 * 000000014016525C: jmp     short loc_140165275
 * 000000014016525E: mov     ecx, 2
 * 0000000140165263: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140165269: mov     rcx, gs:20h
 * 0000000140165272: dec     byte ptr [rcx+20h]
 * 0000000140165275: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140165279: mov     cr8, rcx
 * 000000014016527D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140165284: cli
 * 0000000140165285: test    [rbp+0E8h+arg_0], 1
 * 000000014016528C: jz      loc_140165505
 * 0000000140165292: mov     rcx, gs:188h
 * 000000014016529B: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401652A2: jz      short loc_1401652BD
 * 00000001401652A4: mov     ecx, 1
 * 00000001401652A9: mov     cr8, rcx
 * 00000001401652AD: sti
 * 00000001401652AE: call    KiInitiateUserApc
 * 00000001401652B3: cli
 * 00000001401652B4: mov     ecx, 0
 * 00000001401652B9: mov     cr8, rcx
 * 00000001401652BD: mov     rcx, gs:188h
 * 00000001401652C6: test    dword ptr [rcx], 8000000h
 * 00000001401652CC: jz      short loc_1401652D3
 * 00000001401652CE: call    KiRestoreSetContextState
 * 00000001401652D3: mov     rcx, gs:188h
 * 00000001401652DC: test    dword ptr [rcx], 40010000h
 * 00000001401652E2: jz      short loc_1401652F8
 * 00000001401652E4: test    byte ptr [rcx+2], 1
 * 00000001401652E8: jz      short loc_1401652F8
 * 00000001401652EA: call    KiCopyCounters
 * 00000001401652EF: mov     rcx, gs:188h
 * 00000001401652F8: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401652FC: cmp     [rbp+0E8h+var_68], 0
 * 0000000140165304: jz      short loc_14016530B
 * 0000000140165306: call    KiRestoreDebugRegisterState
 * 000000014016530B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016530F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165313: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165317: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016531B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016531F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165323: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165327: mov     r10, [rbp+0E8h+var_110]
 * 000000014016532B: mov     r9, [rbp+0E8h+var_118]
 * 000000014016532F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165333: movzx   eax, word ptr gs:2EC2h
 * 000000014016533C: cmp     gs:2EBCh, ax
 * 0000000140165345: jz      short loc_140165359
 * 0000000140165347: mov     gs:2EBCh, ax
 * 0000000140165350: mov     ecx, 48h ; 'H'
 * 0000000140165355: xor     edx, edx
 * 0000000140165357: wrmsr
 * 0000000140165359: btr     word ptr gs:2EB8h, 2
 * 0000000140165364: jnb     short loc_140165374
 * 0000000140165366: mov     eax, 1
 * 000000014016536B: xor     edx, edx
 * 000000014016536D: mov     ecx, 49h ; 'I'
 * 0000000140165372: wrmsr
 * 0000000140165374: btr     word ptr gs:2EB8h, 5
 * 000000014016537F: jnb     loc_1401654AA
 * 0000000140165385: call    loc_140165498
 * 000000014016538A: add     rsp, 8
 * 000000014016538E: call    loc_1401654A1
 * 0000000140165393: add     rsp, 8
 * 0000000140165397: call    loc_14016538A
 * 000000014016539C: add     rsp, 8
 * 00000001401653A0: call    loc_140165393
 * 00000001401653A5: add     rsp, 8
 * 00000001401653A9: call    loc_14016539C
 * 00000001401653AE: add     rsp, 8
 * 00000001401653B2: call    loc_1401653A5
 * 00000001401653B7: add     rsp, 8
 * 00000001401653BB: call    loc_1401653AE
 * 00000001401653C0: add     rsp, 8
 * 00000001401653C4: call    loc_1401653B7
 * 00000001401653C9: add     rsp, 8
 * 00000001401653CD: call    loc_1401653C0
 * 00000001401653D2: add     rsp, 8
 * 00000001401653D6: call    loc_1401653C9
 * 00000001401653DB: add     rsp, 8
 * 00000001401653DF: call    loc_1401653D2
 * 00000001401653E4: add     rsp, 8
 * 00000001401653E8: call    loc_1401653DB
 * 00000001401653ED: add     rsp, 8
 * 00000001401653F1: call    loc_1401653E4
 * 00000001401653F6: add     rsp, 8
 * 00000001401653FA: call    loc_1401653ED
 * 00000001401653FF: add     rsp, 8
 * 0000000140165403: call    loc_1401653F6
 * 0000000140165408: add     rsp, 8
 * 000000014016540C: call    loc_1401653FF
 * 0000000140165411: add     rsp, 8
 * 0000000140165415: call    loc_140165408
 * 000000014016541A: add     rsp, 8
 * 000000014016541E: call    loc_140165411
 * 0000000140165423: add     rsp, 8
 * 0000000140165427: call    loc_14016541A
 * 000000014016542C: add     rsp, 8
 * 0000000140165430: call    loc_140165423
 * 0000000140165435: add     rsp, 8
 * 0000000140165439: call    loc_14016542C
 * 000000014016543E: add     rsp, 8
 * 0000000140165442: call    loc_140165435
 * 0000000140165447: add     rsp, 8
 * 000000014016544B: call    loc_14016543E
 * 0000000140165450: add     rsp, 8
 * 0000000140165454: call    loc_140165447
 * 0000000140165459: add     rsp, 8
 * 000000014016545D: call    loc_140165450
 * 0000000140165462: add     rsp, 8
 * 0000000140165466: call    loc_140165459
 * 000000014016546B: add     rsp, 8
 * 000000014016546F: call    loc_140165462
 * 0000000140165474: add     rsp, 8
 * 0000000140165478: call    loc_14016546B
 * 000000014016547D: add     rsp, 8
 * 0000000140165481: call    loc_140165474
 * 0000000140165486: add     rsp, 8
 * 000000014016548A: call    loc_14016547D
 * 000000014016548F: add     rsp, 8
 * 0000000140165493: call    loc_140165486
 * 0000000140165498: add     rsp, 8
 * 000000014016549C: call    loc_14016548F
 * 00000001401654A1: add     rsp, 8
 * 00000001401654A5: mov     eax, 0DADAh
 * 00000001401654AA: test    word ptr gs:2EB8h, 40h
 * 00000001401654B5: jz      short loc_1401654C3
 * 00000001401654B7: xor     eax, eax
 * 00000001401654B9: xor     edx, edx
 * 00000001401654BB: mov     ecx, 1
 * 00000001401654C0: div     rcx
 * 00000001401654C3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401654C7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401654CB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401654CF: mov     rsp, rbp
 * 00000001401654D2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401654D9: add     rsp, 0E8h
 * 00000001401654E0: test    cs:KiKvaShadow, 1
 * 00000001401654E7: jz      short loc_1401654EE
 * 00000001401654E9: jmp     KiKernelExit
 * 00000001401654EE: test    word ptr gs:2EB8h, 80h
 * 00000001401654F9: jz      short loc_140165500
 * 00000001401654FB: verw    [rsp+arg_18]
 * 0000000140165500: swapgs
 * 0000000140165503: iretq
 * 0000000140165505: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140165509: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016550D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165511: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165515: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140165519: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016551D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165521: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165525: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165529: mov     r9, [rbp+0E8h+var_118]
 * 000000014016552D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165531: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165535: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165539: mov     rax, [rbp+0E8h+var_138]
 * 000000014016553D: mov     rsp, rbp
 * 0000000140165540: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165547: add     rsp, 0E8h
 * 000000014016554E: iretq
 */
