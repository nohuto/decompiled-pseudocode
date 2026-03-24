/*
 * XREFs of KiVmbusInterrupt3 @ 0x140189530
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140274F00 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401E563C (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140189530
 * Reason: Hex-Rays returned no pseudocode for 0x140189530
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140189530: sub     rsp, 8
 * 0000000140189534: push    rbp
 * 0000000140189535: push    rsi
 * 0000000140189536: sub     rsp, 150h
 * 000000014018953D: lea     rbp, [rsp+80h]
 * 0000000140189545: mov     [rbp+0E8h+var_13D], 0
 * 0000000140189549: mov     [rbp+0E8h+var_138], rax
 * 000000014018954D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140189551: mov     [rbp+0E8h+var_128], rdx
 * 0000000140189555: mov     [rbp+0E8h+var_120], r8
 * 0000000140189559: mov     [rbp+0E8h+var_118], r9
 * 000000014018955D: mov     [rbp+0E8h+var_110], r10
 * 0000000140189561: mov     [rbp+0E8h+var_108], r11
 * 0000000140189565: test    [rbp+0E8h+arg_0], 1
 * 000000014018956C: jnz     short loc_14018959D
 * 000000014018956E: lfence
 * 0000000140189571: test    word ptr gs:2EB0h, 1
 * 000000014018957C: jnz     short loc_140189586
 * 000000014018957E: lfence
 * 0000000140189581: jmp     loc_140189779
 * 0000000140189586: movzx   eax, word ptr gs:2EB4h
 * 000000014018958F: mov     ecx, 48h ; 'H'
 * 0000000140189594: xor     edx, edx
 * 0000000140189596: wrmsr
 * 0000000140189598: jmp     loc_140189779
 * 000000014018959D: test    cs:KiKvaShadow, 1
 * 00000001401895A4: jnz     short loc_1401895A9
 * 00000001401895A6: swapgs
 * 00000001401895A9: lfence
 * 00000001401895AC: mov     r10, gs:188h
 * 00000001401895B5: mov     rcx, gs:188h
 * 00000001401895BE: mov     rcx, [rcx+220h]
 * 00000001401895C5: mov     rcx, [rcx+7A0h]
 * 00000001401895CC: mov     gs:2EA8h, rcx
 * 00000001401895D5: movzx   eax, word ptr gs:2EB6h
 * 00000001401895DE: cmp     gs:2EB4h, ax
 * 00000001401895E7: jz      short loc_1401895FB
 * 00000001401895E9: mov     gs:2EB4h, ax
 * 00000001401895F2: mov     ecx, 48h ; 'H'
 * 00000001401895F7: xor     edx, edx
 * 00000001401895F9: wrmsr
 * 00000001401895FB: movzx   edx, word ptr gs:2EB0h
 * 0000000140189604: test    edx, 8
 * 000000014018960A: jz      short loc_140189623
 * 000000014018960C: mov     eax, 1
 * 0000000140189611: xor     edx, edx
 * 0000000140189613: mov     ecx, 49h ; 'I'
 * 0000000140189618: wrmsr
 * 000000014018961A: movzx   edx, word ptr gs:2EB0h
 * 0000000140189623: test    edx, 2
 * 0000000140189629: jz      loc_140189754
 * 000000014018962F: call    loc_140189742
 * 0000000140189634: add     rsp, 8
 * 0000000140189638: call    loc_14018974B
 * 000000014018963D: add     rsp, 8
 * 0000000140189641: call    loc_140189634
 * 0000000140189646: add     rsp, 8
 * 000000014018964A: call    loc_14018963D
 * 000000014018964F: add     rsp, 8
 * 0000000140189653: call    loc_140189646
 * 0000000140189658: add     rsp, 8
 * 000000014018965C: call    loc_14018964F
 * 0000000140189661: add     rsp, 8
 * 0000000140189665: call    loc_140189658
 * 000000014018966A: add     rsp, 8
 * 000000014018966E: call    loc_140189661
 * 0000000140189673: add     rsp, 8
 * 0000000140189677: call    loc_14018966A
 * 000000014018967C: add     rsp, 8
 * 0000000140189680: call    loc_140189673
 * 0000000140189685: add     rsp, 8
 * 0000000140189689: call    loc_14018967C
 * 000000014018968E: add     rsp, 8
 * 0000000140189692: call    loc_140189685
 * 0000000140189697: add     rsp, 8
 * 000000014018969B: call    loc_14018968E
 * 00000001401896A0: add     rsp, 8
 * 00000001401896A4: call    loc_140189697
 * 00000001401896A9: add     rsp, 8
 * 00000001401896AD: call    loc_1401896A0
 * 00000001401896B2: add     rsp, 8
 * 00000001401896B6: call    loc_1401896A9
 * 00000001401896BB: add     rsp, 8
 * 00000001401896BF: call    loc_1401896B2
 * 00000001401896C4: add     rsp, 8
 * 00000001401896C8: call    loc_1401896BB
 * 00000001401896CD: add     rsp, 8
 * 00000001401896D1: call    loc_1401896C4
 * 00000001401896D6: add     rsp, 8
 * 00000001401896DA: call    loc_1401896CD
 * 00000001401896DF: add     rsp, 8
 * 00000001401896E3: call    loc_1401896D6
 * 00000001401896E8: add     rsp, 8
 * 00000001401896EC: call    loc_1401896DF
 * 00000001401896F1: add     rsp, 8
 * 00000001401896F5: call    loc_1401896E8
 * 00000001401896FA: add     rsp, 8
 * 00000001401896FE: call    loc_1401896F1
 * 0000000140189703: add     rsp, 8
 * 0000000140189707: call    loc_1401896FA
 * 000000014018970C: add     rsp, 8
 * 0000000140189710: call    loc_140189703
 * 0000000140189715: add     rsp, 8
 * 0000000140189719: call    loc_14018970C
 * 000000014018971E: add     rsp, 8
 * 0000000140189722: call    loc_140189715
 * 0000000140189727: add     rsp, 8
 * 000000014018972B: call    loc_14018971E
 * 0000000140189730: add     rsp, 8
 * 0000000140189734: call    loc_140189727
 * 0000000140189739: add     rsp, 8
 * 000000014018973D: call    loc_140189730
 * 0000000140189742: add     rsp, 8
 * 0000000140189746: call    loc_140189739
 * 000000014018974B: add     rsp, 8
 * 000000014018974F: mov     eax, 0DADAh
 * 0000000140189754: test    edx, 100h
 * 000000014018975A: jz      short loc_140189761
 * 000000014018975C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140189761: lfence
 * 0000000140189764: test    byte ptr [r10+3], 3
 * 0000000140189769: mov     [rbp+0E8h+var_68], 0
 * 0000000140189772: jz      short loc_140189779
 * 0000000140189774: call    KiSaveDebugRegisterState
 * 0000000140189779: cld
 * 000000014018977A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018977E: ldmxcsr dword ptr gs:180h
 * 0000000140189787: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018978B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018978F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140189793: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140189797: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018979B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018979F: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401897A8: jz      short loc_1401897AF
 * 00000001401897AA: call    KeWakeProcessor
 * 00000001401897AF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401897B6: cmp     rax, [rbp+0E8h]
 * 00000001401897BD: jnb     short loc_1401897D8
 * 00000001401897BF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401897C6: cmp     rax, [rbp+0E8h]
 * 00000001401897CD: jb      short loc_1401897D8
 * 00000001401897CF: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401897D3: call    KiCheckForSListAddress
 * 00000001401897D8: xor     esi, esi
 * 00000001401897DA: inc     dword ptr gs:5C80h
 * 00000001401897E2: mov     ecx, 3
 * 00000001401897E7: mov     rax, cr8
 * 00000001401897EB: mov     cr8, rcx
 * 00000001401897EF: mov     [rbp+0E8h+var_13F], al
 * 00000001401897F2: mov     [rbp+0E8h+var_148], 0
 * 00000001401897F9: mov     rcx, gs:20h
 * 0000000140189802: inc     byte ptr [rcx+20h]
 * 0000000140189805: cmp     byte ptr [rcx+20h], 1
 * 0000000140189809: jnz     loc_14018989F
 * 000000014018980F: rdtsc
 * 0000000140189811: shl     rdx, 20h
 * 0000000140189815: or      rax, rdx
 * 0000000140189818: mov     edx, [rcx+62A0h]
 * 000000014018981E: mov     r11d, edx
 * 0000000140189821: and     edx, 7FFh
 * 0000000140189827: shr     edx, 5
 * 000000014018982A: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140189832: mov     edx, [r10]
 * 0000000140189835: ror     edx, 5
 * 0000000140189838: xor     edx, eax
 * 000000014018983A: mov     [r10], edx
 * 000000014018983D: add     r11d, 1
 * 0000000140189841: mov     [rcx+62A0h], r11d
 * 0000000140189848: and     r11d, 3FFh
 * 000000014018984F: jnz     short loc_140189858
 * 0000000140189851: mov     [rbp+0E8h+var_148], 1
 * 0000000140189858: mov     r8, [rcx+8]
 * 000000014018985C: sub     rax, [rcx+5B38h]
 * 0000000140189863: add     [r8+48h], rax
 * 0000000140189867: mov     edx, [r8+50h]
 * 000000014018986B: add     [rcx+5B38h], rax
 * 0000000140189872: add     rdx, rax
 * 0000000140189875: mov     ecx, edx
 * 0000000140189877: shr     rdx, 20h
 * 000000014018987B: jz      short loc_140189880
 * 000000014018987D: or      ecx, 0FFFFFFFFh
 * 0000000140189880: mov     [r8+50h], ecx
 * 0000000140189884: test    byte ptr [r8+2], 3Eh
 * 0000000140189889: jz      short loc_14018989F
 * 000000014018988B: mov     rdx, r8
 * 000000014018988E: mov     r8, rax
 * 0000000140189891: mov     rcx, gs:20h
 * 000000014018989A: call    KiEndThreadAccountingPeriod
 * 000000014018989F: sti
 * 00000001401898A0: cmp     [rbp+0E8h+var_148], 0
 * 00000001401898A4: jz      short loc_1401898B4
 * 00000001401898A6: mov     rcx, gs:20h
 * 00000001401898AF: call    KiEntropyQueueDpc
 * 00000001401898B4: mov     ecx, 4
 * 00000001401898B9: call    HvlRouteInterrupt
 * 00000001401898BE: cli
 * 00000001401898BF: mov     rcx, gs:20h
 * 00000001401898C8: cmp     byte ptr [rcx+20h], 1
 * 00000001401898CC: ja      short loc_140189942
 * 00000001401898CE: rdtsc
 * 00000001401898D0: shl     rdx, 20h
 * 00000001401898D4: or      rax, rdx
 * 00000001401898D7: sub     rax, [rcx+5B38h]
 * 00000001401898DE: add     [rcx+5BF8h], rax
 * 00000001401898E5: add     [rcx+5B38h], rax
 * 00000001401898EC: mov     r8, rax
 * 00000001401898EF: mov     rax, [rcx+8]
 * 00000001401898F3: test    byte ptr [rax+2], 32h
 * 00000001401898F7: jz      short loc_14018990C
 * 00000001401898F9: xor     edx, edx
 * 00000001401898FB: call    KiBeginThreadAccountingPeriod
 * 0000000140189900: mov     rcx, gs:20h
 * 0000000140189909: inc     byte ptr [rcx+20h]
 * 000000014018990C: mov     dl, [rcx+6]
 * 000000014018990F: and     byte ptr [rcx+6], 0
 * 0000000140189913: cmp     byte ptr [rcx+7], 0
 * 0000000140189917: jnz     short loc_140189942
 * 0000000140189919: test    dl, dl
 * 000000014018991B: jz      short loc_140189942
 * 000000014018991D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140189921: jnb     short loc_14018992E
 * 0000000140189923: and     byte ptr [rcx+20h], 0
 * 0000000140189927: call    KiDpcInterruptBypass
 * 000000014018992C: jmp     short loc_140189945
 * 000000014018992E: mov     ecx, 2
 * 0000000140189933: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140189939: mov     rcx, gs:20h
 * 0000000140189942: dec     byte ptr [rcx+20h]
 * 0000000140189945: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140189949: mov     cr8, rcx
 * 000000014018994D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140189954: cli
 * 0000000140189955: test    [rbp+0E8h+arg_0], 1
 * 000000014018995C: jz      loc_140189BBF
 * 0000000140189962: mov     rcx, gs:188h
 * 000000014018996B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140189972: jz      short loc_14018998D
 * 0000000140189974: mov     ecx, 1
 * 0000000140189979: mov     cr8, rcx
 * 000000014018997D: sti
 * 000000014018997E: call    KiInitiateUserApc
 * 0000000140189983: cli
 * 0000000140189984: mov     ecx, 0
 * 0000000140189989: mov     cr8, rcx
 * 000000014018998D: mov     rcx, gs:188h
 * 0000000140189996: test    dword ptr [rcx], 40010000h
 * 000000014018999C: jz      short loc_1401899B2
 * 000000014018999E: test    byte ptr [rcx+2], 1
 * 00000001401899A2: jz      short loc_1401899B2
 * 00000001401899A4: call    KiCopyCounters
 * 00000001401899A9: mov     rcx, gs:188h
 * 00000001401899B2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401899B6: cmp     [rbp+0E8h+var_68], 0
 * 00000001401899BE: jz      short loc_1401899C5
 * 00000001401899C0: call    KiRestoreDebugRegisterState
 * 00000001401899C5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401899C9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401899CD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401899D1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401899D5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401899D9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401899DD: mov     r11, [rbp+0E8h+var_108]
 * 00000001401899E1: mov     r10, [rbp+0E8h+var_110]
 * 00000001401899E5: mov     r9, [rbp+0E8h+var_118]
 * 00000001401899E9: mov     r8, [rbp+0E8h+var_120]
 * 00000001401899ED: movzx   eax, word ptr gs:2EBAh
 * 00000001401899F6: cmp     gs:2EB4h, ax
 * 00000001401899FF: jz      short loc_140189A13
 * 0000000140189A01: mov     gs:2EB4h, ax
 * 0000000140189A0A: mov     ecx, 48h ; 'H'
 * 0000000140189A0F: xor     edx, edx
 * 0000000140189A11: wrmsr
 * 0000000140189A13: btr     word ptr gs:2EB0h, 2
 * 0000000140189A1E: jnb     short loc_140189A2E
 * 0000000140189A20: mov     eax, 1
 * 0000000140189A25: xor     edx, edx
 * 0000000140189A27: mov     ecx, 49h ; 'I'
 * 0000000140189A2C: wrmsr
 * 0000000140189A2E: btr     word ptr gs:2EB0h, 5
 * 0000000140189A39: jnb     loc_140189B64
 * 0000000140189A3F: call    loc_140189B52
 * 0000000140189A44: add     rsp, 8
 * 0000000140189A48: call    loc_140189B5B
 * 0000000140189A4D: add     rsp, 8
 * 0000000140189A51: call    loc_140189A44
 * 0000000140189A56: add     rsp, 8
 * 0000000140189A5A: call    loc_140189A4D
 * 0000000140189A5F: add     rsp, 8
 * 0000000140189A63: call    loc_140189A56
 * 0000000140189A68: add     rsp, 8
 * 0000000140189A6C: call    loc_140189A5F
 * 0000000140189A71: add     rsp, 8
 * 0000000140189A75: call    loc_140189A68
 * 0000000140189A7A: add     rsp, 8
 * 0000000140189A7E: call    loc_140189A71
 * 0000000140189A83: add     rsp, 8
 * 0000000140189A87: call    loc_140189A7A
 * 0000000140189A8C: add     rsp, 8
 * 0000000140189A90: call    loc_140189A83
 * 0000000140189A95: add     rsp, 8
 * 0000000140189A99: call    loc_140189A8C
 * 0000000140189A9E: add     rsp, 8
 * 0000000140189AA2: call    loc_140189A95
 * 0000000140189AA7: add     rsp, 8
 * 0000000140189AAB: call    loc_140189A9E
 * 0000000140189AB0: add     rsp, 8
 * 0000000140189AB4: call    loc_140189AA7
 * 0000000140189AB9: add     rsp, 8
 * 0000000140189ABD: call    loc_140189AB0
 * 0000000140189AC2: add     rsp, 8
 * 0000000140189AC6: call    loc_140189AB9
 * 0000000140189ACB: add     rsp, 8
 * 0000000140189ACF: call    loc_140189AC2
 * 0000000140189AD4: add     rsp, 8
 * 0000000140189AD8: call    loc_140189ACB
 * 0000000140189ADD: add     rsp, 8
 * 0000000140189AE1: call    loc_140189AD4
 * 0000000140189AE6: add     rsp, 8
 * 0000000140189AEA: call    loc_140189ADD
 * 0000000140189AEF: add     rsp, 8
 * 0000000140189AF3: call    loc_140189AE6
 * 0000000140189AF8: add     rsp, 8
 * 0000000140189AFC: call    loc_140189AEF
 * 0000000140189B01: add     rsp, 8
 * 0000000140189B05: call    loc_140189AF8
 * 0000000140189B0A: add     rsp, 8
 * 0000000140189B0E: call    loc_140189B01
 * 0000000140189B13: add     rsp, 8
 * 0000000140189B17: call    loc_140189B0A
 * 0000000140189B1C: add     rsp, 8
 * 0000000140189B20: call    loc_140189B13
 * 0000000140189B25: add     rsp, 8
 * 0000000140189B29: call    loc_140189B1C
 * 0000000140189B2E: add     rsp, 8
 * 0000000140189B32: call    loc_140189B25
 * 0000000140189B37: add     rsp, 8
 * 0000000140189B3B: call    loc_140189B2E
 * 0000000140189B40: add     rsp, 8
 * 0000000140189B44: call    loc_140189B37
 * 0000000140189B49: add     rsp, 8
 * 0000000140189B4D: call    loc_140189B40
 * 0000000140189B52: add     rsp, 8
 * 0000000140189B56: call    loc_140189B49
 * 0000000140189B5B: add     rsp, 8
 * 0000000140189B5F: mov     eax, 0DADAh
 * 0000000140189B64: test    word ptr gs:2EB0h, 40h
 * 0000000140189B6F: jz      short loc_140189B7D
 * 0000000140189B71: xor     eax, eax
 * 0000000140189B73: xor     edx, edx
 * 0000000140189B75: mov     ecx, 1
 * 0000000140189B7A: div     rcx
 * 0000000140189B7D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140189B81: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140189B85: mov     rax, [rbp+0E8h+var_138]
 * 0000000140189B89: mov     rsp, rbp
 * 0000000140189B8C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140189B93: add     rsp, 0E8h
 * 0000000140189B9A: test    cs:KiKvaShadow, 1
 * 0000000140189BA1: jz      short loc_140189BA8
 * 0000000140189BA3: jmp     KiKernelExit
 * 0000000140189BA8: test    word ptr gs:2EB0h, 80h
 * 0000000140189BB3: jz      short loc_140189BBA
 * 0000000140189BB5: verw    [rsp+arg_18]
 * 0000000140189BBA: swapgs
 * 0000000140189BBD: iretq
 * 0000000140189BBF: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140189BC3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140189BC7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140189BCB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140189BCF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140189BD3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140189BD7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140189BDB: mov     r11, [rbp+0E8h+var_108]
 * 0000000140189BDF: mov     r10, [rbp+0E8h+var_110]
 * 0000000140189BE3: mov     r9, [rbp+0E8h+var_118]
 * 0000000140189BE7: mov     r8, [rbp+0E8h+var_120]
 * 0000000140189BEB: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140189BEF: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140189BF3: mov     rax, [rbp+0E8h+var_138]
 * 0000000140189BF7: mov     rsp, rbp
 * 0000000140189BFA: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140189C01: add     rsp, 0E8h
 * 0000000140189C08: iretq
 */
