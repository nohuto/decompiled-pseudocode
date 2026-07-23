/*
 * XREFs of KxIsrLinkage @ 0x1401612B0
 * Callers:
 *     KxIsrLinkageShadow @ 0x1402408C0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1402276CC (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401612B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401612B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401612B0: push    rbp
 * 00000001401612B1: push    rsi
 * 00000001401612B2: sub     rsp, 150h
 * 00000001401612B9: lea     rbp, [rsp+80h]
 * 00000001401612C1: mov     [rbp+0D8h+var_12D], 0
 * 00000001401612C5: mov     [rbp+0D8h+var_128], rax
 * 00000001401612C9: mov     [rbp+0D8h+var_120], rcx
 * 00000001401612CD: mov     [rbp+0D8h+var_118], rdx
 * 00000001401612D1: mov     [rbp+0D8h+var_110], r8
 * 00000001401612D5: mov     [rbp+0D8h+var_108], r9
 * 00000001401612D9: mov     [rbp+0D8h+var_100], r10
 * 00000001401612DD: mov     [rbp+0D8h+var_F8], r11
 * 00000001401612E1: test    [rbp+0D8h+arg_8], 1
 * 00000001401612E8: jnz     short loc_140161319
 * 00000001401612EA: lfence
 * 00000001401612ED: test    word ptr gs:2EB8h, 1
 * 00000001401612F8: jnz     short loc_140161302
 * 00000001401612FA: lfence
 * 00000001401612FD: jmp     loc_1401614F5
 * 0000000140161302: movzx   eax, word ptr gs:2EBCh
 * 000000014016130B: mov     ecx, 48h ; 'H'
 * 0000000140161310: xor     edx, edx
 * 0000000140161312: wrmsr
 * 0000000140161314: jmp     loc_1401614F5
 * 0000000140161319: test    cs:KiKvaShadow, 1
 * 0000000140161320: jnz     short loc_140161325
 * 0000000140161322: swapgs
 * 0000000140161325: lfence
 * 0000000140161328: mov     r10, gs:188h
 * 0000000140161331: mov     rcx, gs:188h
 * 000000014016133A: mov     rcx, [rcx+220h]
 * 0000000140161341: mov     rcx, [rcx+7B8h]
 * 0000000140161348: mov     gs:2EB0h, rcx
 * 0000000140161351: movzx   eax, word ptr gs:2EBEh
 * 000000014016135A: cmp     gs:2EBCh, ax
 * 0000000140161363: jz      short loc_140161377
 * 0000000140161365: mov     gs:2EBCh, ax
 * 000000014016136E: mov     ecx, 48h ; 'H'
 * 0000000140161373: xor     edx, edx
 * 0000000140161375: wrmsr
 * 0000000140161377: movzx   edx, word ptr gs:2EB8h
 * 0000000140161380: test    edx, 8
 * 0000000140161386: jz      short loc_14016139F
 * 0000000140161388: mov     eax, 1
 * 000000014016138D: xor     edx, edx
 * 000000014016138F: mov     ecx, 49h ; 'I'
 * 0000000140161394: wrmsr
 * 0000000140161396: movzx   edx, word ptr gs:2EB8h
 * 000000014016139F: test    edx, 2
 * 00000001401613A5: jz      loc_1401614D0
 * 00000001401613AB: call    loc_1401614BE
 * 00000001401613B0: add     rsp, 8
 * 00000001401613B4: call    loc_1401614C7
 * 00000001401613B9: add     rsp, 8
 * 00000001401613BD: call    loc_1401613B0
 * 00000001401613C2: add     rsp, 8
 * 00000001401613C6: call    loc_1401613B9
 * 00000001401613CB: add     rsp, 8
 * 00000001401613CF: call    loc_1401613C2
 * 00000001401613D4: add     rsp, 8
 * 00000001401613D8: call    loc_1401613CB
 * 00000001401613DD: add     rsp, 8
 * 00000001401613E1: call    loc_1401613D4
 * 00000001401613E6: add     rsp, 8
 * 00000001401613EA: call    loc_1401613DD
 * 00000001401613EF: add     rsp, 8
 * 00000001401613F3: call    loc_1401613E6
 * 00000001401613F8: add     rsp, 8
 * 00000001401613FC: call    loc_1401613EF
 * 0000000140161401: add     rsp, 8
 * 0000000140161405: call    loc_1401613F8
 * 000000014016140A: add     rsp, 8
 * 000000014016140E: call    loc_140161401
 * 0000000140161413: add     rsp, 8
 * 0000000140161417: call    loc_14016140A
 * 000000014016141C: add     rsp, 8
 * 0000000140161420: call    loc_140161413
 * 0000000140161425: add     rsp, 8
 * 0000000140161429: call    loc_14016141C
 * 000000014016142E: add     rsp, 8
 * 0000000140161432: call    loc_140161425
 * 0000000140161437: add     rsp, 8
 * 000000014016143B: call    loc_14016142E
 * 0000000140161440: add     rsp, 8
 * 0000000140161444: call    loc_140161437
 * 0000000140161449: add     rsp, 8
 * 000000014016144D: call    loc_140161440
 * 0000000140161452: add     rsp, 8
 * 0000000140161456: call    loc_140161449
 * 000000014016145B: add     rsp, 8
 * 000000014016145F: call    loc_140161452
 * 0000000140161464: add     rsp, 8
 * 0000000140161468: call    loc_14016145B
 * 000000014016146D: add     rsp, 8
 * 0000000140161471: call    loc_140161464
 * 0000000140161476: add     rsp, 8
 * 000000014016147A: call    loc_14016146D
 * 000000014016147F: add     rsp, 8
 * 0000000140161483: call    loc_140161476
 * 0000000140161488: add     rsp, 8
 * 000000014016148C: call    loc_14016147F
 * 0000000140161491: add     rsp, 8
 * 0000000140161495: call    loc_140161488
 * 000000014016149A: add     rsp, 8
 * 000000014016149E: call    loc_140161491
 * 00000001401614A3: add     rsp, 8
 * 00000001401614A7: call    loc_14016149A
 * 00000001401614AC: add     rsp, 8
 * 00000001401614B0: call    loc_1401614A3
 * 00000001401614B5: add     rsp, 8
 * 00000001401614B9: call    loc_1401614AC
 * 00000001401614BE: add     rsp, 8
 * 00000001401614C2: call    loc_1401614B5
 * 00000001401614C7: add     rsp, 8
 * 00000001401614CB: mov     eax, 0DADAh
 * 00000001401614D0: test    edx, 100h
 * 00000001401614D6: jz      short loc_1401614DD
 * 00000001401614D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401614DD: lfence
 * 00000001401614E0: test    byte ptr [r10+3], 3
 * 00000001401614E5: mov     [rbp+0D8h+var_58], 0
 * 00000001401614EE: jz      short loc_1401614F5
 * 00000001401614F0: call    KiSaveDebugRegisterState
 * 00000001401614F5: cld
 * 00000001401614F6: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401614FA: ldmxcsr dword ptr gs:180h
 * 0000000140161503: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140161507: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016150B: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016150F: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140161513: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140161517: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016151B: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140161524: jz      short loc_14016152B
 * 0000000140161526: call    KeWakeProcessor
 * 000000014016152B: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140161532: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140161539: jnb     short loc_140161554
 * 000000014016153B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140161542: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140161549: jb      short loc_140161554
 * 000000014016154B: lea     rcx, [rbp+0D8h+var_158]
 * 000000014016154F: call    KiCheckForSListAddress
 * 0000000140161554: movzx   eax, byte ptr [rbp+0E0h]
 * 000000014016155B: mov     rsi, gs:20h
 * 0000000140161564: mov     rsi, [rsi+rax*8+2E00h]
 * 000000014016156C: inc     dword ptr gs:5C80h
 * 0000000140161574: test    rsi, rsi
 * 0000000140161577: jz      short loc_14016157F
 * 0000000140161579: mov     rcx, [rsi+50h]
 * 000000014016157D: jmp     rcx
 * 000000014016157F: mov     ecx, eax
 * 0000000140161581: shr     ecx, 4
 * 0000000140161584: mov     rax, cr8
 * 0000000140161588: mov     cr8, rcx
 * 000000014016158C: mov     [rbp+0D8h+var_12F], al
 * 000000014016158F: mov     rcx, gs:20h
 * 0000000140161598: inc     byte ptr [rcx+20h]
 * 000000014016159B: cmp     byte ptr [rcx+20h], 1
 * 000000014016159F: jnz     short loc_1401615F1
 * 00000001401615A1: rdtsc
 * 00000001401615A3: shl     rdx, 20h
 * 00000001401615A7: or      rax, rdx
 * 00000001401615AA: mov     r8, [rcx+8]
 * 00000001401615AE: sub     rax, [rcx+5B38h]
 * 00000001401615B5: add     [r8+48h], rax
 * 00000001401615B9: mov     edx, [r8+50h]
 * 00000001401615BD: add     [rcx+5B38h], rax
 * 00000001401615C4: add     rdx, rax
 * 00000001401615C7: mov     ecx, edx
 * 00000001401615C9: shr     rdx, 20h
 * 00000001401615CD: jz      short loc_1401615D2
 * 00000001401615CF: or      ecx, 0FFFFFFFFh
 * 00000001401615D2: mov     [r8+50h], ecx
 * 00000001401615D6: test    byte ptr [r8+2], 3Eh
 * 00000001401615DB: jz      short loc_1401615F1
 * 00000001401615DD: mov     rdx, r8
 * 00000001401615E0: mov     r8, rax
 * 00000001401615E3: mov     rcx, gs:20h
 * 00000001401615EC: call    KiEndThreadAccountingPeriod
 * 00000001401615F1: sti
 * 00000001401615F2: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401615FC: jz      short loc_14016160A
 * 00000001401615FE: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140161605: call    PerfInfoLogUnexpectedInterrupt
 * 000000014016160A: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140161611: jz      short loc_140161632
 * 0000000140161613: and     [rbp+0D8h+var_138], 0
 * 0000000140161618: xor     r9, r9
 * 000000014016161B: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140161623: mov     edx, 1
 * 0000000140161628: mov     ecx, 12h
 * 000000014016162D: call    KiBugCheckDispatch
 * 0000000140161632: cli
 * 0000000140161633: mov     rcx, rsi
 * 0000000140161636: call    HalPerformEndOfInterrupt_0
 * 000000014016163B: mov     rcx, gs:20h
 * 0000000140161644: cmp     byte ptr [rcx+20h], 1
 * 0000000140161648: ja      short loc_1401616BE
 * 000000014016164A: rdtsc
 * 000000014016164C: shl     rdx, 20h
 * 0000000140161650: or      rax, rdx
 * 0000000140161653: sub     rax, [rcx+5B38h]
 * 000000014016165A: add     [rcx+5BF8h], rax
 * 0000000140161661: add     [rcx+5B38h], rax
 * 0000000140161668: mov     r8, rax
 * 000000014016166B: mov     rax, [rcx+8]
 * 000000014016166F: test    byte ptr [rax+2], 32h
 * 0000000140161673: jz      short loc_140161688
 * 0000000140161675: xor     edx, edx
 * 0000000140161677: call    KiBeginThreadAccountingPeriod
 * 000000014016167C: mov     rcx, gs:20h
 * 0000000140161685: inc     byte ptr [rcx+20h]
 * 0000000140161688: mov     dl, [rcx+6]
 * 000000014016168B: and     byte ptr [rcx+6], 0
 * 000000014016168F: cmp     byte ptr [rcx+7], 0
 * 0000000140161693: jnz     short loc_1401616BE
 * 0000000140161695: test    dl, dl
 * 0000000140161697: jz      short loc_1401616BE
 * 0000000140161699: cmp     [rbp+0D8h+var_12F], 2
 * 000000014016169D: jnb     short loc_1401616AA
 * 000000014016169F: and     byte ptr [rcx+20h], 0
 * 00000001401616A3: call    KiDpcInterruptBypass
 * 00000001401616A8: jmp     short loc_1401616C1
 * 00000001401616AA: mov     ecx, 2
 * 00000001401616AF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401616B5: mov     rcx, gs:20h
 * 00000001401616BE: dec     byte ptr [rcx+20h]
 * 00000001401616C1: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401616C5: mov     cr8, rcx
 * 00000001401616C9: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401616D0: cli
 * 00000001401616D1: test    [rbp+0D8h+arg_8], 1
 * 00000001401616D8: jz      loc_140161951
 * 00000001401616DE: mov     rcx, gs:188h
 * 00000001401616E7: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401616EE: jz      short loc_140161709
 * 00000001401616F0: mov     ecx, 1
 * 00000001401616F5: mov     cr8, rcx
 * 00000001401616F9: sti
 * 00000001401616FA: call    KiInitiateUserApc
 * 00000001401616FF: cli
 * 0000000140161700: mov     ecx, 0
 * 0000000140161705: mov     cr8, rcx
 * 0000000140161709: mov     rcx, gs:188h
 * 0000000140161712: test    dword ptr [rcx], 8000000h
 * 0000000140161718: jz      short loc_14016171F
 * 000000014016171A: call    KiRestoreSetContextState
 * 000000014016171F: mov     rcx, gs:188h
 * 0000000140161728: test    dword ptr [rcx], 40010000h
 * 000000014016172E: jz      short loc_140161744
 * 0000000140161730: test    byte ptr [rcx+2], 1
 * 0000000140161734: jz      short loc_140161744
 * 0000000140161736: call    KiCopyCounters
 * 000000014016173B: mov     rcx, gs:188h
 * 0000000140161744: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140161748: cmp     [rbp+0D8h+var_58], 0
 * 0000000140161750: jz      short loc_140161757
 * 0000000140161752: call    KiRestoreDebugRegisterState
 * 0000000140161757: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016175B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016175F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140161763: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140161767: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016176B: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016176F: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140161773: mov     r10, [rbp+0D8h+var_100]
 * 0000000140161777: mov     r9, [rbp+0D8h+var_108]
 * 000000014016177B: mov     r8, [rbp+0D8h+var_110]
 * 000000014016177F: movzx   eax, word ptr gs:2EC2h
 * 0000000140161788: cmp     gs:2EBCh, ax
 * 0000000140161791: jz      short loc_1401617A5
 * 0000000140161793: mov     gs:2EBCh, ax
 * 000000014016179C: mov     ecx, 48h ; 'H'
 * 00000001401617A1: xor     edx, edx
 * 00000001401617A3: wrmsr
 * 00000001401617A5: btr     word ptr gs:2EB8h, 2
 * 00000001401617B0: jnb     short loc_1401617C0
 * 00000001401617B2: mov     eax, 1
 * 00000001401617B7: xor     edx, edx
 * 00000001401617B9: mov     ecx, 49h ; 'I'
 * 00000001401617BE: wrmsr
 * 00000001401617C0: btr     word ptr gs:2EB8h, 5
 * 00000001401617CB: jnb     loc_1401618F6
 * 00000001401617D1: call    loc_1401618E4
 * 00000001401617D6: add     rsp, 8
 * 00000001401617DA: call    loc_1401618ED
 * 00000001401617DF: add     rsp, 8
 * 00000001401617E3: call    loc_1401617D6
 * 00000001401617E8: add     rsp, 8
 * 00000001401617EC: call    loc_1401617DF
 * 00000001401617F1: add     rsp, 8
 * 00000001401617F5: call    loc_1401617E8
 * 00000001401617FA: add     rsp, 8
 * 00000001401617FE: call    loc_1401617F1
 * 0000000140161803: add     rsp, 8
 * 0000000140161807: call    loc_1401617FA
 * 000000014016180C: add     rsp, 8
 * 0000000140161810: call    loc_140161803
 * 0000000140161815: add     rsp, 8
 * 0000000140161819: call    loc_14016180C
 * 000000014016181E: add     rsp, 8
 * 0000000140161822: call    loc_140161815
 * 0000000140161827: add     rsp, 8
 * 000000014016182B: call    loc_14016181E
 * 0000000140161830: add     rsp, 8
 * 0000000140161834: call    loc_140161827
 * 0000000140161839: add     rsp, 8
 * 000000014016183D: call    loc_140161830
 * 0000000140161842: add     rsp, 8
 * 0000000140161846: call    loc_140161839
 * 000000014016184B: add     rsp, 8
 * 000000014016184F: call    loc_140161842
 * 0000000140161854: add     rsp, 8
 * 0000000140161858: call    loc_14016184B
 * 000000014016185D: add     rsp, 8
 * 0000000140161861: call    loc_140161854
 * 0000000140161866: add     rsp, 8
 * 000000014016186A: call    loc_14016185D
 * 000000014016186F: add     rsp, 8
 * 0000000140161873: call    loc_140161866
 * 0000000140161878: add     rsp, 8
 * 000000014016187C: call    loc_14016186F
 * 0000000140161881: add     rsp, 8
 * 0000000140161885: call    loc_140161878
 * 000000014016188A: add     rsp, 8
 * 000000014016188E: call    loc_140161881
 * 0000000140161893: add     rsp, 8
 * 0000000140161897: call    loc_14016188A
 * 000000014016189C: add     rsp, 8
 * 00000001401618A0: call    loc_140161893
 * 00000001401618A5: add     rsp, 8
 * 00000001401618A9: call    loc_14016189C
 * 00000001401618AE: add     rsp, 8
 * 00000001401618B2: call    loc_1401618A5
 * 00000001401618B7: add     rsp, 8
 * 00000001401618BB: call    loc_1401618AE
 * 00000001401618C0: add     rsp, 8
 * 00000001401618C4: call    loc_1401618B7
 * 00000001401618C9: add     rsp, 8
 * 00000001401618CD: call    loc_1401618C0
 * 00000001401618D2: add     rsp, 8
 * 00000001401618D6: call    loc_1401618C9
 * 00000001401618DB: add     rsp, 8
 * 00000001401618DF: call    loc_1401618D2
 * 00000001401618E4: add     rsp, 8
 * 00000001401618E8: call    loc_1401618DB
 * 00000001401618ED: add     rsp, 8
 * 00000001401618F1: mov     eax, 0DADAh
 * 00000001401618F6: test    word ptr gs:2EB8h, 40h
 * 0000000140161901: jz      short loc_14016190F
 * 0000000140161903: xor     eax, eax
 * 0000000140161905: xor     edx, edx
 * 0000000140161907: mov     ecx, 1
 * 000000014016190C: div     rcx
 * 000000014016190F: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140161913: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140161917: mov     rax, [rbp+0D8h+var_128]
 * 000000014016191B: mov     rsp, rbp
 * 000000014016191E: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140161925: add     rsp, 0E8h
 * 000000014016192C: test    cs:KiKvaShadow, 1
 * 0000000140161933: jz      short loc_14016193A
 * 0000000140161935: jmp     KiKernelExit
 * 000000014016193A: test    word ptr gs:2EB8h, 80h
 * 0000000140161945: jz      short loc_14016194C
 * 0000000140161947: verw    [rsp-10h+arg_20]
 * 000000014016194C: swapgs
 * 000000014016194F: iretq
 * 0000000140161951: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140161955: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140161959: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016195D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140161961: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140161965: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140161969: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016196D: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140161971: mov     r10, [rbp+0D8h+var_100]
 * 0000000140161975: mov     r9, [rbp+0D8h+var_108]
 * 0000000140161979: mov     r8, [rbp+0D8h+var_110]
 * 000000014016197D: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140161981: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140161985: mov     rax, [rbp+0D8h+var_128]
 * 0000000140161989: mov     rsp, rbp
 * 000000014016198C: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140161993: add     rsp, 0E8h
 * 000000014016199A: iretq
 */
