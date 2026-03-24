/*
 * XREFs of KiHvInterrupt @ 0x140158160
 * Callers:
 *     KiHvInterruptShadow @ 0x140224D80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     HvlRouteInterrupt @ 0x1401AE564 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140158160
 * Reason: Hex-Rays returned no pseudocode for 0x140158160
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140158160: sub     rsp, 8
 * 0000000140158164: push    rbp
 * 0000000140158165: push    rsi
 * 0000000140158166: sub     rsp, 150h
 * 000000014015816D: lea     rbp, [rsp+80h]
 * 0000000140158175: mov     [rbp+0E8h+var_13D], 0
 * 0000000140158179: mov     [rbp+0E8h+var_138], rax
 * 000000014015817D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140158181: mov     [rbp+0E8h+var_128], rdx
 * 0000000140158185: mov     [rbp+0E8h+var_120], r8
 * 0000000140158189: mov     [rbp+0E8h+var_118], r9
 * 000000014015818D: mov     [rbp+0E8h+var_110], r10
 * 0000000140158191: mov     [rbp+0E8h+var_108], r11
 * 0000000140158195: test    [rbp+0E8h+arg_0], 1
 * 000000014015819C: jnz     loc_140158302
 * 00000001401581A2: cmp     byte ptr gs:187h, 0
 * 00000001401581AB: jz      loc_140158498
 * 00000001401581B1: test    byte ptr gs:2EB0h, 1
 * 00000001401581BA: jz      loc_140158498
 * 00000001401581C0: mov     ecx, 48h ; 'H'
 * 00000001401581C5: mov     eax, 1
 * 00000001401581CA: xor     edx, edx
 * 00000001401581CC: wrmsr
 * 00000001401581CE: test    byte ptr gs:2EB0h, 4
 * 00000001401581D7: jnz     loc_140158498
 * 00000001401581DD: call    loc_1401582F0
 * 00000001401581E2: add     rsp, 8
 * 00000001401581E6: call    loc_1401582F9
 * 00000001401581EB: add     rsp, 8
 * 00000001401581EF: call    loc_1401581E2
 * 00000001401581F4: add     rsp, 8
 * 00000001401581F8: call    loc_1401581EB
 * 00000001401581FD: add     rsp, 8
 * 0000000140158201: call    loc_1401581F4
 * 0000000140158206: add     rsp, 8
 * 000000014015820A: call    loc_1401581FD
 * 000000014015820F: add     rsp, 8
 * 0000000140158213: call    loc_140158206
 * 0000000140158218: add     rsp, 8
 * 000000014015821C: call    loc_14015820F
 * 0000000140158221: add     rsp, 8
 * 0000000140158225: call    loc_140158218
 * 000000014015822A: add     rsp, 8
 * 000000014015822E: call    loc_140158221
 * 0000000140158233: add     rsp, 8
 * 0000000140158237: call    loc_14015822A
 * 000000014015823C: add     rsp, 8
 * 0000000140158240: call    loc_140158233
 * 0000000140158245: add     rsp, 8
 * 0000000140158249: call    loc_14015823C
 * 000000014015824E: add     rsp, 8
 * 0000000140158252: call    loc_140158245
 * 0000000140158257: add     rsp, 8
 * 000000014015825B: call    loc_14015824E
 * 0000000140158260: add     rsp, 8
 * 0000000140158264: call    loc_140158257
 * 0000000140158269: add     rsp, 8
 * 000000014015826D: call    loc_140158260
 * 0000000140158272: add     rsp, 8
 * 0000000140158276: call    loc_140158269
 * 000000014015827B: add     rsp, 8
 * 000000014015827F: call    loc_140158272
 * 0000000140158284: add     rsp, 8
 * 0000000140158288: call    loc_14015827B
 * 000000014015828D: add     rsp, 8
 * 0000000140158291: call    loc_140158284
 * 0000000140158296: add     rsp, 8
 * 000000014015829A: call    loc_14015828D
 * 000000014015829F: add     rsp, 8
 * 00000001401582A3: call    loc_140158296
 * 00000001401582A8: add     rsp, 8
 * 00000001401582AC: call    loc_14015829F
 * 00000001401582B1: add     rsp, 8
 * 00000001401582B5: call    loc_1401582A8
 * 00000001401582BA: add     rsp, 8
 * 00000001401582BE: call    loc_1401582B1
 * 00000001401582C3: add     rsp, 8
 * 00000001401582C7: call    loc_1401582BA
 * 00000001401582CC: add     rsp, 8
 * 00000001401582D0: call    loc_1401582C3
 * 00000001401582D5: add     rsp, 8
 * 00000001401582D9: call    loc_1401582CC
 * 00000001401582DE: add     rsp, 8
 * 00000001401582E2: call    loc_1401582D5
 * 00000001401582E7: add     rsp, 8
 * 00000001401582EB: call    loc_1401582DE
 * 00000001401582F0: add     rsp, 8
 * 00000001401582F4: call    loc_1401582E7
 * 00000001401582F9: add     rsp, 8
 * 00000001401582FD: jmp     loc_140158498
 * 0000000140158302: test    cs:KiKvaShadow, 1
 * 0000000140158309: jnz     short loc_14015830E
 * 000000014015830B: swapgs
 * 000000014015830E: mov     r10, gs:188h
 * 0000000140158317: test    byte ptr gs:2EB0h, 1
 * 0000000140158320: jz      loc_140158483
 * 0000000140158326: mov     rcx, gs:188h
 * 000000014015832F: mov     rcx, [rcx+220h]
 * 0000000140158336: mov     rcx, [rcx+790h]
 * 000000014015833D: mov     gs:2EA8h, rcx
 * 0000000140158346: mov     ecx, 48h ; 'H'
 * 000000014015834B: mov     eax, 1
 * 0000000140158350: xor     edx, edx
 * 0000000140158352: wrmsr
 * 0000000140158354: test    byte ptr gs:2EB0h, 4
 * 000000014015835D: jnz     loc_140158483
 * 0000000140158363: call    loc_140158476
 * 0000000140158368: add     rsp, 8
 * 000000014015836C: call    loc_14015847F
 * 0000000140158371: add     rsp, 8
 * 0000000140158375: call    loc_140158368
 * 000000014015837A: add     rsp, 8
 * 000000014015837E: call    loc_140158371
 * 0000000140158383: add     rsp, 8
 * 0000000140158387: call    loc_14015837A
 * 000000014015838C: add     rsp, 8
 * 0000000140158390: call    loc_140158383
 * 0000000140158395: add     rsp, 8
 * 0000000140158399: call    loc_14015838C
 * 000000014015839E: add     rsp, 8
 * 00000001401583A2: call    loc_140158395
 * 00000001401583A7: add     rsp, 8
 * 00000001401583AB: call    loc_14015839E
 * 00000001401583B0: add     rsp, 8
 * 00000001401583B4: call    loc_1401583A7
 * 00000001401583B9: add     rsp, 8
 * 00000001401583BD: call    loc_1401583B0
 * 00000001401583C2: add     rsp, 8
 * 00000001401583C6: call    loc_1401583B9
 * 00000001401583CB: add     rsp, 8
 * 00000001401583CF: call    loc_1401583C2
 * 00000001401583D4: add     rsp, 8
 * 00000001401583D8: call    loc_1401583CB
 * 00000001401583DD: add     rsp, 8
 * 00000001401583E1: call    loc_1401583D4
 * 00000001401583E6: add     rsp, 8
 * 00000001401583EA: call    loc_1401583DD
 * 00000001401583EF: add     rsp, 8
 * 00000001401583F3: call    loc_1401583E6
 * 00000001401583F8: add     rsp, 8
 * 00000001401583FC: call    loc_1401583EF
 * 0000000140158401: add     rsp, 8
 * 0000000140158405: call    loc_1401583F8
 * 000000014015840A: add     rsp, 8
 * 000000014015840E: call    loc_140158401
 * 0000000140158413: add     rsp, 8
 * 0000000140158417: call    loc_14015840A
 * 000000014015841C: add     rsp, 8
 * 0000000140158420: call    loc_140158413
 * 0000000140158425: add     rsp, 8
 * 0000000140158429: call    loc_14015841C
 * 000000014015842E: add     rsp, 8
 * 0000000140158432: call    loc_140158425
 * 0000000140158437: add     rsp, 8
 * 000000014015843B: call    loc_14015842E
 * 0000000140158440: add     rsp, 8
 * 0000000140158444: call    loc_140158437
 * 0000000140158449: add     rsp, 8
 * 000000014015844D: call    loc_140158440
 * 0000000140158452: add     rsp, 8
 * 0000000140158456: call    loc_140158449
 * 000000014015845B: add     rsp, 8
 * 000000014015845F: call    loc_140158452
 * 0000000140158464: add     rsp, 8
 * 0000000140158468: call    loc_14015845B
 * 000000014015846D: add     rsp, 8
 * 0000000140158471: call    loc_140158464
 * 0000000140158476: add     rsp, 8
 * 000000014015847A: call    loc_14015846D
 * 000000014015847F: add     rsp, 8
 * 0000000140158483: test    byte ptr [r10+3], 3
 * 0000000140158488: mov     [rbp+0E8h+var_68], 0
 * 0000000140158491: jz      short loc_140158498
 * 0000000140158493: call    KiSaveDebugRegisterState
 * 0000000140158498: cld
 * 0000000140158499: lfence
 * 000000014015849C: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401584A0: ldmxcsr dword ptr gs:180h
 * 00000001401584A9: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401584AD: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401584B1: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401584B5: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401584B9: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401584BD: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401584C1: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401584CA: jz      short loc_1401584D1
 * 00000001401584CC: call    KeWakeProcessor
 * 00000001401584D1: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401584D8: cmp     rax, [rbp+0E8h]
 * 00000001401584DF: jnb     short loc_1401584FA
 * 00000001401584E1: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401584E8: cmp     rax, [rbp+0E8h]
 * 00000001401584EF: jb      short loc_1401584FA
 * 00000001401584F1: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401584F5: call    KiCheckForSListAddress
 * 00000001401584FA: xor     esi, esi
 * 00000001401584FC: inc     dword ptr gs:5C80h
 * 0000000140158504: mov     ecx, 3
 * 0000000140158509: mov     rax, cr8
 * 000000014015850D: mov     cr8, rcx
 * 0000000140158511: mov     [rbp+0E8h+var_13F], al
 * 0000000140158514: mov     [rbp+0E8h+var_148], 0
 * 000000014015851B: mov     rcx, gs:20h
 * 0000000140158524: inc     byte ptr [rcx+20h]
 * 0000000140158527: cmp     byte ptr [rcx+20h], 1
 * 000000014015852B: jnz     loc_1401585C1
 * 0000000140158531: rdtsc
 * 0000000140158533: shl     rdx, 20h
 * 0000000140158537: or      rax, rdx
 * 000000014015853A: mov     edx, [rcx+62A0h]
 * 0000000140158540: mov     r11d, edx
 * 0000000140158543: and     edx, 7FFh
 * 0000000140158549: shr     edx, 5
 * 000000014015854C: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140158554: mov     edx, [r10]
 * 0000000140158557: ror     edx, 5
 * 000000014015855A: xor     edx, eax
 * 000000014015855C: mov     [r10], edx
 * 000000014015855F: add     r11d, 1
 * 0000000140158563: mov     [rcx+62A0h], r11d
 * 000000014015856A: and     r11d, 3FFh
 * 0000000140158571: jnz     short loc_14015857A
 * 0000000140158573: mov     [rbp+0E8h+var_148], 1
 * 000000014015857A: mov     r8, [rcx+8]
 * 000000014015857E: sub     rax, [rcx+5B38h]
 * 0000000140158585: add     [r8+48h], rax
 * 0000000140158589: mov     edx, [r8+50h]
 * 000000014015858D: add     [rcx+5B38h], rax
 * 0000000140158594: add     rdx, rax
 * 0000000140158597: mov     ecx, edx
 * 0000000140158599: shr     rdx, 20h
 * 000000014015859D: jz      short loc_1401585A2
 * 000000014015859F: or      ecx, 0FFFFFFFFh
 * 00000001401585A2: mov     [r8+50h], ecx
 * 00000001401585A6: test    byte ptr [r8+2], 3Eh
 * 00000001401585AB: jz      short loc_1401585C1
 * 00000001401585AD: mov     rdx, r8
 * 00000001401585B0: mov     r8, rax
 * 00000001401585B3: mov     rcx, gs:20h
 * 00000001401585BC: call    KiEndThreadAccountingPeriod
 * 00000001401585C1: sti
 * 00000001401585C2: cmp     [rbp+0E8h+var_148], 0
 * 00000001401585C6: jz      short loc_1401585D6
 * 00000001401585C8: mov     rcx, gs:20h
 * 00000001401585D1: call    KiEntropyQueueDpc
 * 00000001401585D6: xor     ecx, ecx
 * 00000001401585D8: call    HvlRouteInterrupt
 * 00000001401585DD: test    cs:HvlEnlightenments, 1000h
 * 00000001401585E7: jz      short loc_1401585F3
 * 00000001401585E9: cli
 * 00000001401585EA: mov     rcx, rsi
 * 00000001401585ED: call    HalPerformEndOfInterrupt_0
 * 00000001401585F2: sti
 * 00000001401585F3: cli
 * 00000001401585F4: mov     rcx, gs:20h
 * 00000001401585FD: cmp     byte ptr [rcx+20h], 1
 * 0000000140158601: ja      short loc_140158677
 * 0000000140158603: rdtsc
 * 0000000140158605: shl     rdx, 20h
 * 0000000140158609: or      rax, rdx
 * 000000014015860C: sub     rax, [rcx+5B38h]
 * 0000000140158613: add     [rcx+5BF8h], rax
 * 000000014015861A: add     [rcx+5B38h], rax
 * 0000000140158621: mov     r8, rax
 * 0000000140158624: mov     rax, [rcx+8]
 * 0000000140158628: test    byte ptr [rax+2], 32h
 * 000000014015862C: jz      short loc_140158641
 * 000000014015862E: xor     edx, edx
 * 0000000140158630: call    KiBeginThreadAccountingPeriod
 * 0000000140158635: mov     rcx, gs:20h
 * 000000014015863E: inc     byte ptr [rcx+20h]
 * 0000000140158641: mov     dl, [rcx+6]
 * 0000000140158644: and     byte ptr [rcx+6], 0
 * 0000000140158648: cmp     byte ptr [rcx+7], 0
 * 000000014015864C: jnz     short loc_140158677
 * 000000014015864E: test    dl, dl
 * 0000000140158650: jz      short loc_140158677
 * 0000000140158652: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140158656: jnb     short loc_140158663
 * 0000000140158658: and     byte ptr [rcx+20h], 0
 * 000000014015865C: call    KiDpcInterruptBypass
 * 0000000140158661: jmp     short loc_14015867A
 * 0000000140158663: mov     ecx, 2
 * 0000000140158668: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015866E: mov     rcx, gs:20h
 * 0000000140158677: dec     byte ptr [rcx+20h]
 * 000000014015867A: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015867E: mov     cr8, rcx
 * 0000000140158682: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140158689: cli
 * 000000014015868A: test    [rbp+0E8h+arg_0], 1
 * 0000000140158691: jz      loc_1401587A2
 * 0000000140158697: mov     rcx, gs:188h
 * 00000001401586A0: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401586A7: jz      short loc_1401586C2
 * 00000001401586A9: mov     ecx, 1
 * 00000001401586AE: mov     cr8, rcx
 * 00000001401586B2: sti
 * 00000001401586B3: call    KiInitiateUserApc
 * 00000001401586B8: cli
 * 00000001401586B9: mov     ecx, 0
 * 00000001401586BE: mov     cr8, rcx
 * 00000001401586C2: mov     rcx, gs:188h
 * 00000001401586CB: test    dword ptr [rcx], 40010000h
 * 00000001401586D1: jz      short loc_1401586E7
 * 00000001401586D3: test    byte ptr [rcx+2], 1
 * 00000001401586D7: jz      short loc_1401586E7
 * 00000001401586D9: call    KiCopyCounters
 * 00000001401586DE: mov     rcx, gs:188h
 * 00000001401586E7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401586EB: cmp     [rbp+0E8h+var_68], 0
 * 00000001401586F3: jz      short loc_1401586FA
 * 00000001401586F5: call    KiRestoreDebugRegisterState
 * 00000001401586FA: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401586FE: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140158702: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140158706: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015870A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015870E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140158712: mov     r11, [rbp+0E8h+var_108]
 * 0000000140158716: mov     r10, [rbp+0E8h+var_110]
 * 000000014015871A: mov     r9, [rbp+0E8h+var_118]
 * 000000014015871E: mov     r8, [rbp+0E8h+var_120]
 * 0000000140158722: mov     rcx, gs:188h
 * 000000014015872B: movzx   eax, byte ptr [rcx+1]
 * 000000014015872F: test    eax, 1
 * 0000000140158734: jnz     short loc_140158772
 * 0000000140158736: xor     edx, edx
 * 0000000140158738: mov     ecx, 48h ; 'H'
 * 000000014015873D: wrmsr
 * 000000014015873F: mov     rax, gs:2EA8h
 * 0000000140158748: test    rax, rax
 * 000000014015874B: jz      short loc_140158772
 * 000000014015874D: mov     rcx, gs:188h
 * 0000000140158756: mov     rcx, [rcx+220h]
 * 000000014015875D: cmp     rax, [rcx+790h]
 * 0000000140158764: jz      short loc_140158772
 * 0000000140158766: mov     eax, 1
 * 000000014015876B: mov     ecx, 49h ; 'I'
 * 0000000140158770: wrmsr
 * 0000000140158772: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140158776: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015877A: mov     rax, [rbp+0E8h+var_138]
 * 000000014015877E: mov     rsp, rbp
 * 0000000140158781: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140158788: add     rsp, 0E8h
 * 000000014015878F: test    cs:KiKvaShadow, 1
 * 0000000140158796: jz      short loc_14015879D
 * 0000000140158798: jmp     KiKernelExit
 * 000000014015879D: swapgs
 * 00000001401587A0: iretq
 * 00000001401587A2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401587A6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401587AA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401587AE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401587B2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401587B6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401587BA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401587BE: mov     r11, [rbp+0E8h+var_108]
 * 00000001401587C2: mov     r10, [rbp+0E8h+var_110]
 * 00000001401587C6: mov     r9, [rbp+0E8h+var_118]
 * 00000001401587CA: mov     r8, [rbp+0E8h+var_120]
 * 00000001401587CE: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401587D2: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401587D6: mov     rax, [rbp+0E8h+var_138]
 * 00000001401587DA: mov     rsp, rbp
 * 00000001401587DD: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401587E4: add     rsp, 0E8h
 * 00000001401587EB: iretq
 */
