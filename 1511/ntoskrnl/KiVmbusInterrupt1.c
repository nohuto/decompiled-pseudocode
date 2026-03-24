/*
 * XREFs of KiVmbusInterrupt1 @ 0x140158E80
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140224E80 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     HvlRouteInterrupt @ 0x1401AE564 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140158E80
 * Reason: Hex-Rays returned no pseudocode for 0x140158E80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140158E80: sub     rsp, 8
 * 0000000140158E84: push    rbp
 * 0000000140158E85: push    rsi
 * 0000000140158E86: sub     rsp, 150h
 * 0000000140158E8D: lea     rbp, [rsp+80h]
 * 0000000140158E95: mov     [rbp+0E8h+var_13D], 0
 * 0000000140158E99: mov     [rbp+0E8h+var_138], rax
 * 0000000140158E9D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140158EA1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140158EA5: mov     [rbp+0E8h+var_120], r8
 * 0000000140158EA9: mov     [rbp+0E8h+var_118], r9
 * 0000000140158EAD: mov     [rbp+0E8h+var_110], r10
 * 0000000140158EB1: mov     [rbp+0E8h+var_108], r11
 * 0000000140158EB5: test    [rbp+0E8h+arg_0], 1
 * 0000000140158EBC: jnz     loc_140159022
 * 0000000140158EC2: cmp     byte ptr gs:187h, 0
 * 0000000140158ECB: jz      loc_1401591B8
 * 0000000140158ED1: test    byte ptr gs:2EB0h, 1
 * 0000000140158EDA: jz      loc_1401591B8
 * 0000000140158EE0: mov     ecx, 48h ; 'H'
 * 0000000140158EE5: mov     eax, 1
 * 0000000140158EEA: xor     edx, edx
 * 0000000140158EEC: wrmsr
 * 0000000140158EEE: test    byte ptr gs:2EB0h, 4
 * 0000000140158EF7: jnz     loc_1401591B8
 * 0000000140158EFD: call    loc_140159010
 * 0000000140158F02: add     rsp, 8
 * 0000000140158F06: call    loc_140159019
 * 0000000140158F0B: add     rsp, 8
 * 0000000140158F0F: call    loc_140158F02
 * 0000000140158F14: add     rsp, 8
 * 0000000140158F18: call    loc_140158F0B
 * 0000000140158F1D: add     rsp, 8
 * 0000000140158F21: call    loc_140158F14
 * 0000000140158F26: add     rsp, 8
 * 0000000140158F2A: call    loc_140158F1D
 * 0000000140158F2F: add     rsp, 8
 * 0000000140158F33: call    loc_140158F26
 * 0000000140158F38: add     rsp, 8
 * 0000000140158F3C: call    loc_140158F2F
 * 0000000140158F41: add     rsp, 8
 * 0000000140158F45: call    loc_140158F38
 * 0000000140158F4A: add     rsp, 8
 * 0000000140158F4E: call    loc_140158F41
 * 0000000140158F53: add     rsp, 8
 * 0000000140158F57: call    loc_140158F4A
 * 0000000140158F5C: add     rsp, 8
 * 0000000140158F60: call    loc_140158F53
 * 0000000140158F65: add     rsp, 8
 * 0000000140158F69: call    loc_140158F5C
 * 0000000140158F6E: add     rsp, 8
 * 0000000140158F72: call    loc_140158F65
 * 0000000140158F77: add     rsp, 8
 * 0000000140158F7B: call    loc_140158F6E
 * 0000000140158F80: add     rsp, 8
 * 0000000140158F84: call    loc_140158F77
 * 0000000140158F89: add     rsp, 8
 * 0000000140158F8D: call    loc_140158F80
 * 0000000140158F92: add     rsp, 8
 * 0000000140158F96: call    loc_140158F89
 * 0000000140158F9B: add     rsp, 8
 * 0000000140158F9F: call    loc_140158F92
 * 0000000140158FA4: add     rsp, 8
 * 0000000140158FA8: call    loc_140158F9B
 * 0000000140158FAD: add     rsp, 8
 * 0000000140158FB1: call    loc_140158FA4
 * 0000000140158FB6: add     rsp, 8
 * 0000000140158FBA: call    loc_140158FAD
 * 0000000140158FBF: add     rsp, 8
 * 0000000140158FC3: call    loc_140158FB6
 * 0000000140158FC8: add     rsp, 8
 * 0000000140158FCC: call    loc_140158FBF
 * 0000000140158FD1: add     rsp, 8
 * 0000000140158FD5: call    loc_140158FC8
 * 0000000140158FDA: add     rsp, 8
 * 0000000140158FDE: call    loc_140158FD1
 * 0000000140158FE3: add     rsp, 8
 * 0000000140158FE7: call    loc_140158FDA
 * 0000000140158FEC: add     rsp, 8
 * 0000000140158FF0: call    loc_140158FE3
 * 0000000140158FF5: add     rsp, 8
 * 0000000140158FF9: call    loc_140158FEC
 * 0000000140158FFE: add     rsp, 8
 * 0000000140159002: call    loc_140158FF5
 * 0000000140159007: add     rsp, 8
 * 000000014015900B: call    loc_140158FFE
 * 0000000140159010: add     rsp, 8
 * 0000000140159014: call    loc_140159007
 * 0000000140159019: add     rsp, 8
 * 000000014015901D: jmp     loc_1401591B8
 * 0000000140159022: test    cs:KiKvaShadow, 1
 * 0000000140159029: jnz     short loc_14015902E
 * 000000014015902B: swapgs
 * 000000014015902E: mov     r10, gs:188h
 * 0000000140159037: test    byte ptr gs:2EB0h, 1
 * 0000000140159040: jz      loc_1401591A3
 * 0000000140159046: mov     rcx, gs:188h
 * 000000014015904F: mov     rcx, [rcx+220h]
 * 0000000140159056: mov     rcx, [rcx+790h]
 * 000000014015905D: mov     gs:2EA8h, rcx
 * 0000000140159066: mov     ecx, 48h ; 'H'
 * 000000014015906B: mov     eax, 1
 * 0000000140159070: xor     edx, edx
 * 0000000140159072: wrmsr
 * 0000000140159074: test    byte ptr gs:2EB0h, 4
 * 000000014015907D: jnz     loc_1401591A3
 * 0000000140159083: call    loc_140159196
 * 0000000140159088: add     rsp, 8
 * 000000014015908C: call    loc_14015919F
 * 0000000140159091: add     rsp, 8
 * 0000000140159095: call    loc_140159088
 * 000000014015909A: add     rsp, 8
 * 000000014015909E: call    loc_140159091
 * 00000001401590A3: add     rsp, 8
 * 00000001401590A7: call    loc_14015909A
 * 00000001401590AC: add     rsp, 8
 * 00000001401590B0: call    loc_1401590A3
 * 00000001401590B5: add     rsp, 8
 * 00000001401590B9: call    loc_1401590AC
 * 00000001401590BE: add     rsp, 8
 * 00000001401590C2: call    loc_1401590B5
 * 00000001401590C7: add     rsp, 8
 * 00000001401590CB: call    loc_1401590BE
 * 00000001401590D0: add     rsp, 8
 * 00000001401590D4: call    loc_1401590C7
 * 00000001401590D9: add     rsp, 8
 * 00000001401590DD: call    loc_1401590D0
 * 00000001401590E2: add     rsp, 8
 * 00000001401590E6: call    loc_1401590D9
 * 00000001401590EB: add     rsp, 8
 * 00000001401590EF: call    loc_1401590E2
 * 00000001401590F4: add     rsp, 8
 * 00000001401590F8: call    loc_1401590EB
 * 00000001401590FD: add     rsp, 8
 * 0000000140159101: call    loc_1401590F4
 * 0000000140159106: add     rsp, 8
 * 000000014015910A: call    loc_1401590FD
 * 000000014015910F: add     rsp, 8
 * 0000000140159113: call    loc_140159106
 * 0000000140159118: add     rsp, 8
 * 000000014015911C: call    loc_14015910F
 * 0000000140159121: add     rsp, 8
 * 0000000140159125: call    loc_140159118
 * 000000014015912A: add     rsp, 8
 * 000000014015912E: call    loc_140159121
 * 0000000140159133: add     rsp, 8
 * 0000000140159137: call    loc_14015912A
 * 000000014015913C: add     rsp, 8
 * 0000000140159140: call    loc_140159133
 * 0000000140159145: add     rsp, 8
 * 0000000140159149: call    loc_14015913C
 * 000000014015914E: add     rsp, 8
 * 0000000140159152: call    loc_140159145
 * 0000000140159157: add     rsp, 8
 * 000000014015915B: call    loc_14015914E
 * 0000000140159160: add     rsp, 8
 * 0000000140159164: call    loc_140159157
 * 0000000140159169: add     rsp, 8
 * 000000014015916D: call    loc_140159160
 * 0000000140159172: add     rsp, 8
 * 0000000140159176: call    loc_140159169
 * 000000014015917B: add     rsp, 8
 * 000000014015917F: call    loc_140159172
 * 0000000140159184: add     rsp, 8
 * 0000000140159188: call    loc_14015917B
 * 000000014015918D: add     rsp, 8
 * 0000000140159191: call    loc_140159184
 * 0000000140159196: add     rsp, 8
 * 000000014015919A: call    loc_14015918D
 * 000000014015919F: add     rsp, 8
 * 00000001401591A3: test    byte ptr [r10+3], 3
 * 00000001401591A8: mov     [rbp+0E8h+var_68], 0
 * 00000001401591B1: jz      short loc_1401591B8
 * 00000001401591B3: call    KiSaveDebugRegisterState
 * 00000001401591B8: cld
 * 00000001401591B9: lfence
 * 00000001401591BC: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401591C0: ldmxcsr dword ptr gs:180h
 * 00000001401591C9: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401591CD: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401591D1: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401591D5: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401591D9: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401591DD: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401591E1: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401591EA: jz      short loc_1401591F1
 * 00000001401591EC: call    KeWakeProcessor
 * 00000001401591F1: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401591F8: cmp     rax, [rbp+0E8h]
 * 00000001401591FF: jnb     short loc_14015921A
 * 0000000140159201: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140159208: cmp     rax, [rbp+0E8h]
 * 000000014015920F: jb      short loc_14015921A
 * 0000000140159211: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140159215: call    KiCheckForSListAddress
 * 000000014015921A: xor     esi, esi
 * 000000014015921C: inc     dword ptr gs:5C80h
 * 0000000140159224: mov     ecx, 3
 * 0000000140159229: mov     rax, cr8
 * 000000014015922D: mov     cr8, rcx
 * 0000000140159231: mov     [rbp+0E8h+var_13F], al
 * 0000000140159234: mov     [rbp+0E8h+var_148], 0
 * 000000014015923B: mov     rcx, gs:20h
 * 0000000140159244: inc     byte ptr [rcx+20h]
 * 0000000140159247: cmp     byte ptr [rcx+20h], 1
 * 000000014015924B: jnz     loc_1401592E1
 * 0000000140159251: rdtsc
 * 0000000140159253: shl     rdx, 20h
 * 0000000140159257: or      rax, rdx
 * 000000014015925A: mov     edx, [rcx+62A0h]
 * 0000000140159260: mov     r11d, edx
 * 0000000140159263: and     edx, 7FFh
 * 0000000140159269: shr     edx, 5
 * 000000014015926C: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140159274: mov     edx, [r10]
 * 0000000140159277: ror     edx, 5
 * 000000014015927A: xor     edx, eax
 * 000000014015927C: mov     [r10], edx
 * 000000014015927F: add     r11d, 1
 * 0000000140159283: mov     [rcx+62A0h], r11d
 * 000000014015928A: and     r11d, 3FFh
 * 0000000140159291: jnz     short loc_14015929A
 * 0000000140159293: mov     [rbp+0E8h+var_148], 1
 * 000000014015929A: mov     r8, [rcx+8]
 * 000000014015929E: sub     rax, [rcx+5B38h]
 * 00000001401592A5: add     [r8+48h], rax
 * 00000001401592A9: mov     edx, [r8+50h]
 * 00000001401592AD: add     [rcx+5B38h], rax
 * 00000001401592B4: add     rdx, rax
 * 00000001401592B7: mov     ecx, edx
 * 00000001401592B9: shr     rdx, 20h
 * 00000001401592BD: jz      short loc_1401592C2
 * 00000001401592BF: or      ecx, 0FFFFFFFFh
 * 00000001401592C2: mov     [r8+50h], ecx
 * 00000001401592C6: test    byte ptr [r8+2], 3Eh
 * 00000001401592CB: jz      short loc_1401592E1
 * 00000001401592CD: mov     rdx, r8
 * 00000001401592D0: mov     r8, rax
 * 00000001401592D3: mov     rcx, gs:20h
 * 00000001401592DC: call    KiEndThreadAccountingPeriod
 * 00000001401592E1: sti
 * 00000001401592E2: cmp     [rbp+0E8h+var_148], 0
 * 00000001401592E6: jz      short loc_1401592F6
 * 00000001401592E8: mov     rcx, gs:20h
 * 00000001401592F1: call    KiEntropyQueueDpc
 * 00000001401592F6: mov     ecx, 2
 * 00000001401592FB: call    HvlRouteInterrupt
 * 0000000140159300: cli
 * 0000000140159301: mov     rcx, gs:20h
 * 000000014015930A: cmp     byte ptr [rcx+20h], 1
 * 000000014015930E: ja      short loc_140159384
 * 0000000140159310: rdtsc
 * 0000000140159312: shl     rdx, 20h
 * 0000000140159316: or      rax, rdx
 * 0000000140159319: sub     rax, [rcx+5B38h]
 * 0000000140159320: add     [rcx+5BF8h], rax
 * 0000000140159327: add     [rcx+5B38h], rax
 * 000000014015932E: mov     r8, rax
 * 0000000140159331: mov     rax, [rcx+8]
 * 0000000140159335: test    byte ptr [rax+2], 32h
 * 0000000140159339: jz      short loc_14015934E
 * 000000014015933B: xor     edx, edx
 * 000000014015933D: call    KiBeginThreadAccountingPeriod
 * 0000000140159342: mov     rcx, gs:20h
 * 000000014015934B: inc     byte ptr [rcx+20h]
 * 000000014015934E: mov     dl, [rcx+6]
 * 0000000140159351: and     byte ptr [rcx+6], 0
 * 0000000140159355: cmp     byte ptr [rcx+7], 0
 * 0000000140159359: jnz     short loc_140159384
 * 000000014015935B: test    dl, dl
 * 000000014015935D: jz      short loc_140159384
 * 000000014015935F: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140159363: jnb     short loc_140159370
 * 0000000140159365: and     byte ptr [rcx+20h], 0
 * 0000000140159369: call    KiDpcInterruptBypass
 * 000000014015936E: jmp     short loc_140159387
 * 0000000140159370: mov     ecx, 2
 * 0000000140159375: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015937B: mov     rcx, gs:20h
 * 0000000140159384: dec     byte ptr [rcx+20h]
 * 0000000140159387: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015938B: mov     cr8, rcx
 * 000000014015938F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140159396: cli
 * 0000000140159397: test    [rbp+0E8h+arg_0], 1
 * 000000014015939E: jz      loc_1401594AF
 * 00000001401593A4: mov     rcx, gs:188h
 * 00000001401593AD: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401593B4: jz      short loc_1401593CF
 * 00000001401593B6: mov     ecx, 1
 * 00000001401593BB: mov     cr8, rcx
 * 00000001401593BF: sti
 * 00000001401593C0: call    KiInitiateUserApc
 * 00000001401593C5: cli
 * 00000001401593C6: mov     ecx, 0
 * 00000001401593CB: mov     cr8, rcx
 * 00000001401593CF: mov     rcx, gs:188h
 * 00000001401593D8: test    dword ptr [rcx], 40010000h
 * 00000001401593DE: jz      short loc_1401593F4
 * 00000001401593E0: test    byte ptr [rcx+2], 1
 * 00000001401593E4: jz      short loc_1401593F4
 * 00000001401593E6: call    KiCopyCounters
 * 00000001401593EB: mov     rcx, gs:188h
 * 00000001401593F4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401593F8: cmp     [rbp+0E8h+var_68], 0
 * 0000000140159400: jz      short loc_140159407
 * 0000000140159402: call    KiRestoreDebugRegisterState
 * 0000000140159407: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015940B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015940F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140159413: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140159417: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015941B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015941F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140159423: mov     r10, [rbp+0E8h+var_110]
 * 0000000140159427: mov     r9, [rbp+0E8h+var_118]
 * 000000014015942B: mov     r8, [rbp+0E8h+var_120]
 * 000000014015942F: mov     rcx, gs:188h
 * 0000000140159438: movzx   eax, byte ptr [rcx+1]
 * 000000014015943C: test    eax, 1
 * 0000000140159441: jnz     short loc_14015947F
 * 0000000140159443: xor     edx, edx
 * 0000000140159445: mov     ecx, 48h ; 'H'
 * 000000014015944A: wrmsr
 * 000000014015944C: mov     rax, gs:2EA8h
 * 0000000140159455: test    rax, rax
 * 0000000140159458: jz      short loc_14015947F
 * 000000014015945A: mov     rcx, gs:188h
 * 0000000140159463: mov     rcx, [rcx+220h]
 * 000000014015946A: cmp     rax, [rcx+790h]
 * 0000000140159471: jz      short loc_14015947F
 * 0000000140159473: mov     eax, 1
 * 0000000140159478: mov     ecx, 49h ; 'I'
 * 000000014015947D: wrmsr
 * 000000014015947F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140159483: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140159487: mov     rax, [rbp+0E8h+var_138]
 * 000000014015948B: mov     rsp, rbp
 * 000000014015948E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140159495: add     rsp, 0E8h
 * 000000014015949C: test    cs:KiKvaShadow, 1
 * 00000001401594A3: jz      short loc_1401594AA
 * 00000001401594A5: jmp     KiKernelExit
 * 00000001401594AA: swapgs
 * 00000001401594AD: iretq
 * 00000001401594AF: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401594B3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401594B7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401594BB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401594BF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401594C3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401594C7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401594CB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401594CF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401594D3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401594D7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401594DB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401594DF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401594E3: mov     rax, [rbp+0E8h+var_138]
 * 00000001401594E7: mov     rsp, rbp
 * 00000001401594EA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401594F1: add     rsp, 0E8h
 * 00000001401594F8: iretq
 */
