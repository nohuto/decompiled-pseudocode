/*
 * XREFs of KiVmbusInterrupt2 @ 0x140188E50
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140274E80 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401E563C (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140188E50
 * Reason: Hex-Rays returned no pseudocode for 0x140188E50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140188E50: sub     rsp, 8
 * 0000000140188E54: push    rbp
 * 0000000140188E55: push    rsi
 * 0000000140188E56: sub     rsp, 150h
 * 0000000140188E5D: lea     rbp, [rsp+80h]
 * 0000000140188E65: mov     [rbp+0E8h+var_13D], 0
 * 0000000140188E69: mov     [rbp+0E8h+var_138], rax
 * 0000000140188E6D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140188E71: mov     [rbp+0E8h+var_128], rdx
 * 0000000140188E75: mov     [rbp+0E8h+var_120], r8
 * 0000000140188E79: mov     [rbp+0E8h+var_118], r9
 * 0000000140188E7D: mov     [rbp+0E8h+var_110], r10
 * 0000000140188E81: mov     [rbp+0E8h+var_108], r11
 * 0000000140188E85: test    [rbp+0E8h+arg_0], 1
 * 0000000140188E8C: jnz     short loc_140188EBD
 * 0000000140188E8E: lfence
 * 0000000140188E91: test    word ptr gs:2EB0h, 1
 * 0000000140188E9C: jnz     short loc_140188EA6
 * 0000000140188E9E: lfence
 * 0000000140188EA1: jmp     loc_140189099
 * 0000000140188EA6: movzx   eax, word ptr gs:2EB4h
 * 0000000140188EAF: mov     ecx, 48h ; 'H'
 * 0000000140188EB4: xor     edx, edx
 * 0000000140188EB6: wrmsr
 * 0000000140188EB8: jmp     loc_140189099
 * 0000000140188EBD: test    cs:KiKvaShadow, 1
 * 0000000140188EC4: jnz     short loc_140188EC9
 * 0000000140188EC6: swapgs
 * 0000000140188EC9: lfence
 * 0000000140188ECC: mov     r10, gs:188h
 * 0000000140188ED5: mov     rcx, gs:188h
 * 0000000140188EDE: mov     rcx, [rcx+220h]
 * 0000000140188EE5: mov     rcx, [rcx+7A0h]
 * 0000000140188EEC: mov     gs:2EA8h, rcx
 * 0000000140188EF5: movzx   eax, word ptr gs:2EB6h
 * 0000000140188EFE: cmp     gs:2EB4h, ax
 * 0000000140188F07: jz      short loc_140188F1B
 * 0000000140188F09: mov     gs:2EB4h, ax
 * 0000000140188F12: mov     ecx, 48h ; 'H'
 * 0000000140188F17: xor     edx, edx
 * 0000000140188F19: wrmsr
 * 0000000140188F1B: movzx   edx, word ptr gs:2EB0h
 * 0000000140188F24: test    edx, 8
 * 0000000140188F2A: jz      short loc_140188F43
 * 0000000140188F2C: mov     eax, 1
 * 0000000140188F31: xor     edx, edx
 * 0000000140188F33: mov     ecx, 49h ; 'I'
 * 0000000140188F38: wrmsr
 * 0000000140188F3A: movzx   edx, word ptr gs:2EB0h
 * 0000000140188F43: test    edx, 2
 * 0000000140188F49: jz      loc_140189074
 * 0000000140188F4F: call    loc_140189062
 * 0000000140188F54: add     rsp, 8
 * 0000000140188F58: call    loc_14018906B
 * 0000000140188F5D: add     rsp, 8
 * 0000000140188F61: call    loc_140188F54
 * 0000000140188F66: add     rsp, 8
 * 0000000140188F6A: call    loc_140188F5D
 * 0000000140188F6F: add     rsp, 8
 * 0000000140188F73: call    loc_140188F66
 * 0000000140188F78: add     rsp, 8
 * 0000000140188F7C: call    loc_140188F6F
 * 0000000140188F81: add     rsp, 8
 * 0000000140188F85: call    loc_140188F78
 * 0000000140188F8A: add     rsp, 8
 * 0000000140188F8E: call    loc_140188F81
 * 0000000140188F93: add     rsp, 8
 * 0000000140188F97: call    loc_140188F8A
 * 0000000140188F9C: add     rsp, 8
 * 0000000140188FA0: call    loc_140188F93
 * 0000000140188FA5: add     rsp, 8
 * 0000000140188FA9: call    loc_140188F9C
 * 0000000140188FAE: add     rsp, 8
 * 0000000140188FB2: call    loc_140188FA5
 * 0000000140188FB7: add     rsp, 8
 * 0000000140188FBB: call    loc_140188FAE
 * 0000000140188FC0: add     rsp, 8
 * 0000000140188FC4: call    loc_140188FB7
 * 0000000140188FC9: add     rsp, 8
 * 0000000140188FCD: call    loc_140188FC0
 * 0000000140188FD2: add     rsp, 8
 * 0000000140188FD6: call    loc_140188FC9
 * 0000000140188FDB: add     rsp, 8
 * 0000000140188FDF: call    loc_140188FD2
 * 0000000140188FE4: add     rsp, 8
 * 0000000140188FE8: call    loc_140188FDB
 * 0000000140188FED: add     rsp, 8
 * 0000000140188FF1: call    loc_140188FE4
 * 0000000140188FF6: add     rsp, 8
 * 0000000140188FFA: call    loc_140188FED
 * 0000000140188FFF: add     rsp, 8
 * 0000000140189003: call    loc_140188FF6
 * 0000000140189008: add     rsp, 8
 * 000000014018900C: call    loc_140188FFF
 * 0000000140189011: add     rsp, 8
 * 0000000140189015: call    loc_140189008
 * 000000014018901A: add     rsp, 8
 * 000000014018901E: call    loc_140189011
 * 0000000140189023: add     rsp, 8
 * 0000000140189027: call    loc_14018901A
 * 000000014018902C: add     rsp, 8
 * 0000000140189030: call    loc_140189023
 * 0000000140189035: add     rsp, 8
 * 0000000140189039: call    loc_14018902C
 * 000000014018903E: add     rsp, 8
 * 0000000140189042: call    loc_140189035
 * 0000000140189047: add     rsp, 8
 * 000000014018904B: call    loc_14018903E
 * 0000000140189050: add     rsp, 8
 * 0000000140189054: call    loc_140189047
 * 0000000140189059: add     rsp, 8
 * 000000014018905D: call    loc_140189050
 * 0000000140189062: add     rsp, 8
 * 0000000140189066: call    loc_140189059
 * 000000014018906B: add     rsp, 8
 * 000000014018906F: mov     eax, 0DADAh
 * 0000000140189074: test    edx, 100h
 * 000000014018907A: jz      short loc_140189081
 * 000000014018907C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140189081: lfence
 * 0000000140189084: test    byte ptr [r10+3], 3
 * 0000000140189089: mov     [rbp+0E8h+var_68], 0
 * 0000000140189092: jz      short loc_140189099
 * 0000000140189094: call    KiSaveDebugRegisterState
 * 0000000140189099: cld
 * 000000014018909A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018909E: ldmxcsr dword ptr gs:180h
 * 00000001401890A7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401890AB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401890AF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401890B3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401890B7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401890BB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401890BF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401890C8: jz      short loc_1401890CF
 * 00000001401890CA: call    KeWakeProcessor
 * 00000001401890CF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401890D6: cmp     rax, [rbp+0E8h]
 * 00000001401890DD: jnb     short loc_1401890F8
 * 00000001401890DF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401890E6: cmp     rax, [rbp+0E8h]
 * 00000001401890ED: jb      short loc_1401890F8
 * 00000001401890EF: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401890F3: call    KiCheckForSListAddress
 * 00000001401890F8: xor     esi, esi
 * 00000001401890FA: inc     dword ptr gs:5C80h
 * 0000000140189102: mov     ecx, 3
 * 0000000140189107: mov     rax, cr8
 * 000000014018910B: mov     cr8, rcx
 * 000000014018910F: mov     [rbp+0E8h+var_13F], al
 * 0000000140189112: mov     [rbp+0E8h+var_148], 0
 * 0000000140189119: mov     rcx, gs:20h
 * 0000000140189122: inc     byte ptr [rcx+20h]
 * 0000000140189125: cmp     byte ptr [rcx+20h], 1
 * 0000000140189129: jnz     loc_1401891BF
 * 000000014018912F: rdtsc
 * 0000000140189131: shl     rdx, 20h
 * 0000000140189135: or      rax, rdx
 * 0000000140189138: mov     edx, [rcx+62A0h]
 * 000000014018913E: mov     r11d, edx
 * 0000000140189141: and     edx, 7FFh
 * 0000000140189147: shr     edx, 5
 * 000000014018914A: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140189152: mov     edx, [r10]
 * 0000000140189155: ror     edx, 5
 * 0000000140189158: xor     edx, eax
 * 000000014018915A: mov     [r10], edx
 * 000000014018915D: add     r11d, 1
 * 0000000140189161: mov     [rcx+62A0h], r11d
 * 0000000140189168: and     r11d, 3FFh
 * 000000014018916F: jnz     short loc_140189178
 * 0000000140189171: mov     [rbp+0E8h+var_148], 1
 * 0000000140189178: mov     r8, [rcx+8]
 * 000000014018917C: sub     rax, [rcx+5B38h]
 * 0000000140189183: add     [r8+48h], rax
 * 0000000140189187: mov     edx, [r8+50h]
 * 000000014018918B: add     [rcx+5B38h], rax
 * 0000000140189192: add     rdx, rax
 * 0000000140189195: mov     ecx, edx
 * 0000000140189197: shr     rdx, 20h
 * 000000014018919B: jz      short loc_1401891A0
 * 000000014018919D: or      ecx, 0FFFFFFFFh
 * 00000001401891A0: mov     [r8+50h], ecx
 * 00000001401891A4: test    byte ptr [r8+2], 3Eh
 * 00000001401891A9: jz      short loc_1401891BF
 * 00000001401891AB: mov     rdx, r8
 * 00000001401891AE: mov     r8, rax
 * 00000001401891B1: mov     rcx, gs:20h
 * 00000001401891BA: call    KiEndThreadAccountingPeriod
 * 00000001401891BF: sti
 * 00000001401891C0: cmp     [rbp+0E8h+var_148], 0
 * 00000001401891C4: jz      short loc_1401891D4
 * 00000001401891C6: mov     rcx, gs:20h
 * 00000001401891CF: call    KiEntropyQueueDpc
 * 00000001401891D4: mov     ecx, 3
 * 00000001401891D9: call    HvlRouteInterrupt
 * 00000001401891DE: cli
 * 00000001401891DF: mov     rcx, gs:20h
 * 00000001401891E8: cmp     byte ptr [rcx+20h], 1
 * 00000001401891EC: ja      short loc_140189262
 * 00000001401891EE: rdtsc
 * 00000001401891F0: shl     rdx, 20h
 * 00000001401891F4: or      rax, rdx
 * 00000001401891F7: sub     rax, [rcx+5B38h]
 * 00000001401891FE: add     [rcx+5BF8h], rax
 * 0000000140189205: add     [rcx+5B38h], rax
 * 000000014018920C: mov     r8, rax
 * 000000014018920F: mov     rax, [rcx+8]
 * 0000000140189213: test    byte ptr [rax+2], 32h
 * 0000000140189217: jz      short loc_14018922C
 * 0000000140189219: xor     edx, edx
 * 000000014018921B: call    KiBeginThreadAccountingPeriod
 * 0000000140189220: mov     rcx, gs:20h
 * 0000000140189229: inc     byte ptr [rcx+20h]
 * 000000014018922C: mov     dl, [rcx+6]
 * 000000014018922F: and     byte ptr [rcx+6], 0
 * 0000000140189233: cmp     byte ptr [rcx+7], 0
 * 0000000140189237: jnz     short loc_140189262
 * 0000000140189239: test    dl, dl
 * 000000014018923B: jz      short loc_140189262
 * 000000014018923D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140189241: jnb     short loc_14018924E
 * 0000000140189243: and     byte ptr [rcx+20h], 0
 * 0000000140189247: call    KiDpcInterruptBypass
 * 000000014018924C: jmp     short loc_140189265
 * 000000014018924E: mov     ecx, 2
 * 0000000140189253: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140189259: mov     rcx, gs:20h
 * 0000000140189262: dec     byte ptr [rcx+20h]
 * 0000000140189265: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140189269: mov     cr8, rcx
 * 000000014018926D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140189274: cli
 * 0000000140189275: test    [rbp+0E8h+arg_0], 1
 * 000000014018927C: jz      loc_1401894DF
 * 0000000140189282: mov     rcx, gs:188h
 * 000000014018928B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140189292: jz      short loc_1401892AD
 * 0000000140189294: mov     ecx, 1
 * 0000000140189299: mov     cr8, rcx
 * 000000014018929D: sti
 * 000000014018929E: call    KiInitiateUserApc
 * 00000001401892A3: cli
 * 00000001401892A4: mov     ecx, 0
 * 00000001401892A9: mov     cr8, rcx
 * 00000001401892AD: mov     rcx, gs:188h
 * 00000001401892B6: test    dword ptr [rcx], 40010000h
 * 00000001401892BC: jz      short loc_1401892D2
 * 00000001401892BE: test    byte ptr [rcx+2], 1
 * 00000001401892C2: jz      short loc_1401892D2
 * 00000001401892C4: call    KiCopyCounters
 * 00000001401892C9: mov     rcx, gs:188h
 * 00000001401892D2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401892D6: cmp     [rbp+0E8h+var_68], 0
 * 00000001401892DE: jz      short loc_1401892E5
 * 00000001401892E0: call    KiRestoreDebugRegisterState
 * 00000001401892E5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401892E9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401892ED: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401892F1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401892F5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401892F9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401892FD: mov     r11, [rbp+0E8h+var_108]
 * 0000000140189301: mov     r10, [rbp+0E8h+var_110]
 * 0000000140189305: mov     r9, [rbp+0E8h+var_118]
 * 0000000140189309: mov     r8, [rbp+0E8h+var_120]
 * 000000014018930D: movzx   eax, word ptr gs:2EBAh
 * 0000000140189316: cmp     gs:2EB4h, ax
 * 000000014018931F: jz      short loc_140189333
 * 0000000140189321: mov     gs:2EB4h, ax
 * 000000014018932A: mov     ecx, 48h ; 'H'
 * 000000014018932F: xor     edx, edx
 * 0000000140189331: wrmsr
 * 0000000140189333: btr     word ptr gs:2EB0h, 2
 * 000000014018933E: jnb     short loc_14018934E
 * 0000000140189340: mov     eax, 1
 * 0000000140189345: xor     edx, edx
 * 0000000140189347: mov     ecx, 49h ; 'I'
 * 000000014018934C: wrmsr
 * 000000014018934E: btr     word ptr gs:2EB0h, 5
 * 0000000140189359: jnb     loc_140189484
 * 000000014018935F: call    loc_140189472
 * 0000000140189364: add     rsp, 8
 * 0000000140189368: call    loc_14018947B
 * 000000014018936D: add     rsp, 8
 * 0000000140189371: call    loc_140189364
 * 0000000140189376: add     rsp, 8
 * 000000014018937A: call    loc_14018936D
 * 000000014018937F: add     rsp, 8
 * 0000000140189383: call    loc_140189376
 * 0000000140189388: add     rsp, 8
 * 000000014018938C: call    loc_14018937F
 * 0000000140189391: add     rsp, 8
 * 0000000140189395: call    loc_140189388
 * 000000014018939A: add     rsp, 8
 * 000000014018939E: call    loc_140189391
 * 00000001401893A3: add     rsp, 8
 * 00000001401893A7: call    loc_14018939A
 * 00000001401893AC: add     rsp, 8
 * 00000001401893B0: call    loc_1401893A3
 * 00000001401893B5: add     rsp, 8
 * 00000001401893B9: call    loc_1401893AC
 * 00000001401893BE: add     rsp, 8
 * 00000001401893C2: call    loc_1401893B5
 * 00000001401893C7: add     rsp, 8
 * 00000001401893CB: call    loc_1401893BE
 * 00000001401893D0: add     rsp, 8
 * 00000001401893D4: call    loc_1401893C7
 * 00000001401893D9: add     rsp, 8
 * 00000001401893DD: call    loc_1401893D0
 * 00000001401893E2: add     rsp, 8
 * 00000001401893E6: call    loc_1401893D9
 * 00000001401893EB: add     rsp, 8
 * 00000001401893EF: call    loc_1401893E2
 * 00000001401893F4: add     rsp, 8
 * 00000001401893F8: call    loc_1401893EB
 * 00000001401893FD: add     rsp, 8
 * 0000000140189401: call    loc_1401893F4
 * 0000000140189406: add     rsp, 8
 * 000000014018940A: call    loc_1401893FD
 * 000000014018940F: add     rsp, 8
 * 0000000140189413: call    loc_140189406
 * 0000000140189418: add     rsp, 8
 * 000000014018941C: call    loc_14018940F
 * 0000000140189421: add     rsp, 8
 * 0000000140189425: call    loc_140189418
 * 000000014018942A: add     rsp, 8
 * 000000014018942E: call    loc_140189421
 * 0000000140189433: add     rsp, 8
 * 0000000140189437: call    loc_14018942A
 * 000000014018943C: add     rsp, 8
 * 0000000140189440: call    loc_140189433
 * 0000000140189445: add     rsp, 8
 * 0000000140189449: call    loc_14018943C
 * 000000014018944E: add     rsp, 8
 * 0000000140189452: call    loc_140189445
 * 0000000140189457: add     rsp, 8
 * 000000014018945B: call    loc_14018944E
 * 0000000140189460: add     rsp, 8
 * 0000000140189464: call    loc_140189457
 * 0000000140189469: add     rsp, 8
 * 000000014018946D: call    loc_140189460
 * 0000000140189472: add     rsp, 8
 * 0000000140189476: call    loc_140189469
 * 000000014018947B: add     rsp, 8
 * 000000014018947F: mov     eax, 0DADAh
 * 0000000140189484: test    word ptr gs:2EB0h, 40h
 * 000000014018948F: jz      short loc_14018949D
 * 0000000140189491: xor     eax, eax
 * 0000000140189493: xor     edx, edx
 * 0000000140189495: mov     ecx, 1
 * 000000014018949A: div     rcx
 * 000000014018949D: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401894A1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401894A5: mov     rax, [rbp+0E8h+var_138]
 * 00000001401894A9: mov     rsp, rbp
 * 00000001401894AC: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401894B3: add     rsp, 0E8h
 * 00000001401894BA: test    cs:KiKvaShadow, 1
 * 00000001401894C1: jz      short loc_1401894C8
 * 00000001401894C3: jmp     KiKernelExit
 * 00000001401894C8: test    word ptr gs:2EB0h, 80h
 * 00000001401894D3: jz      short loc_1401894DA
 * 00000001401894D5: verw    [rsp+arg_18]
 * 00000001401894DA: swapgs
 * 00000001401894DD: iretq
 * 00000001401894DF: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401894E3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401894E7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401894EB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401894EF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401894F3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401894F7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401894FB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401894FF: mov     r10, [rbp+0E8h+var_110]
 * 0000000140189503: mov     r9, [rbp+0E8h+var_118]
 * 0000000140189507: mov     r8, [rbp+0E8h+var_120]
 * 000000014018950B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018950F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140189513: mov     rax, [rbp+0E8h+var_138]
 * 0000000140189517: mov     rsp, rbp
 * 000000014018951A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140189521: add     rsp, 0E8h
 * 0000000140189528: iretq
 */
