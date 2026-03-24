/*
 * XREFs of KiHvInterrupt @ 0x140162640
 * Callers:
 *     KiHvInterruptShadow @ 0x14023FD80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400AA984 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BAD00 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140162640
 * Reason: Hex-Rays returned no pseudocode for 0x140162640
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162640: sub     rsp, 8
 * 0000000140162644: push    rbp
 * 0000000140162645: push    rsi
 * 0000000140162646: sub     rsp, 150h
 * 000000014016264D: lea     rbp, [rsp+80h]
 * 0000000140162655: mov     [rbp+0E8h+var_13D], 0
 * 0000000140162659: mov     [rbp+0E8h+var_138], rax
 * 000000014016265D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162661: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162665: mov     [rbp+0E8h+var_120], r8
 * 0000000140162669: mov     [rbp+0E8h+var_118], r9
 * 000000014016266D: mov     [rbp+0E8h+var_110], r10
 * 0000000140162671: mov     [rbp+0E8h+var_108], r11
 * 0000000140162675: test    [rbp+0E8h+arg_0], 1
 * 000000014016267C: jnz     short loc_1401626AD
 * 000000014016267E: lfence
 * 0000000140162681: test    word ptr gs:2EB8h, 1
 * 000000014016268C: jnz     short loc_140162696
 * 000000014016268E: lfence
 * 0000000140162691: jmp     loc_140162889
 * 0000000140162696: movzx   eax, word ptr gs:2EBCh
 * 000000014016269F: mov     ecx, 48h ; 'H'
 * 00000001401626A4: xor     edx, edx
 * 00000001401626A6: wrmsr
 * 00000001401626A8: jmp     loc_140162889
 * 00000001401626AD: test    cs:KiKvaShadow, 1
 * 00000001401626B4: jnz     short loc_1401626B9
 * 00000001401626B6: swapgs
 * 00000001401626B9: lfence
 * 00000001401626BC: mov     r10, gs:188h
 * 00000001401626C5: mov     rcx, gs:188h
 * 00000001401626CE: mov     rcx, [rcx+220h]
 * 00000001401626D5: mov     rcx, [rcx+7B8h]
 * 00000001401626DC: mov     gs:2EB0h, rcx
 * 00000001401626E5: movzx   eax, word ptr gs:2EBEh
 * 00000001401626EE: cmp     gs:2EBCh, ax
 * 00000001401626F7: jz      short loc_14016270B
 * 00000001401626F9: mov     gs:2EBCh, ax
 * 0000000140162702: mov     ecx, 48h ; 'H'
 * 0000000140162707: xor     edx, edx
 * 0000000140162709: wrmsr
 * 000000014016270B: movzx   edx, word ptr gs:2EB8h
 * 0000000140162714: test    edx, 8
 * 000000014016271A: jz      short loc_140162733
 * 000000014016271C: mov     eax, 1
 * 0000000140162721: xor     edx, edx
 * 0000000140162723: mov     ecx, 49h ; 'I'
 * 0000000140162728: wrmsr
 * 000000014016272A: movzx   edx, word ptr gs:2EB8h
 * 0000000140162733: test    edx, 2
 * 0000000140162739: jz      loc_140162864
 * 000000014016273F: call    loc_140162852
 * 0000000140162744: add     rsp, 8
 * 0000000140162748: call    loc_14016285B
 * 000000014016274D: add     rsp, 8
 * 0000000140162751: call    loc_140162744
 * 0000000140162756: add     rsp, 8
 * 000000014016275A: call    loc_14016274D
 * 000000014016275F: add     rsp, 8
 * 0000000140162763: call    loc_140162756
 * 0000000140162768: add     rsp, 8
 * 000000014016276C: call    loc_14016275F
 * 0000000140162771: add     rsp, 8
 * 0000000140162775: call    loc_140162768
 * 000000014016277A: add     rsp, 8
 * 000000014016277E: call    loc_140162771
 * 0000000140162783: add     rsp, 8
 * 0000000140162787: call    loc_14016277A
 * 000000014016278C: add     rsp, 8
 * 0000000140162790: call    loc_140162783
 * 0000000140162795: add     rsp, 8
 * 0000000140162799: call    loc_14016278C
 * 000000014016279E: add     rsp, 8
 * 00000001401627A2: call    loc_140162795
 * 00000001401627A7: add     rsp, 8
 * 00000001401627AB: call    loc_14016279E
 * 00000001401627B0: add     rsp, 8
 * 00000001401627B4: call    loc_1401627A7
 * 00000001401627B9: add     rsp, 8
 * 00000001401627BD: call    loc_1401627B0
 * 00000001401627C2: add     rsp, 8
 * 00000001401627C6: call    loc_1401627B9
 * 00000001401627CB: add     rsp, 8
 * 00000001401627CF: call    loc_1401627C2
 * 00000001401627D4: add     rsp, 8
 * 00000001401627D8: call    loc_1401627CB
 * 00000001401627DD: add     rsp, 8
 * 00000001401627E1: call    loc_1401627D4
 * 00000001401627E6: add     rsp, 8
 * 00000001401627EA: call    loc_1401627DD
 * 00000001401627EF: add     rsp, 8
 * 00000001401627F3: call    loc_1401627E6
 * 00000001401627F8: add     rsp, 8
 * 00000001401627FC: call    loc_1401627EF
 * 0000000140162801: add     rsp, 8
 * 0000000140162805: call    loc_1401627F8
 * 000000014016280A: add     rsp, 8
 * 000000014016280E: call    loc_140162801
 * 0000000140162813: add     rsp, 8
 * 0000000140162817: call    loc_14016280A
 * 000000014016281C: add     rsp, 8
 * 0000000140162820: call    loc_140162813
 * 0000000140162825: add     rsp, 8
 * 0000000140162829: call    loc_14016281C
 * 000000014016282E: add     rsp, 8
 * 0000000140162832: call    loc_140162825
 * 0000000140162837: add     rsp, 8
 * 000000014016283B: call    loc_14016282E
 * 0000000140162840: add     rsp, 8
 * 0000000140162844: call    loc_140162837
 * 0000000140162849: add     rsp, 8
 * 000000014016284D: call    loc_140162840
 * 0000000140162852: add     rsp, 8
 * 0000000140162856: call    loc_140162849
 * 000000014016285B: add     rsp, 8
 * 000000014016285F: mov     eax, 0DADAh
 * 0000000140162864: test    edx, 100h
 * 000000014016286A: jz      short loc_140162871
 * 000000014016286C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140162871: lfence
 * 0000000140162874: test    byte ptr [r10+3], 3
 * 0000000140162879: mov     [rbp+0E8h+var_68], 0
 * 0000000140162882: jz      short loc_140162889
 * 0000000140162884: call    KiSaveDebugRegisterState
 * 0000000140162889: cld
 * 000000014016288A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016288E: ldmxcsr dword ptr gs:180h
 * 0000000140162897: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016289B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016289F: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401628A3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401628A7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401628AB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401628AF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401628B8: jz      short loc_1401628BF
 * 00000001401628BA: call    KeWakeProcessor
 * 00000001401628BF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401628C6: cmp     rax, [rbp+0E8h]
 * 00000001401628CD: jnb     short loc_1401628E8
 * 00000001401628CF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401628D6: cmp     rax, [rbp+0E8h]
 * 00000001401628DD: jb      short loc_1401628E8
 * 00000001401628DF: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401628E3: call    KiCheckForSListAddress
 * 00000001401628E8: xor     esi, esi
 * 00000001401628EA: inc     dword ptr gs:5C80h
 * 00000001401628F2: mov     ecx, 3
 * 00000001401628F7: mov     rax, cr8
 * 00000001401628FB: mov     cr8, rcx
 * 00000001401628FF: mov     [rbp+0E8h+var_13F], al
 * 0000000140162902: mov     [rbp+0E8h+var_148], 0
 * 0000000140162909: mov     rcx, gs:20h
 * 0000000140162912: inc     byte ptr [rcx+20h]
 * 0000000140162915: cmp     byte ptr [rcx+20h], 1
 * 0000000140162919: jnz     loc_1401629AF
 * 000000014016291F: rdtsc
 * 0000000140162921: shl     rdx, 20h
 * 0000000140162925: or      rax, rdx
 * 0000000140162928: mov     edx, [rcx+6320h]
 * 000000014016292E: mov     r11d, edx
 * 0000000140162931: and     edx, 7FFh
 * 0000000140162937: shr     edx, 5
 * 000000014016293A: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140162942: mov     edx, [r10]
 * 0000000140162945: ror     edx, 5
 * 0000000140162948: xor     edx, eax
 * 000000014016294A: mov     [r10], edx
 * 000000014016294D: add     r11d, 1
 * 0000000140162951: mov     [rcx+6320h], r11d
 * 0000000140162958: and     r11d, 3FFh
 * 000000014016295F: jnz     short loc_140162968
 * 0000000140162961: mov     [rbp+0E8h+var_148], 1
 * 0000000140162968: mov     r8, [rcx+8]
 * 000000014016296C: sub     rax, [rcx+5B38h]
 * 0000000140162973: add     [r8+48h], rax
 * 0000000140162977: mov     edx, [r8+50h]
 * 000000014016297B: add     [rcx+5B38h], rax
 * 0000000140162982: add     rdx, rax
 * 0000000140162985: mov     ecx, edx
 * 0000000140162987: shr     rdx, 20h
 * 000000014016298B: jz      short loc_140162990
 * 000000014016298D: or      ecx, 0FFFFFFFFh
 * 0000000140162990: mov     [r8+50h], ecx
 * 0000000140162994: test    byte ptr [r8+2], 3Eh
 * 0000000140162999: jz      short loc_1401629AF
 * 000000014016299B: mov     rdx, r8
 * 000000014016299E: mov     r8, rax
 * 00000001401629A1: mov     rcx, gs:20h
 * 00000001401629AA: call    KiEndThreadAccountingPeriod
 * 00000001401629AF: sti
 * 00000001401629B0: cmp     [rbp+0E8h+var_148], 0
 * 00000001401629B4: jz      short loc_1401629C4
 * 00000001401629B6: mov     rcx, gs:20h
 * 00000001401629BF: call    KiEntropyQueueDpc
 * 00000001401629C4: xor     ecx, ecx
 * 00000001401629C6: call    HvlRouteInterrupt
 * 00000001401629CB: test    cs:HvlEnlightenments, 1000h
 * 00000001401629D5: jz      short loc_1401629E1
 * 00000001401629D7: cli
 * 00000001401629D8: mov     rcx, rsi
 * 00000001401629DB: call    HalPerformEndOfInterrupt_0
 * 00000001401629E0: sti
 * 00000001401629E1: cli
 * 00000001401629E2: mov     rcx, gs:20h
 * 00000001401629EB: cmp     byte ptr [rcx+20h], 1
 * 00000001401629EF: ja      short loc_140162A65
 * 00000001401629F1: rdtsc
 * 00000001401629F3: shl     rdx, 20h
 * 00000001401629F7: or      rax, rdx
 * 00000001401629FA: sub     rax, [rcx+5B38h]
 * 0000000140162A01: add     [rcx+5BF8h], rax
 * 0000000140162A08: add     [rcx+5B38h], rax
 * 0000000140162A0F: mov     r8, rax
 * 0000000140162A12: mov     rax, [rcx+8]
 * 0000000140162A16: test    byte ptr [rax+2], 32h
 * 0000000140162A1A: jz      short loc_140162A2F
 * 0000000140162A1C: xor     edx, edx
 * 0000000140162A1E: call    KiBeginThreadAccountingPeriod
 * 0000000140162A23: mov     rcx, gs:20h
 * 0000000140162A2C: inc     byte ptr [rcx+20h]
 * 0000000140162A2F: mov     dl, [rcx+6]
 * 0000000140162A32: and     byte ptr [rcx+6], 0
 * 0000000140162A36: cmp     byte ptr [rcx+7], 0
 * 0000000140162A3A: jnz     short loc_140162A65
 * 0000000140162A3C: test    dl, dl
 * 0000000140162A3E: jz      short loc_140162A65
 * 0000000140162A40: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140162A44: jnb     short loc_140162A51
 * 0000000140162A46: and     byte ptr [rcx+20h], 0
 * 0000000140162A4A: call    KiDpcInterruptBypass
 * 0000000140162A4F: jmp     short loc_140162A68
 * 0000000140162A51: mov     ecx, 2
 * 0000000140162A56: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140162A5C: mov     rcx, gs:20h
 * 0000000140162A65: dec     byte ptr [rcx+20h]
 * 0000000140162A68: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140162A6C: mov     cr8, rcx
 * 0000000140162A70: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140162A77: cli
 * 0000000140162A78: test    [rbp+0E8h+arg_0], 1
 * 0000000140162A7F: jz      loc_140162CF8
 * 0000000140162A85: mov     rcx, gs:188h
 * 0000000140162A8E: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140162A95: jz      short loc_140162AB0
 * 0000000140162A97: mov     ecx, 1
 * 0000000140162A9C: mov     cr8, rcx
 * 0000000140162AA0: sti
 * 0000000140162AA1: call    KiInitiateUserApc
 * 0000000140162AA6: cli
 * 0000000140162AA7: mov     ecx, 0
 * 0000000140162AAC: mov     cr8, rcx
 * 0000000140162AB0: mov     rcx, gs:188h
 * 0000000140162AB9: test    dword ptr [rcx], 8000000h
 * 0000000140162ABF: jz      short loc_140162AC6
 * 0000000140162AC1: call    KiRestoreSetContextState
 * 0000000140162AC6: mov     rcx, gs:188h
 * 0000000140162ACF: test    dword ptr [rcx], 40010000h
 * 0000000140162AD5: jz      short loc_140162AEB
 * 0000000140162AD7: test    byte ptr [rcx+2], 1
 * 0000000140162ADB: jz      short loc_140162AEB
 * 0000000140162ADD: call    KiCopyCounters
 * 0000000140162AE2: mov     rcx, gs:188h
 * 0000000140162AEB: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162AEF: cmp     [rbp+0E8h+var_68], 0
 * 0000000140162AF7: jz      short loc_140162AFE
 * 0000000140162AF9: call    KiRestoreDebugRegisterState
 * 0000000140162AFE: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162B02: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140162B06: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140162B0A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162B0E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162B12: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140162B16: mov     r11, [rbp+0E8h+var_108]
 * 0000000140162B1A: mov     r10, [rbp+0E8h+var_110]
 * 0000000140162B1E: mov     r9, [rbp+0E8h+var_118]
 * 0000000140162B22: mov     r8, [rbp+0E8h+var_120]
 * 0000000140162B26: movzx   eax, word ptr gs:2EC2h
 * 0000000140162B2F: cmp     gs:2EBCh, ax
 * 0000000140162B38: jz      short loc_140162B4C
 * 0000000140162B3A: mov     gs:2EBCh, ax
 * 0000000140162B43: mov     ecx, 48h ; 'H'
 * 0000000140162B48: xor     edx, edx
 * 0000000140162B4A: wrmsr
 * 0000000140162B4C: btr     word ptr gs:2EB8h, 2
 * 0000000140162B57: jnb     short loc_140162B67
 * 0000000140162B59: mov     eax, 1
 * 0000000140162B5E: xor     edx, edx
 * 0000000140162B60: mov     ecx, 49h ; 'I'
 * 0000000140162B65: wrmsr
 * 0000000140162B67: btr     word ptr gs:2EB8h, 5
 * 0000000140162B72: jnb     loc_140162C9D
 * 0000000140162B78: call    loc_140162C8B
 * 0000000140162B7D: add     rsp, 8
 * 0000000140162B81: call    loc_140162C94
 * 0000000140162B86: add     rsp, 8
 * 0000000140162B8A: call    loc_140162B7D
 * 0000000140162B8F: add     rsp, 8
 * 0000000140162B93: call    loc_140162B86
 * 0000000140162B98: add     rsp, 8
 * 0000000140162B9C: call    loc_140162B8F
 * 0000000140162BA1: add     rsp, 8
 * 0000000140162BA5: call    loc_140162B98
 * 0000000140162BAA: add     rsp, 8
 * 0000000140162BAE: call    loc_140162BA1
 * 0000000140162BB3: add     rsp, 8
 * 0000000140162BB7: call    loc_140162BAA
 * 0000000140162BBC: add     rsp, 8
 * 0000000140162BC0: call    loc_140162BB3
 * 0000000140162BC5: add     rsp, 8
 * 0000000140162BC9: call    loc_140162BBC
 * 0000000140162BCE: add     rsp, 8
 * 0000000140162BD2: call    loc_140162BC5
 * 0000000140162BD7: add     rsp, 8
 * 0000000140162BDB: call    loc_140162BCE
 * 0000000140162BE0: add     rsp, 8
 * 0000000140162BE4: call    loc_140162BD7
 * 0000000140162BE9: add     rsp, 8
 * 0000000140162BED: call    loc_140162BE0
 * 0000000140162BF2: add     rsp, 8
 * 0000000140162BF6: call    loc_140162BE9
 * 0000000140162BFB: add     rsp, 8
 * 0000000140162BFF: call    loc_140162BF2
 * 0000000140162C04: add     rsp, 8
 * 0000000140162C08: call    loc_140162BFB
 * 0000000140162C0D: add     rsp, 8
 * 0000000140162C11: call    loc_140162C04
 * 0000000140162C16: add     rsp, 8
 * 0000000140162C1A: call    loc_140162C0D
 * 0000000140162C1F: add     rsp, 8
 * 0000000140162C23: call    loc_140162C16
 * 0000000140162C28: add     rsp, 8
 * 0000000140162C2C: call    loc_140162C1F
 * 0000000140162C31: add     rsp, 8
 * 0000000140162C35: call    loc_140162C28
 * 0000000140162C3A: add     rsp, 8
 * 0000000140162C3E: call    loc_140162C31
 * 0000000140162C43: add     rsp, 8
 * 0000000140162C47: call    loc_140162C3A
 * 0000000140162C4C: add     rsp, 8
 * 0000000140162C50: call    loc_140162C43
 * 0000000140162C55: add     rsp, 8
 * 0000000140162C59: call    loc_140162C4C
 * 0000000140162C5E: add     rsp, 8
 * 0000000140162C62: call    loc_140162C55
 * 0000000140162C67: add     rsp, 8
 * 0000000140162C6B: call    loc_140162C5E
 * 0000000140162C70: add     rsp, 8
 * 0000000140162C74: call    loc_140162C67
 * 0000000140162C79: add     rsp, 8
 * 0000000140162C7D: call    loc_140162C70
 * 0000000140162C82: add     rsp, 8
 * 0000000140162C86: call    loc_140162C79
 * 0000000140162C8B: add     rsp, 8
 * 0000000140162C8F: call    loc_140162C82
 * 0000000140162C94: add     rsp, 8
 * 0000000140162C98: mov     eax, 0DADAh
 * 0000000140162C9D: test    word ptr gs:2EB8h, 40h
 * 0000000140162CA8: jz      short loc_140162CB6
 * 0000000140162CAA: xor     eax, eax
 * 0000000140162CAC: xor     edx, edx
 * 0000000140162CAE: mov     ecx, 1
 * 0000000140162CB3: div     rcx
 * 0000000140162CB6: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140162CBA: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140162CBE: mov     rax, [rbp+0E8h+var_138]
 * 0000000140162CC2: mov     rsp, rbp
 * 0000000140162CC5: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140162CCC: add     rsp, 0E8h
 * 0000000140162CD3: test    cs:KiKvaShadow, 1
 * 0000000140162CDA: jz      short loc_140162CE1
 * 0000000140162CDC: jmp     KiKernelExit
 * 0000000140162CE1: test    word ptr gs:2EB8h, 80h
 * 0000000140162CEC: jz      short loc_140162CF3
 * 0000000140162CEE: verw    [rsp+arg_18]
 * 0000000140162CF3: swapgs
 * 0000000140162CF6: iretq
 * 0000000140162CF8: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140162CFC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140162D00: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140162D04: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140162D08: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140162D0C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140162D10: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140162D14: mov     r11, [rbp+0E8h+var_108]
 * 0000000140162D18: mov     r10, [rbp+0E8h+var_110]
 * 0000000140162D1C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140162D20: mov     r8, [rbp+0E8h+var_120]
 * 0000000140162D24: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140162D28: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140162D2C: mov     rax, [rbp+0E8h+var_138]
 * 0000000140162D30: mov     rsp, rbp
 * 0000000140162D33: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140162D3A: add     rsp, 0E8h
 * 0000000140162D41: iretq
 */
