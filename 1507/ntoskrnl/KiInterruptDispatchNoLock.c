/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140184440
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140183E70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140184440
 * Reason: Hex-Rays returned no pseudocode for 0x140184440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140184440: mov     rdx, rsp
 * 0000000140184443: mov     rcx, gs:6418h
 * 000000014018444C: lea     rax, [rcx-6000h]
 * 0000000140184453: cmp     rax, rsp
 * 0000000140184456: ja      short loc_14018445D
 * 0000000140184458: cmp     rsp, rcx
 * 000000014018445B: jb      short loc_140184469
 * 000000014018445D: cmp     cs:KiBugCheckActive, 0
 * 0000000140184464: jnz     short loc_140184469
 * 0000000140184466: mov     rsp, rcx
 * 0000000140184469: sub     rsp, 20h
 * 000000014018446D: mov     [rsp+20h+var_10], rdx
 * 0000000140184472: call    KiInterruptSubDispatchNoLock
 * 0000000140184477: mov     rsp, [rsp+20h+var_10]
 * 000000014018447C: mov     rcx, rsi
 * 000000014018447F: call    HalPerformEndOfInterrupt_0
 * 0000000140184484: mov     rcx, gs:20h
 * 000000014018448D: cmp     byte ptr [rcx+20h], 1
 * 0000000140184491: ja      short loc_140184507
 * 0000000140184493: rdtsc
 * 0000000140184495: shl     rdx, 20h
 * 0000000140184499: or      rax, rdx
 * 000000014018449C: sub     rax, [rcx+5B38h]
 * 00000001401844A3: add     [rcx+5BF8h], rax
 * 00000001401844AA: add     [rcx+5B38h], rax
 * 00000001401844B1: mov     r8, rax
 * 00000001401844B4: mov     rax, [rcx+8]
 * 00000001401844B8: test    byte ptr [rax+2], 32h
 * 00000001401844BC: jz      short loc_1401844D1
 * 00000001401844BE: xor     edx, edx
 * 00000001401844C0: call    KiBeginThreadAccountingPeriod
 * 00000001401844C5: mov     rcx, gs:20h
 * 00000001401844CE: inc     byte ptr [rcx+20h]
 * 00000001401844D1: mov     dl, [rcx+6]
 * 00000001401844D4: and     byte ptr [rcx+6], 0
 * 00000001401844D8: cmp     byte ptr [rcx+7], 0
 * 00000001401844DC: jnz     short loc_140184507
 * 00000001401844DE: test    dl, dl
 * 00000001401844E0: jz      short loc_140184507
 * 00000001401844E2: cmp     byte ptr [rbp-57h], 2
 * 00000001401844E6: jnb     short loc_1401844F3
 * 00000001401844E8: and     byte ptr [rcx+20h], 0
 * 00000001401844EC: call    KiDpcInterruptBypass
 * 00000001401844F1: jmp     short loc_14018450A
 * 00000001401844F3: mov     ecx, 2
 * 00000001401844F8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401844FE: mov     rcx, gs:20h
 * 0000000140184507: dec     byte ptr [rcx+20h]
 * 000000014018450A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018450E: mov     cr8, rcx
 * 0000000140184512: mov     rsi, [rbp+0D0h]
 * 0000000140184519: test    byte ptr [rbp+0F0h], 1
 * 0000000140184520: jz      loc_140184783
 * 0000000140184526: mov     rcx, gs:188h
 * 000000014018452F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140184536: jz      short loc_140184551
 * 0000000140184538: mov     ecx, 1
 * 000000014018453D: mov     cr8, rcx
 * 0000000140184541: sti
 * 0000000140184542: call    KiInitiateUserApc
 * 0000000140184547: cli
 * 0000000140184548: mov     ecx, 0
 * 000000014018454D: mov     cr8, rcx
 * 0000000140184551: mov     rcx, gs:188h
 * 000000014018455A: test    dword ptr [rcx], 40010000h
 * 0000000140184560: jz      short loc_140184576
 * 0000000140184562: test    byte ptr [rcx+2], 1
 * 0000000140184566: jz      short loc_140184576
 * 0000000140184568: call    KiCopyCounters
 * 000000014018456D: mov     rcx, gs:188h
 * 0000000140184576: ldmxcsr dword ptr [rbp-54h]
 * 000000014018457A: cmp     word ptr [rbp+80h], 0
 * 0000000140184582: jz      short loc_140184589
 * 0000000140184584: call    KiRestoreDebugRegisterState
 * 0000000140184589: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018458D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140184591: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184595: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184599: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018459D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401845A1: mov     r11, [rbp-20h]
 * 00000001401845A5: mov     r10, [rbp-28h]
 * 00000001401845A9: mov     r9, [rbp-30h]
 * 00000001401845AD: mov     r8, [rbp-38h]
 * 00000001401845B1: movzx   eax, word ptr gs:2EBAh
 * 00000001401845BA: cmp     gs:2EB4h, ax
 * 00000001401845C3: jz      short loc_1401845D7
 * 00000001401845C5: mov     gs:2EB4h, ax
 * 00000001401845CE: mov     ecx, 48h ; 'H'
 * 00000001401845D3: xor     edx, edx
 * 00000001401845D5: wrmsr
 * 00000001401845D7: btr     word ptr gs:2EB0h, 2
 * 00000001401845E2: jnb     short loc_1401845F2
 * 00000001401845E4: mov     eax, 1
 * 00000001401845E9: xor     edx, edx
 * 00000001401845EB: mov     ecx, 49h ; 'I'
 * 00000001401845F0: wrmsr
 * 00000001401845F2: btr     word ptr gs:2EB0h, 5
 * 00000001401845FD: jnb     loc_140184728
 * 0000000140184603: call    loc_140184716
 * 0000000140184608: add     rsp, 8
 * 000000014018460C: call    loc_14018471F
 * 0000000140184611: add     rsp, 8
 * 0000000140184615: call    loc_140184608
 * 000000014018461A: add     rsp, 8
 * 000000014018461E: call    loc_140184611
 * 0000000140184623: add     rsp, 8
 * 0000000140184627: call    loc_14018461A
 * 000000014018462C: add     rsp, 8
 * 0000000140184630: call    loc_140184623
 * 0000000140184635: add     rsp, 8
 * 0000000140184639: call    loc_14018462C
 * 000000014018463E: add     rsp, 8
 * 0000000140184642: call    loc_140184635
 * 0000000140184647: add     rsp, 8
 * 000000014018464B: call    loc_14018463E
 * 0000000140184650: add     rsp, 8
 * 0000000140184654: call    loc_140184647
 * 0000000140184659: add     rsp, 8
 * 000000014018465D: call    loc_140184650
 * 0000000140184662: add     rsp, 8
 * 0000000140184666: call    loc_140184659
 * 000000014018466B: add     rsp, 8
 * 000000014018466F: call    loc_140184662
 * 0000000140184674: add     rsp, 8
 * 0000000140184678: call    loc_14018466B
 * 000000014018467D: add     rsp, 8
 * 0000000140184681: call    loc_140184674
 * 0000000140184686: add     rsp, 8
 * 000000014018468A: call    loc_14018467D
 * 000000014018468F: add     rsp, 8
 * 0000000140184693: call    loc_140184686
 * 0000000140184698: add     rsp, 8
 * 000000014018469C: call    loc_14018468F
 * 00000001401846A1: add     rsp, 8
 * 00000001401846A5: call    loc_140184698
 * 00000001401846AA: add     rsp, 8
 * 00000001401846AE: call    loc_1401846A1
 * 00000001401846B3: add     rsp, 8
 * 00000001401846B7: call    loc_1401846AA
 * 00000001401846BC: add     rsp, 8
 * 00000001401846C0: call    loc_1401846B3
 * 00000001401846C5: add     rsp, 8
 * 00000001401846C9: call    loc_1401846BC
 * 00000001401846CE: add     rsp, 8
 * 00000001401846D2: call    loc_1401846C5
 * 00000001401846D7: add     rsp, 8
 * 00000001401846DB: call    loc_1401846CE
 * 00000001401846E0: add     rsp, 8
 * 00000001401846E4: call    loc_1401846D7
 * 00000001401846E9: add     rsp, 8
 * 00000001401846ED: call    loc_1401846E0
 * 00000001401846F2: add     rsp, 8
 * 00000001401846F6: call    loc_1401846E9
 * 00000001401846FB: add     rsp, 8
 * 00000001401846FF: call    loc_1401846F2
 * 0000000140184704: add     rsp, 8
 * 0000000140184708: call    loc_1401846FB
 * 000000014018470D: add     rsp, 8
 * 0000000140184711: call    loc_140184704
 * 0000000140184716: add     rsp, 8
 * 000000014018471A: call    loc_14018470D
 * 000000014018471F: add     rsp, 8
 * 0000000140184723: mov     eax, 0DADAh
 * 0000000140184728: test    word ptr gs:2EB0h, 40h
 * 0000000140184733: jz      short loc_140184741
 * 0000000140184735: xor     eax, eax
 * 0000000140184737: xor     edx, edx
 * 0000000140184739: mov     ecx, 1
 * 000000014018473E: div     rcx
 * 0000000140184741: mov     rdx, [rbp-40h]
 * 0000000140184745: mov     rcx, [rbp-48h]
 * 0000000140184749: mov     rax, [rbp-50h]
 * 000000014018474D: mov     rsp, rbp
 * 0000000140184750: mov     rbp, [rbp+0D8h]
 * 0000000140184757: add     rsp, 0E8h
 * 000000014018475E: test    cs:KiKvaShadow, 1
 * 0000000140184765: jz      short loc_14018476C
 * 0000000140184767: jmp     KiKernelExit
 * 000000014018476C: test    word ptr gs:2EB0h, 80h
 * 0000000140184777: jz      short loc_14018477E
 * 0000000140184779: verw    [rsp-1C8h+arg_1E0]
 * 000000014018477E: swapgs
 * 0000000140184781: iretq
 * 0000000140184783: ldmxcsr dword ptr [rbp-54h]
 * 0000000140184787: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018478B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014018478F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184793: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184797: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018479B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014018479F: mov     r11, [rbp-20h]
 * 00000001401847A3: mov     r10, [rbp-28h]
 * 00000001401847A7: mov     r9, [rbp-30h]
 * 00000001401847AB: mov     r8, [rbp-38h]
 * 00000001401847AF: mov     rdx, [rbp-40h]
 * 00000001401847B3: mov     rcx, [rbp-48h]
 * 00000001401847B7: mov     rax, [rbp-50h]
 * 00000001401847BB: mov     rsp, rbp
 * 00000001401847BE: mov     rbp, [rbp+0D8h]
 * 00000001401847C5: add     rsp, 0E8h
 * 00000001401847CC: iretq
 */
