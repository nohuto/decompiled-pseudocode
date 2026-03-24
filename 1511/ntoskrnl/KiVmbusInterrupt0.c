/*
 * XREFs of KiVmbusInterrupt0 @ 0x140158800
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140224E00 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     HvlRouteInterrupt @ 0x1401AE564 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140158800
 * Reason: Hex-Rays returned no pseudocode for 0x140158800
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140158800: sub     rsp, 8
 * 0000000140158804: push    rbp
 * 0000000140158805: push    rsi
 * 0000000140158806: sub     rsp, 150h
 * 000000014015880D: lea     rbp, [rsp+80h]
 * 0000000140158815: mov     [rbp+0E8h+var_13D], 0
 * 0000000140158819: mov     [rbp+0E8h+var_138], rax
 * 000000014015881D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140158821: mov     [rbp+0E8h+var_128], rdx
 * 0000000140158825: mov     [rbp+0E8h+var_120], r8
 * 0000000140158829: mov     [rbp+0E8h+var_118], r9
 * 000000014015882D: mov     [rbp+0E8h+var_110], r10
 * 0000000140158831: mov     [rbp+0E8h+var_108], r11
 * 0000000140158835: test    [rbp+0E8h+arg_0], 1
 * 000000014015883C: jnz     loc_1401589A2
 * 0000000140158842: cmp     byte ptr gs:187h, 0
 * 000000014015884B: jz      loc_140158B38
 * 0000000140158851: test    byte ptr gs:2EB0h, 1
 * 000000014015885A: jz      loc_140158B38
 * 0000000140158860: mov     ecx, 48h ; 'H'
 * 0000000140158865: mov     eax, 1
 * 000000014015886A: xor     edx, edx
 * 000000014015886C: wrmsr
 * 000000014015886E: test    byte ptr gs:2EB0h, 4
 * 0000000140158877: jnz     loc_140158B38
 * 000000014015887D: call    loc_140158990
 * 0000000140158882: add     rsp, 8
 * 0000000140158886: call    loc_140158999
 * 000000014015888B: add     rsp, 8
 * 000000014015888F: call    loc_140158882
 * 0000000140158894: add     rsp, 8
 * 0000000140158898: call    loc_14015888B
 * 000000014015889D: add     rsp, 8
 * 00000001401588A1: call    loc_140158894
 * 00000001401588A6: add     rsp, 8
 * 00000001401588AA: call    loc_14015889D
 * 00000001401588AF: add     rsp, 8
 * 00000001401588B3: call    loc_1401588A6
 * 00000001401588B8: add     rsp, 8
 * 00000001401588BC: call    loc_1401588AF
 * 00000001401588C1: add     rsp, 8
 * 00000001401588C5: call    loc_1401588B8
 * 00000001401588CA: add     rsp, 8
 * 00000001401588CE: call    loc_1401588C1
 * 00000001401588D3: add     rsp, 8
 * 00000001401588D7: call    loc_1401588CA
 * 00000001401588DC: add     rsp, 8
 * 00000001401588E0: call    loc_1401588D3
 * 00000001401588E5: add     rsp, 8
 * 00000001401588E9: call    loc_1401588DC
 * 00000001401588EE: add     rsp, 8
 * 00000001401588F2: call    loc_1401588E5
 * 00000001401588F7: add     rsp, 8
 * 00000001401588FB: call    loc_1401588EE
 * 0000000140158900: add     rsp, 8
 * 0000000140158904: call    loc_1401588F7
 * 0000000140158909: add     rsp, 8
 * 000000014015890D: call    loc_140158900
 * 0000000140158912: add     rsp, 8
 * 0000000140158916: call    loc_140158909
 * 000000014015891B: add     rsp, 8
 * 000000014015891F: call    loc_140158912
 * 0000000140158924: add     rsp, 8
 * 0000000140158928: call    loc_14015891B
 * 000000014015892D: add     rsp, 8
 * 0000000140158931: call    loc_140158924
 * 0000000140158936: add     rsp, 8
 * 000000014015893A: call    loc_14015892D
 * 000000014015893F: add     rsp, 8
 * 0000000140158943: call    loc_140158936
 * 0000000140158948: add     rsp, 8
 * 000000014015894C: call    loc_14015893F
 * 0000000140158951: add     rsp, 8
 * 0000000140158955: call    loc_140158948
 * 000000014015895A: add     rsp, 8
 * 000000014015895E: call    loc_140158951
 * 0000000140158963: add     rsp, 8
 * 0000000140158967: call    loc_14015895A
 * 000000014015896C: add     rsp, 8
 * 0000000140158970: call    loc_140158963
 * 0000000140158975: add     rsp, 8
 * 0000000140158979: call    loc_14015896C
 * 000000014015897E: add     rsp, 8
 * 0000000140158982: call    loc_140158975
 * 0000000140158987: add     rsp, 8
 * 000000014015898B: call    loc_14015897E
 * 0000000140158990: add     rsp, 8
 * 0000000140158994: call    loc_140158987
 * 0000000140158999: add     rsp, 8
 * 000000014015899D: jmp     loc_140158B38
 * 00000001401589A2: test    cs:KiKvaShadow, 1
 * 00000001401589A9: jnz     short loc_1401589AE
 * 00000001401589AB: swapgs
 * 00000001401589AE: mov     r10, gs:188h
 * 00000001401589B7: test    byte ptr gs:2EB0h, 1
 * 00000001401589C0: jz      loc_140158B23
 * 00000001401589C6: mov     rcx, gs:188h
 * 00000001401589CF: mov     rcx, [rcx+220h]
 * 00000001401589D6: mov     rcx, [rcx+790h]
 * 00000001401589DD: mov     gs:2EA8h, rcx
 * 00000001401589E6: mov     ecx, 48h ; 'H'
 * 00000001401589EB: mov     eax, 1
 * 00000001401589F0: xor     edx, edx
 * 00000001401589F2: wrmsr
 * 00000001401589F4: test    byte ptr gs:2EB0h, 4
 * 00000001401589FD: jnz     loc_140158B23
 * 0000000140158A03: call    loc_140158B16
 * 0000000140158A08: add     rsp, 8
 * 0000000140158A0C: call    loc_140158B1F
 * 0000000140158A11: add     rsp, 8
 * 0000000140158A15: call    loc_140158A08
 * 0000000140158A1A: add     rsp, 8
 * 0000000140158A1E: call    loc_140158A11
 * 0000000140158A23: add     rsp, 8
 * 0000000140158A27: call    loc_140158A1A
 * 0000000140158A2C: add     rsp, 8
 * 0000000140158A30: call    loc_140158A23
 * 0000000140158A35: add     rsp, 8
 * 0000000140158A39: call    loc_140158A2C
 * 0000000140158A3E: add     rsp, 8
 * 0000000140158A42: call    loc_140158A35
 * 0000000140158A47: add     rsp, 8
 * 0000000140158A4B: call    loc_140158A3E
 * 0000000140158A50: add     rsp, 8
 * 0000000140158A54: call    loc_140158A47
 * 0000000140158A59: add     rsp, 8
 * 0000000140158A5D: call    loc_140158A50
 * 0000000140158A62: add     rsp, 8
 * 0000000140158A66: call    loc_140158A59
 * 0000000140158A6B: add     rsp, 8
 * 0000000140158A6F: call    loc_140158A62
 * 0000000140158A74: add     rsp, 8
 * 0000000140158A78: call    loc_140158A6B
 * 0000000140158A7D: add     rsp, 8
 * 0000000140158A81: call    loc_140158A74
 * 0000000140158A86: add     rsp, 8
 * 0000000140158A8A: call    loc_140158A7D
 * 0000000140158A8F: add     rsp, 8
 * 0000000140158A93: call    loc_140158A86
 * 0000000140158A98: add     rsp, 8
 * 0000000140158A9C: call    loc_140158A8F
 * 0000000140158AA1: add     rsp, 8
 * 0000000140158AA5: call    loc_140158A98
 * 0000000140158AAA: add     rsp, 8
 * 0000000140158AAE: call    loc_140158AA1
 * 0000000140158AB3: add     rsp, 8
 * 0000000140158AB7: call    loc_140158AAA
 * 0000000140158ABC: add     rsp, 8
 * 0000000140158AC0: call    loc_140158AB3
 * 0000000140158AC5: add     rsp, 8
 * 0000000140158AC9: call    loc_140158ABC
 * 0000000140158ACE: add     rsp, 8
 * 0000000140158AD2: call    loc_140158AC5
 * 0000000140158AD7: add     rsp, 8
 * 0000000140158ADB: call    loc_140158ACE
 * 0000000140158AE0: add     rsp, 8
 * 0000000140158AE4: call    loc_140158AD7
 * 0000000140158AE9: add     rsp, 8
 * 0000000140158AED: call    loc_140158AE0
 * 0000000140158AF2: add     rsp, 8
 * 0000000140158AF6: call    loc_140158AE9
 * 0000000140158AFB: add     rsp, 8
 * 0000000140158AFF: call    loc_140158AF2
 * 0000000140158B04: add     rsp, 8
 * 0000000140158B08: call    loc_140158AFB
 * 0000000140158B0D: add     rsp, 8
 * 0000000140158B11: call    loc_140158B04
 * 0000000140158B16: add     rsp, 8
 * 0000000140158B1A: call    loc_140158B0D
 * 0000000140158B1F: add     rsp, 8
 * 0000000140158B23: test    byte ptr [r10+3], 3
 * 0000000140158B28: mov     [rbp+0E8h+var_68], 0
 * 0000000140158B31: jz      short loc_140158B38
 * 0000000140158B33: call    KiSaveDebugRegisterState
 * 0000000140158B38: cld
 * 0000000140158B39: lfence
 * 0000000140158B3C: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140158B40: ldmxcsr dword ptr gs:180h
 * 0000000140158B49: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140158B4D: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140158B51: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140158B55: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140158B59: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140158B5D: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140158B61: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140158B6A: jz      short loc_140158B71
 * 0000000140158B6C: call    KeWakeProcessor
 * 0000000140158B71: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140158B78: cmp     rax, [rbp+0E8h]
 * 0000000140158B7F: jnb     short loc_140158B9A
 * 0000000140158B81: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140158B88: cmp     rax, [rbp+0E8h]
 * 0000000140158B8F: jb      short loc_140158B9A
 * 0000000140158B91: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140158B95: call    KiCheckForSListAddress
 * 0000000140158B9A: xor     esi, esi
 * 0000000140158B9C: inc     dword ptr gs:5C80h
 * 0000000140158BA4: mov     ecx, 3
 * 0000000140158BA9: mov     rax, cr8
 * 0000000140158BAD: mov     cr8, rcx
 * 0000000140158BB1: mov     [rbp+0E8h+var_13F], al
 * 0000000140158BB4: mov     [rbp+0E8h+var_148], 0
 * 0000000140158BBB: mov     rcx, gs:20h
 * 0000000140158BC4: inc     byte ptr [rcx+20h]
 * 0000000140158BC7: cmp     byte ptr [rcx+20h], 1
 * 0000000140158BCB: jnz     loc_140158C61
 * 0000000140158BD1: rdtsc
 * 0000000140158BD3: shl     rdx, 20h
 * 0000000140158BD7: or      rax, rdx
 * 0000000140158BDA: mov     edx, [rcx+62A0h]
 * 0000000140158BE0: mov     r11d, edx
 * 0000000140158BE3: and     edx, 7FFh
 * 0000000140158BE9: shr     edx, 5
 * 0000000140158BEC: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140158BF4: mov     edx, [r10]
 * 0000000140158BF7: ror     edx, 5
 * 0000000140158BFA: xor     edx, eax
 * 0000000140158BFC: mov     [r10], edx
 * 0000000140158BFF: add     r11d, 1
 * 0000000140158C03: mov     [rcx+62A0h], r11d
 * 0000000140158C0A: and     r11d, 3FFh
 * 0000000140158C11: jnz     short loc_140158C1A
 * 0000000140158C13: mov     [rbp+0E8h+var_148], 1
 * 0000000140158C1A: mov     r8, [rcx+8]
 * 0000000140158C1E: sub     rax, [rcx+5B38h]
 * 0000000140158C25: add     [r8+48h], rax
 * 0000000140158C29: mov     edx, [r8+50h]
 * 0000000140158C2D: add     [rcx+5B38h], rax
 * 0000000140158C34: add     rdx, rax
 * 0000000140158C37: mov     ecx, edx
 * 0000000140158C39: shr     rdx, 20h
 * 0000000140158C3D: jz      short loc_140158C42
 * 0000000140158C3F: or      ecx, 0FFFFFFFFh
 * 0000000140158C42: mov     [r8+50h], ecx
 * 0000000140158C46: test    byte ptr [r8+2], 3Eh
 * 0000000140158C4B: jz      short loc_140158C61
 * 0000000140158C4D: mov     rdx, r8
 * 0000000140158C50: mov     r8, rax
 * 0000000140158C53: mov     rcx, gs:20h
 * 0000000140158C5C: call    KiEndThreadAccountingPeriod
 * 0000000140158C61: sti
 * 0000000140158C62: cmp     [rbp+0E8h+var_148], 0
 * 0000000140158C66: jz      short loc_140158C76
 * 0000000140158C68: mov     rcx, gs:20h
 * 0000000140158C71: call    KiEntropyQueueDpc
 * 0000000140158C76: mov     ecx, 1
 * 0000000140158C7B: call    HvlRouteInterrupt
 * 0000000140158C80: cli
 * 0000000140158C81: mov     rcx, gs:20h
 * 0000000140158C8A: cmp     byte ptr [rcx+20h], 1
 * 0000000140158C8E: ja      short loc_140158D04
 * 0000000140158C90: rdtsc
 * 0000000140158C92: shl     rdx, 20h
 * 0000000140158C96: or      rax, rdx
 * 0000000140158C99: sub     rax, [rcx+5B38h]
 * 0000000140158CA0: add     [rcx+5BF8h], rax
 * 0000000140158CA7: add     [rcx+5B38h], rax
 * 0000000140158CAE: mov     r8, rax
 * 0000000140158CB1: mov     rax, [rcx+8]
 * 0000000140158CB5: test    byte ptr [rax+2], 32h
 * 0000000140158CB9: jz      short loc_140158CCE
 * 0000000140158CBB: xor     edx, edx
 * 0000000140158CBD: call    KiBeginThreadAccountingPeriod
 * 0000000140158CC2: mov     rcx, gs:20h
 * 0000000140158CCB: inc     byte ptr [rcx+20h]
 * 0000000140158CCE: mov     dl, [rcx+6]
 * 0000000140158CD1: and     byte ptr [rcx+6], 0
 * 0000000140158CD5: cmp     byte ptr [rcx+7], 0
 * 0000000140158CD9: jnz     short loc_140158D04
 * 0000000140158CDB: test    dl, dl
 * 0000000140158CDD: jz      short loc_140158D04
 * 0000000140158CDF: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140158CE3: jnb     short loc_140158CF0
 * 0000000140158CE5: and     byte ptr [rcx+20h], 0
 * 0000000140158CE9: call    KiDpcInterruptBypass
 * 0000000140158CEE: jmp     short loc_140158D07
 * 0000000140158CF0: mov     ecx, 2
 * 0000000140158CF5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140158CFB: mov     rcx, gs:20h
 * 0000000140158D04: dec     byte ptr [rcx+20h]
 * 0000000140158D07: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140158D0B: mov     cr8, rcx
 * 0000000140158D0F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140158D16: cli
 * 0000000140158D17: test    [rbp+0E8h+arg_0], 1
 * 0000000140158D1E: jz      loc_140158E2F
 * 0000000140158D24: mov     rcx, gs:188h
 * 0000000140158D2D: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140158D34: jz      short loc_140158D4F
 * 0000000140158D36: mov     ecx, 1
 * 0000000140158D3B: mov     cr8, rcx
 * 0000000140158D3F: sti
 * 0000000140158D40: call    KiInitiateUserApc
 * 0000000140158D45: cli
 * 0000000140158D46: mov     ecx, 0
 * 0000000140158D4B: mov     cr8, rcx
 * 0000000140158D4F: mov     rcx, gs:188h
 * 0000000140158D58: test    dword ptr [rcx], 40010000h
 * 0000000140158D5E: jz      short loc_140158D74
 * 0000000140158D60: test    byte ptr [rcx+2], 1
 * 0000000140158D64: jz      short loc_140158D74
 * 0000000140158D66: call    KiCopyCounters
 * 0000000140158D6B: mov     rcx, gs:188h
 * 0000000140158D74: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140158D78: cmp     [rbp+0E8h+var_68], 0
 * 0000000140158D80: jz      short loc_140158D87
 * 0000000140158D82: call    KiRestoreDebugRegisterState
 * 0000000140158D87: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140158D8B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140158D8F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140158D93: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140158D97: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140158D9B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140158D9F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140158DA3: mov     r10, [rbp+0E8h+var_110]
 * 0000000140158DA7: mov     r9, [rbp+0E8h+var_118]
 * 0000000140158DAB: mov     r8, [rbp+0E8h+var_120]
 * 0000000140158DAF: mov     rcx, gs:188h
 * 0000000140158DB8: movzx   eax, byte ptr [rcx+1]
 * 0000000140158DBC: test    eax, 1
 * 0000000140158DC1: jnz     short loc_140158DFF
 * 0000000140158DC3: xor     edx, edx
 * 0000000140158DC5: mov     ecx, 48h ; 'H'
 * 0000000140158DCA: wrmsr
 * 0000000140158DCC: mov     rax, gs:2EA8h
 * 0000000140158DD5: test    rax, rax
 * 0000000140158DD8: jz      short loc_140158DFF
 * 0000000140158DDA: mov     rcx, gs:188h
 * 0000000140158DE3: mov     rcx, [rcx+220h]
 * 0000000140158DEA: cmp     rax, [rcx+790h]
 * 0000000140158DF1: jz      short loc_140158DFF
 * 0000000140158DF3: mov     eax, 1
 * 0000000140158DF8: mov     ecx, 49h ; 'I'
 * 0000000140158DFD: wrmsr
 * 0000000140158DFF: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140158E03: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140158E07: mov     rax, [rbp+0E8h+var_138]
 * 0000000140158E0B: mov     rsp, rbp
 * 0000000140158E0E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140158E15: add     rsp, 0E8h
 * 0000000140158E1C: test    cs:KiKvaShadow, 1
 * 0000000140158E23: jz      short loc_140158E2A
 * 0000000140158E25: jmp     KiKernelExit
 * 0000000140158E2A: swapgs
 * 0000000140158E2D: iretq
 * 0000000140158E2F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140158E33: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140158E37: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140158E3B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140158E3F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140158E43: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140158E47: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140158E4B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140158E4F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140158E53: mov     r9, [rbp+0E8h+var_118]
 * 0000000140158E57: mov     r8, [rbp+0E8h+var_120]
 * 0000000140158E5B: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140158E5F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140158E63: mov     rax, [rbp+0E8h+var_138]
 * 0000000140158E67: mov     rsp, rbp
 * 0000000140158E6A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140158E71: add     rsp, 0E8h
 * 0000000140158E78: iretq
 */
