/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140160310
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140160310 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140160310
 * Reason: Hex-Rays returned no pseudocode for 0x140160310
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140160310: mov     rdx, rsp
 * 0000000140160313: mov     rcx, gs:6498h
 * 000000014016031C: lea     rax, [rcx-6000h]
 * 0000000140160323: cmp     rax, rsp
 * 0000000140160326: ja      short loc_14016032D
 * 0000000140160328: cmp     rsp, rcx
 * 000000014016032B: jb      short loc_140160339
 * 000000014016032D: cmp     cs:KiBugCheckActive, 0
 * 0000000140160334: jnz     short loc_140160339
 * 0000000140160336: mov     rsp, rcx
 * 0000000140160339: sub     rsp, 20h
 * 000000014016033D: mov     [rsp+20h+var_10], rdx
 * 0000000140160342: call    KiInterruptSubDispatchNoLock
 * 0000000140160347: mov     rsp, [rsp+20h+var_10]
 * 000000014016034C: mov     rcx, gs:20h
 * 0000000140160355: cmp     byte ptr [rcx+20h], 1
 * 0000000140160359: ja      short loc_1401603CF
 * 000000014016035B: rdtsc
 * 000000014016035D: shl     rdx, 20h
 * 0000000140160361: or      rax, rdx
 * 0000000140160364: sub     rax, [rcx+5B38h]
 * 000000014016036B: add     [rcx+5BF8h], rax
 * 0000000140160372: add     [rcx+5B38h], rax
 * 0000000140160379: mov     r8, rax
 * 000000014016037C: mov     rax, [rcx+8]
 * 0000000140160380: test    byte ptr [rax+2], 32h
 * 0000000140160384: jz      short loc_140160399
 * 0000000140160386: xor     edx, edx
 * 0000000140160388: call    KiBeginThreadAccountingPeriod
 * 000000014016038D: mov     rcx, gs:20h
 * 0000000140160396: inc     byte ptr [rcx+20h]
 * 0000000140160399: mov     dl, [rcx+6]
 * 000000014016039C: and     byte ptr [rcx+6], 0
 * 00000001401603A0: cmp     byte ptr [rcx+7], 0
 * 00000001401603A4: jnz     short loc_1401603CF
 * 00000001401603A6: test    dl, dl
 * 00000001401603A8: jz      short loc_1401603CF
 * 00000001401603AA: cmp     byte ptr [rbp-57h], 2
 * 00000001401603AE: jnb     short loc_1401603BB
 * 00000001401603B0: and     byte ptr [rcx+20h], 0
 * 00000001401603B4: call    KiDpcInterruptBypass
 * 00000001401603B9: jmp     short loc_1401603D2
 * 00000001401603BB: mov     ecx, 2
 * 00000001401603C0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401603C6: mov     rcx, gs:20h
 * 00000001401603CF: dec     byte ptr [rcx+20h]
 * 00000001401603D2: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401603D6: mov     cr8, rcx
 * 00000001401603DA: mov     rsi, [rbp+0D0h]
 * 00000001401603E1: test    byte ptr [rbp+0F0h], 1
 * 00000001401603E8: jz      loc_140160661
 * 00000001401603EE: mov     rcx, gs:188h
 * 00000001401603F7: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401603FE: jz      short loc_140160419
 * 0000000140160400: mov     ecx, 1
 * 0000000140160405: mov     cr8, rcx
 * 0000000140160409: sti
 * 000000014016040A: call    KiInitiateUserApc
 * 000000014016040F: cli
 * 0000000140160410: mov     ecx, 0
 * 0000000140160415: mov     cr8, rcx
 * 0000000140160419: mov     rcx, gs:188h
 * 0000000140160422: test    dword ptr [rcx], 8000000h
 * 0000000140160428: jz      short loc_14016042F
 * 000000014016042A: call    KiRestoreSetContextState
 * 000000014016042F: mov     rcx, gs:188h
 * 0000000140160438: test    dword ptr [rcx], 40010000h
 * 000000014016043E: jz      short loc_140160454
 * 0000000140160440: test    byte ptr [rcx+2], 1
 * 0000000140160444: jz      short loc_140160454
 * 0000000140160446: call    KiCopyCounters
 * 000000014016044B: mov     rcx, gs:188h
 * 0000000140160454: ldmxcsr dword ptr [rbp-54h]
 * 0000000140160458: cmp     word ptr [rbp+80h], 0
 * 0000000140160460: jz      short loc_140160467
 * 0000000140160462: call    KiRestoreDebugRegisterState
 * 0000000140160467: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014016046B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014016046F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140160473: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140160477: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014016047B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016047F: mov     r11, [rbp-20h]
 * 0000000140160483: mov     r10, [rbp-28h]
 * 0000000140160487: mov     r9, [rbp-30h]
 * 000000014016048B: mov     r8, [rbp-38h]
 * 000000014016048F: movzx   eax, word ptr gs:2EC2h
 * 0000000140160498: cmp     gs:2EBCh, ax
 * 00000001401604A1: jz      short loc_1401604B5
 * 00000001401604A3: mov     gs:2EBCh, ax
 * 00000001401604AC: mov     ecx, 48h ; 'H'
 * 00000001401604B1: xor     edx, edx
 * 00000001401604B3: wrmsr
 * 00000001401604B5: btr     word ptr gs:2EB8h, 2
 * 00000001401604C0: jnb     short loc_1401604D0
 * 00000001401604C2: mov     eax, 1
 * 00000001401604C7: xor     edx, edx
 * 00000001401604C9: mov     ecx, 49h ; 'I'
 * 00000001401604CE: wrmsr
 * 00000001401604D0: btr     word ptr gs:2EB8h, 5
 * 00000001401604DB: jnb     loc_140160606
 * 00000001401604E1: call    loc_1401605F4
 * 00000001401604E6: add     rsp, 8
 * 00000001401604EA: call    loc_1401605FD
 * 00000001401604EF: add     rsp, 8
 * 00000001401604F3: call    loc_1401604E6
 * 00000001401604F8: add     rsp, 8
 * 00000001401604FC: call    loc_1401604EF
 * 0000000140160501: add     rsp, 8
 * 0000000140160505: call    loc_1401604F8
 * 000000014016050A: add     rsp, 8
 * 000000014016050E: call    loc_140160501
 * 0000000140160513: add     rsp, 8
 * 0000000140160517: call    loc_14016050A
 * 000000014016051C: add     rsp, 8
 * 0000000140160520: call    loc_140160513
 * 0000000140160525: add     rsp, 8
 * 0000000140160529: call    loc_14016051C
 * 000000014016052E: add     rsp, 8
 * 0000000140160532: call    loc_140160525
 * 0000000140160537: add     rsp, 8
 * 000000014016053B: call    loc_14016052E
 * 0000000140160540: add     rsp, 8
 * 0000000140160544: call    loc_140160537
 * 0000000140160549: add     rsp, 8
 * 000000014016054D: call    loc_140160540
 * 0000000140160552: add     rsp, 8
 * 0000000140160556: call    loc_140160549
 * 000000014016055B: add     rsp, 8
 * 000000014016055F: call    loc_140160552
 * 0000000140160564: add     rsp, 8
 * 0000000140160568: call    loc_14016055B
 * 000000014016056D: add     rsp, 8
 * 0000000140160571: call    loc_140160564
 * 0000000140160576: add     rsp, 8
 * 000000014016057A: call    loc_14016056D
 * 000000014016057F: add     rsp, 8
 * 0000000140160583: call    loc_140160576
 * 0000000140160588: add     rsp, 8
 * 000000014016058C: call    loc_14016057F
 * 0000000140160591: add     rsp, 8
 * 0000000140160595: call    loc_140160588
 * 000000014016059A: add     rsp, 8
 * 000000014016059E: call    loc_140160591
 * 00000001401605A3: add     rsp, 8
 * 00000001401605A7: call    loc_14016059A
 * 00000001401605AC: add     rsp, 8
 * 00000001401605B0: call    loc_1401605A3
 * 00000001401605B5: add     rsp, 8
 * 00000001401605B9: call    loc_1401605AC
 * 00000001401605BE: add     rsp, 8
 * 00000001401605C2: call    loc_1401605B5
 * 00000001401605C7: add     rsp, 8
 * 00000001401605CB: call    loc_1401605BE
 * 00000001401605D0: add     rsp, 8
 * 00000001401605D4: call    loc_1401605C7
 * 00000001401605D9: add     rsp, 8
 * 00000001401605DD: call    loc_1401605D0
 * 00000001401605E2: add     rsp, 8
 * 00000001401605E6: call    loc_1401605D9
 * 00000001401605EB: add     rsp, 8
 * 00000001401605EF: call    loc_1401605E2
 * 00000001401605F4: add     rsp, 8
 * 00000001401605F8: call    loc_1401605EB
 * 00000001401605FD: add     rsp, 8
 * 0000000140160601: mov     eax, 0DADAh
 * 0000000140160606: test    word ptr gs:2EB8h, 40h
 * 0000000140160611: jz      short loc_14016061F
 * 0000000140160613: xor     eax, eax
 * 0000000140160615: xor     edx, edx
 * 0000000140160617: mov     ecx, 1
 * 000000014016061C: div     rcx
 * 000000014016061F: mov     rdx, [rbp-40h]
 * 0000000140160623: mov     rcx, [rbp-48h]
 * 0000000140160627: mov     rax, [rbp-50h]
 * 000000014016062B: mov     rsp, rbp
 * 000000014016062E: mov     rbp, [rbp+0D8h]
 * 0000000140160635: add     rsp, 0E8h
 * 000000014016063C: test    cs:KiKvaShadow, 1
 * 0000000140160643: jz      short loc_14016064A
 * 0000000140160645: jmp     KiKernelExit
 * 000000014016064A: test    word ptr gs:2EB8h, 80h
 * 0000000140160655: jz      short loc_14016065C
 * 0000000140160657: verw    [rsp-1C8h+arg_1E0]
 * 000000014016065C: swapgs
 * 000000014016065F: iretq
 * 0000000140160661: ldmxcsr dword ptr [rbp-54h]
 * 0000000140160665: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140160669: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014016066D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140160671: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140160675: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140160679: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016067D: mov     r11, [rbp-20h]
 * 0000000140160681: mov     r10, [rbp-28h]
 * 0000000140160685: mov     r9, [rbp-30h]
 * 0000000140160689: mov     r8, [rbp-38h]
 * 000000014016068D: mov     rdx, [rbp-40h]
 * 0000000140160691: mov     rcx, [rbp-48h]
 * 0000000140160695: mov     rax, [rbp-50h]
 * 0000000140160699: mov     rsp, rbp
 * 000000014016069C: mov     rbp, [rbp+0D8h]
 * 00000001401606A3: add     rsp, 0E8h
 * 00000001401606AA: iretq
 */
