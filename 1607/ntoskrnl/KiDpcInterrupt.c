/*
 * XREFs of KiDpcInterrupt @ 0x140164FF0
 * Callers:
 *     KiDpcInterruptShadow @ 0x14023FD00 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140164FF0 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140165DB0 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140164FF0
 * Reason: Hex-Rays returned no pseudocode for 0x140164FF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164FF0: sub     rsp, 8
 * 0000000140164FF4: push    rbp
 * 0000000140164FF5: push    rsi
 * 0000000140164FF6: sub     rsp, 150h
 * 0000000140164FFD: lea     rbp, [rsp+80h]
 * 0000000140165005: mov     [rbp+0E8h+var_13D], 0
 * 0000000140165009: mov     [rbp+0E8h+var_138], rax
 * 000000014016500D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140165011: mov     [rbp+0E8h+var_128], rdx
 * 0000000140165015: mov     [rbp+0E8h+var_120], r8
 * 0000000140165019: mov     [rbp+0E8h+var_118], r9
 * 000000014016501D: mov     [rbp+0E8h+var_110], r10
 * 0000000140165021: mov     [rbp+0E8h+var_108], r11
 * 0000000140165025: test    [rbp+0E8h+arg_0], 1
 * 000000014016502C: jnz     short loc_14016505D
 * 000000014016502E: lfence
 * 0000000140165031: test    word ptr gs:2EB8h, 1
 * 000000014016503C: jnz     short loc_140165046
 * 000000014016503E: lfence
 * 0000000140165041: jmp     loc_140165239
 * 0000000140165046: movzx   eax, word ptr gs:2EBCh
 * 000000014016504F: mov     ecx, 48h ; 'H'
 * 0000000140165054: xor     edx, edx
 * 0000000140165056: wrmsr
 * 0000000140165058: jmp     loc_140165239
 * 000000014016505D: test    cs:KiKvaShadow, 1
 * 0000000140165064: jnz     short loc_140165069
 * 0000000140165066: swapgs
 * 0000000140165069: lfence
 * 000000014016506C: mov     r10, gs:188h
 * 0000000140165075: mov     rcx, gs:188h
 * 000000014016507E: mov     rcx, [rcx+220h]
 * 0000000140165085: mov     rcx, [rcx+7B8h]
 * 000000014016508C: mov     gs:2EB0h, rcx
 * 0000000140165095: movzx   eax, word ptr gs:2EBEh
 * 000000014016509E: cmp     gs:2EBCh, ax
 * 00000001401650A7: jz      short loc_1401650BB
 * 00000001401650A9: mov     gs:2EBCh, ax
 * 00000001401650B2: mov     ecx, 48h ; 'H'
 * 00000001401650B7: xor     edx, edx
 * 00000001401650B9: wrmsr
 * 00000001401650BB: movzx   edx, word ptr gs:2EB8h
 * 00000001401650C4: test    edx, 8
 * 00000001401650CA: jz      short loc_1401650E3
 * 00000001401650CC: mov     eax, 1
 * 00000001401650D1: xor     edx, edx
 * 00000001401650D3: mov     ecx, 49h ; 'I'
 * 00000001401650D8: wrmsr
 * 00000001401650DA: movzx   edx, word ptr gs:2EB8h
 * 00000001401650E3: test    edx, 2
 * 00000001401650E9: jz      loc_140165214
 * 00000001401650EF: call    loc_140165202
 * 00000001401650F4: add     rsp, 8
 * 00000001401650F8: call    loc_14016520B
 * 00000001401650FD: add     rsp, 8
 * 0000000140165101: call    loc_1401650F4
 * 0000000140165106: add     rsp, 8
 * 000000014016510A: call    loc_1401650FD
 * 000000014016510F: add     rsp, 8
 * 0000000140165113: call    loc_140165106
 * 0000000140165118: add     rsp, 8
 * 000000014016511C: call    loc_14016510F
 * 0000000140165121: add     rsp, 8
 * 0000000140165125: call    loc_140165118
 * 000000014016512A: add     rsp, 8
 * 000000014016512E: call    loc_140165121
 * 0000000140165133: add     rsp, 8
 * 0000000140165137: call    loc_14016512A
 * 000000014016513C: add     rsp, 8
 * 0000000140165140: call    loc_140165133
 * 0000000140165145: add     rsp, 8
 * 0000000140165149: call    loc_14016513C
 * 000000014016514E: add     rsp, 8
 * 0000000140165152: call    loc_140165145
 * 0000000140165157: add     rsp, 8
 * 000000014016515B: call    loc_14016514E
 * 0000000140165160: add     rsp, 8
 * 0000000140165164: call    loc_140165157
 * 0000000140165169: add     rsp, 8
 * 000000014016516D: call    loc_140165160
 * 0000000140165172: add     rsp, 8
 * 0000000140165176: call    loc_140165169
 * 000000014016517B: add     rsp, 8
 * 000000014016517F: call    loc_140165172
 * 0000000140165184: add     rsp, 8
 * 0000000140165188: call    loc_14016517B
 * 000000014016518D: add     rsp, 8
 * 0000000140165191: call    loc_140165184
 * 0000000140165196: add     rsp, 8
 * 000000014016519A: call    loc_14016518D
 * 000000014016519F: add     rsp, 8
 * 00000001401651A3: call    loc_140165196
 * 00000001401651A8: add     rsp, 8
 * 00000001401651AC: call    loc_14016519F
 * 00000001401651B1: add     rsp, 8
 * 00000001401651B5: call    loc_1401651A8
 * 00000001401651BA: add     rsp, 8
 * 00000001401651BE: call    loc_1401651B1
 * 00000001401651C3: add     rsp, 8
 * 00000001401651C7: call    loc_1401651BA
 * 00000001401651CC: add     rsp, 8
 * 00000001401651D0: call    loc_1401651C3
 * 00000001401651D5: add     rsp, 8
 * 00000001401651D9: call    loc_1401651CC
 * 00000001401651DE: add     rsp, 8
 * 00000001401651E2: call    loc_1401651D5
 * 00000001401651E7: add     rsp, 8
 * 00000001401651EB: call    loc_1401651DE
 * 00000001401651F0: add     rsp, 8
 * 00000001401651F4: call    loc_1401651E7
 * 00000001401651F9: add     rsp, 8
 * 00000001401651FD: call    loc_1401651F0
 * 0000000140165202: add     rsp, 8
 * 0000000140165206: call    loc_1401651F9
 * 000000014016520B: add     rsp, 8
 * 000000014016520F: mov     eax, 0DADAh
 * 0000000140165214: test    edx, 100h
 * 000000014016521A: jz      short loc_140165221
 * 000000014016521C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140165221: lfence
 * 0000000140165224: test    byte ptr [r10+3], 3
 * 0000000140165229: mov     [rbp+0E8h+var_68], 0
 * 0000000140165232: jz      short loc_140165239
 * 0000000140165234: call    KiSaveDebugRegisterState
 * 0000000140165239: cld
 * 000000014016523A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016523E: ldmxcsr dword ptr gs:180h
 * 0000000140165247: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016524B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016524F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140165253: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140165257: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016525B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016525F: xor     esi, esi
 * 0000000140165261: inc     dword ptr gs:5C80h
 * 0000000140165269: mov     ecx, 2
 * 000000014016526E: mov     rax, cr8
 * 0000000140165272: mov     cr8, rcx
 * 0000000140165276: mov     [rbp+0E8h+var_13F], al
 * 0000000140165279: mov     rcx, rsi
 * 000000014016527C: call    HalPerformEndOfInterrupt_0
 * 0000000140165281: sti
 * 0000000140165282: cmp     byte ptr gs:187h, 0
 * 000000014016528B: jnz     short loc_1401652A4
 * 000000014016528D: mov     al, [rbp+0E8h+var_13F]
 * 0000000140165290: mov     rcx, gs:188h
 * 0000000140165299: mov     [rcx+186h], al
 * 000000014016529F: call    KiDispatchInterrupt
 * 00000001401652A4: cli
 * 00000001401652A5: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401652A9: mov     cr8, rcx
 * 00000001401652AD: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401652B4: cli
 * 00000001401652B5: test    [rbp+0E8h+arg_0], 1
 * 00000001401652BC: jz      loc_140165535
 * 00000001401652C2: mov     rcx, gs:188h
 * 00000001401652CB: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401652D2: jz      short loc_1401652ED
 * 00000001401652D4: mov     ecx, 1
 * 00000001401652D9: mov     cr8, rcx
 * 00000001401652DD: sti
 * 00000001401652DE: call    KiInitiateUserApc
 * 00000001401652E3: cli
 * 00000001401652E4: mov     ecx, 0
 * 00000001401652E9: mov     cr8, rcx
 * 00000001401652ED: mov     rcx, gs:188h
 * 00000001401652F6: test    dword ptr [rcx], 8000000h
 * 00000001401652FC: jz      short loc_140165303
 * 00000001401652FE: call    KiRestoreSetContextState
 * 0000000140165303: mov     rcx, gs:188h
 * 000000014016530C: test    dword ptr [rcx], 40010000h
 * 0000000140165312: jz      short loc_140165328
 * 0000000140165314: test    byte ptr [rcx+2], 1
 * 0000000140165318: jz      short loc_140165328
 * 000000014016531A: call    KiCopyCounters
 * 000000014016531F: mov     rcx, gs:188h
 * 0000000140165328: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016532C: cmp     [rbp+0E8h+var_68], 0
 * 0000000140165334: jz      short loc_14016533B
 * 0000000140165336: call    KiRestoreDebugRegisterState
 * 000000014016533B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016533F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165343: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165347: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016534B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016534F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165353: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165357: mov     r10, [rbp+0E8h+var_110]
 * 000000014016535B: mov     r9, [rbp+0E8h+var_118]
 * 000000014016535F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165363: movzx   eax, word ptr gs:2EC2h
 * 000000014016536C: cmp     gs:2EBCh, ax
 * 0000000140165375: jz      short loc_140165389
 * 0000000140165377: mov     gs:2EBCh, ax
 * 0000000140165380: mov     ecx, 48h ; 'H'
 * 0000000140165385: xor     edx, edx
 * 0000000140165387: wrmsr
 * 0000000140165389: btr     word ptr gs:2EB8h, 2
 * 0000000140165394: jnb     short loc_1401653A4
 * 0000000140165396: mov     eax, 1
 * 000000014016539B: xor     edx, edx
 * 000000014016539D: mov     ecx, 49h ; 'I'
 * 00000001401653A2: wrmsr
 * 00000001401653A4: btr     word ptr gs:2EB8h, 5
 * 00000001401653AF: jnb     loc_1401654DA
 * 00000001401653B5: call    loc_1401654C8
 * 00000001401653BA: add     rsp, 8
 * 00000001401653BE: call    loc_1401654D1
 * 00000001401653C3: add     rsp, 8
 * 00000001401653C7: call    loc_1401653BA
 * 00000001401653CC: add     rsp, 8
 * 00000001401653D0: call    loc_1401653C3
 * 00000001401653D5: add     rsp, 8
 * 00000001401653D9: call    loc_1401653CC
 * 00000001401653DE: add     rsp, 8
 * 00000001401653E2: call    loc_1401653D5
 * 00000001401653E7: add     rsp, 8
 * 00000001401653EB: call    loc_1401653DE
 * 00000001401653F0: add     rsp, 8
 * 00000001401653F4: call    loc_1401653E7
 * 00000001401653F9: add     rsp, 8
 * 00000001401653FD: call    loc_1401653F0
 * 0000000140165402: add     rsp, 8
 * 0000000140165406: call    loc_1401653F9
 * 000000014016540B: add     rsp, 8
 * 000000014016540F: call    loc_140165402
 * 0000000140165414: add     rsp, 8
 * 0000000140165418: call    loc_14016540B
 * 000000014016541D: add     rsp, 8
 * 0000000140165421: call    loc_140165414
 * 0000000140165426: add     rsp, 8
 * 000000014016542A: call    loc_14016541D
 * 000000014016542F: add     rsp, 8
 * 0000000140165433: call    loc_140165426
 * 0000000140165438: add     rsp, 8
 * 000000014016543C: call    loc_14016542F
 * 0000000140165441: add     rsp, 8
 * 0000000140165445: call    loc_140165438
 * 000000014016544A: add     rsp, 8
 * 000000014016544E: call    loc_140165441
 * 0000000140165453: add     rsp, 8
 * 0000000140165457: call    loc_14016544A
 * 000000014016545C: add     rsp, 8
 * 0000000140165460: call    loc_140165453
 * 0000000140165465: add     rsp, 8
 * 0000000140165469: call    loc_14016545C
 * 000000014016546E: add     rsp, 8
 * 0000000140165472: call    loc_140165465
 * 0000000140165477: add     rsp, 8
 * 000000014016547B: call    loc_14016546E
 * 0000000140165480: add     rsp, 8
 * 0000000140165484: call    loc_140165477
 * 0000000140165489: add     rsp, 8
 * 000000014016548D: call    loc_140165480
 * 0000000140165492: add     rsp, 8
 * 0000000140165496: call    loc_140165489
 * 000000014016549B: add     rsp, 8
 * 000000014016549F: call    loc_140165492
 * 00000001401654A4: add     rsp, 8
 * 00000001401654A8: call    loc_14016549B
 * 00000001401654AD: add     rsp, 8
 * 00000001401654B1: call    loc_1401654A4
 * 00000001401654B6: add     rsp, 8
 * 00000001401654BA: call    loc_1401654AD
 * 00000001401654BF: add     rsp, 8
 * 00000001401654C3: call    loc_1401654B6
 * 00000001401654C8: add     rsp, 8
 * 00000001401654CC: call    loc_1401654BF
 * 00000001401654D1: add     rsp, 8
 * 00000001401654D5: mov     eax, 0DADAh
 * 00000001401654DA: test    word ptr gs:2EB8h, 40h
 * 00000001401654E5: jz      short loc_1401654F3
 * 00000001401654E7: xor     eax, eax
 * 00000001401654E9: xor     edx, edx
 * 00000001401654EB: mov     ecx, 1
 * 00000001401654F0: div     rcx
 * 00000001401654F3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401654F7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401654FB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401654FF: mov     rsp, rbp
 * 0000000140165502: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165509: add     rsp, 0E8h
 * 0000000140165510: test    cs:KiKvaShadow, 1
 * 0000000140165517: jz      short loc_14016551E
 * 0000000140165519: jmp     KiKernelExit
 * 000000014016551E: test    word ptr gs:2EB8h, 80h
 * 0000000140165529: jz      short loc_140165530
 * 000000014016552B: verw    [rsp+arg_18]
 * 0000000140165530: swapgs
 * 0000000140165533: iretq
 * 0000000140165535: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140165539: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016553D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165541: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165545: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140165549: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016554D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165551: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165555: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165559: mov     r9, [rbp+0E8h+var_118]
 * 000000014016555D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165561: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165565: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165569: mov     rax, [rbp+0E8h+var_138]
 * 000000014016556D: mov     rsp, rbp
 * 0000000140165570: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165577: add     rsp, 0E8h
 * 000000014016557E: iretq
 */
