/*
 * XREFs of KiInvalidOpcodeFault @ 0x14016AE00
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x14023F300 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140170DC0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14016AE00
 * Reason: Hex-Rays returned no pseudocode for 0x14016AE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016AE00: sub     rsp, 8
 * 000000014016AE04: push    rbp
 * 000000014016AE05: sub     rsp, 158h
 * 000000014016AE0C: lea     rbp, [rsp+80h]
 * 000000014016AE14: mov     [rbp+0E8h+var_13D], 1
 * 000000014016AE18: mov     [rbp+0E8h+var_138], rax
 * 000000014016AE1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014016AE20: mov     [rbp+0E8h+var_128], rdx
 * 000000014016AE24: mov     [rbp+0E8h+var_120], r8
 * 000000014016AE28: mov     [rbp+0E8h+var_118], r9
 * 000000014016AE2C: mov     [rbp+0E8h+var_110], r10
 * 000000014016AE30: mov     [rbp+0E8h+var_108], r11
 * 000000014016AE34: test    [rbp+0E8h+arg_0], 1
 * 000000014016AE3B: jnz     short loc_14016AE6C
 * 000000014016AE3D: lfence
 * 000000014016AE40: test    word ptr gs:2EB8h, 1
 * 000000014016AE4B: jnz     short loc_14016AE55
 * 000000014016AE4D: lfence
 * 000000014016AE50: jmp     loc_14016B091
 * 000000014016AE55: movzx   eax, word ptr gs:2EBCh
 * 000000014016AE5E: mov     ecx, 48h ; 'H'
 * 000000014016AE63: xor     edx, edx
 * 000000014016AE65: wrmsr
 * 000000014016AE67: jmp     loc_14016B091
 * 000000014016AE6C: test    cs:KiKvaShadow, 1
 * 000000014016AE73: jnz     short loc_14016AE78
 * 000000014016AE75: swapgs
 * 000000014016AE78: lfence
 * 000000014016AE7B: mov     r10, gs:188h
 * 000000014016AE84: mov     rcx, gs:188h
 * 000000014016AE8D: mov     rcx, [rcx+220h]
 * 000000014016AE94: mov     rcx, [rcx+7B8h]
 * 000000014016AE9B: mov     gs:2EB0h, rcx
 * 000000014016AEA4: movzx   eax, word ptr gs:2EBEh
 * 000000014016AEAD: cmp     gs:2EBCh, ax
 * 000000014016AEB6: jz      short loc_14016AECA
 * 000000014016AEB8: mov     gs:2EBCh, ax
 * 000000014016AEC1: mov     ecx, 48h ; 'H'
 * 000000014016AEC6: xor     edx, edx
 * 000000014016AEC8: wrmsr
 * 000000014016AECA: movzx   edx, word ptr gs:2EB8h
 * 000000014016AED3: test    edx, 8
 * 000000014016AED9: jz      short loc_14016AEF2
 * 000000014016AEDB: mov     eax, 1
 * 000000014016AEE0: xor     edx, edx
 * 000000014016AEE2: mov     ecx, 49h ; 'I'
 * 000000014016AEE7: wrmsr
 * 000000014016AEE9: movzx   edx, word ptr gs:2EB8h
 * 000000014016AEF2: test    edx, 2
 * 000000014016AEF8: jz      loc_14016B023
 * 000000014016AEFE: call    loc_14016B011
 * 000000014016AF03: add     rsp, 8
 * 000000014016AF07: call    loc_14016B01A
 * 000000014016AF0C: add     rsp, 8
 * 000000014016AF10: call    loc_14016AF03
 * 000000014016AF15: add     rsp, 8
 * 000000014016AF19: call    loc_14016AF0C
 * 000000014016AF1E: add     rsp, 8
 * 000000014016AF22: call    loc_14016AF15
 * 000000014016AF27: add     rsp, 8
 * 000000014016AF2B: call    loc_14016AF1E
 * 000000014016AF30: add     rsp, 8
 * 000000014016AF34: call    loc_14016AF27
 * 000000014016AF39: add     rsp, 8
 * 000000014016AF3D: call    loc_14016AF30
 * 000000014016AF42: add     rsp, 8
 * 000000014016AF46: call    loc_14016AF39
 * 000000014016AF4B: add     rsp, 8
 * 000000014016AF4F: call    loc_14016AF42
 * 000000014016AF54: add     rsp, 8
 * 000000014016AF58: call    loc_14016AF4B
 * 000000014016AF5D: add     rsp, 8
 * 000000014016AF61: call    loc_14016AF54
 * 000000014016AF66: add     rsp, 8
 * 000000014016AF6A: call    loc_14016AF5D
 * 000000014016AF6F: add     rsp, 8
 * 000000014016AF73: call    loc_14016AF66
 * 000000014016AF78: add     rsp, 8
 * 000000014016AF7C: call    loc_14016AF6F
 * 000000014016AF81: add     rsp, 8
 * 000000014016AF85: call    loc_14016AF78
 * 000000014016AF8A: add     rsp, 8
 * 000000014016AF8E: call    loc_14016AF81
 * 000000014016AF93: add     rsp, 8
 * 000000014016AF97: call    loc_14016AF8A
 * 000000014016AF9C: add     rsp, 8
 * 000000014016AFA0: call    loc_14016AF93
 * 000000014016AFA5: add     rsp, 8
 * 000000014016AFA9: call    loc_14016AF9C
 * 000000014016AFAE: add     rsp, 8
 * 000000014016AFB2: call    loc_14016AFA5
 * 000000014016AFB7: add     rsp, 8
 * 000000014016AFBB: call    loc_14016AFAE
 * 000000014016AFC0: add     rsp, 8
 * 000000014016AFC4: call    loc_14016AFB7
 * 000000014016AFC9: add     rsp, 8
 * 000000014016AFCD: call    loc_14016AFC0
 * 000000014016AFD2: add     rsp, 8
 * 000000014016AFD6: call    loc_14016AFC9
 * 000000014016AFDB: add     rsp, 8
 * 000000014016AFDF: call    loc_14016AFD2
 * 000000014016AFE4: add     rsp, 8
 * 000000014016AFE8: call    loc_14016AFDB
 * 000000014016AFED: add     rsp, 8
 * 000000014016AFF1: call    loc_14016AFE4
 * 000000014016AFF6: add     rsp, 8
 * 000000014016AFFA: call    loc_14016AFED
 * 000000014016AFFF: add     rsp, 8
 * 000000014016B003: call    loc_14016AFF6
 * 000000014016B008: add     rsp, 8
 * 000000014016B00C: call    loc_14016AFFF
 * 000000014016B011: add     rsp, 8
 * 000000014016B015: call    loc_14016B008
 * 000000014016B01A: add     rsp, 8
 * 000000014016B01E: mov     eax, 0DADAh
 * 000000014016B023: test    edx, 100h
 * 000000014016B029: jz      short loc_14016B030
 * 000000014016B02B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016B030: lfence
 * 000000014016B033: test    byte ptr [r10+3], 80h
 * 000000014016B038: jz      short loc_14016B07C
 * 000000014016B03A: mov     ecx, 0C0000102h
 * 000000014016B03F: rdmsr
 * 000000014016B041: shl     rdx, 20h
 * 000000014016B045: or      rax, rdx
 * 000000014016B048: cmp     rax, cs:MmUserProbeAddress
 * 000000014016B04F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016B057: cmp     [r10+0F0h], rax
 * 000000014016B05E: jz      short loc_14016B07C
 * 000000014016B060: mov     rdx, [r10+1F0h]
 * 000000014016B067: bts     dword ptr [r10+74h], 8
 * 000000014016B06D: dec     word ptr [r10+1E6h]
 * 000000014016B075: mov     [rdx+80h], rax
 * 000000014016B07C: test    byte ptr [r10+3], 3
 * 000000014016B081: mov     [rbp+0E8h+var_68], 0
 * 000000014016B08A: jz      short loc_14016B091
 * 000000014016B08C: call    KiSaveDebugRegisterState
 * 000000014016B091: cld
 * 000000014016B092: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016B096: ldmxcsr dword ptr gs:180h
 * 000000014016B09F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016B0A3: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016B0A7: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016B0AB: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016B0AF: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016B0B3: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016B0B7: test    [rbp+0E8h+arg_8], 200h
 * 000000014016B0C1: jz      short loc_14016B0C4
 * 000000014016B0C3: sti
 * 000000014016B0C4: mov     r9, gs:188h
 * 000000014016B0CD: bt      dword ptr [r9+74h], 8
 * 000000014016B0D3: jnb     short loc_14016B0E3
 * 000000014016B0D5: test    [rbp+0E8h+arg_0], 1
 * 000000014016B0DC: jz      short loc_14016B0E3
 * 000000014016B0DE: call    KiUmsTrapEntry
 * 000000014016B0E3: mov     ecx, 10000002h
 * 000000014016B0E8: xor     edx, edx
 * 000000014016B0EA: mov     r8, [rbp+0E8h]
 * 000000014016B0F1: call    KiExceptionDispatch
 * 000000014016B0F6: nop
 * 000000014016B0F7: cli
 * 000000014016B0F8: test    [rbp+0E8h+arg_0], 1
 * 000000014016B0FF: jz      loc_14016B389
 * 000000014016B105: mov     rcx, gs:188h
 * 000000014016B10E: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016B115: jz      short loc_14016B130
 * 000000014016B117: mov     ecx, 1
 * 000000014016B11C: mov     cr8, rcx
 * 000000014016B120: sti
 * 000000014016B121: call    KiInitiateUserApc
 * 000000014016B126: cli
 * 000000014016B127: mov     ecx, 0
 * 000000014016B12C: mov     cr8, rcx
 * 000000014016B130: mov     rcx, gs:188h
 * 000000014016B139: test    dword ptr [rcx], 8000000h
 * 000000014016B13F: jz      short loc_14016B146
 * 000000014016B141: call    KiRestoreSetContextState
 * 000000014016B146: mov     rcx, gs:188h
 * 000000014016B14F: test    dword ptr [rcx], 40010000h
 * 000000014016B155: jz      short loc_14016B17C
 * 000000014016B157: test    byte ptr [rcx+2], 1
 * 000000014016B15B: jz      short loc_14016B16B
 * 000000014016B15D: call    KiCopyCounters
 * 000000014016B162: mov     rcx, gs:188h
 * 000000014016B16B: test    byte ptr [rcx+3], 40h
 * 000000014016B16F: jz      short loc_14016B17C
 * 000000014016B171: lea     rsp, [rbp-80h]
 * 000000014016B175: mov     cl, 1
 * 000000014016B177: call    KiUmsExit
 * 000000014016B17C: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016B180: cmp     [rbp+0E8h+var_68], 0
 * 000000014016B188: jz      short loc_14016B18F
 * 000000014016B18A: call    KiRestoreDebugRegisterState
 * 000000014016B18F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016B193: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016B197: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016B19B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016B19F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016B1A3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016B1A7: mov     r11, [rbp+0E8h+var_108]
 * 000000014016B1AB: mov     r10, [rbp+0E8h+var_110]
 * 000000014016B1AF: mov     r9, [rbp+0E8h+var_118]
 * 000000014016B1B3: mov     r8, [rbp+0E8h+var_120]
 * 000000014016B1B7: movzx   eax, word ptr gs:2EC2h
 * 000000014016B1C0: cmp     gs:2EBCh, ax
 * 000000014016B1C9: jz      short loc_14016B1DD
 * 000000014016B1CB: mov     gs:2EBCh, ax
 * 000000014016B1D4: mov     ecx, 48h ; 'H'
 * 000000014016B1D9: xor     edx, edx
 * 000000014016B1DB: wrmsr
 * 000000014016B1DD: btr     word ptr gs:2EB8h, 2
 * 000000014016B1E8: jnb     short loc_14016B1F8
 * 000000014016B1EA: mov     eax, 1
 * 000000014016B1EF: xor     edx, edx
 * 000000014016B1F1: mov     ecx, 49h ; 'I'
 * 000000014016B1F6: wrmsr
 * 000000014016B1F8: btr     word ptr gs:2EB8h, 5
 * 000000014016B203: jnb     loc_14016B32E
 * 000000014016B209: call    loc_14016B31C
 * 000000014016B20E: add     rsp, 8
 * 000000014016B212: call    loc_14016B325
 * 000000014016B217: add     rsp, 8
 * 000000014016B21B: call    loc_14016B20E
 * 000000014016B220: add     rsp, 8
 * 000000014016B224: call    loc_14016B217
 * 000000014016B229: add     rsp, 8
 * 000000014016B22D: call    loc_14016B220
 * 000000014016B232: add     rsp, 8
 * 000000014016B236: call    loc_14016B229
 * 000000014016B23B: add     rsp, 8
 * 000000014016B23F: call    loc_14016B232
 * 000000014016B244: add     rsp, 8
 * 000000014016B248: call    loc_14016B23B
 * 000000014016B24D: add     rsp, 8
 * 000000014016B251: call    loc_14016B244
 * 000000014016B256: add     rsp, 8
 * 000000014016B25A: call    loc_14016B24D
 * 000000014016B25F: add     rsp, 8
 * 000000014016B263: call    loc_14016B256
 * 000000014016B268: add     rsp, 8
 * 000000014016B26C: call    loc_14016B25F
 * 000000014016B271: add     rsp, 8
 * 000000014016B275: call    loc_14016B268
 * 000000014016B27A: add     rsp, 8
 * 000000014016B27E: call    loc_14016B271
 * 000000014016B283: add     rsp, 8
 * 000000014016B287: call    loc_14016B27A
 * 000000014016B28C: add     rsp, 8
 * 000000014016B290: call    loc_14016B283
 * 000000014016B295: add     rsp, 8
 * 000000014016B299: call    loc_14016B28C
 * 000000014016B29E: add     rsp, 8
 * 000000014016B2A2: call    loc_14016B295
 * 000000014016B2A7: add     rsp, 8
 * 000000014016B2AB: call    loc_14016B29E
 * 000000014016B2B0: add     rsp, 8
 * 000000014016B2B4: call    loc_14016B2A7
 * 000000014016B2B9: add     rsp, 8
 * 000000014016B2BD: call    loc_14016B2B0
 * 000000014016B2C2: add     rsp, 8
 * 000000014016B2C6: call    loc_14016B2B9
 * 000000014016B2CB: add     rsp, 8
 * 000000014016B2CF: call    loc_14016B2C2
 * 000000014016B2D4: add     rsp, 8
 * 000000014016B2D8: call    loc_14016B2CB
 * 000000014016B2DD: add     rsp, 8
 * 000000014016B2E1: call    loc_14016B2D4
 * 000000014016B2E6: add     rsp, 8
 * 000000014016B2EA: call    loc_14016B2DD
 * 000000014016B2EF: add     rsp, 8
 * 000000014016B2F3: call    loc_14016B2E6
 * 000000014016B2F8: add     rsp, 8
 * 000000014016B2FC: call    loc_14016B2EF
 * 000000014016B301: add     rsp, 8
 * 000000014016B305: call    loc_14016B2F8
 * 000000014016B30A: add     rsp, 8
 * 000000014016B30E: call    loc_14016B301
 * 000000014016B313: add     rsp, 8
 * 000000014016B317: call    loc_14016B30A
 * 000000014016B31C: add     rsp, 8
 * 000000014016B320: call    loc_14016B313
 * 000000014016B325: add     rsp, 8
 * 000000014016B329: mov     eax, 0DADAh
 * 000000014016B32E: test    word ptr gs:2EB8h, 40h
 * 000000014016B339: jz      short loc_14016B347
 * 000000014016B33B: xor     eax, eax
 * 000000014016B33D: xor     edx, edx
 * 000000014016B33F: mov     ecx, 1
 * 000000014016B344: div     rcx
 * 000000014016B347: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016B34B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016B34F: mov     rax, [rbp+0E8h+var_138]
 * 000000014016B353: mov     rsp, rbp
 * 000000014016B356: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016B35D: add     rsp, 0E8h
 * 000000014016B364: test    cs:KiKvaShadow, 1
 * 000000014016B36B: jz      short loc_14016B372
 * 000000014016B36D: jmp     KiKernelExit
 * 000000014016B372: test    word ptr gs:2EB8h, 80h
 * 000000014016B37D: jz      short loc_14016B384
 * 000000014016B37F: verw    [rsp+arg_18]
 * 000000014016B384: swapgs
 * 000000014016B387: iretq
 * 000000014016B389: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016B38D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016B391: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016B395: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016B399: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016B39D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016B3A1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016B3A5: mov     r11, [rbp+0E8h+var_108]
 * 000000014016B3A9: mov     r10, [rbp+0E8h+var_110]
 * 000000014016B3AD: mov     r9, [rbp+0E8h+var_118]
 * 000000014016B3B1: mov     r8, [rbp+0E8h+var_120]
 * 000000014016B3B5: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016B3B9: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016B3BD: mov     rax, [rbp+0E8h+var_138]
 * 000000014016B3C1: mov     rsp, rbp
 * 000000014016B3C4: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016B3CB: add     rsp, 0E8h
 * 000000014016B3D2: iretq
 */
