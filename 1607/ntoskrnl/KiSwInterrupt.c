/*
 * XREFs of KiSwInterrupt @ 0x140162D50
 * Callers:
 *     KiSwInterruptShadow @ 0x14023FA80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiSwInterruptDispatch @ 0x14015734C (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140162D50 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140162D50
 * Reason: Hex-Rays returned no pseudocode for 0x140162D50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162D50: sub     rsp, 8
 * 0000000140162D54: push    rbp
 * 0000000140162D55: push    rsi
 * 0000000140162D56: sub     rsp, 150h
 * 0000000140162D5D: lea     rbp, [rsp+80h]
 * 0000000140162D65: mov     [rbp+0E8h+var_13D], 0
 * 0000000140162D69: mov     [rbp+0E8h+var_138], rax
 * 0000000140162D6D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162D71: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162D75: mov     [rbp+0E8h+var_120], r8
 * 0000000140162D79: mov     [rbp+0E8h+var_118], r9
 * 0000000140162D7D: mov     [rbp+0E8h+var_110], r10
 * 0000000140162D81: mov     [rbp+0E8h+var_108], r11
 * 0000000140162D85: test    [rbp+0E8h+arg_0], 1
 * 0000000140162D8C: jnz     short loc_140162DBD
 * 0000000140162D8E: lfence
 * 0000000140162D91: test    word ptr gs:2EB8h, 1
 * 0000000140162D9C: jnz     short loc_140162DA6
 * 0000000140162D9E: lfence
 * 0000000140162DA1: jmp     loc_140162F99
 * 0000000140162DA6: movzx   eax, word ptr gs:2EBCh
 * 0000000140162DAF: mov     ecx, 48h ; 'H'
 * 0000000140162DB4: xor     edx, edx
 * 0000000140162DB6: wrmsr
 * 0000000140162DB8: jmp     loc_140162F99
 * 0000000140162DBD: test    cs:KiKvaShadow, 1
 * 0000000140162DC4: jnz     short loc_140162DC9
 * 0000000140162DC6: swapgs
 * 0000000140162DC9: lfence
 * 0000000140162DCC: mov     r10, gs:188h
 * 0000000140162DD5: mov     rcx, gs:188h
 * 0000000140162DDE: mov     rcx, [rcx+220h]
 * 0000000140162DE5: mov     rcx, [rcx+7B8h]
 * 0000000140162DEC: mov     gs:2EB0h, rcx
 * 0000000140162DF5: movzx   eax, word ptr gs:2EBEh
 * 0000000140162DFE: cmp     gs:2EBCh, ax
 * 0000000140162E07: jz      short loc_140162E1B
 * 0000000140162E09: mov     gs:2EBCh, ax
 * 0000000140162E12: mov     ecx, 48h ; 'H'
 * 0000000140162E17: xor     edx, edx
 * 0000000140162E19: wrmsr
 * 0000000140162E1B: movzx   edx, word ptr gs:2EB8h
 * 0000000140162E24: test    edx, 8
 * 0000000140162E2A: jz      short loc_140162E43
 * 0000000140162E2C: mov     eax, 1
 * 0000000140162E31: xor     edx, edx
 * 0000000140162E33: mov     ecx, 49h ; 'I'
 * 0000000140162E38: wrmsr
 * 0000000140162E3A: movzx   edx, word ptr gs:2EB8h
 * 0000000140162E43: test    edx, 2
 * 0000000140162E49: jz      loc_140162F74
 * 0000000140162E4F: call    loc_140162F62
 * 0000000140162E54: add     rsp, 8
 * 0000000140162E58: call    loc_140162F6B
 * 0000000140162E5D: add     rsp, 8
 * 0000000140162E61: call    loc_140162E54
 * 0000000140162E66: add     rsp, 8
 * 0000000140162E6A: call    loc_140162E5D
 * 0000000140162E6F: add     rsp, 8
 * 0000000140162E73: call    loc_140162E66
 * 0000000140162E78: add     rsp, 8
 * 0000000140162E7C: call    loc_140162E6F
 * 0000000140162E81: add     rsp, 8
 * 0000000140162E85: call    loc_140162E78
 * 0000000140162E8A: add     rsp, 8
 * 0000000140162E8E: call    loc_140162E81
 * 0000000140162E93: add     rsp, 8
 * 0000000140162E97: call    loc_140162E8A
 * 0000000140162E9C: add     rsp, 8
 * 0000000140162EA0: call    loc_140162E93
 * 0000000140162EA5: add     rsp, 8
 * 0000000140162EA9: call    loc_140162E9C
 * 0000000140162EAE: add     rsp, 8
 * 0000000140162EB2: call    loc_140162EA5
 * 0000000140162EB7: add     rsp, 8
 * 0000000140162EBB: call    loc_140162EAE
 * 0000000140162EC0: add     rsp, 8
 * 0000000140162EC4: call    loc_140162EB7
 * 0000000140162EC9: add     rsp, 8
 * 0000000140162ECD: call    loc_140162EC0
 * 0000000140162ED2: add     rsp, 8
 * 0000000140162ED6: call    loc_140162EC9
 * 0000000140162EDB: add     rsp, 8
 * 0000000140162EDF: call    loc_140162ED2
 * 0000000140162EE4: add     rsp, 8
 * 0000000140162EE8: call    loc_140162EDB
 * 0000000140162EED: add     rsp, 8
 * 0000000140162EF1: call    loc_140162EE4
 * 0000000140162EF6: add     rsp, 8
 * 0000000140162EFA: call    loc_140162EED
 * 0000000140162EFF: add     rsp, 8
 * 0000000140162F03: call    loc_140162EF6
 * 0000000140162F08: add     rsp, 8
 * 0000000140162F0C: call    loc_140162EFF
 * 0000000140162F11: add     rsp, 8
 * 0000000140162F15: call    loc_140162F08
 * 0000000140162F1A: add     rsp, 8
 * 0000000140162F1E: call    loc_140162F11
 * 0000000140162F23: add     rsp, 8
 * 0000000140162F27: call    loc_140162F1A
 * 0000000140162F2C: add     rsp, 8
 * 0000000140162F30: call    loc_140162F23
 * 0000000140162F35: add     rsp, 8
 * 0000000140162F39: call    loc_140162F2C
 * 0000000140162F3E: add     rsp, 8
 * 0000000140162F42: call    loc_140162F35
 * 0000000140162F47: add     rsp, 8
 * 0000000140162F4B: call    loc_140162F3E
 * 0000000140162F50: add     rsp, 8
 * 0000000140162F54: call    loc_140162F47
 * 0000000140162F59: add     rsp, 8
 * 0000000140162F5D: call    loc_140162F50
 * 0000000140162F62: add     rsp, 8
 * 0000000140162F66: call    loc_140162F59
 * 0000000140162F6B: add     rsp, 8
 * 0000000140162F6F: mov     eax, 0DADAh
 * 0000000140162F74: test    edx, 100h
 * 0000000140162F7A: jz      short loc_140162F81
 * 0000000140162F7C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140162F81: lfence
 * 0000000140162F84: test    byte ptr [r10+3], 3
 * 0000000140162F89: mov     [rbp+0E8h+var_68], 0
 * 0000000140162F92: jz      short loc_140162F99
 * 0000000140162F94: call    KiSaveDebugRegisterState
 * 0000000140162F99: cld
 * 0000000140162F9A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140162F9E: ldmxcsr dword ptr gs:180h
 * 0000000140162FA7: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140162FAB: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140162FAF: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140162FB3: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140162FB7: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140162FBB: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140162FBF: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140162FC8: jz      short loc_140162FCF
 * 0000000140162FCA: call    KeWakeProcessor
 * 0000000140162FCF: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140162FD6: cmp     rax, [rbp+0E8h]
 * 0000000140162FDD: jnb     short loc_140162FF8
 * 0000000140162FDF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140162FE6: cmp     rax, [rbp+0E8h]
 * 0000000140162FED: jb      short loc_140162FF8
 * 0000000140162FEF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140162FF3: call    KiCheckForSListAddress
 * 0000000140162FF8: xor     esi, esi
 * 0000000140162FFA: inc     dword ptr gs:5C80h
 * 0000000140163002: mov     ecx, 2
 * 0000000140163007: mov     rax, cr8
 * 000000014016300B: mov     cr8, rcx
 * 000000014016300F: mov     [rbp+0E8h+var_13F], al
 * 0000000140163012: mov     rcx, gs:20h
 * 000000014016301B: inc     byte ptr [rcx+20h]
 * 000000014016301E: cmp     byte ptr [rcx+20h], 1
 * 0000000140163022: jnz     short loc_140163074
 * 0000000140163024: rdtsc
 * 0000000140163026: shl     rdx, 20h
 * 000000014016302A: or      rax, rdx
 * 000000014016302D: mov     r8, [rcx+8]
 * 0000000140163031: sub     rax, [rcx+5B38h]
 * 0000000140163038: add     [r8+48h], rax
 * 000000014016303C: mov     edx, [r8+50h]
 * 0000000140163040: add     [rcx+5B38h], rax
 * 0000000140163047: add     rdx, rax
 * 000000014016304A: mov     ecx, edx
 * 000000014016304C: shr     rdx, 20h
 * 0000000140163050: jz      short loc_140163055
 * 0000000140163052: or      ecx, 0FFFFFFFFh
 * 0000000140163055: mov     [r8+50h], ecx
 * 0000000140163059: test    byte ptr [r8+2], 3Eh
 * 000000014016305E: jz      short loc_140163074
 * 0000000140163060: mov     rdx, r8
 * 0000000140163063: mov     r8, rax
 * 0000000140163066: mov     rcx, gs:20h
 * 000000014016306F: call    KiEndThreadAccountingPeriod
 * 0000000140163074: sti
 * 0000000140163075: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140163079: call    KiSwInterruptDispatch
 * 000000014016307E: cli
 * 000000014016307F: mov     rcx, rsi
 * 0000000140163082: call    HalPerformEndOfInterrupt_0
 * 0000000140163087: mov     rcx, gs:20h
 * 0000000140163090: cmp     byte ptr [rcx+20h], 1
 * 0000000140163094: ja      short loc_14016310A
 * 0000000140163096: rdtsc
 * 0000000140163098: shl     rdx, 20h
 * 000000014016309C: or      rax, rdx
 * 000000014016309F: sub     rax, [rcx+5B38h]
 * 00000001401630A6: add     [rcx+5BF8h], rax
 * 00000001401630AD: add     [rcx+5B38h], rax
 * 00000001401630B4: mov     r8, rax
 * 00000001401630B7: mov     rax, [rcx+8]
 * 00000001401630BB: test    byte ptr [rax+2], 32h
 * 00000001401630BF: jz      short loc_1401630D4
 * 00000001401630C1: xor     edx, edx
 * 00000001401630C3: call    KiBeginThreadAccountingPeriod
 * 00000001401630C8: mov     rcx, gs:20h
 * 00000001401630D1: inc     byte ptr [rcx+20h]
 * 00000001401630D4: mov     dl, [rcx+6]
 * 00000001401630D7: and     byte ptr [rcx+6], 0
 * 00000001401630DB: cmp     byte ptr [rcx+7], 0
 * 00000001401630DF: jnz     short loc_14016310A
 * 00000001401630E1: test    dl, dl
 * 00000001401630E3: jz      short loc_14016310A
 * 00000001401630E5: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401630E9: jnb     short loc_1401630F6
 * 00000001401630EB: and     byte ptr [rcx+20h], 0
 * 00000001401630EF: call    KiDpcInterruptBypass
 * 00000001401630F4: jmp     short loc_14016310D
 * 00000001401630F6: mov     ecx, 2
 * 00000001401630FB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140163101: mov     rcx, gs:20h
 * 000000014016310A: dec     byte ptr [rcx+20h]
 * 000000014016310D: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163111: mov     cr8, rcx
 * 0000000140163115: mov     rsi, [rbp+0E8h+var_18]
 * 000000014016311C: cli
 * 000000014016311D: test    [rbp+0E8h+arg_0], 1
 * 0000000140163124: jz      loc_14016339D
 * 000000014016312A: mov     rcx, gs:188h
 * 0000000140163133: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016313A: jz      short loc_140163155
 * 000000014016313C: mov     ecx, 1
 * 0000000140163141: mov     cr8, rcx
 * 0000000140163145: sti
 * 0000000140163146: call    KiInitiateUserApc
 * 000000014016314B: cli
 * 000000014016314C: mov     ecx, 0
 * 0000000140163151: mov     cr8, rcx
 * 0000000140163155: mov     rcx, gs:188h
 * 000000014016315E: test    dword ptr [rcx], 8000000h
 * 0000000140163164: jz      short loc_14016316B
 * 0000000140163166: call    KiRestoreSetContextState
 * 000000014016316B: mov     rcx, gs:188h
 * 0000000140163174: test    dword ptr [rcx], 40010000h
 * 000000014016317A: jz      short loc_140163190
 * 000000014016317C: test    byte ptr [rcx+2], 1
 * 0000000140163180: jz      short loc_140163190
 * 0000000140163182: call    KiCopyCounters
 * 0000000140163187: mov     rcx, gs:188h
 * 0000000140163190: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140163194: cmp     [rbp+0E8h+var_68], 0
 * 000000014016319C: jz      short loc_1401631A3
 * 000000014016319E: call    KiRestoreDebugRegisterState
 * 00000001401631A3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401631A7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401631AB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401631AF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401631B3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401631B7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401631BB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401631BF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401631C3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401631C7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401631CB: movzx   eax, word ptr gs:2EC2h
 * 00000001401631D4: cmp     gs:2EBCh, ax
 * 00000001401631DD: jz      short loc_1401631F1
 * 00000001401631DF: mov     gs:2EBCh, ax
 * 00000001401631E8: mov     ecx, 48h ; 'H'
 * 00000001401631ED: xor     edx, edx
 * 00000001401631EF: wrmsr
 * 00000001401631F1: btr     word ptr gs:2EB8h, 2
 * 00000001401631FC: jnb     short loc_14016320C
 * 00000001401631FE: mov     eax, 1
 * 0000000140163203: xor     edx, edx
 * 0000000140163205: mov     ecx, 49h ; 'I'
 * 000000014016320A: wrmsr
 * 000000014016320C: btr     word ptr gs:2EB8h, 5
 * 0000000140163217: jnb     loc_140163342
 * 000000014016321D: call    loc_140163330
 * 0000000140163222: add     rsp, 8
 * 0000000140163226: call    loc_140163339
 * 000000014016322B: add     rsp, 8
 * 000000014016322F: call    loc_140163222
 * 0000000140163234: add     rsp, 8
 * 0000000140163238: call    loc_14016322B
 * 000000014016323D: add     rsp, 8
 * 0000000140163241: call    loc_140163234
 * 0000000140163246: add     rsp, 8
 * 000000014016324A: call    loc_14016323D
 * 000000014016324F: add     rsp, 8
 * 0000000140163253: call    loc_140163246
 * 0000000140163258: add     rsp, 8
 * 000000014016325C: call    loc_14016324F
 * 0000000140163261: add     rsp, 8
 * 0000000140163265: call    loc_140163258
 * 000000014016326A: add     rsp, 8
 * 000000014016326E: call    loc_140163261
 * 0000000140163273: add     rsp, 8
 * 0000000140163277: call    loc_14016326A
 * 000000014016327C: add     rsp, 8
 * 0000000140163280: call    loc_140163273
 * 0000000140163285: add     rsp, 8
 * 0000000140163289: call    loc_14016327C
 * 000000014016328E: add     rsp, 8
 * 0000000140163292: call    loc_140163285
 * 0000000140163297: add     rsp, 8
 * 000000014016329B: call    loc_14016328E
 * 00000001401632A0: add     rsp, 8
 * 00000001401632A4: call    loc_140163297
 * 00000001401632A9: add     rsp, 8
 * 00000001401632AD: call    loc_1401632A0
 * 00000001401632B2: add     rsp, 8
 * 00000001401632B6: call    loc_1401632A9
 * 00000001401632BB: add     rsp, 8
 * 00000001401632BF: call    loc_1401632B2
 * 00000001401632C4: add     rsp, 8
 * 00000001401632C8: call    loc_1401632BB
 * 00000001401632CD: add     rsp, 8
 * 00000001401632D1: call    loc_1401632C4
 * 00000001401632D6: add     rsp, 8
 * 00000001401632DA: call    loc_1401632CD
 * 00000001401632DF: add     rsp, 8
 * 00000001401632E3: call    loc_1401632D6
 * 00000001401632E8: add     rsp, 8
 * 00000001401632EC: call    loc_1401632DF
 * 00000001401632F1: add     rsp, 8
 * 00000001401632F5: call    loc_1401632E8
 * 00000001401632FA: add     rsp, 8
 * 00000001401632FE: call    loc_1401632F1
 * 0000000140163303: add     rsp, 8
 * 0000000140163307: call    loc_1401632FA
 * 000000014016330C: add     rsp, 8
 * 0000000140163310: call    loc_140163303
 * 0000000140163315: add     rsp, 8
 * 0000000140163319: call    loc_14016330C
 * 000000014016331E: add     rsp, 8
 * 0000000140163322: call    loc_140163315
 * 0000000140163327: add     rsp, 8
 * 000000014016332B: call    loc_14016331E
 * 0000000140163330: add     rsp, 8
 * 0000000140163334: call    loc_140163327
 * 0000000140163339: add     rsp, 8
 * 000000014016333D: mov     eax, 0DADAh
 * 0000000140163342: test    word ptr gs:2EB8h, 40h
 * 000000014016334D: jz      short loc_14016335B
 * 000000014016334F: xor     eax, eax
 * 0000000140163351: xor     edx, edx
 * 0000000140163353: mov     ecx, 1
 * 0000000140163358: div     rcx
 * 000000014016335B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016335F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140163363: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163367: mov     rsp, rbp
 * 000000014016336A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140163371: add     rsp, 0E8h
 * 0000000140163378: test    cs:KiKvaShadow, 1
 * 000000014016337F: jz      short loc_140163386
 * 0000000140163381: jmp     KiKernelExit
 * 0000000140163386: test    word ptr gs:2EB8h, 80h
 * 0000000140163391: jz      short loc_140163398
 * 0000000140163393: verw    [rsp+arg_18]
 * 0000000140163398: swapgs
 * 000000014016339B: iretq
 * 000000014016339D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401633A1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401633A5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401633A9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401633AD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401633B1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401633B5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401633B9: mov     r11, [rbp+0E8h+var_108]
 * 00000001401633BD: mov     r10, [rbp+0E8h+var_110]
 * 00000001401633C1: mov     r9, [rbp+0E8h+var_118]
 * 00000001401633C5: mov     r8, [rbp+0E8h+var_120]
 * 00000001401633C9: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401633CD: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401633D1: mov     rax, [rbp+0E8h+var_138]
 * 00000001401633D5: mov     rsp, rbp
 * 00000001401633D8: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401633DF: add     rsp, 0E8h
 * 00000001401633E6: iretq
 */
