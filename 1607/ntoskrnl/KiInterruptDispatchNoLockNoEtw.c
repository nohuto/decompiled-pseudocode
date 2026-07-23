/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x14015FF60
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F700 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x14015FF60
 * Reason: Hex-Rays returned no pseudocode for 0x14015FF60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015FF60: mov     rdx, rsp
 * 000000014015FF63: mov     rcx, gs:6498h
 * 000000014015FF6C: lea     rax, [rcx-6000h]
 * 000000014015FF73: cmp     rax, rsp
 * 000000014015FF76: ja      short loc_14015FF7D
 * 000000014015FF78: cmp     rsp, rcx
 * 000000014015FF7B: jb      short loc_14015FF89
 * 000000014015FF7D: cmp     cs:KiBugCheckActive, 0
 * 000000014015FF84: jnz     short loc_14015FF89
 * 000000014015FF86: mov     rsp, rcx
 * 000000014015FF89: sub     rsp, 20h
 * 000000014015FF8D: mov     [rsp+20h+var_10], rdx
 * 000000014015FF92: call    KiInterruptSubDispatchNoLockNoEtw
 * 000000014015FF97: mov     rsp, [rsp+20h+var_10]
 * 000000014015FF9C: mov     rcx, rsi
 * 000000014015FF9F: call    HalPerformEndOfInterrupt_0
 * 000000014015FFA4: mov     rcx, gs:20h
 * 000000014015FFAD: cmp     byte ptr [rcx+20h], 1
 * 000000014015FFB1: ja      short loc_140160027
 * 000000014015FFB3: rdtsc
 * 000000014015FFB5: shl     rdx, 20h
 * 000000014015FFB9: or      rax, rdx
 * 000000014015FFBC: sub     rax, [rcx+5B38h]
 * 000000014015FFC3: add     [rcx+5BF8h], rax
 * 000000014015FFCA: add     [rcx+5B38h], rax
 * 000000014015FFD1: mov     r8, rax
 * 000000014015FFD4: mov     rax, [rcx+8]
 * 000000014015FFD8: test    byte ptr [rax+2], 32h
 * 000000014015FFDC: jz      short loc_14015FFF1
 * 000000014015FFDE: xor     edx, edx
 * 000000014015FFE0: call    KiBeginThreadAccountingPeriod
 * 000000014015FFE5: mov     rcx, gs:20h
 * 000000014015FFEE: inc     byte ptr [rcx+20h]
 * 000000014015FFF1: mov     dl, [rcx+6]
 * 000000014015FFF4: and     byte ptr [rcx+6], 0
 * 000000014015FFF8: cmp     byte ptr [rcx+7], 0
 * 000000014015FFFC: jnz     short loc_140160027
 * 000000014015FFFE: test    dl, dl
 * 0000000140160000: jz      short loc_140160027
 * 0000000140160002: cmp     byte ptr [rbp-57h], 2
 * 0000000140160006: jnb     short loc_140160013
 * 0000000140160008: and     byte ptr [rcx+20h], 0
 * 000000014016000C: call    KiDpcInterruptBypass
 * 0000000140160011: jmp     short loc_14016002A
 * 0000000140160013: mov     ecx, 2
 * 0000000140160018: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014016001E: mov     rcx, gs:20h
 * 0000000140160027: dec     byte ptr [rcx+20h]
 * 000000014016002A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014016002E: mov     cr8, rcx
 * 0000000140160032: mov     rsi, [rbp+0D0h]
 * 0000000140160039: test    byte ptr [rbp+0F0h], 1
 * 0000000140160040: jz      loc_1401602B9
 * 0000000140160046: mov     rcx, gs:188h
 * 000000014016004F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140160056: jz      short loc_140160071
 * 0000000140160058: mov     ecx, 1
 * 000000014016005D: mov     cr8, rcx
 * 0000000140160061: sti
 * 0000000140160062: call    KiInitiateUserApc
 * 0000000140160067: cli
 * 0000000140160068: mov     ecx, 0
 * 000000014016006D: mov     cr8, rcx
 * 0000000140160071: mov     rcx, gs:188h
 * 000000014016007A: test    dword ptr [rcx], 8000000h
 * 0000000140160080: jz      short loc_140160087
 * 0000000140160082: call    KiRestoreSetContextState
 * 0000000140160087: mov     rcx, gs:188h
 * 0000000140160090: test    dword ptr [rcx], 40010000h
 * 0000000140160096: jz      short loc_1401600AC
 * 0000000140160098: test    byte ptr [rcx+2], 1
 * 000000014016009C: jz      short loc_1401600AC
 * 000000014016009E: call    KiCopyCounters
 * 00000001401600A3: mov     rcx, gs:188h
 * 00000001401600AC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401600B0: cmp     word ptr [rbp+80h], 0
 * 00000001401600B8: jz      short loc_1401600BF
 * 00000001401600BA: call    KiRestoreDebugRegisterState
 * 00000001401600BF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401600C3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401600C7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401600CB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401600CF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401600D3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401600D7: mov     r11, [rbp-20h]
 * 00000001401600DB: mov     r10, [rbp-28h]
 * 00000001401600DF: mov     r9, [rbp-30h]
 * 00000001401600E3: mov     r8, [rbp-38h]
 * 00000001401600E7: movzx   eax, word ptr gs:2EC2h
 * 00000001401600F0: cmp     gs:2EBCh, ax
 * 00000001401600F9: jz      short loc_14016010D
 * 00000001401600FB: mov     gs:2EBCh, ax
 * 0000000140160104: mov     ecx, 48h ; 'H'
 * 0000000140160109: xor     edx, edx
 * 000000014016010B: wrmsr
 * 000000014016010D: btr     word ptr gs:2EB8h, 2
 * 0000000140160118: jnb     short loc_140160128
 * 000000014016011A: mov     eax, 1
 * 000000014016011F: xor     edx, edx
 * 0000000140160121: mov     ecx, 49h ; 'I'
 * 0000000140160126: wrmsr
 * 0000000140160128: btr     word ptr gs:2EB8h, 5
 * 0000000140160133: jnb     loc_14016025E
 * 0000000140160139: call    loc_14016024C
 * 000000014016013E: add     rsp, 8
 * 0000000140160142: call    loc_140160255
 * 0000000140160147: add     rsp, 8
 * 000000014016014B: call    loc_14016013E
 * 0000000140160150: add     rsp, 8
 * 0000000140160154: call    loc_140160147
 * 0000000140160159: add     rsp, 8
 * 000000014016015D: call    loc_140160150
 * 0000000140160162: add     rsp, 8
 * 0000000140160166: call    loc_140160159
 * 000000014016016B: add     rsp, 8
 * 000000014016016F: call    loc_140160162
 * 0000000140160174: add     rsp, 8
 * 0000000140160178: call    loc_14016016B
 * 000000014016017D: add     rsp, 8
 * 0000000140160181: call    loc_140160174
 * 0000000140160186: add     rsp, 8
 * 000000014016018A: call    loc_14016017D
 * 000000014016018F: add     rsp, 8
 * 0000000140160193: call    loc_140160186
 * 0000000140160198: add     rsp, 8
 * 000000014016019C: call    loc_14016018F
 * 00000001401601A1: add     rsp, 8
 * 00000001401601A5: call    loc_140160198
 * 00000001401601AA: add     rsp, 8
 * 00000001401601AE: call    loc_1401601A1
 * 00000001401601B3: add     rsp, 8
 * 00000001401601B7: call    loc_1401601AA
 * 00000001401601BC: add     rsp, 8
 * 00000001401601C0: call    loc_1401601B3
 * 00000001401601C5: add     rsp, 8
 * 00000001401601C9: call    loc_1401601BC
 * 00000001401601CE: add     rsp, 8
 * 00000001401601D2: call    loc_1401601C5
 * 00000001401601D7: add     rsp, 8
 * 00000001401601DB: call    loc_1401601CE
 * 00000001401601E0: add     rsp, 8
 * 00000001401601E4: call    loc_1401601D7
 * 00000001401601E9: add     rsp, 8
 * 00000001401601ED: call    loc_1401601E0
 * 00000001401601F2: add     rsp, 8
 * 00000001401601F6: call    loc_1401601E9
 * 00000001401601FB: add     rsp, 8
 * 00000001401601FF: call    loc_1401601F2
 * 0000000140160204: add     rsp, 8
 * 0000000140160208: call    loc_1401601FB
 * 000000014016020D: add     rsp, 8
 * 0000000140160211: call    loc_140160204
 * 0000000140160216: add     rsp, 8
 * 000000014016021A: call    loc_14016020D
 * 000000014016021F: add     rsp, 8
 * 0000000140160223: call    loc_140160216
 * 0000000140160228: add     rsp, 8
 * 000000014016022C: call    loc_14016021F
 * 0000000140160231: add     rsp, 8
 * 0000000140160235: call    loc_140160228
 * 000000014016023A: add     rsp, 8
 * 000000014016023E: call    loc_140160231
 * 0000000140160243: add     rsp, 8
 * 0000000140160247: call    loc_14016023A
 * 000000014016024C: add     rsp, 8
 * 0000000140160250: call    loc_140160243
 * 0000000140160255: add     rsp, 8
 * 0000000140160259: mov     eax, 0DADAh
 * 000000014016025E: test    word ptr gs:2EB8h, 40h
 * 0000000140160269: jz      short loc_140160277
 * 000000014016026B: xor     eax, eax
 * 000000014016026D: xor     edx, edx
 * 000000014016026F: mov     ecx, 1
 * 0000000140160274: div     rcx
 * 0000000140160277: mov     rdx, [rbp-40h]
 * 000000014016027B: mov     rcx, [rbp-48h]
 * 000000014016027F: mov     rax, [rbp-50h]
 * 0000000140160283: mov     rsp, rbp
 * 0000000140160286: mov     rbp, [rbp+0D8h]
 * 000000014016028D: add     rsp, 0E8h
 * 0000000140160294: test    cs:KiKvaShadow, 1
 * 000000014016029B: jz      short loc_1401602A2
 * 000000014016029D: jmp     KiKernelExit
 * 00000001401602A2: test    word ptr gs:2EB8h, 80h
 * 00000001401602AD: jz      short loc_1401602B4
 * 00000001401602AF: verw    [rsp-1C8h+arg_1E0]
 * 00000001401602B4: swapgs
 * 00000001401602B7: iretq
 * 00000001401602B9: ldmxcsr dword ptr [rbp-54h]
 * 00000001401602BD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401602C1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401602C5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401602C9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401602CD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401602D1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401602D5: mov     r11, [rbp-20h]
 * 00000001401602D9: mov     r10, [rbp-28h]
 * 00000001401602DD: mov     r9, [rbp-30h]
 * 00000001401602E1: mov     r8, [rbp-38h]
 * 00000001401602E5: mov     rdx, [rbp-40h]
 * 00000001401602E9: mov     rcx, [rbp-48h]
 * 00000001401602ED: mov     rax, [rbp-50h]
 * 00000001401602F1: mov     rsp, rbp
 * 00000001401602F4: mov     rbp, [rbp+0D8h]
 * 00000001401602FB: add     rsp, 0E8h
 * 0000000140160302: iretq
 */
