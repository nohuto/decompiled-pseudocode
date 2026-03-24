/*
 * XREFs of KiSwInterrupt @ 0x14018CF90
 * Callers:
 *     KiSwInterruptShadow @ 0x140274A80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiSwInterruptDispatch @ 0x14017C0E8 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x14018CF90
 * Reason: Hex-Rays returned no pseudocode for 0x14018CF90
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018CF90: sub     rsp, 8
 * 000000014018CF94: push    rbp
 * 000000014018CF95: push    rsi
 * 000000014018CF96: sub     rsp, 150h
 * 000000014018CF9D: lea     rbp, [rsp+80h]
 * 000000014018CFA5: mov     [rbp+0E8h+var_13D], 0
 * 000000014018CFA9: mov     [rbp+0E8h+var_138], rax
 * 000000014018CFAD: mov     [rbp+0E8h+var_130], rcx
 * 000000014018CFB1: mov     [rbp+0E8h+var_128], rdx
 * 000000014018CFB5: mov     [rbp+0E8h+var_120], r8
 * 000000014018CFB9: mov     [rbp+0E8h+var_118], r9
 * 000000014018CFBD: mov     [rbp+0E8h+var_110], r10
 * 000000014018CFC1: mov     [rbp+0E8h+var_108], r11
 * 000000014018CFC5: test    [rbp+0E8h+arg_0], 1
 * 000000014018CFCC: jnz     loc_14018D132
 * 000000014018CFD2: cmp     byte ptr gs:187h, 0
 * 000000014018CFDB: jz      loc_14018D2C8
 * 000000014018CFE1: test    byte ptr gs:2EB0h, 1
 * 000000014018CFEA: jz      loc_14018D2C8
 * 000000014018CFF0: mov     ecx, 48h ; 'H'
 * 000000014018CFF5: mov     eax, 1
 * 000000014018CFFA: xor     edx, edx
 * 000000014018CFFC: wrmsr
 * 000000014018CFFE: test    byte ptr gs:2EB0h, 4
 * 000000014018D007: jnz     loc_14018D2C8
 * 000000014018D00D: call    loc_14018D120
 * 000000014018D012: add     rsp, 8
 * 000000014018D016: call    loc_14018D129
 * 000000014018D01B: add     rsp, 8
 * 000000014018D01F: call    loc_14018D012
 * 000000014018D024: add     rsp, 8
 * 000000014018D028: call    loc_14018D01B
 * 000000014018D02D: add     rsp, 8
 * 000000014018D031: call    loc_14018D024
 * 000000014018D036: add     rsp, 8
 * 000000014018D03A: call    loc_14018D02D
 * 000000014018D03F: add     rsp, 8
 * 000000014018D043: call    loc_14018D036
 * 000000014018D048: add     rsp, 8
 * 000000014018D04C: call    loc_14018D03F
 * 000000014018D051: add     rsp, 8
 * 000000014018D055: call    loc_14018D048
 * 000000014018D05A: add     rsp, 8
 * 000000014018D05E: call    loc_14018D051
 * 000000014018D063: add     rsp, 8
 * 000000014018D067: call    loc_14018D05A
 * 000000014018D06C: add     rsp, 8
 * 000000014018D070: call    loc_14018D063
 * 000000014018D075: add     rsp, 8
 * 000000014018D079: call    loc_14018D06C
 * 000000014018D07E: add     rsp, 8
 * 000000014018D082: call    loc_14018D075
 * 000000014018D087: add     rsp, 8
 * 000000014018D08B: call    loc_14018D07E
 * 000000014018D090: add     rsp, 8
 * 000000014018D094: call    loc_14018D087
 * 000000014018D099: add     rsp, 8
 * 000000014018D09D: call    loc_14018D090
 * 000000014018D0A2: add     rsp, 8
 * 000000014018D0A6: call    loc_14018D099
 * 000000014018D0AB: add     rsp, 8
 * 000000014018D0AF: call    loc_14018D0A2
 * 000000014018D0B4: add     rsp, 8
 * 000000014018D0B8: call    loc_14018D0AB
 * 000000014018D0BD: add     rsp, 8
 * 000000014018D0C1: call    loc_14018D0B4
 * 000000014018D0C6: add     rsp, 8
 * 000000014018D0CA: call    loc_14018D0BD
 * 000000014018D0CF: add     rsp, 8
 * 000000014018D0D3: call    loc_14018D0C6
 * 000000014018D0D8: add     rsp, 8
 * 000000014018D0DC: call    loc_14018D0CF
 * 000000014018D0E1: add     rsp, 8
 * 000000014018D0E5: call    loc_14018D0D8
 * 000000014018D0EA: add     rsp, 8
 * 000000014018D0EE: call    loc_14018D0E1
 * 000000014018D0F3: add     rsp, 8
 * 000000014018D0F7: call    loc_14018D0EA
 * 000000014018D0FC: add     rsp, 8
 * 000000014018D100: call    loc_14018D0F3
 * 000000014018D105: add     rsp, 8
 * 000000014018D109: call    loc_14018D0FC
 * 000000014018D10E: add     rsp, 8
 * 000000014018D112: call    loc_14018D105
 * 000000014018D117: add     rsp, 8
 * 000000014018D11B: call    loc_14018D10E
 * 000000014018D120: add     rsp, 8
 * 000000014018D124: call    loc_14018D117
 * 000000014018D129: add     rsp, 8
 * 000000014018D12D: jmp     loc_14018D2C8
 * 000000014018D132: test    cs:KiKvaShadow, 1
 * 000000014018D139: jnz     short loc_14018D13E
 * 000000014018D13B: swapgs
 * 000000014018D13E: mov     r10, gs:188h
 * 000000014018D147: test    byte ptr gs:2EB0h, 1
 * 000000014018D150: jz      loc_14018D2B3
 * 000000014018D156: mov     rcx, gs:188h
 * 000000014018D15F: mov     rcx, [rcx+220h]
 * 000000014018D166: mov     rcx, [rcx+7A0h]
 * 000000014018D16D: mov     gs:2EA8h, rcx
 * 000000014018D176: mov     ecx, 48h ; 'H'
 * 000000014018D17B: mov     eax, 1
 * 000000014018D180: xor     edx, edx
 * 000000014018D182: wrmsr
 * 000000014018D184: test    byte ptr gs:2EB0h, 4
 * 000000014018D18D: jnz     loc_14018D2B3
 * 000000014018D193: call    loc_14018D2A6
 * 000000014018D198: add     rsp, 8
 * 000000014018D19C: call    loc_14018D2AF
 * 000000014018D1A1: add     rsp, 8
 * 000000014018D1A5: call    loc_14018D198
 * 000000014018D1AA: add     rsp, 8
 * 000000014018D1AE: call    loc_14018D1A1
 * 000000014018D1B3: add     rsp, 8
 * 000000014018D1B7: call    loc_14018D1AA
 * 000000014018D1BC: add     rsp, 8
 * 000000014018D1C0: call    loc_14018D1B3
 * 000000014018D1C5: add     rsp, 8
 * 000000014018D1C9: call    loc_14018D1BC
 * 000000014018D1CE: add     rsp, 8
 * 000000014018D1D2: call    loc_14018D1C5
 * 000000014018D1D7: add     rsp, 8
 * 000000014018D1DB: call    loc_14018D1CE
 * 000000014018D1E0: add     rsp, 8
 * 000000014018D1E4: call    loc_14018D1D7
 * 000000014018D1E9: add     rsp, 8
 * 000000014018D1ED: call    loc_14018D1E0
 * 000000014018D1F2: add     rsp, 8
 * 000000014018D1F6: call    loc_14018D1E9
 * 000000014018D1FB: add     rsp, 8
 * 000000014018D1FF: call    loc_14018D1F2
 * 000000014018D204: add     rsp, 8
 * 000000014018D208: call    loc_14018D1FB
 * 000000014018D20D: add     rsp, 8
 * 000000014018D211: call    loc_14018D204
 * 000000014018D216: add     rsp, 8
 * 000000014018D21A: call    loc_14018D20D
 * 000000014018D21F: add     rsp, 8
 * 000000014018D223: call    loc_14018D216
 * 000000014018D228: add     rsp, 8
 * 000000014018D22C: call    loc_14018D21F
 * 000000014018D231: add     rsp, 8
 * 000000014018D235: call    loc_14018D228
 * 000000014018D23A: add     rsp, 8
 * 000000014018D23E: call    loc_14018D231
 * 000000014018D243: add     rsp, 8
 * 000000014018D247: call    loc_14018D23A
 * 000000014018D24C: add     rsp, 8
 * 000000014018D250: call    loc_14018D243
 * 000000014018D255: add     rsp, 8
 * 000000014018D259: call    loc_14018D24C
 * 000000014018D25E: add     rsp, 8
 * 000000014018D262: call    loc_14018D255
 * 000000014018D267: add     rsp, 8
 * 000000014018D26B: call    loc_14018D25E
 * 000000014018D270: add     rsp, 8
 * 000000014018D274: call    loc_14018D267
 * 000000014018D279: add     rsp, 8
 * 000000014018D27D: call    loc_14018D270
 * 000000014018D282: add     rsp, 8
 * 000000014018D286: call    loc_14018D279
 * 000000014018D28B: add     rsp, 8
 * 000000014018D28F: call    loc_14018D282
 * 000000014018D294: add     rsp, 8
 * 000000014018D298: call    loc_14018D28B
 * 000000014018D29D: add     rsp, 8
 * 000000014018D2A1: call    loc_14018D294
 * 000000014018D2A6: add     rsp, 8
 * 000000014018D2AA: call    loc_14018D29D
 * 000000014018D2AF: add     rsp, 8
 * 000000014018D2B3: test    byte ptr [r10+3], 3
 * 000000014018D2B8: mov     [rbp+0E8h+var_68], 0
 * 000000014018D2C1: jz      short loc_14018D2C8
 * 000000014018D2C3: call    KiSaveDebugRegisterState
 * 000000014018D2C8: cld
 * 000000014018D2C9: lfence
 * 000000014018D2CC: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018D2D0: ldmxcsr dword ptr gs:180h
 * 000000014018D2D9: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018D2DD: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018D2E1: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018D2E5: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018D2E9: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018D2ED: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018D2F1: cmp     byte ptr gs:5C9Ah, 0
 * 000000014018D2FA: jz      short loc_14018D301
 * 000000014018D2FC: call    KeWakeProcessor
 * 000000014018D301: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018D308: cmp     rax, [rbp+0E8h]
 * 000000014018D30F: jnb     short loc_14018D32A
 * 000000014018D311: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018D318: cmp     rax, [rbp+0E8h]
 * 000000014018D31F: jb      short loc_14018D32A
 * 000000014018D321: lea     rcx, [rbp+0E8h+var_168]
 * 000000014018D325: call    KiCheckForSListAddress
 * 000000014018D32A: xor     esi, esi
 * 000000014018D32C: inc     dword ptr gs:5C80h
 * 000000014018D334: mov     ecx, 2
 * 000000014018D339: mov     rax, cr8
 * 000000014018D33D: mov     cr8, rcx
 * 000000014018D341: mov     [rbp+0E8h+var_13F], al
 * 000000014018D344: mov     rcx, gs:20h
 * 000000014018D34D: inc     byte ptr [rcx+20h]
 * 000000014018D350: cmp     byte ptr [rcx+20h], 1
 * 000000014018D354: jnz     short loc_14018D3A6
 * 000000014018D356: rdtsc
 * 000000014018D358: shl     rdx, 20h
 * 000000014018D35C: or      rax, rdx
 * 000000014018D35F: mov     r8, [rcx+8]
 * 000000014018D363: sub     rax, [rcx+5B38h]
 * 000000014018D36A: add     [r8+48h], rax
 * 000000014018D36E: mov     edx, [r8+50h]
 * 000000014018D372: add     [rcx+5B38h], rax
 * 000000014018D379: add     rdx, rax
 * 000000014018D37C: mov     ecx, edx
 * 000000014018D37E: shr     rdx, 20h
 * 000000014018D382: jz      short loc_14018D387
 * 000000014018D384: or      ecx, 0FFFFFFFFh
 * 000000014018D387: mov     [r8+50h], ecx
 * 000000014018D38B: test    byte ptr [r8+2], 3Eh
 * 000000014018D390: jz      short loc_14018D3A6
 * 000000014018D392: mov     rdx, r8
 * 000000014018D395: mov     r8, rax
 * 000000014018D398: mov     rcx, gs:20h
 * 000000014018D3A1: call    KiEndThreadAccountingPeriod
 * 000000014018D3A6: sti
 * 000000014018D3A7: lea     rcx, [rbp+0E8h+var_168]
 * 000000014018D3AB: call    KiSwInterruptDispatch
 * 000000014018D3B0: cli
 * 000000014018D3B1: mov     rcx, rsi
 * 000000014018D3B4: call    HalPerformEndOfInterrupt_0
 * 000000014018D3B9: mov     rcx, gs:20h
 * 000000014018D3C2: cmp     byte ptr [rcx+20h], 1
 * 000000014018D3C6: ja      short loc_14018D43C
 * 000000014018D3C8: rdtsc
 * 000000014018D3CA: shl     rdx, 20h
 * 000000014018D3CE: or      rax, rdx
 * 000000014018D3D1: sub     rax, [rcx+5B38h]
 * 000000014018D3D8: add     [rcx+5BF8h], rax
 * 000000014018D3DF: add     [rcx+5B38h], rax
 * 000000014018D3E6: mov     r8, rax
 * 000000014018D3E9: mov     rax, [rcx+8]
 * 000000014018D3ED: test    byte ptr [rax+2], 32h
 * 000000014018D3F1: jz      short loc_14018D406
 * 000000014018D3F3: xor     edx, edx
 * 000000014018D3F5: call    KiBeginThreadAccountingPeriod
 * 000000014018D3FA: mov     rcx, gs:20h
 * 000000014018D403: inc     byte ptr [rcx+20h]
 * 000000014018D406: mov     dl, [rcx+6]
 * 000000014018D409: and     byte ptr [rcx+6], 0
 * 000000014018D40D: cmp     byte ptr [rcx+7], 0
 * 000000014018D411: jnz     short loc_14018D43C
 * 000000014018D413: test    dl, dl
 * 000000014018D415: jz      short loc_14018D43C
 * 000000014018D417: cmp     [rbp+0E8h+var_13F], 2
 * 000000014018D41B: jnb     short loc_14018D428
 * 000000014018D41D: and     byte ptr [rcx+20h], 0
 * 000000014018D421: call    KiDpcInterruptBypass
 * 000000014018D426: jmp     short loc_14018D43F
 * 000000014018D428: mov     ecx, 2
 * 000000014018D42D: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018D433: mov     rcx, gs:20h
 * 000000014018D43C: dec     byte ptr [rcx+20h]
 * 000000014018D43F: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018D443: mov     cr8, rcx
 * 000000014018D447: mov     rsi, [rbp+0E8h+var_18]
 * 000000014018D44E: cli
 * 000000014018D44F: test    [rbp+0E8h+arg_0], 1
 * 000000014018D456: jz      loc_14018D567
 * 000000014018D45C: mov     rcx, gs:188h
 * 000000014018D465: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018D46C: jz      short loc_14018D487
 * 000000014018D46E: mov     ecx, 1
 * 000000014018D473: mov     cr8, rcx
 * 000000014018D477: sti
 * 000000014018D478: call    KiInitiateUserApc
 * 000000014018D47D: cli
 * 000000014018D47E: mov     ecx, 0
 * 000000014018D483: mov     cr8, rcx
 * 000000014018D487: mov     rcx, gs:188h
 * 000000014018D490: test    dword ptr [rcx], 40010000h
 * 000000014018D496: jz      short loc_14018D4AC
 * 000000014018D498: test    byte ptr [rcx+2], 1
 * 000000014018D49C: jz      short loc_14018D4AC
 * 000000014018D49E: call    KiCopyCounters
 * 000000014018D4A3: mov     rcx, gs:188h
 * 000000014018D4AC: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018D4B0: cmp     [rbp+0E8h+var_68], 0
 * 000000014018D4B8: jz      short loc_14018D4BF
 * 000000014018D4BA: call    KiRestoreDebugRegisterState
 * 000000014018D4BF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018D4C3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018D4C7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018D4CB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018D4CF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018D4D3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018D4D7: mov     r11, [rbp+0E8h+var_108]
 * 000000014018D4DB: mov     r10, [rbp+0E8h+var_110]
 * 000000014018D4DF: mov     r9, [rbp+0E8h+var_118]
 * 000000014018D4E3: mov     r8, [rbp+0E8h+var_120]
 * 000000014018D4E7: mov     rcx, gs:188h
 * 000000014018D4F0: movzx   eax, byte ptr [rcx+1]
 * 000000014018D4F4: test    eax, 1
 * 000000014018D4F9: jnz     short loc_14018D537
 * 000000014018D4FB: xor     edx, edx
 * 000000014018D4FD: mov     ecx, 48h ; 'H'
 * 000000014018D502: wrmsr
 * 000000014018D504: mov     rax, gs:2EA8h
 * 000000014018D50D: test    rax, rax
 * 000000014018D510: jz      short loc_14018D537
 * 000000014018D512: mov     rcx, gs:188h
 * 000000014018D51B: mov     rcx, [rcx+220h]
 * 000000014018D522: cmp     rax, [rcx+7A0h]
 * 000000014018D529: jz      short loc_14018D537
 * 000000014018D52B: mov     eax, 1
 * 000000014018D530: mov     ecx, 49h ; 'I'
 * 000000014018D535: wrmsr
 * 000000014018D537: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018D53B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018D53F: mov     rax, [rbp+0E8h+var_138]
 * 000000014018D543: mov     rsp, rbp
 * 000000014018D546: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018D54D: add     rsp, 0E8h
 * 000000014018D554: test    cs:KiKvaShadow, 1
 * 000000014018D55B: jz      short loc_14018D562
 * 000000014018D55D: jmp     KiKernelExit
 * 000000014018D562: swapgs
 * 000000014018D565: iretq
 * 000000014018D567: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018D56B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018D56F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018D573: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018D577: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018D57B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018D57F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018D583: mov     r11, [rbp+0E8h+var_108]
 * 000000014018D587: mov     r10, [rbp+0E8h+var_110]
 * 000000014018D58B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018D58F: mov     r8, [rbp+0E8h+var_120]
 * 000000014018D593: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018D597: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018D59B: mov     rax, [rbp+0E8h+var_138]
 * 000000014018D59F: mov     rsp, rbp
 * 000000014018D5A2: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018D5A9: add     rsp, 0E8h
 * 000000014018D5B0: iretq
 */
