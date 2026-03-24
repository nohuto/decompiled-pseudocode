/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401641F0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x14023FF00 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400AA984 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BAD00 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401641F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401641F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401641F0: sub     rsp, 8
 * 00000001401641F4: push    rbp
 * 00000001401641F5: push    rsi
 * 00000001401641F6: sub     rsp, 150h
 * 00000001401641FD: lea     rbp, [rsp+80h]
 * 0000000140164205: mov     [rbp+0E8h+var_13D], 0
 * 0000000140164209: mov     [rbp+0E8h+var_138], rax
 * 000000014016420D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140164211: mov     [rbp+0E8h+var_128], rdx
 * 0000000140164215: mov     [rbp+0E8h+var_120], r8
 * 0000000140164219: mov     [rbp+0E8h+var_118], r9
 * 000000014016421D: mov     [rbp+0E8h+var_110], r10
 * 0000000140164221: mov     [rbp+0E8h+var_108], r11
 * 0000000140164225: test    [rbp+0E8h+arg_0], 1
 * 000000014016422C: jnz     short loc_14016425D
 * 000000014016422E: lfence
 * 0000000140164231: test    word ptr gs:2EB8h, 1
 * 000000014016423C: jnz     short loc_140164246
 * 000000014016423E: lfence
 * 0000000140164241: jmp     loc_140164439
 * 0000000140164246: movzx   eax, word ptr gs:2EBCh
 * 000000014016424F: mov     ecx, 48h ; 'H'
 * 0000000140164254: xor     edx, edx
 * 0000000140164256: wrmsr
 * 0000000140164258: jmp     loc_140164439
 * 000000014016425D: test    cs:KiKvaShadow, 1
 * 0000000140164264: jnz     short loc_140164269
 * 0000000140164266: swapgs
 * 0000000140164269: lfence
 * 000000014016426C: mov     r10, gs:188h
 * 0000000140164275: mov     rcx, gs:188h
 * 000000014016427E: mov     rcx, [rcx+220h]
 * 0000000140164285: mov     rcx, [rcx+7B8h]
 * 000000014016428C: mov     gs:2EB0h, rcx
 * 0000000140164295: movzx   eax, word ptr gs:2EBEh
 * 000000014016429E: cmp     gs:2EBCh, ax
 * 00000001401642A7: jz      short loc_1401642BB
 * 00000001401642A9: mov     gs:2EBCh, ax
 * 00000001401642B2: mov     ecx, 48h ; 'H'
 * 00000001401642B7: xor     edx, edx
 * 00000001401642B9: wrmsr
 * 00000001401642BB: movzx   edx, word ptr gs:2EB8h
 * 00000001401642C4: test    edx, 8
 * 00000001401642CA: jz      short loc_1401642E3
 * 00000001401642CC: mov     eax, 1
 * 00000001401642D1: xor     edx, edx
 * 00000001401642D3: mov     ecx, 49h ; 'I'
 * 00000001401642D8: wrmsr
 * 00000001401642DA: movzx   edx, word ptr gs:2EB8h
 * 00000001401642E3: test    edx, 2
 * 00000001401642E9: jz      loc_140164414
 * 00000001401642EF: call    loc_140164402
 * 00000001401642F4: add     rsp, 8
 * 00000001401642F8: call    loc_14016440B
 * 00000001401642FD: add     rsp, 8
 * 0000000140164301: call    loc_1401642F4
 * 0000000140164306: add     rsp, 8
 * 000000014016430A: call    loc_1401642FD
 * 000000014016430F: add     rsp, 8
 * 0000000140164313: call    loc_140164306
 * 0000000140164318: add     rsp, 8
 * 000000014016431C: call    loc_14016430F
 * 0000000140164321: add     rsp, 8
 * 0000000140164325: call    loc_140164318
 * 000000014016432A: add     rsp, 8
 * 000000014016432E: call    loc_140164321
 * 0000000140164333: add     rsp, 8
 * 0000000140164337: call    loc_14016432A
 * 000000014016433C: add     rsp, 8
 * 0000000140164340: call    loc_140164333
 * 0000000140164345: add     rsp, 8
 * 0000000140164349: call    loc_14016433C
 * 000000014016434E: add     rsp, 8
 * 0000000140164352: call    loc_140164345
 * 0000000140164357: add     rsp, 8
 * 000000014016435B: call    loc_14016434E
 * 0000000140164360: add     rsp, 8
 * 0000000140164364: call    loc_140164357
 * 0000000140164369: add     rsp, 8
 * 000000014016436D: call    loc_140164360
 * 0000000140164372: add     rsp, 8
 * 0000000140164376: call    loc_140164369
 * 000000014016437B: add     rsp, 8
 * 000000014016437F: call    loc_140164372
 * 0000000140164384: add     rsp, 8
 * 0000000140164388: call    loc_14016437B
 * 000000014016438D: add     rsp, 8
 * 0000000140164391: call    loc_140164384
 * 0000000140164396: add     rsp, 8
 * 000000014016439A: call    loc_14016438D
 * 000000014016439F: add     rsp, 8
 * 00000001401643A3: call    loc_140164396
 * 00000001401643A8: add     rsp, 8
 * 00000001401643AC: call    loc_14016439F
 * 00000001401643B1: add     rsp, 8
 * 00000001401643B5: call    loc_1401643A8
 * 00000001401643BA: add     rsp, 8
 * 00000001401643BE: call    loc_1401643B1
 * 00000001401643C3: add     rsp, 8
 * 00000001401643C7: call    loc_1401643BA
 * 00000001401643CC: add     rsp, 8
 * 00000001401643D0: call    loc_1401643C3
 * 00000001401643D5: add     rsp, 8
 * 00000001401643D9: call    loc_1401643CC
 * 00000001401643DE: add     rsp, 8
 * 00000001401643E2: call    loc_1401643D5
 * 00000001401643E7: add     rsp, 8
 * 00000001401643EB: call    loc_1401643DE
 * 00000001401643F0: add     rsp, 8
 * 00000001401643F4: call    loc_1401643E7
 * 00000001401643F9: add     rsp, 8
 * 00000001401643FD: call    loc_1401643F0
 * 0000000140164402: add     rsp, 8
 * 0000000140164406: call    loc_1401643F9
 * 000000014016440B: add     rsp, 8
 * 000000014016440F: mov     eax, 0DADAh
 * 0000000140164414: test    edx, 100h
 * 000000014016441A: jz      short loc_140164421
 * 000000014016441C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140164421: lfence
 * 0000000140164424: test    byte ptr [r10+3], 3
 * 0000000140164429: mov     [rbp+0E8h+var_68], 0
 * 0000000140164432: jz      short loc_140164439
 * 0000000140164434: call    KiSaveDebugRegisterState
 * 0000000140164439: cld
 * 000000014016443A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016443E: ldmxcsr dword ptr gs:180h
 * 0000000140164447: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016444B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016444F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140164453: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140164457: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016445B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016445F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140164468: jz      short loc_14016446F
 * 000000014016446A: call    KeWakeProcessor
 * 000000014016446F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140164476: cmp     rax, [rbp+0E8h]
 * 000000014016447D: jnb     short loc_140164498
 * 000000014016447F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140164486: cmp     rax, [rbp+0E8h]
 * 000000014016448D: jb      short loc_140164498
 * 000000014016448F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140164493: call    KiCheckForSListAddress
 * 0000000140164498: xor     esi, esi
 * 000000014016449A: inc     dword ptr gs:5C80h
 * 00000001401644A2: mov     ecx, 3
 * 00000001401644A7: mov     rax, cr8
 * 00000001401644AB: mov     cr8, rcx
 * 00000001401644AF: mov     [rbp+0E8h+var_13F], al
 * 00000001401644B2: mov     [rbp+0E8h+var_148], 0
 * 00000001401644B9: mov     rcx, gs:20h
 * 00000001401644C2: inc     byte ptr [rcx+20h]
 * 00000001401644C5: cmp     byte ptr [rcx+20h], 1
 * 00000001401644C9: jnz     loc_14016455F
 * 00000001401644CF: rdtsc
 * 00000001401644D1: shl     rdx, 20h
 * 00000001401644D5: or      rax, rdx
 * 00000001401644D8: mov     edx, [rcx+6320h]
 * 00000001401644DE: mov     r11d, edx
 * 00000001401644E1: and     edx, 7FFh
 * 00000001401644E7: shr     edx, 5
 * 00000001401644EA: lea     r10, [rcx+rdx*4+6324h]
 * 00000001401644F2: mov     edx, [r10]
 * 00000001401644F5: ror     edx, 5
 * 00000001401644F8: xor     edx, eax
 * 00000001401644FA: mov     [r10], edx
 * 00000001401644FD: add     r11d, 1
 * 0000000140164501: mov     [rcx+6320h], r11d
 * 0000000140164508: and     r11d, 3FFh
 * 000000014016450F: jnz     short loc_140164518
 * 0000000140164511: mov     [rbp+0E8h+var_148], 1
 * 0000000140164518: mov     r8, [rcx+8]
 * 000000014016451C: sub     rax, [rcx+5B38h]
 * 0000000140164523: add     [r8+48h], rax
 * 0000000140164527: mov     edx, [r8+50h]
 * 000000014016452B: add     [rcx+5B38h], rax
 * 0000000140164532: add     rdx, rax
 * 0000000140164535: mov     ecx, edx
 * 0000000140164537: shr     rdx, 20h
 * 000000014016453B: jz      short loc_140164540
 * 000000014016453D: or      ecx, 0FFFFFFFFh
 * 0000000140164540: mov     [r8+50h], ecx
 * 0000000140164544: test    byte ptr [r8+2], 3Eh
 * 0000000140164549: jz      short loc_14016455F
 * 000000014016454B: mov     rdx, r8
 * 000000014016454E: mov     r8, rax
 * 0000000140164551: mov     rcx, gs:20h
 * 000000014016455A: call    KiEndThreadAccountingPeriod
 * 000000014016455F: sti
 * 0000000140164560: cmp     [rbp+0E8h+var_148], 0
 * 0000000140164564: jz      short loc_140164574
 * 0000000140164566: mov     rcx, gs:20h
 * 000000014016456F: call    KiEntropyQueueDpc
 * 0000000140164574: mov     ecx, 3
 * 0000000140164579: call    HvlRouteInterrupt
 * 000000014016457E: cli
 * 000000014016457F: mov     rcx, gs:20h
 * 0000000140164588: cmp     byte ptr [rcx+20h], 1
 * 000000014016458C: ja      short loc_140164602
 * 000000014016458E: rdtsc
 * 0000000140164590: shl     rdx, 20h
 * 0000000140164594: or      rax, rdx
 * 0000000140164597: sub     rax, [rcx+5B38h]
 * 000000014016459E: add     [rcx+5BF8h], rax
 * 00000001401645A5: add     [rcx+5B38h], rax
 * 00000001401645AC: mov     r8, rax
 * 00000001401645AF: mov     rax, [rcx+8]
 * 00000001401645B3: test    byte ptr [rax+2], 32h
 * 00000001401645B7: jz      short loc_1401645CC
 * 00000001401645B9: xor     edx, edx
 * 00000001401645BB: call    KiBeginThreadAccountingPeriod
 * 00000001401645C0: mov     rcx, gs:20h
 * 00000001401645C9: inc     byte ptr [rcx+20h]
 * 00000001401645CC: mov     dl, [rcx+6]
 * 00000001401645CF: and     byte ptr [rcx+6], 0
 * 00000001401645D3: cmp     byte ptr [rcx+7], 0
 * 00000001401645D7: jnz     short loc_140164602
 * 00000001401645D9: test    dl, dl
 * 00000001401645DB: jz      short loc_140164602
 * 00000001401645DD: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401645E1: jnb     short loc_1401645EE
 * 00000001401645E3: and     byte ptr [rcx+20h], 0
 * 00000001401645E7: call    KiDpcInterruptBypass
 * 00000001401645EC: jmp     short loc_140164605
 * 00000001401645EE: mov     ecx, 2
 * 00000001401645F3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401645F9: mov     rcx, gs:20h
 * 0000000140164602: dec     byte ptr [rcx+20h]
 * 0000000140164605: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140164609: mov     cr8, rcx
 * 000000014016460D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140164614: cli
 * 0000000140164615: test    [rbp+0E8h+arg_0], 1
 * 000000014016461C: jz      loc_140164895
 * 0000000140164622: mov     rcx, gs:188h
 * 000000014016462B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140164632: jz      short loc_14016464D
 * 0000000140164634: mov     ecx, 1
 * 0000000140164639: mov     cr8, rcx
 * 000000014016463D: sti
 * 000000014016463E: call    KiInitiateUserApc
 * 0000000140164643: cli
 * 0000000140164644: mov     ecx, 0
 * 0000000140164649: mov     cr8, rcx
 * 000000014016464D: mov     rcx, gs:188h
 * 0000000140164656: test    dword ptr [rcx], 8000000h
 * 000000014016465C: jz      short loc_140164663
 * 000000014016465E: call    KiRestoreSetContextState
 * 0000000140164663: mov     rcx, gs:188h
 * 000000014016466C: test    dword ptr [rcx], 40010000h
 * 0000000140164672: jz      short loc_140164688
 * 0000000140164674: test    byte ptr [rcx+2], 1
 * 0000000140164678: jz      short loc_140164688
 * 000000014016467A: call    KiCopyCounters
 * 000000014016467F: mov     rcx, gs:188h
 * 0000000140164688: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016468C: cmp     [rbp+0E8h+var_68], 0
 * 0000000140164694: jz      short loc_14016469B
 * 0000000140164696: call    KiRestoreDebugRegisterState
 * 000000014016469B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016469F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401646A3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401646A7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401646AB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401646AF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401646B3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401646B7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401646BB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401646BF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401646C3: movzx   eax, word ptr gs:2EC2h
 * 00000001401646CC: cmp     gs:2EBCh, ax
 * 00000001401646D5: jz      short loc_1401646E9
 * 00000001401646D7: mov     gs:2EBCh, ax
 * 00000001401646E0: mov     ecx, 48h ; 'H'
 * 00000001401646E5: xor     edx, edx
 * 00000001401646E7: wrmsr
 * 00000001401646E9: btr     word ptr gs:2EB8h, 2
 * 00000001401646F4: jnb     short loc_140164704
 * 00000001401646F6: mov     eax, 1
 * 00000001401646FB: xor     edx, edx
 * 00000001401646FD: mov     ecx, 49h ; 'I'
 * 0000000140164702: wrmsr
 * 0000000140164704: btr     word ptr gs:2EB8h, 5
 * 000000014016470F: jnb     loc_14016483A
 * 0000000140164715: call    loc_140164828
 * 000000014016471A: add     rsp, 8
 * 000000014016471E: call    loc_140164831
 * 0000000140164723: add     rsp, 8
 * 0000000140164727: call    loc_14016471A
 * 000000014016472C: add     rsp, 8
 * 0000000140164730: call    loc_140164723
 * 0000000140164735: add     rsp, 8
 * 0000000140164739: call    loc_14016472C
 * 000000014016473E: add     rsp, 8
 * 0000000140164742: call    loc_140164735
 * 0000000140164747: add     rsp, 8
 * 000000014016474B: call    loc_14016473E
 * 0000000140164750: add     rsp, 8
 * 0000000140164754: call    loc_140164747
 * 0000000140164759: add     rsp, 8
 * 000000014016475D: call    loc_140164750
 * 0000000140164762: add     rsp, 8
 * 0000000140164766: call    loc_140164759
 * 000000014016476B: add     rsp, 8
 * 000000014016476F: call    loc_140164762
 * 0000000140164774: add     rsp, 8
 * 0000000140164778: call    loc_14016476B
 * 000000014016477D: add     rsp, 8
 * 0000000140164781: call    loc_140164774
 * 0000000140164786: add     rsp, 8
 * 000000014016478A: call    loc_14016477D
 * 000000014016478F: add     rsp, 8
 * 0000000140164793: call    loc_140164786
 * 0000000140164798: add     rsp, 8
 * 000000014016479C: call    loc_14016478F
 * 00000001401647A1: add     rsp, 8
 * 00000001401647A5: call    loc_140164798
 * 00000001401647AA: add     rsp, 8
 * 00000001401647AE: call    loc_1401647A1
 * 00000001401647B3: add     rsp, 8
 * 00000001401647B7: call    loc_1401647AA
 * 00000001401647BC: add     rsp, 8
 * 00000001401647C0: call    loc_1401647B3
 * 00000001401647C5: add     rsp, 8
 * 00000001401647C9: call    loc_1401647BC
 * 00000001401647CE: add     rsp, 8
 * 00000001401647D2: call    loc_1401647C5
 * 00000001401647D7: add     rsp, 8
 * 00000001401647DB: call    loc_1401647CE
 * 00000001401647E0: add     rsp, 8
 * 00000001401647E4: call    loc_1401647D7
 * 00000001401647E9: add     rsp, 8
 * 00000001401647ED: call    loc_1401647E0
 * 00000001401647F2: add     rsp, 8
 * 00000001401647F6: call    loc_1401647E9
 * 00000001401647FB: add     rsp, 8
 * 00000001401647FF: call    loc_1401647F2
 * 0000000140164804: add     rsp, 8
 * 0000000140164808: call    loc_1401647FB
 * 000000014016480D: add     rsp, 8
 * 0000000140164811: call    loc_140164804
 * 0000000140164816: add     rsp, 8
 * 000000014016481A: call    loc_14016480D
 * 000000014016481F: add     rsp, 8
 * 0000000140164823: call    loc_140164816
 * 0000000140164828: add     rsp, 8
 * 000000014016482C: call    loc_14016481F
 * 0000000140164831: add     rsp, 8
 * 0000000140164835: mov     eax, 0DADAh
 * 000000014016483A: test    word ptr gs:2EB8h, 40h
 * 0000000140164845: jz      short loc_140164853
 * 0000000140164847: xor     eax, eax
 * 0000000140164849: xor     edx, edx
 * 000000014016484B: mov     ecx, 1
 * 0000000140164850: div     rcx
 * 0000000140164853: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164857: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016485B: mov     rax, [rbp+0E8h+var_138]
 * 000000014016485F: mov     rsp, rbp
 * 0000000140164862: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164869: add     rsp, 0E8h
 * 0000000140164870: test    cs:KiKvaShadow, 1
 * 0000000140164877: jz      short loc_14016487E
 * 0000000140164879: jmp     KiKernelExit
 * 000000014016487E: test    word ptr gs:2EB8h, 80h
 * 0000000140164889: jz      short loc_140164890
 * 000000014016488B: verw    [rsp+arg_18]
 * 0000000140164890: swapgs
 * 0000000140164893: iretq
 * 0000000140164895: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164899: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016489D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401648A1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401648A5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401648A9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401648AD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401648B1: mov     r11, [rbp+0E8h+var_108]
 * 00000001401648B5: mov     r10, [rbp+0E8h+var_110]
 * 00000001401648B9: mov     r9, [rbp+0E8h+var_118]
 * 00000001401648BD: mov     r8, [rbp+0E8h+var_120]
 * 00000001401648C1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401648C5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401648C9: mov     rax, [rbp+0E8h+var_138]
 * 00000001401648CD: mov     rsp, rbp
 * 00000001401648D0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401648D7: add     rsp, 0E8h
 * 00000001401648DE: iretq
 */
