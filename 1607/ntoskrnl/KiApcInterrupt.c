/*
 * XREFs of KiApcInterrupt @ 0x140161FC0
 * Callers:
 *     KiApcInterruptShadow @ 0x14023FA00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140161FC0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140161FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140161FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140161FC0: sub     rsp, 8
 * 0000000140161FC4: push    rbp
 * 0000000140161FC5: push    rsi
 * 0000000140161FC6: sub     rsp, 150h
 * 0000000140161FCD: lea     rbp, [rsp+80h]
 * 0000000140161FD5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140161FD9: mov     [rbp+0E8h+var_138], rax
 * 0000000140161FDD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140161FE1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140161FE5: mov     [rbp+0E8h+var_120], r8
 * 0000000140161FE9: mov     [rbp+0E8h+var_118], r9
 * 0000000140161FED: mov     [rbp+0E8h+var_110], r10
 * 0000000140161FF1: mov     [rbp+0E8h+var_108], r11
 * 0000000140161FF5: test    [rbp+0E8h+arg_0], 1
 * 0000000140161FFC: jnz     short loc_14016202D
 * 0000000140161FFE: lfence
 * 0000000140162001: test    word ptr gs:2EB8h, 1
 * 000000014016200C: jnz     short loc_140162016
 * 000000014016200E: lfence
 * 0000000140162011: jmp     loc_140162209
 * 0000000140162016: movzx   eax, word ptr gs:2EBCh
 * 000000014016201F: mov     ecx, 48h ; 'H'
 * 0000000140162024: xor     edx, edx
 * 0000000140162026: wrmsr
 * 0000000140162028: jmp     loc_140162209
 * 000000014016202D: test    cs:KiKvaShadow, 1
 * 0000000140162034: jnz     short loc_140162039
 * 0000000140162036: swapgs
 * 0000000140162039: lfence
 * 000000014016203C: mov     r10, gs:188h
 * 0000000140162045: mov     rcx, gs:188h
 * 000000014016204E: mov     rcx, [rcx+220h]
 * 0000000140162055: mov     rcx, [rcx+7B8h]
 * 000000014016205C: mov     gs:2EB0h, rcx
 * 0000000140162065: movzx   eax, word ptr gs:2EBEh
 * 000000014016206E: cmp     gs:2EBCh, ax
 * 0000000140162077: jz      short loc_14016208B
 * 0000000140162079: mov     gs:2EBCh, ax
 * 0000000140162082: mov     ecx, 48h ; 'H'
 * 0000000140162087: xor     edx, edx
 * 0000000140162089: wrmsr
 * 000000014016208B: movzx   edx, word ptr gs:2EB8h
 * 0000000140162094: test    edx, 8
 * 000000014016209A: jz      short loc_1401620B3
 * 000000014016209C: mov     eax, 1
 * 00000001401620A1: xor     edx, edx
 * 00000001401620A3: mov     ecx, 49h ; 'I'
 * 00000001401620A8: wrmsr
 * 00000001401620AA: movzx   edx, word ptr gs:2EB8h
 * 00000001401620B3: test    edx, 2
 * 00000001401620B9: jz      loc_1401621E4
 * 00000001401620BF: call    loc_1401621D2
 * 00000001401620C4: add     rsp, 8
 * 00000001401620C8: call    loc_1401621DB
 * 00000001401620CD: add     rsp, 8
 * 00000001401620D1: call    loc_1401620C4
 * 00000001401620D6: add     rsp, 8
 * 00000001401620DA: call    loc_1401620CD
 * 00000001401620DF: add     rsp, 8
 * 00000001401620E3: call    loc_1401620D6
 * 00000001401620E8: add     rsp, 8
 * 00000001401620EC: call    loc_1401620DF
 * 00000001401620F1: add     rsp, 8
 * 00000001401620F5: call    loc_1401620E8
 * 00000001401620FA: add     rsp, 8
 * 00000001401620FE: call    loc_1401620F1
 * 0000000140162103: add     rsp, 8
 * 0000000140162107: call    loc_1401620FA
 * 000000014016210C: add     rsp, 8
 * 0000000140162110: call    loc_140162103
 * 0000000140162115: add     rsp, 8
 * 0000000140162119: call    loc_14016210C
 * 000000014016211E: add     rsp, 8
 * 0000000140162122: call    loc_140162115
 * 0000000140162127: add     rsp, 8
 * 000000014016212B: call    loc_14016211E
 * 0000000140162130: add     rsp, 8
 * 0000000140162134: call    loc_140162127
 * 0000000140162139: add     rsp, 8
 * 000000014016213D: call    loc_140162130
 * 0000000140162142: add     rsp, 8
 * 0000000140162146: call    loc_140162139
 * 000000014016214B: add     rsp, 8
 * 000000014016214F: call    loc_140162142
 * 0000000140162154: add     rsp, 8
 * 0000000140162158: call    loc_14016214B
 * 000000014016215D: add     rsp, 8
 * 0000000140162161: call    loc_140162154
 * 0000000140162166: add     rsp, 8
 * 000000014016216A: call    loc_14016215D
 * 000000014016216F: add     rsp, 8
 * 0000000140162173: call    loc_140162166
 * 0000000140162178: add     rsp, 8
 * 000000014016217C: call    loc_14016216F
 * 0000000140162181: add     rsp, 8
 * 0000000140162185: call    loc_140162178
 * 000000014016218A: add     rsp, 8
 * 000000014016218E: call    loc_140162181
 * 0000000140162193: add     rsp, 8
 * 0000000140162197: call    loc_14016218A
 * 000000014016219C: add     rsp, 8
 * 00000001401621A0: call    loc_140162193
 * 00000001401621A5: add     rsp, 8
 * 00000001401621A9: call    loc_14016219C
 * 00000001401621AE: add     rsp, 8
 * 00000001401621B2: call    loc_1401621A5
 * 00000001401621B7: add     rsp, 8
 * 00000001401621BB: call    loc_1401621AE
 * 00000001401621C0: add     rsp, 8
 * 00000001401621C4: call    loc_1401621B7
 * 00000001401621C9: add     rsp, 8
 * 00000001401621CD: call    loc_1401621C0
 * 00000001401621D2: add     rsp, 8
 * 00000001401621D6: call    loc_1401621C9
 * 00000001401621DB: add     rsp, 8
 * 00000001401621DF: mov     eax, 0DADAh
 * 00000001401621E4: test    edx, 100h
 * 00000001401621EA: jz      short loc_1401621F1
 * 00000001401621EC: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401621F1: lfence
 * 00000001401621F4: test    byte ptr [r10+3], 3
 * 00000001401621F9: mov     [rbp+0E8h+var_68], 0
 * 0000000140162202: jz      short loc_140162209
 * 0000000140162204: call    KiSaveDebugRegisterState
 * 0000000140162209: cld
 * 000000014016220A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016220E: ldmxcsr dword ptr gs:180h
 * 0000000140162217: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016221B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016221F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140162223: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140162227: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016222B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016222F: xor     esi, esi
 * 0000000140162231: inc     dword ptr gs:5C80h
 * 0000000140162239: mov     ecx, 1
 * 000000014016223E: mov     rax, cr8
 * 0000000140162242: mov     cr8, rcx
 * 0000000140162246: mov     [rbp+0E8h+var_13F], al
 * 0000000140162249: mov     rcx, rsi
 * 000000014016224C: call    HalPerformEndOfInterrupt_0
 * 0000000140162251: sti
 * 0000000140162252: cmp     byte ptr gs:187h, 0
 * 000000014016225B: jnz     short loc_14016226D
 * 000000014016225D: mov     ecx, 0
 * 0000000140162262: xor     edx, edx
 * 0000000140162264: lea     r8, [rbp+0E8h+var_168]
 * 0000000140162268: call    KiDeliverApc
 * 000000014016226D: cli
 * 000000014016226E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140162272: mov     cr8, rcx
 * 0000000140162276: mov     rsi, [rbp+0E8h+var_18]
 * 000000014016227D: cli
 * 000000014016227E: test    [rbp+0E8h+arg_0], 1
 * 0000000140162285: jz      loc_14016250F
 * 000000014016228B: mov     rcx, gs:188h
 * 0000000140162294: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016229B: jz      short loc_1401622B6
 * 000000014016229D: mov     ecx, 1
 * 00000001401622A2: mov     cr8, rcx
 * 00000001401622A6: sti
 * 00000001401622A7: call    KiInitiateUserApc
 * 00000001401622AC: cli
 * 00000001401622AD: mov     ecx, 0
 * 00000001401622B2: mov     cr8, rcx
 * 00000001401622B6: mov     rcx, gs:188h
 * 00000001401622BF: test    dword ptr [rcx], 8000000h
 * 00000001401622C5: jz      short loc_1401622CC
 * 00000001401622C7: call    KiRestoreSetContextState
 * 00000001401622CC: mov     rcx, gs:188h
 * 00000001401622D5: test    dword ptr [rcx], 40010000h
 * 00000001401622DB: jz      short loc_140162302
 * 00000001401622DD: test    byte ptr [rcx+2], 1
 * 00000001401622E1: jz      short loc_1401622F1
 * 00000001401622E3: call    KiCopyCounters
 * 00000001401622E8: mov     rcx, gs:188h
 * 00000001401622F1: test    byte ptr [rcx+3], 40h
 * 00000001401622F5: jz      short loc_140162302
 * 00000001401622F7: lea     rsp, [rbp-80h]
 * 00000001401622FB: mov     cl, 1
 * 00000001401622FD: call    KiUmsExit
 * 0000000140162302: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162306: cmp     [rbp+0E8h+var_68], 0
 * 000000014016230E: jz      short loc_140162315
 * 0000000140162310: call    KiRestoreDebugRegisterState
 * 0000000140162315: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162319: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016231D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140162321: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162325: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162329: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016232D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140162331: mov     r10, [rbp+0E8h+var_110]
 * 0000000140162335: mov     r9, [rbp+0E8h+var_118]
 * 0000000140162339: mov     r8, [rbp+0E8h+var_120]
 * 000000014016233D: movzx   eax, word ptr gs:2EC2h
 * 0000000140162346: cmp     gs:2EBCh, ax
 * 000000014016234F: jz      short loc_140162363
 * 0000000140162351: mov     gs:2EBCh, ax
 * 000000014016235A: mov     ecx, 48h ; 'H'
 * 000000014016235F: xor     edx, edx
 * 0000000140162361: wrmsr
 * 0000000140162363: btr     word ptr gs:2EB8h, 2
 * 000000014016236E: jnb     short loc_14016237E
 * 0000000140162370: mov     eax, 1
 * 0000000140162375: xor     edx, edx
 * 0000000140162377: mov     ecx, 49h ; 'I'
 * 000000014016237C: wrmsr
 * 000000014016237E: btr     word ptr gs:2EB8h, 5
 * 0000000140162389: jnb     loc_1401624B4
 * 000000014016238F: call    loc_1401624A2
 * 0000000140162394: add     rsp, 8
 * 0000000140162398: call    loc_1401624AB
 * 000000014016239D: add     rsp, 8
 * 00000001401623A1: call    loc_140162394
 * 00000001401623A6: add     rsp, 8
 * 00000001401623AA: call    loc_14016239D
 * 00000001401623AF: add     rsp, 8
 * 00000001401623B3: call    loc_1401623A6
 * 00000001401623B8: add     rsp, 8
 * 00000001401623BC: call    loc_1401623AF
 * 00000001401623C1: add     rsp, 8
 * 00000001401623C5: call    loc_1401623B8
 * 00000001401623CA: add     rsp, 8
 * 00000001401623CE: call    loc_1401623C1
 * 00000001401623D3: add     rsp, 8
 * 00000001401623D7: call    loc_1401623CA
 * 00000001401623DC: add     rsp, 8
 * 00000001401623E0: call    loc_1401623D3
 * 00000001401623E5: add     rsp, 8
 * 00000001401623E9: call    loc_1401623DC
 * 00000001401623EE: add     rsp, 8
 * 00000001401623F2: call    loc_1401623E5
 * 00000001401623F7: add     rsp, 8
 * 00000001401623FB: call    loc_1401623EE
 * 0000000140162400: add     rsp, 8
 * 0000000140162404: call    loc_1401623F7
 * 0000000140162409: add     rsp, 8
 * 000000014016240D: call    loc_140162400
 * 0000000140162412: add     rsp, 8
 * 0000000140162416: call    loc_140162409
 * 000000014016241B: add     rsp, 8
 * 000000014016241F: call    loc_140162412
 * 0000000140162424: add     rsp, 8
 * 0000000140162428: call    loc_14016241B
 * 000000014016242D: add     rsp, 8
 * 0000000140162431: call    loc_140162424
 * 0000000140162436: add     rsp, 8
 * 000000014016243A: call    loc_14016242D
 * 000000014016243F: add     rsp, 8
 * 0000000140162443: call    loc_140162436
 * 0000000140162448: add     rsp, 8
 * 000000014016244C: call    loc_14016243F
 * 0000000140162451: add     rsp, 8
 * 0000000140162455: call    loc_140162448
 * 000000014016245A: add     rsp, 8
 * 000000014016245E: call    loc_140162451
 * 0000000140162463: add     rsp, 8
 * 0000000140162467: call    loc_14016245A
 * 000000014016246C: add     rsp, 8
 * 0000000140162470: call    loc_140162463
 * 0000000140162475: add     rsp, 8
 * 0000000140162479: call    loc_14016246C
 * 000000014016247E: add     rsp, 8
 * 0000000140162482: call    loc_140162475
 * 0000000140162487: add     rsp, 8
 * 000000014016248B: call    loc_14016247E
 * 0000000140162490: add     rsp, 8
 * 0000000140162494: call    loc_140162487
 * 0000000140162499: add     rsp, 8
 * 000000014016249D: call    loc_140162490
 * 00000001401624A2: add     rsp, 8
 * 00000001401624A6: call    loc_140162499
 * 00000001401624AB: add     rsp, 8
 * 00000001401624AF: mov     eax, 0DADAh
 * 00000001401624B4: test    word ptr gs:2EB8h, 40h
 * 00000001401624BF: jz      short loc_1401624CD
 * 00000001401624C1: xor     eax, eax
 * 00000001401624C3: xor     edx, edx
 * 00000001401624C5: mov     ecx, 1
 * 00000001401624CA: div     rcx
 * 00000001401624CD: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401624D1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401624D5: mov     rax, [rbp+0E8h+var_138]
 * 00000001401624D9: mov     rsp, rbp
 * 00000001401624DC: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401624E3: add     rsp, 0E8h
 * 00000001401624EA: test    cs:KiKvaShadow, 1
 * 00000001401624F1: jz      short loc_1401624F8
 * 00000001401624F3: jmp     KiKernelExit
 * 00000001401624F8: test    word ptr gs:2EB8h, 80h
 * 0000000140162503: jz      short loc_14016250A
 * 0000000140162505: verw    [rsp+arg_18]
 * 000000014016250A: swapgs
 * 000000014016250D: iretq
 * 000000014016250F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162513: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162517: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016251B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016251F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162523: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162527: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016252B: mov     r11, [rbp+0E8h+var_108]
 * 000000014016252F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140162533: mov     r9, [rbp+0E8h+var_118]
 * 0000000140162537: mov     r8, [rbp+0E8h+var_120]
 * 000000014016253B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016253F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140162543: mov     rax, [rbp+0E8h+var_138]
 * 0000000140162547: mov     rsp, rbp
 * 000000014016254A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140162551: add     rsp, 0E8h
 * 0000000140162558: iretq
 */
