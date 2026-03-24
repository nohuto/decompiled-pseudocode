/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140160150
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x140160150 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x140160150
 * Reason: Hex-Rays returned no pseudocode for 0x140160150
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140160150: mov     ecx, 0Fh
 * 0000000140160155: mov     rax, cr8
 * 0000000140160159: mov     cr8, rcx
 * 000000014016015D: mov     [rbp-57h], al
 * 0000000140160160: mov     rcx, gs:20h
 * 0000000140160169: inc     byte ptr [rcx+20h]
 * 000000014016016C: cmp     byte ptr [rcx+20h], 1
 * 0000000140160170: jnz     short loc_1401601C2
 * 0000000140160172: rdtsc
 * 0000000140160174: shl     rdx, 20h
 * 0000000140160178: or      rax, rdx
 * 000000014016017B: mov     r8, [rcx+8]
 * 000000014016017F: sub     rax, [rcx+5B38h]
 * 0000000140160186: add     [r8+48h], rax
 * 000000014016018A: mov     edx, [r8+50h]
 * 000000014016018E: add     [rcx+5B38h], rax
 * 0000000140160195: add     rdx, rax
 * 0000000140160198: mov     ecx, edx
 * 000000014016019A: shr     rdx, 20h
 * 000000014016019E: jz      short loc_1401601A3
 * 00000001401601A0: or      ecx, 0FFFFFFFFh
 * 00000001401601A3: mov     [r8+50h], ecx
 * 00000001401601A7: test    byte ptr [r8+2], 3Eh
 * 00000001401601AC: jz      short loc_1401601C2
 * 00000001401601AE: mov     rdx, r8
 * 00000001401601B1: mov     r8, rax
 * 00000001401601B4: mov     rcx, gs:20h
 * 00000001401601BD: call    KiEndThreadAccountingPeriod
 * 00000001401601C2: sti
 * 00000001401601C3: inc     dword ptr [rsi+74h]
 * 00000001401601C6: cli
 * 00000001401601C7: mov     rcx, gs:20h
 * 00000001401601D0: cmp     byte ptr [rcx+20h], 1
 * 00000001401601D4: ja      short loc_14016024A
 * 00000001401601D6: rdtsc
 * 00000001401601D8: shl     rdx, 20h
 * 00000001401601DC: or      rax, rdx
 * 00000001401601DF: sub     rax, [rcx+5B38h]
 * 00000001401601E6: add     [rcx+5BF8h], rax
 * 00000001401601ED: add     [rcx+5B38h], rax
 * 00000001401601F4: mov     r8, rax
 * 00000001401601F7: mov     rax, [rcx+8]
 * 00000001401601FB: test    byte ptr [rax+2], 32h
 * 00000001401601FF: jz      short loc_140160214
 * 0000000140160201: xor     edx, edx
 * 0000000140160203: call    KiBeginThreadAccountingPeriod
 * 0000000140160208: mov     rcx, gs:20h
 * 0000000140160211: inc     byte ptr [rcx+20h]
 * 0000000140160214: mov     dl, [rcx+6]
 * 0000000140160217: and     byte ptr [rcx+6], 0
 * 000000014016021B: cmp     byte ptr [rcx+7], 0
 * 000000014016021F: jnz     short loc_14016024A
 * 0000000140160221: test    dl, dl
 * 0000000140160223: jz      short loc_14016024A
 * 0000000140160225: cmp     byte ptr [rbp-57h], 2
 * 0000000140160229: jnb     short loc_140160236
 * 000000014016022B: and     byte ptr [rcx+20h], 0
 * 000000014016022F: call    KiDpcInterruptBypass
 * 0000000140160234: jmp     short loc_14016024D
 * 0000000140160236: mov     ecx, 2
 * 000000014016023B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140160241: mov     rcx, gs:20h
 * 000000014016024A: dec     byte ptr [rcx+20h]
 * 000000014016024D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140160251: mov     cr8, rcx
 * 0000000140160255: mov     rsi, [rbp+0D0h]
 * 000000014016025C: cli
 * 000000014016025D: test    byte ptr [rbp+0F0h], 1
 * 0000000140160264: jz      loc_1401604DD
 * 000000014016026A: mov     rcx, gs:188h
 * 0000000140160273: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016027A: jz      short loc_140160295
 * 000000014016027C: mov     ecx, 1
 * 0000000140160281: mov     cr8, rcx
 * 0000000140160285: sti
 * 0000000140160286: call    KiInitiateUserApc
 * 000000014016028B: cli
 * 000000014016028C: mov     ecx, 0
 * 0000000140160291: mov     cr8, rcx
 * 0000000140160295: mov     rcx, gs:188h
 * 000000014016029E: test    dword ptr [rcx], 8000000h
 * 00000001401602A4: jz      short loc_1401602AB
 * 00000001401602A6: call    KiRestoreSetContextState
 * 00000001401602AB: mov     rcx, gs:188h
 * 00000001401602B4: test    dword ptr [rcx], 40010000h
 * 00000001401602BA: jz      short loc_1401602D0
 * 00000001401602BC: test    byte ptr [rcx+2], 1
 * 00000001401602C0: jz      short loc_1401602D0
 * 00000001401602C2: call    KiCopyCounters
 * 00000001401602C7: mov     rcx, gs:188h
 * 00000001401602D0: ldmxcsr dword ptr [rbp-54h]
 * 00000001401602D4: cmp     word ptr [rbp+80h], 0
 * 00000001401602DC: jz      short loc_1401602E3
 * 00000001401602DE: call    KiRestoreDebugRegisterState
 * 00000001401602E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401602E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401602EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401602EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401602F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401602F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401602FB: mov     r11, [rbp-20h]
 * 00000001401602FF: mov     r10, [rbp-28h]
 * 0000000140160303: mov     r9, [rbp-30h]
 * 0000000140160307: mov     r8, [rbp-38h]
 * 000000014016030B: movzx   eax, word ptr gs:2EC2h
 * 0000000140160314: cmp     gs:2EBCh, ax
 * 000000014016031D: jz      short loc_140160331
 * 000000014016031F: mov     gs:2EBCh, ax
 * 0000000140160328: mov     ecx, 48h ; 'H'
 * 000000014016032D: xor     edx, edx
 * 000000014016032F: wrmsr
 * 0000000140160331: btr     word ptr gs:2EB8h, 2
 * 000000014016033C: jnb     short loc_14016034C
 * 000000014016033E: mov     eax, 1
 * 0000000140160343: xor     edx, edx
 * 0000000140160345: mov     ecx, 49h ; 'I'
 * 000000014016034A: wrmsr
 * 000000014016034C: btr     word ptr gs:2EB8h, 5
 * 0000000140160357: jnb     loc_140160482
 * 000000014016035D: call    loc_140160470
 * 0000000140160362: add     rsp, 8
 * 0000000140160366: call    loc_140160479
 * 000000014016036B: add     rsp, 8
 * 000000014016036F: call    loc_140160362
 * 0000000140160374: add     rsp, 8
 * 0000000140160378: call    loc_14016036B
 * 000000014016037D: add     rsp, 8
 * 0000000140160381: call    loc_140160374
 * 0000000140160386: add     rsp, 8
 * 000000014016038A: call    loc_14016037D
 * 000000014016038F: add     rsp, 8
 * 0000000140160393: call    loc_140160386
 * 0000000140160398: add     rsp, 8
 * 000000014016039C: call    loc_14016038F
 * 00000001401603A1: add     rsp, 8
 * 00000001401603A5: call    loc_140160398
 * 00000001401603AA: add     rsp, 8
 * 00000001401603AE: call    loc_1401603A1
 * 00000001401603B3: add     rsp, 8
 * 00000001401603B7: call    loc_1401603AA
 * 00000001401603BC: add     rsp, 8
 * 00000001401603C0: call    loc_1401603B3
 * 00000001401603C5: add     rsp, 8
 * 00000001401603C9: call    loc_1401603BC
 * 00000001401603CE: add     rsp, 8
 * 00000001401603D2: call    loc_1401603C5
 * 00000001401603D7: add     rsp, 8
 * 00000001401603DB: call    loc_1401603CE
 * 00000001401603E0: add     rsp, 8
 * 00000001401603E4: call    loc_1401603D7
 * 00000001401603E9: add     rsp, 8
 * 00000001401603ED: call    loc_1401603E0
 * 00000001401603F2: add     rsp, 8
 * 00000001401603F6: call    loc_1401603E9
 * 00000001401603FB: add     rsp, 8
 * 00000001401603FF: call    loc_1401603F2
 * 0000000140160404: add     rsp, 8
 * 0000000140160408: call    loc_1401603FB
 * 000000014016040D: add     rsp, 8
 * 0000000140160411: call    loc_140160404
 * 0000000140160416: add     rsp, 8
 * 000000014016041A: call    loc_14016040D
 * 000000014016041F: add     rsp, 8
 * 0000000140160423: call    loc_140160416
 * 0000000140160428: add     rsp, 8
 * 000000014016042C: call    loc_14016041F
 * 0000000140160431: add     rsp, 8
 * 0000000140160435: call    loc_140160428
 * 000000014016043A: add     rsp, 8
 * 000000014016043E: call    loc_140160431
 * 0000000140160443: add     rsp, 8
 * 0000000140160447: call    loc_14016043A
 * 000000014016044C: add     rsp, 8
 * 0000000140160450: call    loc_140160443
 * 0000000140160455: add     rsp, 8
 * 0000000140160459: call    loc_14016044C
 * 000000014016045E: add     rsp, 8
 * 0000000140160462: call    loc_140160455
 * 0000000140160467: add     rsp, 8
 * 000000014016046B: call    loc_14016045E
 * 0000000140160470: add     rsp, 8
 * 0000000140160474: call    loc_140160467
 * 0000000140160479: add     rsp, 8
 * 000000014016047D: mov     eax, 0DADAh
 * 0000000140160482: test    word ptr gs:2EB8h, 40h
 * 000000014016048D: jz      short loc_14016049B
 * 000000014016048F: xor     eax, eax
 * 0000000140160491: xor     edx, edx
 * 0000000140160493: mov     ecx, 1
 * 0000000140160498: div     rcx
 * 000000014016049B: mov     rdx, [rbp-40h]
 * 000000014016049F: mov     rcx, [rbp-48h]
 * 00000001401604A3: mov     rax, [rbp-50h]
 * 00000001401604A7: mov     rsp, rbp
 * 00000001401604AA: mov     rbp, [rbp+0D8h]
 * 00000001401604B1: add     rsp, 0E8h
 * 00000001401604B8: test    cs:KiKvaShadow, 1
 * 00000001401604BF: jz      short loc_1401604C6
 * 00000001401604C1: jmp     KiKernelExit
 * 00000001401604C6: test    word ptr gs:2EB8h, 80h
 * 00000001401604D1: jz      short loc_1401604D8
 * 00000001401604D3: verw    [rsp-1E8h+arg_200]
 * 00000001401604D8: swapgs
 * 00000001401604DB: iretq
 * 00000001401604DD: ldmxcsr dword ptr [rbp-54h]
 * 00000001401604E1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401604E5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401604E9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401604ED: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401604F1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401604F5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401604F9: mov     r11, [rbp-20h]
 * 00000001401604FD: mov     r10, [rbp-28h]
 * 0000000140160501: mov     r9, [rbp-30h]
 * 0000000140160505: mov     r8, [rbp-38h]
 * 0000000140160509: mov     rdx, [rbp-40h]
 * 000000014016050D: mov     rcx, [rbp-48h]
 * 0000000140160511: mov     rax, [rbp-50h]
 * 0000000140160515: mov     rsp, rbp
 * 0000000140160518: mov     rbp, [rbp+0D8h]
 * 000000014016051F: add     rsp, 0E8h
 * 0000000140160526: iretq
 */
