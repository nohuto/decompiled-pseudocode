/*
 * XREFs of KxIsrLinkage @ 0x140160D40
 * Callers:
 *     KxIsrLinkageShadow @ 0x1402408C0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x14016FC00 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1402278A0 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140160D40
 * Reason: Hex-Rays returned no pseudocode for 0x140160D40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140160D40: push    rbp
 * 0000000140160D41: push    rsi
 * 0000000140160D42: sub     rsp, 150h
 * 0000000140160D49: lea     rbp, [rsp+80h]
 * 0000000140160D51: mov     [rbp+0D8h+var_12D], 0
 * 0000000140160D55: mov     [rbp+0D8h+var_128], rax
 * 0000000140160D59: mov     [rbp+0D8h+var_120], rcx
 * 0000000140160D5D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140160D61: mov     [rbp+0D8h+var_110], r8
 * 0000000140160D65: mov     [rbp+0D8h+var_108], r9
 * 0000000140160D69: mov     [rbp+0D8h+var_100], r10
 * 0000000140160D6D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140160D71: test    [rbp+0D8h+arg_8], 1
 * 0000000140160D78: jnz     short loc_140160DA9
 * 0000000140160D7A: lfence
 * 0000000140160D7D: test    word ptr gs:2EB8h, 1
 * 0000000140160D88: jnz     short loc_140160D92
 * 0000000140160D8A: lfence
 * 0000000140160D8D: jmp     loc_140160F85
 * 0000000140160D92: movzx   eax, word ptr gs:2EBCh
 * 0000000140160D9B: mov     ecx, 48h ; 'H'
 * 0000000140160DA0: xor     edx, edx
 * 0000000140160DA2: wrmsr
 * 0000000140160DA4: jmp     loc_140160F85
 * 0000000140160DA9: test    cs:KiKvaShadow, 1
 * 0000000140160DB0: jnz     short loc_140160DB5
 * 0000000140160DB2: swapgs
 * 0000000140160DB5: lfence
 * 0000000140160DB8: mov     r10, gs:188h
 * 0000000140160DC1: mov     rcx, gs:188h
 * 0000000140160DCA: mov     rcx, [rcx+220h]
 * 0000000140160DD1: mov     rcx, [rcx+7B8h]
 * 0000000140160DD8: mov     gs:2EB0h, rcx
 * 0000000140160DE1: movzx   eax, word ptr gs:2EBEh
 * 0000000140160DEA: cmp     gs:2EBCh, ax
 * 0000000140160DF3: jz      short loc_140160E07
 * 0000000140160DF5: mov     gs:2EBCh, ax
 * 0000000140160DFE: mov     ecx, 48h ; 'H'
 * 0000000140160E03: xor     edx, edx
 * 0000000140160E05: wrmsr
 * 0000000140160E07: movzx   edx, word ptr gs:2EB8h
 * 0000000140160E10: test    edx, 8
 * 0000000140160E16: jz      short loc_140160E2F
 * 0000000140160E18: mov     eax, 1
 * 0000000140160E1D: xor     edx, edx
 * 0000000140160E1F: mov     ecx, 49h ; 'I'
 * 0000000140160E24: wrmsr
 * 0000000140160E26: movzx   edx, word ptr gs:2EB8h
 * 0000000140160E2F: test    edx, 2
 * 0000000140160E35: jz      loc_140160F60
 * 0000000140160E3B: call    loc_140160F4E
 * 0000000140160E40: add     rsp, 8
 * 0000000140160E44: call    loc_140160F57
 * 0000000140160E49: add     rsp, 8
 * 0000000140160E4D: call    loc_140160E40
 * 0000000140160E52: add     rsp, 8
 * 0000000140160E56: call    loc_140160E49
 * 0000000140160E5B: add     rsp, 8
 * 0000000140160E5F: call    loc_140160E52
 * 0000000140160E64: add     rsp, 8
 * 0000000140160E68: call    loc_140160E5B
 * 0000000140160E6D: add     rsp, 8
 * 0000000140160E71: call    loc_140160E64
 * 0000000140160E76: add     rsp, 8
 * 0000000140160E7A: call    loc_140160E6D
 * 0000000140160E7F: add     rsp, 8
 * 0000000140160E83: call    loc_140160E76
 * 0000000140160E88: add     rsp, 8
 * 0000000140160E8C: call    loc_140160E7F
 * 0000000140160E91: add     rsp, 8
 * 0000000140160E95: call    loc_140160E88
 * 0000000140160E9A: add     rsp, 8
 * 0000000140160E9E: call    loc_140160E91
 * 0000000140160EA3: add     rsp, 8
 * 0000000140160EA7: call    loc_140160E9A
 * 0000000140160EAC: add     rsp, 8
 * 0000000140160EB0: call    loc_140160EA3
 * 0000000140160EB5: add     rsp, 8
 * 0000000140160EB9: call    loc_140160EAC
 * 0000000140160EBE: add     rsp, 8
 * 0000000140160EC2: call    loc_140160EB5
 * 0000000140160EC7: add     rsp, 8
 * 0000000140160ECB: call    loc_140160EBE
 * 0000000140160ED0: add     rsp, 8
 * 0000000140160ED4: call    loc_140160EC7
 * 0000000140160ED9: add     rsp, 8
 * 0000000140160EDD: call    loc_140160ED0
 * 0000000140160EE2: add     rsp, 8
 * 0000000140160EE6: call    loc_140160ED9
 * 0000000140160EEB: add     rsp, 8
 * 0000000140160EEF: call    loc_140160EE2
 * 0000000140160EF4: add     rsp, 8
 * 0000000140160EF8: call    loc_140160EEB
 * 0000000140160EFD: add     rsp, 8
 * 0000000140160F01: call    loc_140160EF4
 * 0000000140160F06: add     rsp, 8
 * 0000000140160F0A: call    loc_140160EFD
 * 0000000140160F0F: add     rsp, 8
 * 0000000140160F13: call    loc_140160F06
 * 0000000140160F18: add     rsp, 8
 * 0000000140160F1C: call    loc_140160F0F
 * 0000000140160F21: add     rsp, 8
 * 0000000140160F25: call    loc_140160F18
 * 0000000140160F2A: add     rsp, 8
 * 0000000140160F2E: call    loc_140160F21
 * 0000000140160F33: add     rsp, 8
 * 0000000140160F37: call    loc_140160F2A
 * 0000000140160F3C: add     rsp, 8
 * 0000000140160F40: call    loc_140160F33
 * 0000000140160F45: add     rsp, 8
 * 0000000140160F49: call    loc_140160F3C
 * 0000000140160F4E: add     rsp, 8
 * 0000000140160F52: call    loc_140160F45
 * 0000000140160F57: add     rsp, 8
 * 0000000140160F5B: mov     eax, 0DADAh
 * 0000000140160F60: test    edx, 100h
 * 0000000140160F66: jz      short loc_140160F6D
 * 0000000140160F68: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140160F6D: lfence
 * 0000000140160F70: test    byte ptr [r10+3], 3
 * 0000000140160F75: mov     [rbp+0D8h+var_58], 0
 * 0000000140160F7E: jz      short loc_140160F85
 * 0000000140160F80: call    KiSaveDebugRegisterState
 * 0000000140160F85: cld
 * 0000000140160F86: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140160F8A: ldmxcsr dword ptr gs:180h
 * 0000000140160F93: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140160F97: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140160F9B: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140160F9F: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140160FA3: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140160FA7: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140160FAB: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140160FB4: jz      short loc_140160FBB
 * 0000000140160FB6: call    KeWakeProcessor
 * 0000000140160FBB: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140160FC2: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140160FC9: jnb     short loc_140160FE4
 * 0000000140160FCB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140160FD2: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140160FD9: jb      short loc_140160FE4
 * 0000000140160FDB: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140160FDF: call    KiCheckForSListAddress
 * 0000000140160FE4: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140160FEB: mov     rsi, gs:20h
 * 0000000140160FF4: mov     rsi, [rsi+rax*8+2E00h]
 * 0000000140160FFC: inc     dword ptr gs:5C80h
 * 0000000140161004: test    rsi, rsi
 * 0000000140161007: jz      short loc_14016100F
 * 0000000140161009: mov     rcx, [rsi+50h]
 * 000000014016100D: jmp     rcx
 * 000000014016100F: mov     ecx, eax
 * 0000000140161011: shr     ecx, 4
 * 0000000140161014: mov     rax, cr8
 * 0000000140161018: mov     cr8, rcx
 * 000000014016101C: mov     [rbp+0D8h+var_12F], al
 * 000000014016101F: mov     rcx, gs:20h
 * 0000000140161028: inc     byte ptr [rcx+20h]
 * 000000014016102B: cmp     byte ptr [rcx+20h], 1
 * 000000014016102F: jnz     short loc_140161081
 * 0000000140161031: rdtsc
 * 0000000140161033: shl     rdx, 20h
 * 0000000140161037: or      rax, rdx
 * 000000014016103A: mov     r8, [rcx+8]
 * 000000014016103E: sub     rax, [rcx+5B38h]
 * 0000000140161045: add     [r8+48h], rax
 * 0000000140161049: mov     edx, [r8+50h]
 * 000000014016104D: add     [rcx+5B38h], rax
 * 0000000140161054: add     rdx, rax
 * 0000000140161057: mov     ecx, edx
 * 0000000140161059: shr     rdx, 20h
 * 000000014016105D: jz      short loc_140161062
 * 000000014016105F: or      ecx, 0FFFFFFFFh
 * 0000000140161062: mov     [r8+50h], ecx
 * 0000000140161066: test    byte ptr [r8+2], 3Eh
 * 000000014016106B: jz      short loc_140161081
 * 000000014016106D: mov     rdx, r8
 * 0000000140161070: mov     r8, rax
 * 0000000140161073: mov     rcx, gs:20h
 * 000000014016107C: call    KiEndThreadAccountingPeriod
 * 0000000140161081: sti
 * 0000000140161082: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 000000014016108C: jz      short loc_14016109A
 * 000000014016108E: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140161095: call    PerfInfoLogUnexpectedInterrupt
 * 000000014016109A: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401610A1: jz      short loc_1401610C2
 * 00000001401610A3: and     [rbp+0D8h+var_138], 0
 * 00000001401610A8: xor     r9, r9
 * 00000001401610AB: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401610B3: mov     edx, 1
 * 00000001401610B8: mov     ecx, 12h
 * 00000001401610BD: call    KiBugCheckDispatch
 * 00000001401610C2: cli
 * 00000001401610C3: mov     rcx, rsi
 * 00000001401610C6: call    HalPerformEndOfInterrupt_0
 * 00000001401610CB: mov     rcx, gs:20h
 * 00000001401610D4: cmp     byte ptr [rcx+20h], 1
 * 00000001401610D8: ja      short loc_14016114E
 * 00000001401610DA: rdtsc
 * 00000001401610DC: shl     rdx, 20h
 * 00000001401610E0: or      rax, rdx
 * 00000001401610E3: sub     rax, [rcx+5B38h]
 * 00000001401610EA: add     [rcx+5BF8h], rax
 * 00000001401610F1: add     [rcx+5B38h], rax
 * 00000001401610F8: mov     r8, rax
 * 00000001401610FB: mov     rax, [rcx+8]
 * 00000001401610FF: test    byte ptr [rax+2], 32h
 * 0000000140161103: jz      short loc_140161118
 * 0000000140161105: xor     edx, edx
 * 0000000140161107: call    KiBeginThreadAccountingPeriod
 * 000000014016110C: mov     rcx, gs:20h
 * 0000000140161115: inc     byte ptr [rcx+20h]
 * 0000000140161118: mov     dl, [rcx+6]
 * 000000014016111B: and     byte ptr [rcx+6], 0
 * 000000014016111F: cmp     byte ptr [rcx+7], 0
 * 0000000140161123: jnz     short loc_14016114E
 * 0000000140161125: test    dl, dl
 * 0000000140161127: jz      short loc_14016114E
 * 0000000140161129: cmp     [rbp+0D8h+var_12F], 2
 * 000000014016112D: jnb     short loc_14016113A
 * 000000014016112F: and     byte ptr [rcx+20h], 0
 * 0000000140161133: call    KiDpcInterruptBypass
 * 0000000140161138: jmp     short loc_140161151
 * 000000014016113A: mov     ecx, 2
 * 000000014016113F: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140161145: mov     rcx, gs:20h
 * 000000014016114E: dec     byte ptr [rcx+20h]
 * 0000000140161151: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140161155: mov     cr8, rcx
 * 0000000140161159: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140161160: cli
 * 0000000140161161: test    [rbp+0D8h+arg_8], 1
 * 0000000140161168: jz      loc_1401613E1
 * 000000014016116E: mov     rcx, gs:188h
 * 0000000140161177: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016117E: jz      short loc_140161199
 * 0000000140161180: mov     ecx, 1
 * 0000000140161185: mov     cr8, rcx
 * 0000000140161189: sti
 * 000000014016118A: call    KiInitiateUserApc
 * 000000014016118F: cli
 * 0000000140161190: mov     ecx, 0
 * 0000000140161195: mov     cr8, rcx
 * 0000000140161199: mov     rcx, gs:188h
 * 00000001401611A2: test    dword ptr [rcx], 8000000h
 * 00000001401611A8: jz      short loc_1401611AF
 * 00000001401611AA: call    KiRestoreSetContextState
 * 00000001401611AF: mov     rcx, gs:188h
 * 00000001401611B8: test    dword ptr [rcx], 40010000h
 * 00000001401611BE: jz      short loc_1401611D4
 * 00000001401611C0: test    byte ptr [rcx+2], 1
 * 00000001401611C4: jz      short loc_1401611D4
 * 00000001401611C6: call    KiCopyCounters
 * 00000001401611CB: mov     rcx, gs:188h
 * 00000001401611D4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401611D8: cmp     [rbp+0D8h+var_58], 0
 * 00000001401611E0: jz      short loc_1401611E7
 * 00000001401611E2: call    KiRestoreDebugRegisterState
 * 00000001401611E7: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401611EB: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401611EF: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401611F3: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401611F7: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401611FB: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401611FF: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140161203: mov     r10, [rbp+0D8h+var_100]
 * 0000000140161207: mov     r9, [rbp+0D8h+var_108]
 * 000000014016120B: mov     r8, [rbp+0D8h+var_110]
 * 000000014016120F: movzx   eax, word ptr gs:2EC2h
 * 0000000140161218: cmp     gs:2EBCh, ax
 * 0000000140161221: jz      short loc_140161235
 * 0000000140161223: mov     gs:2EBCh, ax
 * 000000014016122C: mov     ecx, 48h ; 'H'
 * 0000000140161231: xor     edx, edx
 * 0000000140161233: wrmsr
 * 0000000140161235: btr     word ptr gs:2EB8h, 2
 * 0000000140161240: jnb     short loc_140161250
 * 0000000140161242: mov     eax, 1
 * 0000000140161247: xor     edx, edx
 * 0000000140161249: mov     ecx, 49h ; 'I'
 * 000000014016124E: wrmsr
 * 0000000140161250: btr     word ptr gs:2EB8h, 5
 * 000000014016125B: jnb     loc_140161386
 * 0000000140161261: call    loc_140161374
 * 0000000140161266: add     rsp, 8
 * 000000014016126A: call    loc_14016137D
 * 000000014016126F: add     rsp, 8
 * 0000000140161273: call    loc_140161266
 * 0000000140161278: add     rsp, 8
 * 000000014016127C: call    loc_14016126F
 * 0000000140161281: add     rsp, 8
 * 0000000140161285: call    loc_140161278
 * 000000014016128A: add     rsp, 8
 * 000000014016128E: call    loc_140161281
 * 0000000140161293: add     rsp, 8
 * 0000000140161297: call    loc_14016128A
 * 000000014016129C: add     rsp, 8
 * 00000001401612A0: call    loc_140161293
 * 00000001401612A5: add     rsp, 8
 * 00000001401612A9: call    loc_14016129C
 * 00000001401612AE: add     rsp, 8
 * 00000001401612B2: call    loc_1401612A5
 * 00000001401612B7: add     rsp, 8
 * 00000001401612BB: call    loc_1401612AE
 * 00000001401612C0: add     rsp, 8
 * 00000001401612C4: call    loc_1401612B7
 * 00000001401612C9: add     rsp, 8
 * 00000001401612CD: call    loc_1401612C0
 * 00000001401612D2: add     rsp, 8
 * 00000001401612D6: call    loc_1401612C9
 * 00000001401612DB: add     rsp, 8
 * 00000001401612DF: call    loc_1401612D2
 * 00000001401612E4: add     rsp, 8
 * 00000001401612E8: call    loc_1401612DB
 * 00000001401612ED: add     rsp, 8
 * 00000001401612F1: call    loc_1401612E4
 * 00000001401612F6: add     rsp, 8
 * 00000001401612FA: call    loc_1401612ED
 * 00000001401612FF: add     rsp, 8
 * 0000000140161303: call    loc_1401612F6
 * 0000000140161308: add     rsp, 8
 * 000000014016130C: call    loc_1401612FF
 * 0000000140161311: add     rsp, 8
 * 0000000140161315: call    loc_140161308
 * 000000014016131A: add     rsp, 8
 * 000000014016131E: call    loc_140161311
 * 0000000140161323: add     rsp, 8
 * 0000000140161327: call    loc_14016131A
 * 000000014016132C: add     rsp, 8
 * 0000000140161330: call    loc_140161323
 * 0000000140161335: add     rsp, 8
 * 0000000140161339: call    loc_14016132C
 * 000000014016133E: add     rsp, 8
 * 0000000140161342: call    loc_140161335
 * 0000000140161347: add     rsp, 8
 * 000000014016134B: call    loc_14016133E
 * 0000000140161350: add     rsp, 8
 * 0000000140161354: call    loc_140161347
 * 0000000140161359: add     rsp, 8
 * 000000014016135D: call    loc_140161350
 * 0000000140161362: add     rsp, 8
 * 0000000140161366: call    loc_140161359
 * 000000014016136B: add     rsp, 8
 * 000000014016136F: call    loc_140161362
 * 0000000140161374: add     rsp, 8
 * 0000000140161378: call    loc_14016136B
 * 000000014016137D: add     rsp, 8
 * 0000000140161381: mov     eax, 0DADAh
 * 0000000140161386: test    word ptr gs:2EB8h, 40h
 * 0000000140161391: jz      short loc_14016139F
 * 0000000140161393: xor     eax, eax
 * 0000000140161395: xor     edx, edx
 * 0000000140161397: mov     ecx, 1
 * 000000014016139C: div     rcx
 * 000000014016139F: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401613A3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401613A7: mov     rax, [rbp+0D8h+var_128]
 * 00000001401613AB: mov     rsp, rbp
 * 00000001401613AE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401613B5: add     rsp, 0E8h
 * 00000001401613BC: test    cs:KiKvaShadow, 1
 * 00000001401613C3: jz      short loc_1401613CA
 * 00000001401613C5: jmp     KiKernelExit
 * 00000001401613CA: test    word ptr gs:2EB8h, 80h
 * 00000001401613D5: jz      short loc_1401613DC
 * 00000001401613D7: verw    [rsp-10h+arg_20]
 * 00000001401613DC: swapgs
 * 00000001401613DF: iretq
 * 00000001401613E1: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401613E5: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401613E9: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401613ED: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401613F1: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401613F5: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401613F9: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401613FD: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140161401: mov     r10, [rbp+0D8h+var_100]
 * 0000000140161405: mov     r9, [rbp+0D8h+var_108]
 * 0000000140161409: mov     r8, [rbp+0D8h+var_110]
 * 000000014016140D: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140161411: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140161415: mov     rax, [rbp+0D8h+var_128]
 * 0000000140161419: mov     rsp, rbp
 * 000000014016141C: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140161423: add     rsp, 0E8h
 * 000000014016142A: iretq
 */
